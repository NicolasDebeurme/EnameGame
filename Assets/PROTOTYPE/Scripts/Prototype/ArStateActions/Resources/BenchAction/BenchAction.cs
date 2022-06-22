using Niantic.ARDK.AR.WayspotAnchors;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BenchAction : StepAction
{
    GameObject pistol = null;
    public override void Initialize(GameStateSystem gameStateSystem)
    {
        base.Initialize(gameStateSystem);

        actionData = LoadFromFile<ActionData>(GetType().ToString());

        ArState.wayspotService.LoadPayloads(actionData.payloads);
    }

    private void Update()
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
                    if (jar != null) // hit.transform.tag = " ..."
                    {
                        jar.OnRayHit();
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
