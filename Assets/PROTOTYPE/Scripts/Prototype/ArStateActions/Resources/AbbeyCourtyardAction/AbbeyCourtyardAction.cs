using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static Enums;
using TMPro;

public class AbbeyCourtyardAction : StepAction
{
    
    public override void Initialize(GameStateSystem gameStateSystem)
    {
        base.Initialize(gameStateSystem, this);

        DialogueManager._dialogueInstance.EnqueueDialogue(actionData.dialogues["First"]);
    }


    private void OnDestroy()
    {
        
    }
}
