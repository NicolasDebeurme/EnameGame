using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum TouchingHand
{
    none,
    left,
    right
}

public class HandRegister : MonoBehaviour
{
    public LayerMask collisionMask;
    private TouchingHand touchingHand = TouchingHand.none;

    private void OnCollisionStay(Collision collision)
    {
        if (collisionMask == (collisionMask | 1 << collision.gameObject.layer))
        {
            if (collision.gameObject.CompareTag("Left Hand"))
            {
                touchingHand = TouchingHand.left;
            }
            else if (collision.gameObject.CompareTag("Right Hand"))
            {
                touchingHand = TouchingHand.right;
            }
        }
    }

    private void OnCollisionExit(Collision collision)
    {
        touchingHand = TouchingHand.none;
    }

    public TouchingHand GetTouchingHand()
    {
        return touchingHand;
    }
}
