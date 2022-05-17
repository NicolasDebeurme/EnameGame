using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum ActualState
{
    NONE,
    SELECT_PLACE,
    GO_TO_PLACE,
    SCAN_PLACE,
    AR
}



public class GameManager : MonoBehaviour
{
    public static GameManager instance;
    public ActualState actualState;

    public int actualPlace = -1;
    

    public GameObject SelectPlace;
    public GameObject Way;
    public GameObject Scan;

    void Start()
    {
        instance = this;
        actualState = ActualState.SELECT_PLACE;

        
    }

    void Update()
    {
        if (actualState == ActualState.SELECT_PLACE)
        {
            SelectPlace.SetActive(true);
            Way.SetActive(false);
            Scan.SetActive(false);
        }

        if (actualState == ActualState.GO_TO_PLACE)
        {
            SelectPlace.SetActive(false);
            Way.SetActive(true);
            Scan.SetActive(false);
        }

        if (actualState == ActualState.AR)
        {
            SelectPlace.SetActive(false);
            Way.SetActive(false);
            Scan.SetActive(true);
        }
    }

    public void OnClickNextPlace()
    {
        GameManager.instance.actualState = ActualState.SELECT_PLACE;
    }
}
