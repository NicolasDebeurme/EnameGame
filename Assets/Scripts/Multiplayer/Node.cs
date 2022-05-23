using Niantic.ARDKExamples;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

[System.Serializable]
public class Node: MonoBehaviour
{
    public Action action;

    [Header("New")]
    public bool isActiveChoice = false;
    public Visibility visibilitys;
    public string DialogueText;

    //public string Button1Text;
    //public Node Choice1;

    //public string Button2Text;
    //public Node Choice2;

    public Nodes[] NodesArray;

    private bool doOnce = true;
    public GameObject character;

    [Tooltip("Se remplit en play mode")]
    public Button[] ChoiceButton;

    public void Start()
    {
        ChoiceButton = PersistentKeyValueTree.instance.ButtonsChoice;
    }



    public void Update()
    {
        IsActiveChoiceUpdate();
    }


    public void IsActiveChoiceUpdate()
    {
        if (PersistentKeyValueTree.instance.Node == this && PersistentKeyValueTree.instance.YourRole!= Role.None) //Si ca a bien commencé
        {
            isActiveChoice = true;
        }
        else
        {
            isActiveChoice = false;
        }


        if (isActiveChoice && doOnce) // RealStart
        {
            doOnce = false;
            for (int i = 0; i < PersistentKeyValueTree.instance.ButtonsChoice.Length; i++)
            {
                PersistentKeyValueTree.instance.ButtonsChoice[i].gameObject.SetActive(false);
            }
            for (int i = 0; i < NodesArray.Length; i++)
            {
                PersistentKeyValueTree.instance.ButtonsChoice[i].gameObject.SetActive(true);
            }

            if (action!=null)
            {
                action.OnStart();
            }
            else
            {
                Debug.Log("actionStartNull");
            }

        }
        if (!isActiveChoice)
        {
            doOnce = true;
        }
        if (isActiveChoice)  //Update
        {
            if (action != null)
            {
                action.OnUpdate();
            }
            else
            {
                //Debug.Log("actionUpdateNull");
            }
        }

    }




}

[System.Serializable]
public class Nodes
{
    public string ButtonText;
    public Node Choice;
}
