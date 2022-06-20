using Niantic.ARDK.AR.ARSessionEventArgs;
using Niantic.ARDK.AR.Configuration;
using Niantic.ARDK.AR.Networking;
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

public class NetworkingManager : MonoBehaviour
{
    public static NetworkingManager Instance { get; private set; }

    //ARSession
    public static IPeer _self;

    public static Dictionary<Guid, Roles> players;

    private GameInfo _gameInfo;
    //

    //Events
    public event OnNetworkInitilizedDelegate OnNetworkInitialized;
    public delegate void OnNetworkInitilizedDelegate(GameInfo ARNetworkingSession);

    public event PlayerDictionnaryUpdatedDelegate PlayerDictionnaryUpdated;
    public delegate void PlayerDictionnaryUpdatedDelegate(Dictionary<Guid, Roles> players);
    //

    private void Awake()
    {
        if(Instance == null)
            Instance = this;
    }

    public void CreateAndRunSharedAR(InputField SessionIDField)
    {
        var _arNetworking = ARNetworkingFactory.Create(GameManager.Instance.runtimeEnv);
        var _networking = _arNetworking.Networking;

        var _session = _arNetworking.ARSession;


        var _sessionConfigData = ARWorldTrackingConfigurationFactory.Create();
        _sessionConfigData.WorldAlignment = WorldAlignment.Gravity;
        _sessionConfigData.PlaneDetection = PlaneDetection.Horizontal;

        _sessionConfigData.IsAutoFocusEnabled = false;
        _sessionConfigData.IsDepthEnabled = false;
        _sessionConfigData.IsLightEstimationEnabled = false;
        _sessionConfigData.IsSharedExperienceEnabled = true;

        _gameInfo = new GameInfo(_arNetworking, _networking, _session, _sessionConfigData);


        var sessionID = SessionIDField.text;

        var sessionIdAsBytes = Encoding.UTF8.GetBytes(sessionID);

        _networking.Join(sessionIdAsBytes);


        _session.Ran += OnSessionRan;
        _session.Deinitialized += OnSessionDeinitialized;

        _networking.PeerAdded += OnPeerAdded;
        _networking.PeerRemoved += OnPeerRemoved;
        _networking.Connected += OnNetworkedConnected;
        _networking.PeerDataReceived += OnPeerDataReceived;

        _networking.PersistentKeyValueUpdated += OnPersistentKeyValueUpdated;

        GameManager.Instance.NetworkInitialized(_gameInfo);
    }

    #region Networking

    public void StopSharedAR()
    {

        _gameInfo._networking.Dispose();
        _gameInfo._session.Dispose();

        _gameInfo._arNetworking.Dispose();

        _self = null;
        _gameInfo = null;
    }

    private void OnSessionDeinitialized(ARSessionDeinitializedArgs args)
    {
        Debug.Log("stopped");

        StopSharedAR();
    }

    private void OnSessionRan(ARSessionRanArgs args)
    {
        Debug.Log("AR Session Ran");
    }

    private void OnNetworkedConnected(ConnectedArgs args)
    {
        Debug.LogFormat("Networking joined, peerID: {0}, isHost: {1}", args.Self, args.IsHost);

        _self = args.Self;

        if (args.IsHost)
        {
            players = new()
            {
                {args.Self.Identifier, Roles.None }
            };
            SetPlayersDictionnary();
        }


        OnNetworkInitialized?.Invoke(_gameInfo);
    }

    private void OnPeerAdded(PeerAddedArgs args)
    {
        if (_self == _gameInfo._networking.Host)
        {
            Debug.LogFormat("Peer joined: {0}", args.Peer.Identifier);
            players.Add(args.Peer.Identifier, Roles.None);
            SetPlayersDictionnary();
        }
    }
    private void OnPeerRemoved(PeerRemovedArgs args)
    {
        if (_self == _gameInfo._networking.Host)
        {
            if (players.ContainsKey(args.Peer.Identifier))
            {
                players.Remove(args.Peer.Identifier);
                SetPlayersDictionnary();
            }
        }
    }

    #endregion

    #region Messaging + prefabManagment

    //Sending messages
    public static void SendToASinglePeer(IMultipeerNetworking networking, IPeer peer, byte[] data)
    {
        networking.SendDataToPeer(tag: 0, data: data, peer: peer, transportType: TransportType.UnreliableUnordered);
    }

    public static void BroadCastToSession(IMultipeerNetworking networking, uint tag, byte[] data, bool sendToSelf)
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

        BroadCastToSession(Instance._gameInfo._networking, 1, stream.ToArray(), false);
    }
    public static void BroadCastNextState()
    {
        Debug.Log("NextState");

        BroadCastToSession(Instance._gameInfo._networking, 2, new byte[0], false);
    }

    //Receiving messages
    // Every time a message is received, this will be called

    // Tags: 0 -> NOTHING
    //       1 -> ChoiceInfo
    //       2 -> BeginGame
    void OnPeerDataReceived(PeerDataReceivedArgs args)
    {
        var stream = args.CreateDataReader();
        BinaryDeserializer deserializer = new BinaryDeserializer(stream);

        switch (args.Tag)
        {
            case (1):
                var indexOfChild = (int)deserializer.Deserialize();

                GameStateSystem.SetNextActualNode(indexOfChild);
                GameStateSystem._instance.GetState().NextState();
                break;

            case (2):
                GameStateSystem._instance.GetState().NextState();
                break;

            default:

                break;
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


    //KeyValuePair
    private void OnPersistentKeyValueUpdated(PersistentKeyValueUpdatedArgs args)
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

        switch (key)
        {
            case ("Players"):
                players = value.Deserialize<Dictionary<Guid, Roles>>();
                PlayerDictionnaryUpdated?.Invoke(players);
                break;
        }
    }
    public static void SetPlayersDictionnary()
    {
        string key = "Players";
        byte[] value = players.Serialize();

        // Stores the above data as a key-value pair on the server
        Instance._gameInfo._networking.StorePersistentKeyValue(key, value);

        Instance.PlayerDictionnaryUpdated?.Invoke(players);
    }
    //
}
