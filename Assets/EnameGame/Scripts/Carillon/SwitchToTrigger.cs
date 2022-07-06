using Leap.Unity;
using Leap.Unity.Interaction;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SwitchToTrigger : MonoBehaviour
{
    public LayerMask collisionMask;

    public EffectorControl effectorControl;
    public Transform effectorTarget;

    new Collider collider;

    ConfigurableJoint hinge;

    ReadonlyHashSet<InteractionController> contactingControllers;

    float timer = 0.0f;

    private void Awake()
    {
        collider = GetComponent<Collider>();

        if (!collider)
        {
            Destroy(GetComponent<SwitchToTrigger>());
        }
        else
        {
            hinge = GetComponent<ConfigurableJoint>();

            collider.isTrigger = true;

            if (TryGetComponent(out InteractionBehaviour interactionBehaviour))
            {
                interactionBehaviour.OnContactBegin += () =>
                {
                    timer = 0f;
                    collider.isTrigger = false;
                    contactingControllers = interactionBehaviour.contactingControllers;

                    foreach (InteractionController controller in contactingControllers)
                    {
                        controller.DisableSoftContact();
                    }
                };

                interactionBehaviour.OnContactStay += () =>
                {
                    timer = 0f;
                    collider.isTrigger = false;
                    contactingControllers = interactionBehaviour.contactingControllers;

                    foreach (InteractionController controller in contactingControllers)
                    {
                        controller.DisableSoftContact();
                    }
                };

                interactionBehaviour.OnContactEnd += () =>
                {
                    foreach (InteractionController controller in contactingControllers)
                    {
                        controller.DisableSoftContact();
                    }
                };
            }
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (collisionMask == (collisionMask | 1 << other.gameObject.layer))
        {
            timer = 0f;
            collider.isTrigger = false;

            if (effectorControl)
            {
                effectorControl.AddToList(effectorTarget);
            }
        }
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collisionMask == (collisionMask | 1 << collision.gameObject.layer))
        {
            timer = 0f;
            collider.isTrigger = false;

            if (effectorControl)
            {
                effectorControl.AddToList(effectorTarget);
            }
        }
    }

    private void FixedUpdate()
    {
        if (timer >= 2f && collider.attachedRigidbody.velocity.sqrMagnitude <= 0.1 && !collider.isTrigger)
        {
            collider.attachedRigidbody.velocity = Vector3.zero;
            collider.isTrigger = true;

            if (effectorControl)
            {
                effectorControl.RemoveFromList(effectorTarget);
            }
        }

        if (timer < 2f)
        {
            timer += Time.fixedDeltaTime;
        }
    }
}
