using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HarbourAction : StepAction
{
    GameObject pistol = null;
    GameObject boat = null;
    public override void Initialize(GameStateSystem gameStateSystem)
    {
        base.Initialize(gameStateSystem);

        pistol = Instantiate(actionData.prefabs[0].prefab, Vector3.zero, Quaternion.identity);
        boat = Instantiate(actionData.prefabs[1].prefab, Vector3.zero, Quaternion.identity);

        StartCoroutine(DialogueManager._dialogueInstance.PlayDialogue(actionData.dialogues["First"]));

    }


    private void OnDestroy()
    {
        Destroy(pistol);
        Destroy(boat);
    }
}
