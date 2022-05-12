using System.Collections;
using System;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using static Enums;



[Serializable]
public class RoleClass
{
    [SerializeField]
    private Roles roleName;
    public virtual Rect DrawRoles(Rect rect) {
        rect.y +=  20;
        roleName = (Roles)EditorGUI.EnumPopup(rect, roleName) ; 
        return rect;
    }
}

[Serializable]
public class Visibility : ScriptableObject
{
    public List<RoleClass> Decide = new List<RoleClass>();
    public List<RoleClass> See = new List<RoleClass>();
    public List<RoleClass> Blind = new List<RoleClass>();

    private void OnEnable()
    {
        Decide = new List<RoleClass>();
        See = new List<RoleClass>();
        Blind = new List<RoleClass>();
    }
    public Rect DrawVisibilityItem(Rect rect, List<RoleClass> visibilityList, string visibilityName )
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
            visibilityList.Add(new RoleClass());

        return rect;
    }
}
