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

        if (LocationService.Instance == null)
            GameStateSystem.gameObject.AddComponent<LocationService>();
        else
            LocationService.Instance.PlayUIupdate();


        _view.OnSpoofValueChange += LocationService.Instance.SpoofValueChange;

        yield break;
    }

    public override void NextState()
    {
        LocationService.Instance.PauseUIupdate();

        GameStateSystem.SetState(new AR(GameStateSystem));
    }

}
