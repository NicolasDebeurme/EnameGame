using System.Collections;
using System;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using static Enums;

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
    public Rect DrawVisibilityItem(Rect rect, List<VisibilityRoleClass> visibilityList, string visibilityName )
    {
        rect.y += 25;
        Rect minusButtonSize = new Rect(rect.x + rect.width - 20, rect.y, 15, 15);

        EditorGUI.PrefixLabel(rect, new GUIContent(visibilityName+":"));

        if(GUI.Button(minusButtonSize, "-"))
        {
            if(visibilityList.Count > 0)
                visibilityList.RemoveAt(visibilityList.Count-1);
        }

        foreach (var instance in visibilityList)
        {
            rect = instance.DrawRoles(rect) ;
        }

        rect.y += 20;
        if (GUI.Button(rect,"Add "+visibilityName))
            visibilityList.Add(new VisibilityRoleClass());

        return rect;
    }
}
