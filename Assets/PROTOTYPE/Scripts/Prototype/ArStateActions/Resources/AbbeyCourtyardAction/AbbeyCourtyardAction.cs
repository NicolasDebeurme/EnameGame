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

        ArState.textPanel.GetComponentsInChildren<TextMeshProUGUI>()[0].text = "Abbey Courtyard..";
        ArState.textPanel.GetComponentsInChildren<TextMeshProUGUI>()[1].text = "The Abbey have something to tell you";

        DialogueManager._dialogueInstance.EnqueueDialogue(actionData.dialogues["First"]);
        DialogueManager._dialogueInstance.DialogueEnded += OnActionEnded;
    }


    private void OnDestroy()
    {
        
    }
}
