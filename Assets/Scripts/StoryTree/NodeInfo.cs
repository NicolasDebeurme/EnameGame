using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static Enums;

[System.Serializable]
public class NodeInfo 
{
    public string textToBeChose = "Enter the text";
    public Visibility visibilitys;
    public string dialogueText;
    public Places place;
    public List<NodeInfo> choiceList;
    public NodeInfo(string dialogueText, Places place, string textToBeChose, Visibility visibilitys)
    {
        this.dialogueText = dialogueText;
        this.place = place;
        this.textToBeChose = textToBeChose;
        this.visibilitys = visibilitys;
        choiceList = new List<NodeInfo>();
    }

}
