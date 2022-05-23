using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum ActualState
{
    NONE,
    CONNEXION,
    SELECT_PLACE,
    GO_TO_PLACE,
    SCAN_PLACE,
    AR,
    TREE
}



public class GameManager : MonoBehaviour
{
    public static GameManager instance;
    public ActualState actualState;

    public int actualPlace = -1;

    public GameObject Connexion;
    public GameObject SelectPlace;
    public GameObject Way;
    public GameObject Scan;
    public GameObject Tree;

    void Start()
    {
        instance = this;
        actualState = ActualState.CONNEXION;  
    }

    void Update()
    {
        if (actualState == ActualState.CONNEXION)
        {
            Connexion.SetActive(true);
            SelectPlace.SetActive(false);
            Way.SetActive(false);
            Scan.SetActive(false);
            Tree.SetActive(false);
        }
        if (actualState == ActualState.SELECT_PLACE)
        {
            Connexion.SetActive(false);
            SelectPlace.SetActive(true);
            Way.SetActive(false);
            Scan.SetActive(false);
            Tree.SetActive(false);
        }
        if (actualState == ActualState.GO_TO_PLACE)
        {
            Connexion.SetActive(false);
            SelectPlace.SetActive(false);
            Way.SetActive(true);
            Scan.SetActive(false);
            Tree.SetActive(false);
        }
        if (actualState == ActualState.AR)
        {
            Connexion.SetActive(false);
            SelectPlace.SetActive(false);
            Way.SetActive(false);
            Scan.SetActive(true);
            Tree.SetActive(false);
        }
        if (actualState == ActualState.TREE)
        {
            Connexion.SetActive(false);
            SelectPlace.SetActive(false);
            Way.SetActive(false);
            Scan.SetActive(true);
            Tree.SetActive(true);
        }

    }

    public void OnClickNextPlace()
    {
        GameManager.instance.actualState = ActualState.TREE;
    }
    public void OnClickSelectPlace(int number_place)
    {
        GameManager.instance.actualPlace = number_place;
        GameManager.instance.actualState = ActualState.GO_TO_PLACE;
    }
}
