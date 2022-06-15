using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using static Enums;

public class EntranceAction : StepAction
{
    public override void Initialize(GameStateSystem gameStateSystem)
    {
        base.Initialize(gameStateSystem);

        actionData = LoadFromFile<ActionData>(GetType().ToString());

        Instantiate(actionData.prefabs[0].prefab, Vector3.zero, Quaternion.identity);

        StartCoroutine(DialogueManager._dialogueInstance.PlayDialogue(actionData.dialogues["First"]));

        Button btn = UIManager.ActionButton;

        TextMeshProUGUI btnText = btn.GetComponentInChildren<TextMeshProUGUI>();
        btnText.text = "Take the medecinal jar";

        btn.onClick.AddListener(() => ActionButtonClicked());
    }

    private void ActionButtonClicked()
    {
        AR arState = GameStateSystem.GetState() as AR;

        arState._inventory.AddItem(new Item { itemType = ItemType.Jar });
    }
}
