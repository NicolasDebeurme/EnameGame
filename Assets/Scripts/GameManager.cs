using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    public static GameManager instance;
    public int actualPlace = 0;
    public bool isGPSEnable = false;
    public bool have_reached_position = false;
    public bool scan = false;

    public GameObject SelectPlace;
    public GameObject Way;
    public GameObject Scan;

    void Start()
    {
        instance = this;
        SelectPlace.SetActive(true);
        Way.SetActive(false);
        Scan.SetActive(false);
    }

    void Update()
    {
        if (actualPlace != 0 )
        {
            isGPSEnable = true;
            SelectPlace.SetActive(false);
            Way.SetActive(true);

        }

        if (have_reached_position)
        {
            isGPSEnable = false;
            Way.SetActive(false);
            Scan.SetActive(true);
            scan = true;
        }

    }
}
