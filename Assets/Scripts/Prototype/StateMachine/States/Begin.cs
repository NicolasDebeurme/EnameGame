using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Begin : State
{
    MainMenuView beginView;
    public Begin(GameStateSystem gameStateSystem) : base(gameStateSystem)
    {
    }

    public override IEnumerator Start()
    {
        beginView =UIManager.Show<MainMenuView>();

        yield break ;

        
    }

    public override void NextState()
    {
        GameStateSystem._playerRole = beginView.playerRole;
        GameStateSystem.SetState(new GoToPlace(GameStateSystem));
    }
}
