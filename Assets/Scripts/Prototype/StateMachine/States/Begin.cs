using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Begin : State
{
    public Begin(GameStateSystem gameStateSystem) : base(gameStateSystem)
    {
    }

    public override IEnumerator Start()
    {
        UIManager.Show<MainMenuView>();

        yield return new WaitForSeconds(2f);

        GameStateSystem.SetState(new GoToPlace(GameStateSystem));
    }
}
