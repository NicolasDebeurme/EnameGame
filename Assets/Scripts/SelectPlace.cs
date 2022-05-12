using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SelectPlace : MonoBehaviour
{

    //public Button[] Places;

    void Start()
    {
        
    }

    void Update()
    {
        
    }

    public void OnClickSelectPlace(int number_place)
    {
        GameManager.instance.actualPlace = number_place;
        gameObject.SetActive(false);
    }

}
