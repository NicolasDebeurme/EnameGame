using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using static Enums;
using TMPro;
using System;
using Niantic.ARDK.Extensions;

public class HarbourAction : StepAction
{
    public Item pistol = null;
    Camera cam = null;
    GameObject boat = null;

    private float ShootDistance = 100f;
    private int numberBullet = 5;

    Button ShootButton;

    private LayerMask hitMask = 1<<6;
    private ARView _view;
    private bool isBeforeChoice = true;
    private bool isBoatShooted = false;
    private TextMeshProUGUI _textInfo;

    public override void Initialize(GameStateSystem gameStateSystem)
    {
        base.Initialize(gameStateSystem, this );

        ArState.textPanel.GetComponentsInChildren<TextMeshProUGUI>()[0].text = "Harbour";
        _textInfo = ArState.textPanel.GetComponentsInChildren<TextMeshProUGUI>()[1];
        cam = Camera.main;
        boat = AnchorsPrefab[0];

        pistol = GameStateSystem.inventory.GetItemOfType(ItemType.Pistol);

        if(pistol != null)
        {
            _textInfo.text = "Should we shoot the boat ?";

            ShootButton = ArState._view.shootButton.GetComponent<Button>();
            ShootButton.onClick.AddListener(() => OnClickShoot());

            DialogueManager._dialogueInstance.EnqueueDialogue(actionData.dialogues["HarbourEntrance"]);
            DialogueManager._dialogueInstance.DialogueEnded += OnActionEnded;
        }
        else
        {
            _textInfo.text = "You don't have any pistol ..";

            StartCoroutine(OnActionEnded());
        }

        Camera.main.GetComponent<ARDepthManager>().enabled = true;
        Renderer[] rd = AnchorsPrefab[0].GetComponentsInChildren<Renderer>();

        for (int i = 0; i < rd.Length; i++)
        {
            Camera.main.gameObject.AddComponent<ARDepthInterpolationAdapter>().TrackOccludee(rd[i]);
        }


    }

    public void OnClickShoot()
    {
        if (numberBullet >= 1 && !isBoatShooted)
        {
            Debug.Log("ShootHa");
            pistol.itemWorld.transform.gameObject.GetComponent<Animator>().SetTrigger("shoot");
            if (Physics.Raycast(cam.transform.position, cam.transform.forward, out RaycastHit hit, ShootDistance, hitMask))  // Layer 6 = Boat
            {
                Debug.Log("Shhoot");
                Debug.Log("_________");
                //Debug.DrawLine(cam.transform.position, cam.transform.position + cam.transform.forward * ShootDistance, Color.white, 0.5f);
                //GameObject PrefabObjectImpactClone = Instantiate(PrefabObjectImpact, ContenaireObjectImpact);
                //PrefabObjectImpactClone.transform.position = hit.point;
                //PrefabObjectImpactClone.transform.rotation = Quaternion.Euler(hit.normal);
                //Debug.Log(hit.normal);

                isBoatShooted = true;
                StartCoroutine(DrownBoat());
            }
            numberBullet--;
        }
        else
        {
            //DIALOGUE PLUS DE BALLES DONC BATEAU PAS COULE--------------------------------
            DialogueManager._dialogueInstance.EnqueueDialogue(actionData.dialogues["hasNoMoreBullets"]);
            Debug.Log("No more bullets");
        }
    }

    public override IEnumerator ShowDecisionResult(int indexOfDecison)
    {

        if(indexOfDecison ==0)
        {
            _view = UIManager.Show<ARView>();
            isBeforeChoice = false;
            GameStateSystem.inventory.ItemClicked(pistol);
            _view.UpdateItemUI(pistol);
            ShootButton.gameObject.SetActive(true);
            _textInfo.text = "Aim and shoot the boat !";
        }
        else
        {
            yield return new WaitForSeconds(3f);
            //DIALOGUE A DIT NON POUR COULE LE BATEAU--------------------------------
            DialogueManager._dialogueInstance.EnqueueDialogue(actionData.dialogues["No"]);
        }
        yield break;
    }

    private IEnumerator DrownBoat()
    {
        while (boat.transform.GetChild(0).position.y > -2f)
        {
            boat.transform.GetChild(0).gameObject.transform.position -= new Vector3(0, 0.05f, 0);
            yield return new WaitForSeconds(0.05f);
        }

        GameStateSystem.inventory.ItemClicked(pistol);
        _view.UpdateItemUI(pistol);
        ShootButton.gameObject.SetActive(false);
        //DIALOGUE BATEAU COULE--------------------------------
        DialogueManager._dialogueInstance.EnqueueDialogue(actionData.dialogues["hasTouch"]);
    }
    public override IEnumerator OnActionEnded()
    {
        if (pistol == null)
        {
            yield return new WaitForSeconds(3f);
            DialogueManager._dialogueInstance.DialogueEnded -= OnActionEnded;
            NetworkingManager.BroadCastChoice(1, TypeOfChoice.HasShoot);

            DestroySelf();
        }
        else if(isBeforeChoice)
        {
            yield return new WaitForSeconds(2f);
            GameManager.Instance.BroadcastNextState();
        }
        else
        {
            DialogueManager._dialogueInstance.DialogueEnded -= OnActionEnded;
            GameStateSystem.inventory.TryRemoveItemOfType(ItemType.Pistol);
            if (isBoatShooted)
            {
                NetworkingManager.BroadCastChoice(0, TypeOfChoice.HasShoot);
            }
            else
            {
                NetworkingManager.BroadCastChoice(1, TypeOfChoice.HasShoot);
            }

            DestroySelf();
        }

        yield break;
    }


    private void OnDestroy()
    {
        

        Camera.main.GetComponent<ARDepthManager>().enabled = false;

        foreach (var Script in Camera.main.GetComponents<ARDepthInterpolationAdapter>())
        {
            Destroy(Script);
        }
    }

}
