using Niantic.ARDK.AR;
using Niantic.ARDK.AR.ARSessionEventArgs;
using Niantic.ARDK.AR.HitTest;
using Niantic.ARDK.AR.WayspotAnchors;
using Niantic.ARDK.LocationService;
using Niantic.ARDK.Utilities.Input.Legacy;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using TMPro;
using static ActionData;

public class WaySpotService : MonoBehaviour
{
    private string LocalSaveKey = "my_wayspots";
    

    private WayspotAnchorService wayspotAnchorService;

    private bool InitialLocalizationFired = false;
    private Dictionary<Guid,GameObject> anchors = new Dictionary<Guid, GameObject>();

    //ToSet
    public IARSession session;


    public TextMeshProUGUI TextPanelTitle;
    public TextMeshProUGUI LocalizationStatus;

    //Event
    public EventHandler ScreenTap;

    public EventHandler WayspotLocalized;
    public EventHandler WayspotLost;
    public void OnSessionStarted(ARSessionRanArgs args)
    {
        Debug.Log("WS Sessionstarted Event");
        var wayspotAnchorsConfiguration = WayspotAnchorsConfigurationFactory.Create();

        var locationService = LocationServiceFactory.Create(GameManager.Instance.runtimeEnv);
        locationService.Start(1, 0.001f);

        wayspotAnchorService = new WayspotAnchorService(session, locationService, wayspotAnchorsConfiguration);
    }



    public void Init(IARSession session, GameObject TextPanel)
    {
        this.session = session;

        TextPanelTitle = TextPanel.GetComponentsInChildren<TextMeshProUGUI>()[0];
        TextPanelTitle.text = "Waypoint Anchors Status Log";
        LocalizationStatus = TextPanel.GetComponentsInChildren<TextMeshProUGUI>()[1];
    }

    
    public void Update()
    {
        if(wayspotAnchorService == null)
        {
            LocalizationStatus.text = "NoWayspotService";
            return;
        }
        else if(wayspotAnchorService.LocalizationState != LocalizationState.Localized)
        {
            LocalizationStatus.text = wayspotAnchorService.LocalizationState.ToString();
        }

        if (wayspotAnchorService != null)
        {
            if (wayspotAnchorService.LocalizationState == LocalizationState.Failed)
            {
                wayspotAnchorService.Restart();

                if (InitialLocalizationFired)
                {
                    Debug.Log("Failed");
                    WayspotLost.Invoke(this, EventArgs.Empty);
                    InitialLocalizationFired = false;
                }
                return;
            }
            else if (wayspotAnchorService.LocalizationState == LocalizationState.Localizing)
            {

                if (InitialLocalizationFired)
                {
                    WayspotLost.Invoke(this, EventArgs.Empty);
                    InitialLocalizationFired = false;
                }
                return;
            }
        }
        

        if (wayspotAnchorService.LocalizationState != LocalizationState.Localized) return;

        if(wayspotAnchorService.LocalizationState == LocalizationState.Localized && !InitialLocalizationFired)
        {
            WayspotLocalized.Invoke(this, EventArgs.Empty);
            InitialLocalizationFired = true;
        }
            
        if (PlatformAgnosticInput.touchCount <= 0) return;

        var touch = PlatformAgnosticInput.GetTouch(0);

        if (touch.phase == TouchPhase.Began)
        {
            OnTapScreen(touch);
        }
    }

    private void OnTapScreen(Touch touch)
    {
        var currentFrame = session.CurrentFrame;

        if (currentFrame == null) return;

        var hitTestResults = currentFrame.HitTest(
            Camera.main.pixelWidth,
            Camera.main.pixelHeight,
            touch.position,
            ARHitTestResultType.EstimatedHorizontalPlane
            );

        if (hitTestResults.Count <= 0) return;

        ScreenTap?.Invoke(this, EventArgs.Empty); // TapPassEvent

        Matrix4x4 poseMatrix = hitTestResults[0].WorldTransform;
    }




