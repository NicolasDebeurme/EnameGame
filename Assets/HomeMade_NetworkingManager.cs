using Niantic.ARDK.AR;
using Niantic.ARDK.AR.ARSessionEventArgs;
using Niantic.ARDK.AR.Configuration;
using Niantic.ARDK.AR.Networking;
using Niantic.ARDK.AR.Networking.ARNetworkingEventArgs;
using Niantic.ARDK.Networking;
using Niantic.ARDK.Networking.MultipeerNetworkingEventArgs;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;



public class HomeMade_NetworkingManager : MonoBehaviour
{

    public InputField SessionIDField;

    private IARNetworking _arNetworking;
    private IMultipeerNetworking _networking;
    private IARSession _session;

    public void CreateAndRunSharedAR()
    {
        _arNetworking = ARNetworkingFactory.Create();

        _networking = _arNetworking.Networking;
        _session = _arNetworking.ARSession;

        var worldTrackingConfig = ARWorldTrackingConfigurationFactory.Create();
        worldTrackingConfig.WorldAlignment = WorldAlignment.Gravity;
        worldTrackingConfig.IsAutoFocusEnabled = true;

        worldTrackingConfig.IsSharedExperienceEnabled = true;

        _session.Run(worldTrackingConfig);
        _session.Ran += OnSessionRan;

        var sessionID = SessionIDField.text;

        var sessionIdAsBytes = Encoding.UTF8.GetBytes(sessionID);

        _networking.Join(sessionIdAsBytes);

        _networking.Connected += OnNetworkedConnected;

        _arNetworking.PeerStateReceived += OnPeerStateReceived;
        _arNetworking.PeerPoseReceived += OnPeerPoseReceived;
    }

    private void OnSessionRan(ARSessionRanArgs args)
    {
        Debug.Log("AR Session Ran");
    }

    private void OnNetworkedConnected(ConnectedArgs args)
    {
        Debug.LogFormat("Networking joined, peerID: {0}, isHot: {1}", args.Self, args.IsHost);
    }

    private void OnPeerStateReceived(PeerStateReceivedArgs args)
    {
        Debug.LogFormat("Peer {0} us at state:{1}", args.Peer, args.State);
    }

    private void OnPeerPoseReceived(PeerPoseReceivedArgs args)
    {

    }
}
