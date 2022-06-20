using PlayerController;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WaterCollider : MonoBehaviour
{
    public Vector3 closestPoint;

    private new Collider collider;

    private void Start()
    {
        collider = GetComponent<Collider>();
    }

    private void OnTriggerStay(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            PlayerManager.Instance.inWater = true;
            PlayerManager.Instance.closestPointOnBounds = collider.ClosestPointOnBounds(other.transform.position);
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            PlayerManager.Instance.inWater = false;
        }
    }
}
