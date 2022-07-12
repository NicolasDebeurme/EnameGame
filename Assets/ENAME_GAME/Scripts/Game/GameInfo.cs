using Niantic.ARDK.AR;
using Niantic.ARDK.AR.Configuration;
using Niantic.ARDK.AR.Networking;
using Niantic.ARDK.Networking;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameInfo 
{
    public readonly IARNetworking _arNetworking;
    public readonly IMultipeerNetworking _networking;
    public readonly IARSession _session;

    public readonly IARWorldTrackingConfiguration _sessionConfigData;

    public GameInfo(IARNetworking arNetworking, IMultipeerNetworking networking, IARSession session, IARWorldTrackingConfiguration sessionConfigData)
    {
        _arNetworking = arNetworking;
        _networking = networking;
        _session = session;
        _sessionConfigData = sessionConfigData;
    }

}
