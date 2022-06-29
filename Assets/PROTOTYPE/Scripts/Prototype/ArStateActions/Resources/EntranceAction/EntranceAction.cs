using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using static Enums;

public class EntranceAction : StepAction
{
    private bool isJarTaken = false;
    public override void Initialize(GameStateSystem gameStateSystem)
    {
        base.Initialize(gameStateSystem,this);

        //StartCoroutine(DialogueManager._dialogueInstance.PlayDialogue(actionData.dialogues["JarTaken"]));

        ArState.textPanel.GetComponentsInChildren<TextMeshProUGUI>()[0].text = "Entrance..";

        if (gameStateSystem._playerRole == Roles.Alchemist)
            ArState.textPanel.GetComponentsInChildren<TextMeshProUGUI>()[1].text = "Search for the jar and take it";
        else
            ArState.textPanel.GetComponentsInChildren<TextMeshProUGUI>()[1].text = "Wait for the other player to take the jar";
    }

    private void Update()
    {
        if(GameStateSystem._playerRole == Roles.Alchemist && !isJarTaken)
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
            Debug.Log("Touch ");
            Debug.DrawRay(ray.origin, ray.direction * 20, Color.white, 1);
            if (Physics.Raycast(ray, out hit, 100))
            {
                Debug.Log("Touch " + hit.transform.gameObject.name);
                if (hit.collider != null)
                {
                    Debug.Log("Touch " + hit.transform.gameObject.name);

                    ItemWorld jar = hit.transform.GetComponent<ItemWorld>();
                    if (jar != null && GameStateSystem._playerRole == Roles.Alchemist) // hit.transform.tag = " ..."
                    {
                        jar.OnRayHit();
                        isJarTaken = true;
                        DialogueManager._dialogueInstance.EnqueueDialogue(actionData.dialogues["JarTaken"]);
                        DialogueManager._dialogueInstance.DialogueEnded += OnActionEnded;
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

                    ItemWorld jar = hit.transform.GetComponent<ItemWorld>();
                    if (jar != null && GameStateSystem._playerRole == Roles.Alchemist) // hit.transform.tag = " ..."
                    {
                        jar.OnRayHit();
                        isJarTaken = true;
                        DialogueManager._dialogueInstance.EnqueueDialogue(actionData.dialogues["JarTaken"]);
                    }
                }
            }
        }
#endif
    }
    private void OnDestroy()
    {
        
    }
}
