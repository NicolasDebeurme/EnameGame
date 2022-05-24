using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static Enums;

public class GameStateSystem : StateMachine
{
    public static GameStateSystem _instance;

    private void Awake()
    {
        _instance = this;
    }

    private void Start()
    {
        SetState(new Begin(this));
    }

}
