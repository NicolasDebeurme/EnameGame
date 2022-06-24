using Niantic.ARDK.AR.WayspotAnchors;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using static Enums;

public class BenchAction : StepAction
{
    private bool isGunTaken=false;
    private GameObject pistol;

    public override void Initialize(GameStateSystem gameStateSystem)
    {
        base.Initialize(gameStateSystem,this);

        ArState.textPanel.GetComponentsInChildren<TextMeshProUGUI>()[0].text = "HelloWorld";

        pistol = Instantiate(actionData.prefabs[0].prefab, Vector3.zero, Quaternion.identity);


        StartCoroutine(DialogueManager._dialogueInstance.PlayDialogue(actionData.dialogues["First"]));

        if(gameStateSystem._playerRole == Roles.RandomMan)
            ArState.textPanel.GetComponentsInChildren<TextMeshProUGUI>()[1].text = "Search for the gun and take it";
        else
            ArState.textPanel.GetComponentsInChildren<TextMeshProUGUI>()[1].text = "Wait for the other player to tkae the gun";
    }

    private void Update()
    {
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
                    if (pistol != null) // hit.transform.tag = " ..."
                    {
                        isGunTaken = true;
                        pistol.OnRayHit();
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
                    if (jar != null) // hit.transform.tag = " ..."
                    {
                        jar.OnRayHit();
                    }
                }
            }
        }
#endif
    }

    private void OnDestroy()
    {
        Destroy(pistol);
    }
}
