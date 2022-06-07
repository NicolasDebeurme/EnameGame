using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public enum Role
{
    None,
    Monk,
    Alchemist,
    Adult,
    Child
}

[System.Serializable]
public class Visibility
{
    public Role[] Decide;
    public Role[] See;
    public Role[] Blind;

}
