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

    public string action;
    static Dictionary<string, MonoScript> m_ScriptCache;

    public NodeContent(Node node, GUIStyle boxStyle, Rect boxRect)
    {
        this.node = node;
        this.boxRect = boxRect;
        this.boxStyle = boxStyle;

        FieldsRect = new Rect(node.rect.x, node.rect.y, node.rect.width - 20, 20);

        textStyle = new GUIStyle();
        textStyle.border = new RectOffset(12, 12, 12, 12);

        visibilitys = new Visibility();

        m_ScriptCache = new Dictionary<string, MonoScript>();
        var scripts = Resources.FindObjectsOfTypeAll<MonoScript>();
        for (int i = 0; i < scripts.Length; i++)
        {
            var type = scripts[i].GetClass();
            if (type != null && !m_ScriptCache.ContainsKey(type.FullName))
            {
                m_ScriptCache.Add(type.FullName, scripts[i]);
            }
        }
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

        FieldsRect.y = FieldsRect.y + 25;
        EditorGUI.PrefixLabel(FieldsRect, new GUIContent("ActionToPerform:"));

        (FieldsRect,action) = DrawMonoScriptField(FieldsRect, action, new GUIContent("Action:"));

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


    public void LoadContent(Places placeName,string question, string textToBeChose,Visibility visibilitys, string action)
    {
        this.placeName = placeName;
        this.question = question;
        this.textToBeChose= textToBeChose;
        this.visibilitys = visibilitys;
        this.action = action;
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

    bool m_ViewString = false;
    public (Rect,string) DrawMonoScriptField(Rect position, string property, GUIContent label)
    {
            EditorGUI.PrefixLabel(position, label);
            m_ViewString = GUI.Toggle(position, m_ViewString, "", "label");
            position.y += 25;
            if (m_ViewString)
            {
                property = EditorGUI.TextField(position, property);
                return (position,property);
            }
            MonoScript script = null;
            string typeName = property;
            if (!string.IsNullOrEmpty(typeName))
            {
                m_ScriptCache.TryGetValue(typeName, out script);
                if (script == null)
                    GUI.color = Color.red;
            }
            
            script = (MonoScript)EditorGUI.ObjectField(position, script, typeof(MonoScript), false);
            if (GUI.changed)
            {
                if (script != null)
                {
                    var type = script.GetClass();

                    if (type != null)
                        property = script.GetClass().FullName;
                    else
                        Debug.LogWarning("The script file " + script.name + " doesn't contain an assignable class");
                }
                else
                    property = "";
            }
        position.y += 25;
        return (position,property);
    }
    public (Rect,Roles) DrawRoles(Rect rect,Roles roleName)
    {
        rect.y += 20;
        roleName = (Roles)EditorGUI.EnumPopup(rect, roleName);
        return (rect,roleName);
    }
}
