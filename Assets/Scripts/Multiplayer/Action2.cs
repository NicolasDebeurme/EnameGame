using Niantic.ARDKExamples;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class Action2 : Action
{
    public override void OnStart()
    {
        if (ImageDetection.instance.newPlane != null)
        {
            ImageDetection.instance.newPlane.GetComponent<Animator>().SetInteger("choice", 2);
        }
        else
        {
            Debug.Log("Action2Null");
        }
    }

    public override void  OnUpdate()
    {


    }
}
