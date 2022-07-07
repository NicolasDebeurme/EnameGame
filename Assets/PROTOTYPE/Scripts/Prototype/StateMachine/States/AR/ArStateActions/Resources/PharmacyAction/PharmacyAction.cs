using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using static Enums;

public class PharmacyAction : StepAction
{
    private bool isJarHit=false;

    private ItemWorld _jar = null;

    public override void Initialize(GameStateSystem gameStateSystem)
    {
        base.Initialize(gameStateSystem, this);

        ArState.textPanel.GetComponentsInChildren<TextMeshProUGUI>()[0].text = "Pharmacy";
        ArState.textPanel.GetComponentsInChildren<TextMeshProUGUI>()[1].text = "Search for the medecine jar";

    }

    private bool isYes;
    public override IEnumerator ShowDecisionResult(int indexOfDecison)
    {
        DialogueManager._dialogueInstance.DialogueEnded += OnActionEnded;
        if(indexOfDecison == 0)
        {
            if(GameStateSystem.inventory.TryRemoveItemOfType(ItemType.Jar))
            {
                _jar?.GetComponent<Animator>().SetTrigger("Change");
                DialogueManager._dialogueInstance.EnqueueDialogue(actionData.dialogues["Swap"]);
                isYes = true;
            }
            else
            {
                indexOfDecison = 1;
                isYes = false;
                DialogueManager._dialogueInstance.EnqueueDialogue(actionData.dialogues["NoJar"]);
            }
        }
        else
        {
            isYes = false;
            DialogueManager._dialogueInstance.EnqueueDialogue(actionData.dialogues["NoSwap"]);
        }

        yield break;
    }

    public override IEnumerator OnActionEnded()
    {
        DialogueManager._dialogueInstance.DialogueEnded -= OnActionEnded;
        Debug.Log("ActionEnded");
        yield return new WaitForSeconds(2f);

        DestroySelf();
        if(isYes)
            NetworkingManager.BroadCastChoice(0, TypeOfChoice.HasSwap);
        else
            NetworkingManager.BroadCastChoice(1, TypeOfChoice.HasSwap);
    }
    private void Update()
    {
        if (GameStateSystem._playerRole == Roles.Alchemist && !isJarHit)
        {
            MakeRaycast();
        }
    }

    private void MakeRaycast()
    {
#if UNITY_EDITOR
        if (Input.GetMouseButtonDown(0))
        {
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            RaycastHit hit;
            Debug.DrawRay(ray.origin, ray.direction * 20, Color.white, 1);
            if (Physics.Raycast(ray, out hit, 100))
            {
                Debug.Log("Touch " + hit.transform.gameObject.name);
                if (hit.collider != null)
                {
                    Debug.Log("Touch " + hit.transform.gameObject.name);

                    if (hit.transform.TryGetComponent(out _jar)) // hit.transform.tag = " ..."
                    {
                        CleanJarHit();
                        isJarHit = true;
                    }
                }
            }

        }
#else
        if (Input.touchCount > 0 && Input.touches[0].phase == TouchPhase.Began)
        {
            Ray ray = Camera.main.ScreenPointToRay(Input.touches[0].position);
            RaycastHit hit;

            if (Physics.Raycast(ray, out hit))
            {
                if (hit.collider != null)
                {
                    Debug.Log("Touch " + hit.transform.gameObject.name);

                    if (hit.transform.TryGetComponent(out _jar)) // hit.transform.tag = " ..."
                    {
                        CleanJarHit();
                        isJarHit = true;
                    }
                }
            }
        }
#endif
    }

    private void CleanJarHit()
    {
        GameManager.Instance.BroadcastNextState();
    }
}
