using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Waiting : State
{
    public Waiting(GameStateSystem gameStateSystem) : base(gameStateSystem)
    {
    }

    public override IEnumerator Start()
    {
        UIManager.Show<WaitingView>();

        yield break;
    }

    public override void NextState()
    {
        GameStateSystem.SetState(new GoToPlace(GameStateSystem));
    }
}
