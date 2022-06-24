using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AbbeyCourtyardAction : StepAction
{
    GameObject abbey = null;
    public override void Initialize(GameStateSystem gameStateSystem)
    {
        base.Initialize(gameStateSystem);

        abbey = Instantiate(actionData.prefabs[0].prefab, Vector3.zero, Quaternion.identity);

        StartCoroutine(DialogueManager._dialogueInstance.PlayDialogue(actionData.dialogues["First"]));

    }


    private void OnDestroy()
    {
        Destroy(abbey);
    }
}
