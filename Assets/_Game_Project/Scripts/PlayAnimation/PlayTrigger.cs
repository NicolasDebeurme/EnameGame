using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayTrigger : MonoBehaviour
{
    public ActivateInRange inRange;

    public bool inCollider = false;

    private void Update()
    {
        if (inCollider && Input.GetButtonDown(inRange.ActivationButtonName) && inRange != null)
        {
            inRange.Animator.SetTrigger("Play");
        }
    }

    private void OnTriggerStay(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            inCollider = true;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            inCollider = false;
        }
    }
}
