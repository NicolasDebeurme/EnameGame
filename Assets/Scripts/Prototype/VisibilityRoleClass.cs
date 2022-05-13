using System.Collections;
using System;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using static Enums;


[Serializable]
public class VisibilityRoleClass
{
    [SerializeField]
    private Roles roleName;
    public virtual Rect DrawRoles(Rect rect)
    {
        rect.y += 20;
        roleName = (Roles)EditorGUI.EnumPopup(rect, roleName);
        return rect;
    }
}
