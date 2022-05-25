using UnityEngine;
using System.Collections;
using TMPro;
using UnityEngine.UI;
using UnityEngine.Android;

public class GoToPlace : State
{
    private GPS _gps = null;
    public GoToPlace(GameStateSystem gameStateSystem) : base(gameStateSystem)
    {
    }

    public override IEnumerator Start()
    {
        UIManager.Show<GoToPlaceView>();
        _gps = GameStateSystem.gameObject.AddComponent<GPS>();
        yield break;
    }

    public override void NextState()
    {
        _gps.Destroy();
        GameStateSystem.SetState(new AR(GameStateSystem));
    }


}
