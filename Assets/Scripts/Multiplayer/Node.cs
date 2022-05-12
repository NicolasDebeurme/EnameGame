using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class Node: MonoBehaviour
{
    [Header("New")]
    public bool isActiveChoice = false;
    public Visibility visibilitys;
    public string DialogueText;

    public string Button1Text;
    public Node Choice1;

    public string Button2Text;
    public Node Choice2;

}