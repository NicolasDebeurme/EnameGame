using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using static Enums;

public class Saint_AnthonyAction : StepAction
{
    bool DontSwap = !GameManager.Instance.HasSwap;
    bool DontDenonce = !GameManager.Instance.HasDenounce;
    bool DontShoot= !GameManager.Instance.HasShoot;



    public override void Initialize(GameStateSystem gameStateSystem)
    {
        base.Initialize(gameStateSystem, this );


        if (gameStateSystem._playerRole == Roles.RandomMan)
            //StartCoroutine(DialogueManager._dialogueInstance.PlayDialogue(actionData.dialogues["FirstPoliceman"]));
        else
            //StartCoroutine(DialogueManager._dialogueInstance.PlayDialogue(actionData.dialogues["FirstAlchemist"]));

        if (DontSwap)
        {
            if (DontDenonce)
            {
                if (DontShoot)
                {
                    StartCoroutine(DialogueManager._dialogueInstance.PlayDialogue(actionData.dialogues["Ending1"]));
                }
                else
                {
                    StartCoroutine(DialogueManager._dialogueInstance.PlayDialogue(actionData.dialogues["Ending2"]));
                }
            }
            else
            {
                if (DontShoot)
                {
                    StartCoroutine(DialogueManager._dialogueInstance.PlayDialogue(actionData.dialogues["Ending3"]));
                }
                else
                {
                    StartCoroutine(DialogueManager._dialogueInstance.PlayDialogue(actionData.dialogues["Ending4"]));
                }
            }
        }
        else
        {
            if (DontDenonce)
            {
                if (DontShoot)
                {
                    StartCoroutine(DialogueManager._dialogueInstance.PlayDialogue(actionData.dialogues["Ending5"]));
                }
                else
                {
                    StartCoroutine(DialogueManager._dialogueInstance.PlayDialogue(actionData.dialogues["Ending6"]));
                }
            }
            else
            {
                if (DontShoot)
                {
                    StartCoroutine(DialogueManager._dialogueInstance.PlayDialogue(actionData.dialogues["Ending7"]));
                }
                else
                {
                    StartCoroutine(DialogueManager._dialogueInstance.PlayDialogue(actionData.dialogues["Ending8"]));
                }
            }
        }


    }
}
