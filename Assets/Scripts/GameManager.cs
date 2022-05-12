using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    public static GameManager instance;
    public int actualPlace = 0;
    public bool isGPSenable = true;
    public bool have_reached_position = false;

    void Start()
    {
        instance = this;
    }

    void Update()
    {
        
    }
}
