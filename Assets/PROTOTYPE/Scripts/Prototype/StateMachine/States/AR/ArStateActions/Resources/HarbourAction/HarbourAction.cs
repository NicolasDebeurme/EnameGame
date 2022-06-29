using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using static Enums;
using TMPro;
using System;

public class HarbourAction : StepAction
{
    public GameObject pistol = null;
    Camera cam = null;
    GameObject boat = null;

    private float ShootDistance = 100f;
    public int numberBullet = 5;
    private bool hasTouch = false;

    private bool doOne = true;

    [Header("UI")]
    Button ShootButton;

    private LayerMask hitMask = 1<<6;


    public override void Initialize(GameStateSystem gameStateSystem)
    {
        base.Initialize(gameStateSystem, this );


        ArState.textPanel.GetComponentsInChildren<TextMeshProUGUI>()[0].text = "Harbour..";
        ArState.textPanel.GetComponentsInChildren<TextMeshProUGUI>()[1].text = "You have the choice to fire the boat or not";

        gameStateSystem.inventory.OnItemHanded += GetPistol;

        cam = Camera.main;
        //boat = GameObject.Find("Boat");
        boat = AnchorsPrefab[0];
        if (boat!= null)
        {
            Debug.Log(boat.name);
            Debug.Log("__________________________________");
        }
        else
        {
            Debug.Log("BOAT NULLLLLLLLLLLLLLLL");
            Debug.Log("__________________________________");

        }
        ShootButton = ArState._view.shootButton.GetComponent<Button>(); 
        ShootButton.onClick.AddListener(() => OnClickShoot());

        //pistol = Instantiate(actionData.prefabs[0].prefab, Vector3.zero, Quaternion.identity, cam.transform);
        //pistol.transform.localPosition = new Vector3(0.089f, -0.12f, 0.445f);

        DialogueManager._dialogueInstance.EnqueueDialogue(actionData.dialogues["First"]);
    }

    private void GetPistol(object sender, Item _item)
    {
        if (_item.itemWorld.transform.gameObject != null)
        {
            pistol = _item.itemWorld.transform.gameObject;
            Debug.Log(pistol.name);
            Debug.Log("_________");
        }
    }

    void Update()
    {
#if !UNITY_EDITOR
        if (hasTouch)
        {
            //Boat.transform.position = Vector3.Lerp(Boat.transform.position, BoatUnderWaterPosition.position, Time.deltaTime);
            boat.transform.GetChild(0).gameObject.transform.position -= new Vector3(0, 0.005f, 0);
            if (doOne)
            {
                DialogueManager._dialogueInstance.EnqueueDialogue(actionData.dialogues["hasTouch"]);
                        DialogueManager._dialogueInstance.DialogueEnded += OnActionEnded;
                doOne = false;
            }

        }
#endif
    }
    public void OnClickShoot()
    {
        Debug.Log("ShootHa");
        pistol.GetComponent<Animator>().SetTrigger("shoot");
        if (numberBullet >= 1)
        {
            RaycastHit hit;
            if (Physics.Raycast(cam.transform.position, cam.transform.forward, out hit, ShootDistance, hitMask))  // Layer 6 = Boat
            {
                Debug.Log("Shhoot");
                Debug.Log("_________");
                //Debug.DrawLine(cam.transform.position, cam.transform.position + cam.transform.forward * ShootDistance, Color.white, 0.5f);
                //GameObject PrefabObjectImpactClone = Instantiate(PrefabObjectImpact, ContenaireObjectImpact);
                //PrefabObjectImpactClone.transform.position = hit.point;
                //PrefabObjectImpactClone.transform.rotation = Quaternion.Euler(hit.normal);
                //Debug.Log(hit.normal);

                if (hit.transform.gameObject == boat)
                {
                    Debug.Log("Touch The Boat ");
                    Debug.Log("________________________________");
                    hasTouch = true;
                }


            }
            numberBullet--;
        }
        
    }



    private void OnDestroy()
    {
        Destroy(pistol);
        //Destroy(boat);
    }
}
