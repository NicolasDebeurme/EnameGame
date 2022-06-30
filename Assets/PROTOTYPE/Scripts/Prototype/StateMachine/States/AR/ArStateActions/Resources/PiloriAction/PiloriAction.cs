using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Niantic.ARDK.Extensions;
using TMPro;
using static Enums;
using System;

public class PiloriAction : StepAction
{
    GameObject baker;
    public override void Initialize(GameStateSystem gameStateSystem)
    {
        base.Initialize(gameStateSystem,this);

        ArState.textPanel.GetComponentsInChildren<TextMeshProUGUI>()[0].text = "Pilori..";
        ArState.textPanel.GetComponentsInChildren<TextMeshProUGUI>()[1].text = "The Baker have something to tell you";

        Camera.main.GetComponent<ARDepthManager>().enabled = true;

#if !UNITY_EDITOR
        baker = GameObject.Find("Baker");

        baker = AnchorsPrefab[0];

        Renderer[] rd = baker.GetComponentsInChildren<Renderer>();
        
        for (int i = 0; i < rd.Length; i++)
        {
            Camera.main.gameObject.AddComponent<ARDepthInterpolationAdapter>().TrackOccludee(rd[i]);
        }
#endif
        //Camera.main.GetComponent<ARDepthInterpolationAdapter>().TrackOccludee(baker.GetComponent<Renderer>());

        DialogueManager._dialogueInstance.EnqueueDialogue(actionData.dialogues["Baker"]);
        DialogueManager._dialogueInstance.DialogueEnded += OnActionEnded;
    }

    private void OnDestroy()
    {
        Camera.main.GetComponent<ARDepthManager>().enabled = false;

        foreach (var Script in Camera.main.GetComponents<ARDepthInterpolationAdapter>())
        {
            Destroy(Script);
        }

    }


}
