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

    private bool InitialLocalizationFired;
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
        {
            _wayspotAnchorService = new WayspotAnchorService(session, iLocationService, wayspotAnchorsConfiguration);
            WayspotLost += OnWayspotLost;
        }
        else
            Debug.Log("No location Service");
    }

    #region Events
    private void OnSessionRan(ARSessionRanArgs args)
    {
        iLocationService.Start(0.001f, 0.001f);
        _textPanelTitle.text = "Location state";
        InitialLocalizationFired = false;
    }

    private void OnSessionPaused(ARSessionPausedArgs args)
    {
        iLocationService.Stop();
        WayspotLost.Invoke(this, EventArgs.Empty);
    }

    private void OnWayspotLost(object sender, EventArgs e)
    {
        InitialLocalizationFired = false;
        _textPanelTitle.text = "Location state";
        _wayspotAnchorService.DestroyWayspotAnchors(anchors.Keys.ToArray());
        anchors.Clear();
    }
    #endregion

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
                    WayspotLost.Invoke(this, EventArgs.Empty);
                }
                return;
            }
            else if (_wayspotAnchorService.LocalizationState == LocalizationState.Localizing)
            {

                if (InitialLocalizationFired)
                {
                    WayspotLost.Invoke(this, EventArgs.Empty);
                }
                return;
            }
        }
        

        if (_wayspotAnchorService.LocalizationState != LocalizationState.Localized) return;

        if( !InitialLocalizationFired)
        {
            InitialLocalizationFired = true;
            WayspotLocalized.Invoke(this, EventArgs.Empty);
        }
            
    }


    public void DestroySelf()
    {
        Destroy(this);
    }
}
