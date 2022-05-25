using System.Collections;
using System;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using static Enums;

[Serializable]
public class Visibility 
{
    public List<Roles> Decide;
    public List<Roles> See ;
    public List<Roles> Blind ;

    public Visibility()
    {
        Decide = new List<Roles>();
        See = new List<Roles>();
        Blind = new List<Roles>();
    }
    
}
