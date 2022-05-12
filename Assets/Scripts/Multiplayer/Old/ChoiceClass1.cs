using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class ChoiceClass1 
{
    [Header("New")]
    public bool isActiveChoice = false;
    public Visibility visibilitys;
    public string DialogueText;

    public string Button1Text;
    public ChoiceClass2 Choice1;

    public string Button2Text;
    public ChoiceClass2 Choice2;
       
}