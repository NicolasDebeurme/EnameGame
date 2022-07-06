using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HandAnchor : MonoBehaviour
{
    public Transform target;

    [Header("Pos")]
    public float speed;

    [Header("Rot")]
    public float interval;

    private void FixedUpdate()
    {
        Vector3 direction = target.position - transform.position;

        GetComponent<Rigidbody>().velocity = direction * speed;

        var delta = target.rotation * Quaternion.Inverse(transform.rotation);

        delta.ToAngleAxis(out float angle, out Vector3 axis);

        // We get an infinite axis in the event that our rotation is already aligned.
        if (float.IsInfinity(axis.x))

            return;

        if (angle > 180f)

            angle -= 360f;

        // Here I drop down to 0.9f times the desired movement,
        // since we'd rather undershoot and ease into the correct angle
        // than overshoot and oscillate around it in the event of errors.
        Vector3 angular = (0.9f * Mathf.Deg2Rad * angle / interval) * axis.normalized;

        GetComponent<Rigidbody>().angularVelocity = angular;
    }
}
