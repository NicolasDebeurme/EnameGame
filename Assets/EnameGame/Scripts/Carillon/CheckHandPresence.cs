using Leap.Unity.Interaction;
using Leap.Unity;
using UnityEngine;
using Cinemachine;
using System.Collections;
using System.Collections.Generic;

public class CheckHandPresence : MonoBehaviour
{
    public string argumentName = "-leap";

    public CinematicTimer cinematicTimer;

    public float resetTimeSeconds = 30.0f;

    public GameObject klavierPrefab;

    private GameObject klavier;

    public List<GameObject> objectsToShow = new List<GameObject>();
    public List<GameObject> objectsToHide = new List<GameObject>();

    ReadonlyHashSet<InteractionController> controllers;
    public CinemachineVirtualCamera focusCam;

    bool currentlyTracking = false;
    bool timedOut = true;

    float timer = 0.0f;

    //private void Awake()
    //{
    //    if (!Application.isEditor)
    //    {
    //        var foundArgument = false;

    //        var args = System.Environment.GetCommandLineArgs();

    //        for (int i = 0; i < args.Length; i++)
    //        {
    //            if (args[i] == argumentName && args.Length > i + 1)
    //            {
    //                foundArgument = true;
    //            }
    //        }

    //        if (!foundArgument)
    //        {
    //            Destroy(gameObject);
    //        }
    //    }
    //}

    private void Start()
    {
        controllers = InteractionManager.instance.interactionControllers;

        SwitchObjectsNotPlaying();

        klavierPrefab.SetActive(false);
    }

    private void FixedUpdate()
    {
        bool anyTracking = false;

        foreach (InteractionController controller in controllers)
        {
            if (controller.isTracked)
            {
                anyTracking = true;
            }
        }

        currentlyTracking = anyTracking;

        if (currentlyTracking)
        {
            if (timedOut)
            {
                klavier = Instantiate(klavierPrefab, transform);
                klavier.SetActive(true);
            }

            timer = 0.0f;
            timedOut = false;
            OnTrackHands();
        }
        else if(!timedOut)
        {
            Timeout();
        }
    }

    void OnTrackHands()
    {
        SwitchObjectsForPlaying();

        if (cinematicTimer)
        {
            cinematicTimer.StopNow();
            cinematicTimer.playCinematic = false;
        }

        focusCam.Priority = 999;
    }

    void Timeout()
    {
        timer += Time.fixedDeltaTime;

        if (timer >= resetTimeSeconds)
        {
            SwitchObjectsNotPlaying();

            if (cinematicTimer)
            {
                cinematicTimer.playCinematic = true;
                cinematicTimer.PlayNow();
            }

            focusCam.Priority = 0;

            timedOut = true;

            Destroy(klavier);
        }
    }

    void SwitchObjectsForPlaying()
    {
        foreach (GameObject gameObject in objectsToShow)
        {
            if (gameObject)
                gameObject.SetActive(true);
        }

        foreach (GameObject gameObject in objectsToHide)
        {
            if (gameObject)
                gameObject.SetActive(false);
        }
    }

    void SwitchObjectsNotPlaying()
    {
        foreach (GameObject gameObject in objectsToShow)
        {
            if (gameObject)
                gameObject.SetActive(false);
        }

        foreach (GameObject gameObject in objectsToHide)
        {
            if (gameObject)
                gameObject.SetActive(true);
        }
    }

    public void ResetKlavier()
    {
        Destroy(klavier);
        klavier = Instantiate(klavierPrefab, transform);
        klavier.SetActive(true);
    }
}
