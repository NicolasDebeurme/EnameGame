using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GPStestPC : MonoBehaviour
{
    public Point pointA;
    public Point pointB;
    public float distance;
    void Start()
    {
        
    }

    void Update()
    {
        Debug.Log(pointA.isInCircle(pointA, pointB, distance));

    }
}
