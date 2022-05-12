using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static Enums;

public class NodeInfo
{
    public string textToBeChose = "Enter the text";
    public Visibility visibilitys;
    public string dialogueText;
    public Places place;

    public List<NodeInfo> choiceList;
    public NodeInfo(string dialogueText, Places place, string textToBeChose, Visibility vivibilitys)
    {
        this.dialogueText = dialogueText;
        this.place = place;
        this.textToBeChose = textToBeChose;
        this.visibilitys = vivibilitys;
    }

}
