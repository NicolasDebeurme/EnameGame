using Niantic.ARDK.AR;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class AR : State
{

    //WaySpot
    private WaySpotService wayspotService;
    private ARView _view;

    public AR(GameStateSystem gameStateSystem) : base(gameStateSystem)
    {
    }

    public override IEnumerator Start()
    {
        _view = UIManager.Show<ARView>();

        GameStateSystem._gameInfo._session.Run(GameStateSystem._gameInfo._sessionConfigData);

        wayspotService = GameStateSystem.gameObject.AddComponent<WaySpotService>();
        wayspotService.session = GameStateSystem._gameInfo._session;
        wayspotService.prefab = _view.prefabToSpawn;
        wayspotService.locationService = GameStateSystem.locationService._locationService;
        wayspotService.LocalizationStatus = _view.LocalizationStatus;

        GameStateSystem._gameInfo._session.Ran += wayspotService.OnSessionStarted;

        yield break;
    }

    public override void NextState()
    {
        if(GameStateSystem.ActualNode.children?.Count > 0)
            GameStateSystem.SetState(new MakeAChoice(GameStateSystem));
        else
        {
            GameManager._instance.StopSharedAR();
            GameStateSystem.SetState(new End(GameStateSystem));
        }
    }

}
