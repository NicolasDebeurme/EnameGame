using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class End : State
{
    public End(GameStateSystem gameStateSystem) : base(gameStateSystem)
    {
    }

    public override IEnumerator Start()
    {
        Debug.Log("end");
        UIManager.Show<EndView>();
        yield return new WaitForSeconds(5f);
        GameStateSystem.SetState(new Begin(GameStateSystem));
    }
}
