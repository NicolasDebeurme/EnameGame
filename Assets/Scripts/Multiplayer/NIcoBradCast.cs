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

/*
using static Enums;

public class NicoBroadCast : MonoBehaviour
{
    public static GameManager _instance;


    //Network
    [HideInInspector]
    public bool isSessionCreated = false;
    public RuntimeEnvironment runtimeEnv;
    public InputField SessionIDField;

    private IARNetworking _arNetworking = null;
    private IMultipeerNetworking _networking = null;

    //SessionData
    private IARSession _session = null;
    public IARSession Session
    {
        get { return _session; }
        set { _session = value; }
    }

    private IARWorldTrackingConfiguration _sessionConfigData;

    public IARWorldTrackingConfiguration SessionConfigData => _sessionConfigData;
    //

    //ARSession
    private IPeer _self;
    //

    //GamePlay
    private GameStateSystem _actualGameState = null;

    public event OnGameInitilizedDelegate OnGameInitialized;
    public delegate void OnGameInitilizedDelegate();
    //

    //Messaging

    //

    //Prefab
    [SerializeField]
    private GameObject prefabToSpawn;

    private GameObject _prefabSpawned = null;
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

    private void Start()
    {
        UIManager.Instance.SetUIEvents();
        GameInitialized();
    }

    private void Update()
    {

    }
    #endregion

    #region Networking
    public void CreateAndRunSharedAR()
    {
        _arNetworking = ARNetworkingFactory.Create(runtimeEnv);
        _networking = _arNetworking.Networking;

        _session = _arNetworking.ARSession;


        _sessionConfigData = ARWorldTrackingConfigurationFactory.Create();
        _sessionConfigData.WorldAlignment = WorldAlignment.Gravity;
        _sessionConfigData.PlaneDetection = PlaneDetection.Horizontal;

        _sessionConfigData.IsAutoFocusEnabled = false;
        _sessionConfigData.IsDepthEnabled = false;
        _sessionConfigData.IsLightEstimationEnabled = false;
        _sessionConfigData.IsSharedExperienceEnabled = true;

        _session.Ran += OnSessionRan;
        _session.Deinitialized += OnSessionDeinitialized;

        var sessionID = SessionIDField.text;

        var sessionIdAsBytes = Encoding.UTF8.GetBytes(sessionID);

        _networking.Join(sessionIdAsBytes);

        _networking.Connected += OnNetworkedConnected;
        _networking.PeerDataReceived += OnPeerDataReceived;
    }

    public void StopSharedAR()
    {
        _session.Dispose();
        _networking.Dispose();

        _arNetworking.Dispose();
    }

    private void OnSessionDeinitialized(ARSessionDeinitializedArgs args)
    {
        Debug.Log("stopped");
        Destroy(_prefabSpawned?.gameObject);

        isSessionCreated = false;
        _self = null;
        _session = null;
    }

    private void OnSessionRan(ARSessionRanArgs args)
    {
        Debug.Log("AR Session Ran");
    }

    private void OnNetworkedConnected(ConnectedArgs args)
    {
        Debug.LogFormat("Networking joined, peerID: {0}, isHot: {1}", args.Self, args.IsHost);

        _self = args.Self;
        isSessionCreated = true;
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

        BroadCastToSession(_instance._networking, 1, stream.ToArray(), false);
    }

    //Receiving messages
    // Every time a message is received, this will be called

    // Tags: 0 -> NOTHING
    //       1 -> StateInfo
    void OnPeerDataReceived(PeerDataReceivedArgs args)
    {
        if (args.Tag == 1)
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

    public void GameInitialized()
    {
        _actualGameState = gameObject.AddComponent<GameStateSystem>();
        if (OnGameInitialized != null)
            OnGameInitialized();
    }

}*/