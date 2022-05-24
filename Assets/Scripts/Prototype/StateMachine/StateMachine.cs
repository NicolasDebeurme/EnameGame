using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class StateMachine : MonoBehaviour
{
    public event OnGameStateChangeDelegate OnGameStateChange;
    public delegate void OnGameStateChangeDelegate(State state);

    protected State State;

    public void SetState(State state)
    {
        if (state == State) return;

        State = state;
        StartCoroutine(State.Start());

        OnGameStateChange?.Invoke(state);
    }

    public State GetState()
    {
        return State;
    }
}
