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
    public NodeInfoMonoBehaviour[] choiceList;

    public void LoadData(StoryTreeNodeInfo data, NodeInfoMonoBehaviour[] _choiceList)
    {
        dialogueText = data.dialogueText;
        place = data.place;
        textToBeChose = data.textToBeChose;
        visibilitys = data.visibilitys;
        choiceList = _choiceList;
    }
}
