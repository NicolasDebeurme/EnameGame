using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AR : State
{
    public AR(GameStateSystem gameStateSystem) : base(gameStateSystem)
    {
    }

    public override IEnumerator Start()
    {
        UIManager.Show<ARView>();

        if(!GameManager._instance.isSessionCreated)
            GameManager._instance.CreateAndRunSharedAR();

        yield break;
    }

    public override void NextState()
    {
        if(GameStateSystem.ActualNode.children?.Count > 0)
            GameStateSystem.SetState(new MakeAChoice(GameStateSystem));
        else
            GameStateSystem.SetState(new End(GameStateSystem));
    }
}
