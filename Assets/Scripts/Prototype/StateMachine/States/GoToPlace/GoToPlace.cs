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

        GameStateSystem.locationService = GameStateSystem.gameObject.AddComponent<LocationService>();
        GameStateSystem._gameInfo._session.Ran += GameStateSystem.locationService.OnSessionStarted;

        _view.OnSpoofValueChange += GameStateSystem.locationService.SpoofValueChange;

        yield break;
    }

    public override void NextState()
    {
        GameStateSystem.locationService.Destroy();
        GameStateSystem.SetState(new AR(GameStateSystem));
    }

}
