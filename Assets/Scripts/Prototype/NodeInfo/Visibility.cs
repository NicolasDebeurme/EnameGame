using System.Collections;
using System;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

[Serializable]
public class Visibility 
{
    public List<VisibilityRoleClass> Decide;
    public List<VisibilityRoleClass> See ;
    public List<VisibilityRoleClass> Blind ;

    public Visibility()
    {
        Decide = new List<VisibilityRoleClass>();
        See = new List<VisibilityRoleClass>();
        Blind = new List<VisibilityRoleClass>();
    }
    
}
