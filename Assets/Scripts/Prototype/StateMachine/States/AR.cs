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
        GameManager._instance.CreateAndRunSharedAR();
        yield break;
    }
    public override void UpdateUI()
    {
        UIManager.Show<ARView>();

    }
}
