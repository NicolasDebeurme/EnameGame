using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ToggleVS : MonoBehaviour
{
    public GameObject toggleObject;

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Alpha1))
        {
            toggleObject.SetActive(!toggleObject.activeInHierarchy);
        }    
    }
}
