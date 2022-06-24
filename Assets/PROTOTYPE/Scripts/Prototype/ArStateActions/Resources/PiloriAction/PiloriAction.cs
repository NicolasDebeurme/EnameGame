using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PiloriAction : StepAction
{
    GameObject baker = null;
    public override void Initialize(GameStateSystem gameStateSystem)
    {
        base.Initialize(gameStateSystem);

        baker = Instantiate(actionData.prefabs[0].prefab, Vector3.zero, Quaternion.identity);

        StartCoroutine(DialogueManager._dialogueInstance.PlayDialogue(actionData.dialogues["First"]));

    }


    private void OnDestroy()
    {
        Destroy(baker);
    }


}
