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
        yield return new WaitForSeconds(2f);
        UIManager.Show<EndView>();
        yield return new WaitForSeconds(5f);
        NetworkingManager.Instance.StopSharedAR();
        GameStateSystem.SetState(new Lobby(GameStateSystem));
    }

}
