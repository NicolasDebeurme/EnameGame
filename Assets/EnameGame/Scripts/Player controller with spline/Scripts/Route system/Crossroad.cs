using System.Collections.Generic;
using UnityEngine;
using TMPro;
using PlayerController;
using System.Collections;
using System.Linq;
using System;

[RequireComponent(typeof(CapsuleCollider))]
public class CrossroadChoice
{
    public RoutePicker Route { get; private set; }

    public float Angle { get; private set; }

    public bool IsActive { get; private set; }

    public GameObject Visual { get; private set; }
    
    public CrossroadChoice(RoutePicker route, float angle, GameObject visual, bool isActive = false)
    {
        Route = route;
        Angle = angle;
        Visual = visual;
        IsActive = isActive;
    }

    public void SetIsActive(bool state)
    {
        IsActive = state;
        Visual.SetActive(state);
    }
}

public class Crossroad : MonoBehaviour
{
    [SerializeField] private List<RoutePicker> choices = new List<RoutePicker>();

    [SerializeField] private GameObject textTemplate;

    [SerializeField] private float textDistance = 1.0f;
    [SerializeField] private float distanceFromGround = 3.0f;
    //[SerializeField] private float rotationSpeed = 5.0f;
    [SerializeField] private float fuzzyDistance = 0.1f;

    private List<CrossroadChoice> choicesSorted = new List<CrossroadChoice>();

    private PLAYERMODE previousPlayerMode;

    private int currentChoice = 0;

    public  bool showRender = false;

    private bool pauseChoice = false;
    private bool inCollider = false;
    private bool resetting = false;
    private bool atCenter = false;

    private CapsuleCollider capsuleCollider;
    private Vector3 colliderCenterWP;

    private PlayerManager playerManager;

    private void Start()
    {
        capsuleCollider = GetComponent<CapsuleCollider>();
        colliderCenterWP = transform.TransformPoint(capsuleCollider.center);

        foreach (RoutePicker choice in choices)
        {
            Vector3 textLocation = Vector3.zero;
            Quaternion textRotation;
            string name = "Unnamed";

            if (choice.endingCrossroad == this)
            {
                textLocation = choice.Spline.GetPoint((1f / choice.pointAmount) * (choice.pointAmount - 20));
                name = choice.startLocationName;
            }
            else if(choice.startingCrossroad == this)
            {
                textLocation = choice.Spline.GetPoint((1f / choice.pointAmount) * 20);
                name = choice.destinationLocationName;
            }

            textLocation.y = transform.position.y;

            textLocation.y += distanceFromGround;

            Vector3 direction = (textLocation - colliderCenterWP).normalized;

            textLocation = colliderCenterWP + (direction * textDistance);
            
            textRotation = Quaternion.LookRotation(textLocation - transform.position);

            var newVisual = Instantiate(textTemplate, transform);
            
            newVisual.transform.SetPositionAndRotation(textLocation, textRotation);

            Vector3 eulerAngles = newVisual.transform.eulerAngles;

            eulerAngles.x = 0;

            newVisual.transform.rotation = Quaternion.Euler(eulerAngles);

            TextMeshPro textMeshPro = newVisual.GetComponent<TextMeshPro>();

            textMeshPro.SetText(name);

            float angle = Vector3.Angle(textLocation - transform.position, transform.forward);
            float angle2 = Vector3.Angle(textLocation - transform.position, transform.right);

            if (angle2 > 90)
            {
                angle = 360 - angle;
            }

            newVisual.SetActive(false);

            choicesSorted.Add(new CrossroadChoice(choice, angle, newVisual));
        }

        choicesSorted = choicesSorted.OrderBy(key => key.Angle).ToList();

        GetComponent<MeshRenderer>().enabled = false;

        playerManager = PlayerManager.Instance;
    }

    private void OnTriggerEnter(Collider other)
    {
        if (resetting)
        {
            StopAllCoroutines();
            resetting = false;
        }

        if (other.CompareTag("Player"))
        {
            inCollider = true;
            playerManager.inCrossRoadCollider = true;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.CompareTag("Player"))
        {            
            inCollider = false;
            playerManager.inCrossRoadCollider = false;
            StartCoroutine(resetChoice());
        }
    }

    private void Update()
    {
        if (playerManager.currentTrajectMode == TRAJECTMODE.exploration)
        {
            HandlePlayer();
        }
    }

