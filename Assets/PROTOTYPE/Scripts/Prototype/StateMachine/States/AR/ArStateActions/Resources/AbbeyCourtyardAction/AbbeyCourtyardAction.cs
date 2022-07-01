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

        ArState.textPanel.GetComponentsInChildren<TextMeshProUGUI>()[0].text = "Abbey Courtyard";
        ArState.textPanel.GetComponentsInChildren<TextMeshProUGUI>()[1].text = "The Abbey have something to tell you";

        DialogueManager._dialogueInstance.EnqueueDialogue(actionData.dialogues["First"]);
    }

    public void Update()
    {
        AnchorsPrefab[0].transform.GetChild(0).transform.localPosition = new Vector3(Ajustement.instance.SliderX.value, Ajustement.instance.SliderY.value, Ajustement.instance.SliderZ.value);
    }
    public override IEnumerator ShowDecisionResult(int indexOfDecison)
    {
        NetworkingManager.BroadCastChoice(indexOfDecison, TypeOfChoice.HasDenounce);
        DestroySelf();
        yield break;
    }
}