    //private void SaveLocalReference()
    //{
    //    IWayspotAnchor[] wayspotAnchors = wayspotAnchorService.GetAllWayspotAnchors();

    //    WayspotAnchorsData storedAnchorsData = new WayspotAnchorsData();
    //    storedAnchorsData.Payloads =wayspotAnchors.Select(a => a.Payload.Serialize()).ToArray();

    //    string jsonData = JsonUtility.ToJson(storedAnchorsData);
    //    PlayerPrefs.SetString(LocalSaveKey, jsonData);
    //}

    //public void LoadLocalReference()
    //{
    //    if(PlayerPrefs.HasKey(LocalSaveKey))
    //    {
    //        List<WayspotAnchorPayload> payloads = new List<WayspotAnchorPayload>();

    //        string jsonData = PlayerPrefs.GetString(LocalSaveKey);
    //        WayspotAnchorsData storedData = JsonUtility.FromJson<WayspotAnchorsData>(jsonData);

    //        foreach(var wayspotAnchorPayload in storedData.Payloads)
    //        {
    //            var payload = WayspotAnchorPayload.Deserialize(wayspotAnchorPayload);
    //            payloads.Add(payload);
    //        }

    //        if(payloads.Count > 0)
    //        {
    //            var wayspotAnchors = wayspotAnchorService.RestoreWayspotAnchors(payloads.ToArray());
    //            OnWaySpotAchorAdded(wayspotAnchors);
    //        }
    //    }
    //}

    private void OnDestroy()
    {

        foreach (var anchor in anchors)
        {
            Destroy(anchor.Value);
        }
        anchors.Clear();
    }
    public void DestroySelf()
    {
        Destroy(this);
    }

    #region WaySpotAnchor Payloads
    public void LoadPayloads(string json, GameObject anchorPrefab)
    {
        
            var payloads = new List<WayspotAnchorPayload>();
            var storedData = JsonUtility.FromJson<WayspotAnchorsData>(json);

            foreach (var wayspotAnchorPayload in storedData.Payloads)
            {
                var payload = WayspotAnchorPayload.Deserialize(wayspotAnchorPayload);
                payloads.Add(payload);
            }

            if (payloads.Count > 0)
            {
                var wayspotAnchors = wayspotAnchorService.RestoreWayspotAnchors(payloads.ToArray());

                foreach (var wayspotAnchor in wayspotAnchors)
                {
                    if (anchors.ContainsKey(wayspotAnchor.ID)) continue;
                    var id = wayspotAnchor.ID;
                    var anchor = Instantiate(anchorPrefab);
                    anchor.SetActive(false);
                    anchor.name = $"Anchor {id}";
                    anchors.Add(id, anchor);
                    wayspotAnchor.TrackingStateUpdated += OnUpdateAnchorPose;
                }

            }
        

    }

    //private void OnWaySpotAchorAdded(IWayspotAnchor[] wayspotAnchors)
    //{
    //    foreach (var wayspotAnchor in wayspotAnchors)
    //    {
    //        if (anchors.ContainsKey(wayspotAnchor.ID)) continue;
    //        var id = wayspotAnchor.ID;
    //        var anchor = Instantiate(prefab);
    //        anchor.SetActive(false);
    //        anchor.name = $"Anchor {id}";
    //        anchors.Add(id, anchor);
    //        wayspotAnchor.TrackingStateUpdated += OnUpdateAnchorPose;
    //    }

    //    if (InitialLocalizationFired)
    //        SaveLocalReference();
    //}
    private void OnUpdateAnchorPose(WayspotAnchorResolvedArgs args)
    {
        var anchor = anchors[args.ID].transform;

        anchor.rotation = args.Rotation;
        anchor.position = args.Position;
        anchor.gameObject.SetActive(true);
    }
    #endregion

    [Serializable]
    private class WayspotAnchorsData
    {
        public string[] Payloads = Array.Empty<string>();
    }
}
