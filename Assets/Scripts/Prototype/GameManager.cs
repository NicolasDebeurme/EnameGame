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


    //Network
    public RuntimeEnvironment runtimeEnv;
    public InputField SessionIDField;

    private IARNetworking _arNetworking = null;
    private IMultipeerNetworking _networking = null;
    private IARSession _session = null;
    //

    //ARSession
    private IPeer _self;
    //

    //GamePlay
    private GameStateSystem _actualGameState = null;

    public event OnGameInitilizedDelegate OnGameInitialized;
    public delegate void OnGameInitilizedDelegate();
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


        var worldTrackingConfig = ARWorldTrackingConfigurationFactory.Create();
        worldTrackingConfig.WorldAlignment = WorldAlignment.Gravity;
        worldTrackingConfig.IsAutoFocusEnabled = true;

        worldTrackingConfig.IsSharedExperienceEnabled = true;

        _session.Run(worldTrackingConfig);
        _session.Ran += OnSessionRan;
        _session.Deinitialized += OnSessionDeinitialized;


        var sessionID = SessionIDField.text;

        var sessionIdAsBytes = Encoding.UTF8.GetBytes(sessionID);

        _networking.Join(sessionIdAsBytes);

        _networking.Connected += OnNetworkedConnected;
        _networking.PeerDataReceived += OnPeerDataReceived;

        _arNetworking.PeerStateReceived += OnPeerStateReceived;
    }

    private void OnSessionDeinitialized(ARSessionDeinitializedArgs args)
    {
        Destroy(_prefabSpawned?.gameObject);

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
    }

    private void OnPeerStateReceived(PeerStateReceivedArgs args)
    {
        if( args.State ==PeerState.Stable && _prefabSpawned == null)
        {
            SpawnPrefab();
        }

        if (args.State == PeerState.Stable && _prefabSpawned != null && args.Peer != _self && _self == _networking.Host)
        {
            byte[] pos_rot_data = SerializePositionAndRotation(_prefabSpawned.transform.position, _prefabSpawned.transform.eulerAngles);

            SendToASinglePeer(_networking, args.Peer, pos_rot_data);
        }
        Debug.LogFormat("Peer {0} us at state:{1}", args.Peer, args.State);
    }

    #endregion

    #region Messaging + prefabManagment

    //Sending messages
    void SendToASinglePeer(IMultipeerNetworking networking, IPeer peer, byte[] data)
    {
        networking.SendDataToPeer(tag: 0, data: data, peer: peer, transportType: TransportType.UnreliableUnordered);
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

    //Receiving messages
    // Every time a message is received, this will be called

    void OnPeerDataReceived(PeerDataReceivedArgs args)
    {
        if(_prefabSpawned != null)
        {
            var stream = args.CreateDataReader();

            Vector3[] pos_rot_data = DeserializePositionAndRotation(stream);

            UpdatePrefabPos(pos_rot_data[0], pos_rot_data[1]);
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

    //Manage prefab


    private void SpawnPrefab()
    {
        Debug.Log("spawned");

        float angleFromNorth = Input.compass.magneticHeading;
        transform.rotation = Quaternion.Euler(0, angleFromNorth > 180 ? -(angleFromNorth - 180) : Mathf.Abs(angleFromNorth - 180), 0);

        _prefabSpawned = Instantiate(prefabToSpawn);
        _prefabSpawned.transform.parent = transform;

        if (_self == _networking.Host)
        {
            _prefabSpawned.transform.position = new Vector3(1, 0, 0);
        }
    }
    private void UpdatePrefabPos(Vector3 position , Vector3 rotation)
    {
        Debug.Log("updated");

        _prefabSpawned.transform.position = position;
        _prefabSpawned.transform.eulerAngles = rotation;

    }

    #endregion


    public void OnStart()
    {
        StartCoroutine(GameStateSystem._instance.GetState().NextState());
    }

    public void GameInitialized()
    {
        _actualGameState = gameObject.AddComponent<GameStateSystem>();
        _actualGameState.OnGameStateChange += NewGameState;

        if (OnGameInitialized != null)
            OnGameInitialized();
    }
    private void NewGameState(State newGameState)
    {
        new NotImplementedException();
    }
}
