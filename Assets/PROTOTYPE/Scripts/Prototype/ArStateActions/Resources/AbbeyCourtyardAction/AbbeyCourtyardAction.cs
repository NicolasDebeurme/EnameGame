using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AbbeyCourtyardAction : StepAction
{
    
    public override void Initialize(GameStateSystem gameStateSystem)
    {
        base.Initialize(gameStateSystem);

        StartCoroutine(DialogueManager._dialogueInstance.PlayDialogue(actionData.dialogues["First"]));



    }


    private void OnDestroy()
    {
        
    }
}
