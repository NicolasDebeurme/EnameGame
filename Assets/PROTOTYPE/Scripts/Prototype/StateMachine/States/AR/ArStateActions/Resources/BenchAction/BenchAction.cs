using Niantic.ARDK.AR.WayspotAnchors;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using static Enums;

public class BenchAction : StepAction
{
    private bool isGunTaken=false;
    

    public override void Initialize(GameStateSystem gameStateSystem)
    {
        base.Initialize(gameStateSystem,this);

        ArState.textPanel.GetComponentsInChildren<TextMeshProUGUI>()[0].text = "Bench...";


        if (gameStateSystem._playerRole == Roles.RandomMan)
            ArState.textPanel.GetComponentsInChildren<TextMeshProUGUI>()[1].text = "Search for the gun and take it";
        else
            ArState.textPanel.GetComponentsInChildren<TextMeshProUGUI>()[1].text = "Wait for the other player to take the gun";
    }
    

    private void Update()
    {
        AnchorsPrefab[0].transform.GetChild(0).transform.localPosition = new Vector3(Ajustement.instance.SliderX.value, Ajustement.instance.SliderY.value, Ajustement.instance.SliderZ.value);

        if (isGunTaken)
            return;

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

                    ItemWorld pistol = hit.transform.GetComponent<ItemWorld>();
                    if (pistol != null && GameStateSystem._playerRole == Roles.RandomMan) // hit.transform.tag = " ..."
                    {
                        isGunTaken = true;
                        pistol.OnRayHitAddItem();
                        DialogueManager._dialogueInstance.EnqueueDialogue(actionData.dialogues["GunTaken"]);
                        DialogueManager._dialogueInstance.DialogueEnded += OnActionEnded;
                        AudioManager.Instance.Play("Collect");
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

                    ItemWorld pistol = hit.transform.GetComponent<ItemWorld>();
                    if (pistol != null && GameStateSystem._playerRole == Roles.RandomMan) // hit.transform.tag = " ..."
                    {
                        isGunTaken = true;
                        pistol.OnRayHitAddItem();
                        DialogueManager._dialogueInstance.EnqueueDialogue(actionData.dialogues["GunTaken"]);
                        DialogueManager._dialogueInstance.DialogueEnded += OnActionEnded;
                        AudioManager.Instance.Play("Collect");
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
