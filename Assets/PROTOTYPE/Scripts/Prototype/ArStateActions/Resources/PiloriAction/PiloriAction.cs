using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Niantic.ARDK.Extensions;

public class PiloriAction : StepAction
{
    GameObject baker;   
    public override void Initialize(GameStateSystem gameStateSystem)
    {
        base.Initialize(gameStateSystem,this);

        Camera.main.GetComponent<ARDepthManager>().enabled = true;
        Camera.main.GetComponent<ARDepthInterpolationAdapter>().enabled = true;

        baker = GameObject.Find("Baker");
        Camera.main.GetComponent<ARDepthInterpolationAdapter>().TrackOccludee(baker.GetComponent<Renderer>());
        


        //baker = Instantiate(actionData.prefabs[0].prefab, Vector3.zero, Quaternion.identity);

        //StartCoroutine(DialogueManager._dialogueInstance.PlayDialogue(actionData.dialogues["First"]));

    }


    private void OnDestroy()
    {
        Camera.main.GetComponent<ARDepthManager>().enabled = false;
        Camera.main.GetComponent<ARDepthInterpolationAdapter>().enabled = false;
    }


}
