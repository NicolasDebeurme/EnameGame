using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Niantic.ARDK.Extensions;
using TMPro;
using static Enums;

public class PiloriAction : StepAction
{
    GameObject baker;   
    public override void Initialize(GameStateSystem gameStateSystem)
    {
        base.Initialize(gameStateSystem,this);

        ArState.textPanel.GetComponentsInChildren<TextMeshProUGUI>()[0].text = "Pilori..";

        ArState.textPanel.GetComponentsInChildren<TextMeshProUGUI>()[1].text = "The Baker have something to tell you";

        /*
        Camera.main.GetComponent<ARDepthManager>().enabled = true;
        Camera.main.GetComponent<ARDepthInterpolationAdapter>().enabled = true;

        baker = GameObject.Find("Baker");
        Camera.main.GetComponent<ARDepthInterpolationAdapter>().TrackOccludee(baker.GetComponent<Renderer>());
        


        //baker = Instantiate(actionData.prefabs[0].prefab, Vector3.zero, Quaternion.identity);

        StartCoroutine(DialogueManager._dialogueInstance.PlayDialogue(actionData.dialogues["Baker"]));
        */
    }


    private void OnDestroy()
    {
        /*
        Camera.main.GetComponent<ARDepthManager>().enabled = false;
        Camera.main.GetComponent<ARDepthInterpolationAdapter>().enabled = false;
        */
    }


}
