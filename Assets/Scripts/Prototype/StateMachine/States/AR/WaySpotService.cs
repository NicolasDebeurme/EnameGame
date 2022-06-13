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

public class WaySpotService : MonoBehaviour
{
    private string LocalSaveKey = "my_wayspots";
    

    private WayspotAnchorService wayspotAnchorService;
    private bool InitialLocalizationFired = false;
    private Dictionary<Guid,GameObject> anchors = new Dictionary<Guid, GameObject>();

    //ToSet
    public IARSession session;
    public GameObject prefab;
    public ILocationService locationService;
    public TextMeshProUGUI LocalizationStatus;
    public int actualLevel;
    //Event
    public EventHandler ScreenTap;
    public void OnSessionStarted(ARSessionRanArgs args)
    {
        Debug.Log("WS Sessionstarted Event");
        var wayspotAnchorsConfiguration = WayspotAnchorsConfigurationFactory.Create();

        wayspotAnchorService = new WayspotAnchorService(session, locationService, wayspotAnchorsConfiguration);
    }

    public void Init(IARSession session, GameObject prefab, ILocationService locationService, TextMeshProUGUI LocalizationStatus, int level)
    {
        this.session = session;
        this.prefab = prefab;
        this.locationService = locationService;
        this.LocalizationStatus = LocalizationStatus;
        actualLevel = level;
    }
    public void Update()
    {
        LocalizationStatus.text = wayspotAnchorService != null ? wayspotAnchorService.LocalizationState.ToString() : "NoWayspotService";
        if (wayspotAnchorService != null && wayspotAnchorService.LocalizationState == LocalizationState.Failed)
        {
            wayspotAnchorService.Restart();
            return;
        }

        if (wayspotAnchorService.LocalizationState != LocalizationState.Localized) return;

        if(wayspotAnchorService.LocalizationState == LocalizationState.Localized && !InitialLocalizationFired)
        {
            LoadLocalReference();
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

        AddAnchor(poseMatrix);
    }

    private void AddAnchor(Matrix4x4 poseMatrix)
    {
        wayspotAnchorService.CreateWayspotAnchors(OnWaySpotAchorAdded, poseMatrix);
    }

    private void OnWaySpotAchorAdded(IWayspotAnchor[] wayspotAnchors)
    {
        foreach (var wayspotAnchor in wayspotAnchors)
        {
            if (anchors.ContainsKey(wayspotAnchor.ID)) continue;
            var id =wayspotAnchor.ID;
            var anchor = Instantiate(prefab);
            anchor.SetActive(false);
            anchor.name = $"Anchor {id}";
            anchors.Add(id, anchor);
            wayspotAnchor.TrackingStateUpdated += OnUpdateAnchorPose;
        }

        if(InitialLocalizationFired)
            SaveLocalReference();
    }

    private void OnUpdateAnchorPose(WayspotAnchorResolvedArgs args)
    {
        var anchor = anchors[args.ID].transform;

        anchor.rotation = args.Rotation;
        anchor.position = args.Position;
        anchor.gameObject.SetActive(true);
    }

    private void SaveLocalReference()
    {
        IWayspotAnchor[] wayspotAnchors = wayspotAnchorService.GetAllWayspotAnchors();

        MyStoredAnchorsData storedAnchorsData = new MyStoredAnchorsData();
        storedAnchorsData.Payloads =wayspotAnchors.Select(a => a.Payload.Serialize()).ToArray();

        string jsonData = JsonUtility.ToJson(storedAnchorsData);
        PlayerPrefs.SetString(LocalSaveKey, jsonData);
    }

    public void LoadLocalReference()
    {
        if(PlayerPrefs.HasKey(LocalSaveKey))
        {
            List<WayspotAnchorPayload> payloads = new List<WayspotAnchorPayload>();

            string jsonData = PlayerPrefs.GetString(LocalSaveKey);
            MyStoredAnchorsData storedData = JsonUtility.FromJson<MyStoredAnchorsData>(jsonData);

            foreach(var wayspotAnchorPayload in storedData.Payloads)
            {
                var payload = WayspotAnchorPayload.Deserialize(wayspotAnchorPayload);
                payloads.Add(payload);
            }

            if(payloads.Count > 0)
            {
                var wayspotAnchors = wayspotAnchorService.RestoreWayspotAnchors(payloads.ToArray());
                OnWaySpotAchorAdded(wayspotAnchors);
            }
        }
    }
    [Serializable]
    private class MyStoredAnchorsData
    {
        public string[] Payloads = Array.Empty<string>();
    }
    }
