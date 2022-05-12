using System;
using UnityEditor;
using UnityEngine;
using static Enums;
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
    public Places placeName;
    public string textToBeChose;
    public string question;
    public Visibility visibilitys;

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
        var serializedObject = new SerializedObject(visibilitys);

        GUI.Box(node.rect, title, boxStyle);

        FieldsRect.x = node.rect.x + 10;
        FieldsRect.y = node.rect.y + 10;
        FieldsRect.height = 20;

        EditorGUI.PrefixLabel(FieldsRect, new GUIContent("Place name:"));
        FieldsRect.y = FieldsRect.y + 20;
        placeName = (Places)EditorGUI.EnumPopup(FieldsRect, placeName);

        FieldsRect.y = FieldsRect.y + 25;
        EditorGUI.PrefixLabel(FieldsRect, new GUIContent("Text to be chose:"));
        FieldsRect.y = FieldsRect.y + 20;
        textToBeChose = EditorGUI.TextArea(FieldsRect, textToBeChose);

        FieldsRect.y = FieldsRect.y + 25;
        EditorGUI.PrefixLabel(FieldsRect, new GUIContent("Visibility:"));
        FieldsRect.y = FieldsRect.y + 20;
        
        var property = serializedObject.FindProperty("Decide");
        serializedObject.Update();
        EditorGUILayout.PropertyField(property, true);
        serializedObject.ApplyModifiedProperties();

        FieldsRect.y = FieldsRect.y + 25;
        EditorGUI.PrefixLabel(FieldsRect, new GUIContent("Question:"));
        FieldsRect.y = FieldsRect.y + 20;
        FieldsRect.height = 60;
        question = EditorGUI.TextArea(FieldsRect, question);
    }

    public void LoadContent(Places placeName,string question, string textToBeChose,Visibility visibilitys)
    {
        this.placeName = placeName;
        this.question = question;
        this.textToBeChose= textToBeChose;
        this.visibilitys = visibilitys;
    }

}
