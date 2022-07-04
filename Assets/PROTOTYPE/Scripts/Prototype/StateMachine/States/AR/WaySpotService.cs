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
    private WayspotAnchorService _wayspotAnchorService;

    private bool InitialLocalizationFired = false;
    private Dictionary<Guid,GameObject> anchors = new();
    private ILocationService iLocationService;

    //ToSet
    private IARSession _actualSession;
    private TextMeshProUGUI _textPanelTitle;
    private TextMeshProUGUI _localizationStatus;

    //Events
    public EventHandler ScreenTap;
    public EventHandler WayspotLocalized;
    public EventHandler WayspotLost;

    public void Init(IARSession session, GameObject TextPanel)
    {
        _actualSession = session;

        session.Paused += OnSessionPaused;
        session.Ran += OnSessionRan;
        _textPanelTitle = TextPanel.GetComponentsInChildren<TextMeshProUGUI>()[0];
        _localizationStatus = TextPanel.GetComponentsInChildren<TextMeshProUGUI>()[1];


        var wayspotAnchorsConfiguration = WayspotAnchorsConfigurationFactory.Create();
        wayspotAnchorsConfiguration.ContinuousLocalizationEnabled = true;

        //-----WORK-----
        iLocationService = LocationServiceFactory.Create(GameManager.Instance.runtimeEnv);

        //-----Doesn't WORK-----
        //iLocationService = GameStateSystem.LocationService._iLocationService;

        if (iLocationService != null)
            _wayspotAnchorService = new WayspotAnchorService(session, iLocationService, wayspotAnchorsConfiguration);
        else
            Debug.Log("No location Service");
    }

    private void OnSessionRan(ARSessionRanArgs args)
    {
        iLocationService.Start(0.001f, 0.001f);
        _textPanelTitle.text = "Location state";
        InitialLocalizationFired = false;
    }

    private void OnSessionPaused(ARSessionPausedArgs args)
    {
        iLocationService.Stop();

        foreach (var anchor in anchors)
        {
            Destroy(anchor.Value);
        }
        anchors.Clear();
    }

    public void Update()
    {
        if (_actualSession.State == ARSessionState.Paused) return;
        if(_wayspotAnchorService == null)
        {
            _localizationStatus.text = "NoWayspotService";
            return;
        }
        else if(_wayspotAnchorService.LocalizationState != LocalizationState.Localized)
        {
            _localizationStatus.text = _wayspotAnchorService.LocalizationState.ToString();
        }

        if (_wayspotAnchorService != null)
        {
            if (_wayspotAnchorService.LocalizationState == LocalizationState.Failed)
            {
                _wayspotAnchorService.Restart();

                if (InitialLocalizationFired)
                {
                    Debug.Log("Failed");
                    WayspotLost.Invoke(this, EventArgs.Empty);
                    _textPanelTitle.text = "Location state";
                    InitialLocalizationFired = false;
                }
                return;
            }
            else if (_wayspotAnchorService.LocalizationState == LocalizationState.Localizing)
            {

                if (InitialLocalizationFired)
                {
                    WayspotLost.Invoke(this, EventArgs.Empty);
                    _textPanelTitle.text = "Location state";
                    InitialLocalizationFired = false;
                }
                return;
            }
        }
        

        if (_wayspotAnchorService.LocalizationState != LocalizationState.Localized) return;

        if(_wayspotAnchorService.LocalizationState == LocalizationState.Localized && !InitialLocalizationFired)
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
        var currentFrame = _actualSession.CurrentFrame;

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
        _wayspotAnchorService.CreateWayspotAnchors(OnAnchorAdded, poseMatrix);
    }

    private void OnAnchorAdded(IWayspotAnchor[] obj)
    {
        throw new NotImplementedException();
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

    public void DestroySelf()
    {
        Destroy(this);
    }

    #region WaySpotAnchor Payloads
    public GameObject[] LoadPayloads(string json, GameObject anchorPrefab)
    {
            var AnchorsPrefabs = new List<GameObject>();
            var storedData = JsonUtility.FromJson<string>(json);

            var payload = WayspotAnchorPayload.Deserialize(storedData);

            if (payload != null)
            {
                var wayspotAnchors = _wayspotAnchorService.RestoreWayspotAnchors(payload);

                foreach (var wayspotAnchor in wayspotAnchors)
                {
                    if (anchors.ContainsKey(wayspotAnchor.ID)) continue;
                    var id = wayspotAnchor.ID;
                    var anchor = Instantiate(anchorPrefab);
                    anchor.SetActive(false);
                    anchor.name = $"Anchor {id}";
                    anchors.Add(id, anchor);

                    AnchorsPrefabs.Add(anchor);
                    wayspotAnchor.TrackingStateUpdated += OnUpdateAnchorPose;
                }

            }
            return AnchorsPrefabs.ToArray();
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
