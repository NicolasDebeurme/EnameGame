using System;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using static Enums;
using static NodeBasedEditor;

public class NodeContent
{
    public string title;

    public Rect FieldsRect;
    public float BoxRectHeight=0;
    public GUIStyle textStyle;

    public Rect boxRect;
    public GUIStyle boxStyle;

    public Node node;

    //data
    public Places placeName;
    public string textToBeChose;
    public string question;
    public Visibility visibilitys;

    public NodeContent(Node node, GUIStyle boxStyle, Rect boxRect)
    {
        this.node = node;
        this.boxRect = boxRect;
        this.boxStyle = boxStyle;

        FieldsRect = new Rect(node.rect.x, node.rect.y, node.rect.width - 20, 20);

        textStyle = new GUIStyle();
        textStyle.border = new RectOffset(12, 12, 12, 12);

        visibilitys = new Visibility();
    }
    public float Draw()
    {

        GUI.Box(new Rect(node.rect.x,node.rect.y,node.rect.width,BoxRectHeight), title, boxStyle);
        FieldsRect.x = node.rect.x + 10;
        FieldsRect.y = node.rect.y + 10;
        FieldsRect.height = 20;

        BoxRectHeight = FieldsRect.y;

        EditorGUI.PrefixLabel(FieldsRect, new GUIContent("Place name:"));
        FieldsRect.y = FieldsRect.y + 20;
        placeName = (Places)EditorGUI.EnumPopup(FieldsRect, placeName);

        FieldsRect.y = FieldsRect.y + 25;
        EditorGUI.PrefixLabel(FieldsRect, new GUIContent("Text to be chose:"));
        FieldsRect.y = FieldsRect.y + 20;
        textToBeChose = EditorGUI.TextField(FieldsRect, textToBeChose);

        FieldsRect = DrawVisibilityItem(FieldsRect,visibilitys.Decide,"Decide");
        FieldsRect = DrawVisibilityItem(FieldsRect, visibilitys.See, "See");
        FieldsRect = DrawVisibilityItem(FieldsRect, visibilitys.Blind, "Blind");

        FieldsRect.y = FieldsRect.y + 25;
        EditorGUI.PrefixLabel(FieldsRect, new GUIContent("Question:"));
        FieldsRect.y = FieldsRect.y + 20;
        FieldsRect.height = 60;
        question = EditorGUI.TextArea(FieldsRect, question);

        BoxRectHeight = (FieldsRect.y - BoxRectHeight) + FieldsRect.height + 25;
        return BoxRectHeight;
    }


    public void LoadContent(Places placeName,string question, string textToBeChose,Visibility visibilitys)
    {
        this.placeName = placeName;
        this.question = question;
        this.textToBeChose= textToBeChose;
        this.visibilitys = visibilitys;
    }

    public Rect DrawVisibilityItem(Rect rect, List<Roles> visibilityList, string visibilityName)
    {
        rect.y += 25;
        Rect minusButtonSize = new(rect.x + rect.width - 20, rect.y, 15, 15);

        EditorGUI.PrefixLabel(rect, new GUIContent(visibilityName + ":"));

        if (GUI.Button(minusButtonSize, "-"))
        {
            if (visibilityList.Count > 0)
                visibilityList.RemoveAt(visibilityList.Count - 1);
        }

        foreach (var role in visibilityList.ToArray())
        {
            (rect, visibilityList[visibilityList.IndexOf(role)]) = DrawRoles(rect, role);

        }

        rect.y += 20;
        if (GUI.Button(rect, "Add " + visibilityName))
            visibilityList.Add(Roles.None);

        return rect;
    }

    public (Rect,Roles) DrawRoles(Rect rect,Roles roleName)
    {
        rect.y += 20;
        roleName = (Roles)EditorGUI.EnumPopup(rect, roleName);
        return (rect,roleName);
    }
}
