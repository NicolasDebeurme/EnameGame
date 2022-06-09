using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enums : MonoBehaviour
{
    public enum Roles
    {
        None,
        Monk,
        Alchemist,
        Adult,
        Child
    }
    public enum Places
    {
        None,
        Pump,
        Church
    }

    public enum BrodcastType
    {
        None,
        Choice,
        Pos
    }

    [Serializable]
    public enum LobbyButton
    {
        Join,
        Create,
        Leave
    }

}
