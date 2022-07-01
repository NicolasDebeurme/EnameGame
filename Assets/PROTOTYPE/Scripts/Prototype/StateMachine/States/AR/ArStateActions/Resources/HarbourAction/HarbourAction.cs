using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using static Enums;
using TMPro;
using System;

public class HarbourAction : StepAction
{
    public Item pistol = null;
    Camera cam = null;
    GameObject boat = null;

    private float ShootDistance = 100f;
    private int numberBullet = 5;
    private bool hasTouch = false;
    private bool doOne = true;

    Button ShootButton;

    private LayerMask hitMask = 1<<6;

    private bool isBeforeChoice = true;
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

            DialogueManager._dialogueInstance.EnqueueDialogue(actionData.dialogues["First"]);
            DialogueManager._dialogueInstance.DialogueEnded += OnActionEnded;
        }
        else
        {
            _textInfo.text = "You don't have any pistol ..";

            StartCoroutine(OnActionEnded());
        }
    }

    void Update()
    {
        //if (hasTouch)
        //{
        //    //Boat.transform.position = Vector3.Lerp(Boat.transform.position, BoatUnderWaterPosition.position, Time.deltaTime);
        //    boat.transform.GetChild(0).gameObject.transform.position -= new Vector3(0, 0.005f, 0);
        //    if (doOne)
        //    {
        //        DialogueManager._dialogueInstance.EnqueueDialogue(actionData.dialogues["hasTouch"]);
        //        doOne = false;
        //    }
        //}
    }
    public void OnClickShoot()
    {
        Debug.Log("ShootHa");
        pistol.itemWorld.transform.gameObject.GetComponent<Animator>().SetTrigger("shoot");
        if (numberBullet >= 1)
        {
            if (Physics.Raycast(cam.transform.position, cam.transform.forward, out RaycastHit hit, ShootDistance, hitMask))  // Layer 6 = Boat
            {
                Debug.Log("Shhoot");
                Debug.Log("_________");
                //Debug.DrawLine(cam.transform.position, cam.transform.position + cam.transform.forward * ShootDistance, Color.white, 0.5f);
                //GameObject PrefabObjectImpactClone = Instantiate(PrefabObjectImpact, ContenaireObjectImpact);
                //PrefabObjectImpactClone.transform.position = hit.point;
                //PrefabObjectImpactClone.transform.rotation = Quaternion.Euler(hit.normal);
                //Debug.Log(hit.normal);

                Boat boat = hit.transform.GetComponent<Boat>();

                if (boat != null)
                {
                    boat.StartCoroutine(boat.Drown());
                    hasTouch = true;
                }
            }
            numberBullet--;
        }
    }

    public override IEnumerator ShowDecisionResult(int indexOfDecison)
    {
        UIManager.Show<ARView>();

        isBeforeChoice = false;
        GameStateSystem.inventory.ItemClicked(pistol);
        ShootButton.gameObject.SetActive(true);
        _textInfo.text = "Aim and shoot the boat !";

        NetworkingManager.BroadCastChoice(indexOfDecison, TypeOfChoice.HasShoot);
        yield break;
    }

    public override IEnumerator OnActionEnded()
    {
        if(pistol == null)
        {
            yield return new WaitForSeconds(3f);
            NetworkingManager.BroadCastChoice(2, TypeOfChoice.HasSwap);
        }
        else if(isBeforeChoice)
        {
            yield return new WaitForSeconds(2f);
            GameManager.Instance.BroadcastNextState();
        }
        else
        {

        }
        yield break;
    }
    private void OnDestroy()
    {
        if(pistol != null)
            Destroy(pistol.itemWorld.transform.gameObject);

    }
}
