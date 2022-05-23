using Niantic.ARDKExamples;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class Action1 : Action
{
    public override void OnStart()
    {
        if (ImageDetection.instance.newPlane != null)
        {
            ImageDetection.instance.newPlane.GetComponent<Animator>().SetInteger("choice", 1);

        }
    }

    public override void  OnUpdate()
    {


    }
}
