using System;
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

        FieldsRect = visibilitys.DrawVisibilityItem(FieldsRect,visibilitys.Decide,"Decide");
        FieldsRect = visibilitys.DrawVisibilityItem(FieldsRect, visibilitys.See, "See");
        FieldsRect = visibilitys.DrawVisibilityItem(FieldsRect, visibilitys.Blind, "Blind");

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

}
