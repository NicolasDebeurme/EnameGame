using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Waiting : State
{
    private WaitingView _view;
    public Waiting(GameStateSystem gameStateSystem) : base(gameStateSystem)
    {
    }

    public override IEnumerator Start()
    {
        _view = UIManager.Show<WaitingView>();

        yield break;
    }

    public override void NextState()
    {
        GameStateSystem.SetState(new GoToPlace(GameStateSystem));
    }
}
