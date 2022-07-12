using System;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using static Enums;

[Serializable]
public class StoryTreeNodeInfo
{
    public string textToBeChose = "Enter the text";
    public Visibility visibilitys;
    public string dialogueText;
    public Places place;
    public string action;
    public StoryTreeNodeInfo(string dialogueText, Places place, string textToBeChose, Visibility visibility, string action)
    {
        this.dialogueText = dialogueText;
        this.place = place;
        this.textToBeChose = textToBeChose;
        this.visibilitys = visibility;
        this.action = action;
    }

}
