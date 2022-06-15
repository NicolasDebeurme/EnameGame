using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class Jar : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnTriggerEnter(Collider other)
    {
        UIManager.ActionButton.gameObject.SetActive(true);
    }

    private void OnTriggerExit(Collider other)
    {
        UIManager.ActionButton.gameObject.SetActive(false);
    }
}
