using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public enum Role
{
    None,
    Monk,
    Alchemist,
    Adult,
    Child
}

public class ChoiceTest : MonoBehaviour
{
    public TextMeshProUGUI textDialogueText;
    public Button Button1;
    public Button Button2;
    public Role YourRole;

    public ChoiceClass1 choice;
    public ChoiceClass1 MemoryChoice;

    void Start()
    {
        /*
        if (YourRole==choice.ActiveFor)
        {
            MemoryChoice = choice;
            textDialogueText.text = choice.DialogueText;
            Button1.GetComponentInChildren<TextMeshProUGUI>().text = choice.Button1Text;
            Button2.GetComponentInChildren<TextMeshProUGUI>().text = choice.Button2Text;
        }
        */

    }

    void Update()
    {

    }
    /*
    public void OnClickButton1()
    {
        if (YourRole == choice.ActiveFor)
        {
            choice = choice.Choice1.choice;
            choice.isActiveChoice = true;
            textDialogueText.text = choice.DialogueText;
            Button1.GetComponentInChildren<TextMeshProUGUI>().text = choice.Button1Text;
            Button2.GetComponentInChildren<TextMeshProUGUI>().text = choice.Button2Text;
        }
    }
    public void OnClickButton2()
    {
        if (YourRole == choice.ActiveFor)
        {
            choice = choice.Choice2.choice;
            choice.isActiveChoice = true;
            textDialogueText.text = choice.DialogueText;
            Button1.GetComponentInChildren<TextMeshProUGUI>().text = choice.Button1Text;
            Button2.GetComponentInChildren<TextMeshProUGUI>().text = choice.Button2Text;
        }
    }

    public void OnClickReset()
    {
        choice = MemoryChoice;
        if (YourRole == choice.ActiveFor)
        {
            textDialogueText.text = choice.DialogueText;
            Button1.GetComponentInChildren<TextMeshProUGUI>().text = choice.Button1Text;
            Button2.GetComponentInChildren<TextMeshProUGUI>().text = choice.Button2Text;
        }
            
    }*/
}
