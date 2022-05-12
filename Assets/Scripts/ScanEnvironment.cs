using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScanEnvironment : MonoBehaviour
{
    public GameObject ScanEnviromentUI;

    void Start()
    {
        ScanEnviromentUI.SetActive(false);
    }

    void Update()
    {
        if (GameManager.instance.scan)
        {
            //ScanEnviromentUI.SetActive(true);
        }
    }
}
