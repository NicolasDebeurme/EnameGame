using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static Enums;


public class NodeInfoMonoBehaviour : MonoBehaviour
{
    public string textToBeChose = "Enter the text";
    public Visibility visibilitys;
    public string dialogueText;
    public Places place;

    public void LoadData(StoryTreeNodeInfo data)
    {
        this.dialogueText = data.dialogueText;
        this.place = data.place;
        this.textToBeChose = data.textToBeChose;
        this.visibilitys = data.visibilitys;
    }
}
