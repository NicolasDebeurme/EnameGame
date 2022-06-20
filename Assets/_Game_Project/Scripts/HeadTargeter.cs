using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HeadTargeter : MonoBehaviour
{
    public List<GameObject> targets = new List<GameObject>();

    private void FixedUpdate()
    {
        transform.position = GetCenterWorldSpace();
    }

    Vector3 GetCenterWorldSpace()
    {
        Vector3 newTotal = Vector3.zero;

        foreach (GameObject target in targets)
        {
            newTotal += target.transform.position;
        }

        return newTotal / targets.Count;
    }
}
