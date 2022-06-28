using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using static Enums;
using TMPro;

public class HarbourAction : StepAction
{
    GameObject pistol = null;
    Camera cam = null;
    GameObject boat = null;

    private float ShootDistance = 10f;
    public int numberBullet = 5;
    private bool hasTouch = false;

    [Header("UI")]
    public Image Reticule;
    public Button ShootButton;




    public override void Initialize(GameStateSystem gameStateSystem)
    {
        base.Initialize(gameStateSystem, this );
        /*
        cam = Camera.main;
        boat = GameObject.Find("Boat");

        ShootButton.onClick.AddListener(() => OnClickShoot());

        pistol = Instantiate(actionData.prefabs[0].prefab, Vector3.zero, Quaternion.identity, cam.transform);
        pistol.transform.localPosition = new Vector3(0.089f, -0.12f, 0.445f);
        //boat = Instantiate(actionData.prefabs[1].prefab, Vector3.zero, Quaternion.identity);

        */

        DialogueManager._dialogueInstance.EnqueueDialogue(actionData.dialogues["First"]);
    }

    void Update()
    {
        if (hasTouch)
        {
            //Boat.transform.position = Vector3.Lerp(Boat.transform.position, BoatUnderWaterPosition.position, Time.deltaTime);
            boat.transform.position -= new Vector3(0, 0.005f, 0);
        }
    }
    public void OnClickShoot()
    {
        pistol.GetComponent<Animator>().SetTrigger("shoot");
        if (numberBullet >= 1)
        {
            RaycastHit hit;
            if (Physics.Raycast(cam.transform.position, cam.transform.forward, out hit, ShootDistance))
            {
                Debug.Log("Shhoot");
                Debug.DrawLine(cam.transform.position, cam.transform.position + cam.transform.forward * ShootDistance, Color.white, 0.5f);
                //GameObject PrefabObjectImpactClone = Instantiate(PrefabObjectImpact, ContenaireObjectImpact);
                //PrefabObjectImpactClone.transform.position = hit.point;
                //PrefabObjectImpactClone.transform.rotation = Quaternion.Euler(hit.normal);
                //Debug.Log(hit.normal);

                if (hit.transform.gameObject == boat)
                {
                    Debug.Log("Touch The Boat ");
                    hasTouch = true;
                }


            }
            numberBullet--;
            if (numberBullet == 0)
            {
                
            }
        }
        else
        {

        }
    }
    private void OnDestroy()
    {
        Destroy(pistol);
        //Destroy(boat);
    }
}
