using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class invocation : MonoBehaviour
{
    public GameObject cube;
    void Start()
    {
        cube?.SetActive(false);
    }

    void Update()
    {
        
    }
}