    private void HandlePlayer()
    {
        float input = Input.GetAxis("Horizontal X view");

        if (showRender && (playerManager.currentMode == PLAYERMODE.spline || playerManager.currentMode == PLAYERMODE.auto))
        {
            GetComponent<MeshRenderer>().enabled = true;
        }
        else
        {
            showRender = false;
            GetComponent<MeshRenderer>().enabled = false;
        }

        if (inCollider)
        {
            if ((colliderCenterWP - (playerManager.transform.position - (new Vector3(0f, playerManager.CharController.height / 2)))).sqrMagnitude <= fuzzyDistance * fuzzyDistance)
            {
                atCenter = true;
            }
            else
            {
                atCenter = false;
            }

            if ((playerManager.currentMode == PLAYERMODE.spline || playerManager.currentMode == PLAYERMODE.auto) && !playerManager.crossRoadChoice && atCenter)
            {
                previousPlayerMode = playerManager.currentMode;

                playerManager.SetPlayerMode(PLAYERMODE.locked);
                playerManager.PlayerLook.SetCameraMode(CAMERA_MODE.focusObject);
                playerManager.onCrossRoad = true;

                currentChoice = 0;

                float playerAngle = Vector3.Angle(playerManager.transform.forward - transform.forward, transform.forward);

                Tuple<float, CrossroadChoice> bestMatch = null;

                foreach (CrossroadChoice choice in choicesSorted)
                {
                    if (choice.Route != playerManager.currentRoute)
                    {
                        var dif = Mathf.Abs(choice.Angle - playerAngle);
                        if (bestMatch == null || dif < bestMatch.Item1)
                        {
                            currentChoice = choicesSorted.IndexOf(choice);
                        }
                        choice.SetIsActive(true);
                    }
                    else
                    {
                        choice.Route.ClearSpline();
                    }
                }
            }

            if (playerManager.currentMode == PLAYERMODE.locked && playerManager.PlayerLook.CurrentMode == CAMERA_MODE.focusObject && !playerManager.crossRoadChoice)
            {
                if ((input < -0.5f || input > 0.5f) && !pauseChoice)
                {
                    pauseChoice = true;
                    SelectChoice(input);
                }
                else
                {
                    if (input == 0f && pauseChoice)
                    {
                        pauseChoice = false;
                    }
                }

                if (Input.GetButtonDown("A Button"))
                {
                    ConfirmChoice();
                }

                playerManager.PlayerLook.SetLookAtTarget(choicesSorted[currentChoice].Visual.transform.position);
            }
        }
    }

    private void ConfirmChoice()
    {
        playerManager.crossRoadChoice = true;

        var chosenRoute = choicesSorted[currentChoice];

        if (chosenRoute.Route.endingCrossroad == this)
        {
            playerManager.currentWayPointId = chosenRoute.Route.pointAmount - 1;
        }

        if (chosenRoute.Route.startingCrossroad == this)
        {
            playerManager.currentWayPointId = 1;
        }

        choicesSorted[currentChoice].Route.playerInCollider = true;

        playerManager.currentRoute = choicesSorted[currentChoice].Route;
        playerManager.currentRoute.StartSpline(playerManager.currentWayPointId, playerManager.showLineAmount, playerManager.showLineAmount);
        
        playerManager.SetPlayerMode(previousPlayerMode);
        playerManager.PlayerLook.SetCameraMode(CAMERA_MODE.focusRoute);
        playerManager.PlayerLook.resetView = false;

        foreach (CrossroadChoice choice in choicesSorted)
        {
            choice.SetIsActive(false);
        }
    }

    private void SelectChoice(float input)
    {
        if (input > 0 && currentChoice <= choicesSorted.Count - 1)
        {
            currentChoice++;

            if (currentChoice > choicesSorted.Count - 1)
            {
                currentChoice = 0;
            }
        }

        if (input < 0 && currentChoice >= 0)
        {
            currentChoice--;

            if (currentChoice < 0)
            {
                currentChoice = choicesSorted.Count - 1;
            }
        }

        if (!choicesSorted[currentChoice].IsActive)
        {
            SelectChoice(input);
        }
    }

    private IEnumerator resetChoice()
    {
        resetting = true;
        yield return new WaitForSeconds(3);
        resetting = false;
        playerManager.onCrossRoad = false;
        playerManager.crossRoadChoice = false;
    }

    public void AddChoice(RoutePicker route)
    {
        choices.Add(route);
    }

    public void RemoveChoice(RoutePicker route)
    {
        choices.Remove(route);
    }
}
