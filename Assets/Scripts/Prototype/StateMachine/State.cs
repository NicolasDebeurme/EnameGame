using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class State 
{
    protected GameStateSystem GameStateSystem;

    protected State(GameStateSystem gameStateSystem)
    {
        GameStateSystem = gameStateSystem;
    }

    public virtual IEnumerator Start()
    {
        yield break;
    }

    public virtual void NextState()
    {
    }
}
