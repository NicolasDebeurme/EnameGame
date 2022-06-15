using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PhysicsHand : MonoBehaviour
{
    public Transform trackedTransform = null;
    public Rigidbody body = null;

    public float positionStrength = 15f;
    public float positionTreshold = 0.005f;
    public float maxDistance = 1f;
    public float rotationStrenght = 30f;
    public float rotationTreshold = 10f;

    private void Awake()
    {
        body = GetComponent<Rigidbody>();
    }

    private void FixedUpdate()
    {
        var distance = Vector3.Distance(trackedTransform.position, body.position);

        if (distance > maxDistance || distance < positionTreshold)
        {
            body.MovePosition(trackedTransform.position);
        }
        else
        {
            var vel = (trackedTransform.position - body.position).normalized *
                positionStrength * Vector3.Distance(trackedTransform.position, body.position);

            body.velocity = vel;
        }

        float angleDistance = Quaternion.Angle(body.rotation, trackedTransform.rotation);

        if (angleDistance < rotationTreshold)
        {
            body.MoveRotation(trackedTransform.rotation);
        }
        else
        {
            float kp = (6f * rotationStrenght) * (6f * rotationStrenght) * 0.025f;
            float kd = 4.5f * rotationStrenght;

            Quaternion q = trackedTransform.rotation * Quaternion.Inverse(transform.rotation);

            q.ToAngleAxis(out float xMag, out Vector3 x);
            x.Normalize();
            x *= Mathf.Deg2Rad;

            Vector3 pidv = kp * x * xMag - kd * body.angularVelocity;

            Quaternion rotInertia2World = body.inertiaTensorRotation * transform.rotation;

            pidv = Quaternion.Inverse(rotInertia2World) * pidv;

            pidv.Scale(body.inertiaTensor);

            pidv = rotInertia2World * pidv;

            body.AddTorque(pidv);
        }
    }
}
