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
    public event NetworkStateChangedDelegate NetworkStateChanged;
    public delegate void NetworkStateChangedDelegate(GameInfo ARNetworkingSession);

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
        _networking.Disconnected += OnNetworkDisconnected;

        _networking.PeerDataReceived += OnPeerDataReceived;

        _networking.PersistentKeyValueUpdated += OnPersistentKeyValueUpdated;

        GameManager.Instance.NetworkInitialized();
    }

    public void StopSharedAR()
    {
        _gameInfo._arNetworking.Dispose();

        _gameInfo._session.Dispose();
        _gameInfo._networking.Dispose();

    }

    #region Networking

    private void OnSessionDeinitialized(ARSessionDeinitializedArgs args)
    {
        Debug.Log("stopped");

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
            BroadCastLobbyRole();
        }


        NetworkStateChanged?.Invoke(_gameInfo);
    }

    private void OnNetworkDisconnected(DisconnectedArgs args)
    {

        players = null;
        _self = null;
        _gameInfo = null;

        NetworkStateChanged?.Invoke(_gameInfo);
        PlayerDictionnaryUpdated?.Invoke(players);
    }
    private void OnPeerAdded(PeerAddedArgs args)
    {
        if (_self == _gameInfo._networking.Host)
        {
            Debug.LogFormat("Peer joined: {0}", args.Peer.Identifier);
            players.Add(args.Peer.Identifier, Roles.None);
            BroadCastLobbyRole();
        }
    }
    private void OnPeerRemoved(PeerRemovedArgs args)
    {
        if (_self == _gameInfo._networking.Host)
        {
            if (players.ContainsKey(args.Peer.Identifier))
            {
                Debug.Log(args.Peer.Identifier.ToString() + " as left..");
                players.Remove(args.Peer.Identifier);
                BroadCastLobbyRole();
            }
        }
        else if(args.Peer.Identifier.Equals(_gameInfo._networking.Host))
        {
            StopSharedAR();
        }
    }

    #endregion

    // Tags: 0 -> NOTHING
    //       1 -> ChoiceInfo
    //       2 -> NextState
    //       3 -> PlayerDictionnary
    //       4 -> ItemTaken

    #region Send Message

    public static void SendToASinglePeer(IMultipeerNetworking networking, IPeer peer, byte[] data)
    {
        networking.SendDataToPeer(tag: 0, data: data, peer: peer, transportType: TransportType.UnreliableUnordered);
    }

    public static void BroadCastToSession(IMultipeerNetworking networking, uint tag, byte[] data, bool sendToSelf)
    {
        // SendToSelf: true indicates that this message will be sent to the local peer as well
        networking.BroadcastData(tag: tag, data: data, transportType: TransportType.UnreliableOrdered, sendToSelf: sendToSelf);
    }

    private class ChoiceInfo
    {
        public int childCount;
        public int typeOfChoice;
    }
    public static void BroadCastChoice(int childCount, TypeOfChoice typeOfChoice)
    {
        Debug.Log("ChoiceBrodacasted");

        var choiceInfo = new ChoiceInfo { childCount = childCount, typeOfChoice = (int)typeOfChoice };

        var serializedInfo = choiceInfo.Serialize();

        BroadCastToSession(Instance._gameInfo._networking, (int)BrodcastType.ChoiceInfo, serializedInfo, true);
    }
    public static void BroadCastNextState()
    {

        BroadCastToSession(Instance._gameInfo._networking, (int)BrodcastType.NextState, new byte[1], true);
    }

    public static void BroadCastLobbyRole()
    {
        var serializedInfo = players.Serialize();
        BroadCastToSession(Instance._gameInfo._networking, (int)BrodcastType.PlayerDictionnary, serializedInfo, false);
        NetworkingManager.Instance.PlayerDictionnaryUpdated?.Invoke(players);
    }

    public static void BroadcastItemTaken(ItemType itemType)
    {
        var serializedInfo = ((int)itemType).Serialize();
        BroadCastToSession(Instance._gameInfo._networking, (int)BrodcastType.ItemTaken, serializedInfo, false);
    }
    #endregion

    #region Receive Message

    // Every time a message is received, this will be called

    void OnPeerDataReceived(PeerDataReceivedArgs args)
    {
        switch ((BrodcastType)args.Tag)
        {
            case (BrodcastType.ChoiceInfo):
                ChoiceInfo choiceInfo = args.CopyData().Deserialize<ChoiceInfo>();

                ManageChoice(choiceInfo);
                break;

            case (BrodcastType.NextState):
                Debug.Log("Lets goooo");
                GameStateSystem._instance.GetState().NextState();
                break;
            case (BrodcastType.PlayerDictionnary):
                var newPlayers = args.CopyData().Deserialize<Dictionary<Guid, Roles>>();

                if (newPlayers != null)
                {
                    Debug.Log("Dictionnary updated");
                    players = newPlayers;
                    PlayerDictionnaryUpdated?.Invoke(players);
                }
                else
                    Debug.Log("Error");
                break;
            case (BrodcastType.ItemTaken):
                var itemType = (ItemType)args.CopyData().Deserialize<int>();

                Debug.Log(ItemWorld.DestroyItemOnBroadcast(itemType)? "Item destroyed..":"Item not destroyed,a problem as occured ..");
                break;

            default:

                break;
        }
    }

    private void ManageChoice(ChoiceInfo choiceInfo)
    {
        if (choiceInfo != null)
        {
            bool b = choiceInfo.childCount == 0;

            switch ((TypeOfChoice)choiceInfo.typeOfChoice)
            {
                case (TypeOfChoice.HasSwap):
                    GameManager.Instance.HasSwap = b;
                    break;
                case (TypeOfChoice.HasDenounce):
                    GameManager.Instance.HasDenounce = b;
                    break;
                case (TypeOfChoice.HasShoot):
                    GameManager.Instance.HasShoot = b;
                    break;
            }
            GameStateSystem.SetNextActualNode(choiceInfo.childCount);
        }
        else
        {
            throw new Exception("NO choice info..");
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

    }
    //
}
