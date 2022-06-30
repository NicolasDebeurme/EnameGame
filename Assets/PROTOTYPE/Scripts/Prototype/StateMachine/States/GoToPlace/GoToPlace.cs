using UnityEngine;
using System.Collections;
using TMPro;
using UnityEngine.UI;
using UnityEngine.Android;

public class GoToPlace : State
{
    private GoToPlaceView _view;

    public GoToPlace(GameStateSystem gameStateSystem) : base(gameStateSystem)
    {
    }

    public override IEnumerator Start()
    {
        _view = UIManager.Show<GoToPlaceView>();

        if (GameStateSystem.LocationService == null)
        {
            GameStateSystem.LocationService = GameStateSystem.gameObject.AddComponent<LocationService>();
            GameStateSystem.LocationService.Init(_view.distanceText, _view.compassArrow);
        }
        else
            GameStateSystem.LocationService.PlayUIupdate();


        yield break;
    }

    public override void NextState()
    {
        GameStateSystem.LocationService.PauseUIupdate();

        if (GameStateSystem.ActualNode.data.visibilitys.See.Contains(GameStateSystem._playerRole) || GameStateSystem.ActualNode.data.visibilitys.Decide.Contains(GameStateSystem._playerRole))
            GameStateSystem.SetState(new AR(GameStateSystem));
        else
            GameStateSystem.SetState(new Waiting(GameStateSystem));
    }

}
