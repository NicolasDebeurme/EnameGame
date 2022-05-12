using System;
using UnityEditor;
using UnityEngine;
using static NodeBasedEditor;

public class NodeContent
{
    public string title;

    public Rect FieldsRect;
    public GUIStyle textStyle;

    public Rect boxRect;
    public GUIStyle boxStyle;

    public Node node;

    //data
    public Place placeName;
    public Rôles role;
    public string question;

    public NodeContent(Node node, GUIStyle boxStyle, Rect boxRect)
    {
        this.node = node;
        this.boxRect = boxRect;
        this.boxStyle = boxStyle;

        FieldsRect = new Rect(node.rect.y, node.rect.x, node.rect.width - 20, 20);

        textStyle = new GUIStyle();
        textStyle.border = new RectOffset(12, 12, 12, 12);
    }
    public void Draw()
    {
        GUI.Box(node.rect, title, boxStyle);

        FieldsRect.x = node.rect.x + 10;
        FieldsRect.y = node.rect.y + 10;
        FieldsRect.height = 20;

        EditorGUI.PrefixLabel(FieldsRect, new GUIContent("Place name:"));
        FieldsRect.y = FieldsRect.y + 20;
        placeName = (Place)EditorGUI.EnumPopup(FieldsRect, placeName);

        FieldsRect.y = FieldsRect.y + 25;
        EditorGUI.PrefixLabel(FieldsRect, new GUIContent("As to answer:"));
        FieldsRect.y = FieldsRect.y + 20;
        role = (Rôles)EditorGUI.EnumPopup(FieldsRect,role);

        FieldsRect.y = FieldsRect.y + 25;
        EditorGUI.PrefixLabel(FieldsRect, new GUIContent("Question:"));
        FieldsRect.y = FieldsRect.y + 20;
        FieldsRect.height = 60;
        question = EditorGUI.TextArea(FieldsRect, question);
    }

    public void LoadContent(int placeName,int role,string question)
    {
        this.placeName = (Place)placeName;
        this.role= (Rôles)role;
        this.question = question;
    }

}
