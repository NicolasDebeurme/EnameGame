using Niantic.ARDK;
using Niantic.ARDK.AR;
using Niantic.ARDK.AR.Anchors;
using Niantic.ARDK.AR.ARSessionEventArgs;
using Niantic.ARDK.AR.Configuration;
using Niantic.ARDK.AR.Networking;
using Niantic.ARDK.AR.Networking.ARNetworkingEventArgs;
using Niantic.ARDK.Networking;
using Niantic.ARDK.Networking.MultipeerNetworkingEventArgs;
using Niantic.ARDK.Utilities.BinarySerialization;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Text;
using UnityEngine;
using UnityEngine.UI;
using static Enums;

public class GameManager : MonoBehaviour
{
    public static GameManager _instance;

    private GameInfo _gameInfo = null;
    //Network
    public RuntimeEnvironment runtimeEnv;

    //ARSession
    private IPeer _self;

    private Dictionary<Guid, Roles> players;
    //

    //GamePlay
    private GameStateSystem _actualGameState = null;

    public event OnGameInitilizedDelegate OnGameInitialized;
    public delegate void OnGameInitilizedDelegate(GameInfo ARNetworkingSession);
    //



    //GPS
    [Header("GPS")]
    public Image imageBoussole;
    public Point pointToReach;
    //

    #region Monobehaviour
    private void Awake()
    {
        _instance = this;
    }

#endregion

    #region Networking

    public void StopSharedAR()
    {
        _gameInfo._session.Dispose();
        _gameInfo._networking.Dispose();

        _gameInfo._arNetworking.Dispose();

        _gameInfo = null;
    }

    private void OnSessionDeinitialized(ARSessionDeinitializedArgs args)
    {
        Debug.Log("stopped");

        _self = null;
        _gameInfo._session.Dispose();
    }

    private void OnSessionRan(ARSessionRanArgs args)
    {
        Debug.Log("AR Session Ran");
    }

    private void OnNetworkedConnected(ConnectedArgs args)
    {
        Debug.LogFormat("Networking joined, peerID: {0}, isHost: {1}", args.Self, args.IsHost);
    }
    #endregion

    #region Messaging + prefabManagment

    //Sending messages
    public static void SendToASinglePeer(IMultipeerNetworking networking, IPeer peer, byte[] data)
    {
        networking.SendDataToPeer(tag: 0, data: data, peer: peer, transportType: TransportType.UnreliableUnordered);
    }

    public static void BroadCastToSession(IMultipeerNetworking networking, uint tag ,byte[] data, bool sendToSelf)
    {
        // SendToSelf: true indicates that this message will be sent to the local peer as well
        networking.BroadcastData(tag: tag, data: data, transportType: TransportType.UnreliableOrdered, sendToSelf: sendToSelf);
    }

    private static byte[] SerializePositionAndRotation(Vector3 position, Vector3 rotation)
    {
        using (var stream = new MemoryStream())
        {
            using (var serializer = new BinarySerializer(stream))
            {
                serializer.Serialize(position);
                serializer.Serialize(rotation);
                // here any other object can be serialized.
                return stream.ToArray();
            }
        }
    }
    public static void BroadCastChoice(int childCount)
    {
        Debug.Log("ChoiceBrodacasted");
        MemoryStream stream = new MemoryStream();

        BinarySerializer serializer = new BinarySerializer(stream);

        serializer.Serialize(childCount);

        BroadCastToSession(_instance._gameInfo._networking, 1, stream.ToArray(), false);
    }

    //Receiving messages
    // Every time a message is received, this will be called

    // Tags: 0 -> NOTHING
    //       1 -> StateInfo
    void OnPeerDataReceived(PeerDataReceivedArgs args)
    {
        if(args.Tag == 1)
        {
            var stream = args.CreateDataReader();
            BinaryDeserializer deserializer = new BinaryDeserializer(stream);

            var indexOfChild = (int)deserializer.Deserialize();

            GameStateSystem.SetNextActualNode(indexOfChild);
            GameStateSystem._instance.GetState().NextState();
        }
    }
    private static Vector3[] DeserializePositionAndRotation(MemoryStream stream)
    {
            using (var deserializer = new BinaryDeserializer(stream))
            {
                var result = new Vector3[2];
                result[0] = (Vector3)deserializer.Deserialize(); // position
                result[1] = (Vector3)deserializer.Deserialize(); // rotation
                                                                 // The number and order of the Deserialize() calls should match the Serialize() calls.
                return result;
            }
    }

    #endregion

    public void OnContinue()
    {
        GameStateSystem._instance.GetState().NextState();
    }

    public void GameInitialized(GameInfo ARNetworkingSession)
    {
        _gameInfo = ARNetworkingSession;

        UIManager.Instance.SetUIEvents();

        _actualGameState = gameObject.AddComponent<GameStateSystem>();

        ARNetworkingSession._session.Ran += OnSessionRan;
        ARNetworkingSession._session.Deinitialized += OnSessionDeinitialized;

        ARNetworkingSession._networking.Connected += OnNetworkedConnected;
        ARNetworkingSession._networking.PeerDataReceived += OnPeerDataReceived;

        ARNetworkingSession._networking.PersistentKeyValueUpdated += OnPersistentKeyValueUpdated;

        _self = ARNetworkingSession._networking.Self;

        if(_self == ARNetworkingSession._networking.Host)
        {
            players = new()
            {
                {ARNetworkingSession._networking.Self.Identifier, Roles.None }
            };
            SetPlayersDictionnary();
        }


        OnGameInitialized?.Invoke(ARNetworkingSession);
    }

    //KeyValuePair
    void OnPersistentKeyValueUpdated(PersistentKeyValueUpdatedArgs args)
    {
        // Copy the value of the stored KV into local variables
        byte[] value = args.CopyValue();
        string key = args.Key;

        // Log some information about the key-value
        Debug.LogFormat
        (
          "Got a Persistet Key-Value. Key: {0}, Length: {1}",
          key,
          value.Length
        );

        switch(key)
        {
            case ("Players"):
                players = value.Deserialize<Dictionary<Guid, Roles>>();
                players.TryAdd(_gameInfo._networking.Self.Identifier, Roles.None);
                SetPlayersDictionnary();
                break;
        }
    }
    void SetPlayersDictionnary()
    {
        string key = "Players";
        byte[] value = players.Serialize();

        // Stores the above data as a key-value pair on the server
        _gameInfo._networking.StorePersistentKeyValue(key, value);
    }
    //
}
