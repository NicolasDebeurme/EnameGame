using RootMotion.FinalIK;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EffectorControl : MonoBehaviour
{
    public FullBodyBipedIK fullBodyBipedIK;

    public FullBodyBipedEffector targetEffectorType;

    public GameObject mainTarget;

    private IKEffector targetEffector;

    private List<Transform> targets = new List<Transform>();

    // Start is called before the first frame update
    void Start()
    {
        targetEffector = fullBodyBipedIK.solver.GetEffector(targetEffectorType);
    }

    private void FixedUpdate()
    {
        if (targets.Count > 0)
        {
            CalculateTarget();
        }
        else
        {
            targetEffector.position = mainTarget.transform.position;
            targetEffector.rotation = mainTarget.transform.rotation;
        }
    }

    private void CalculateTarget()
    {
        Transform closestTarget = GetClosestTarget();
        float distance = Mathf.Clamp(Vector3.Distance(mainTarget.transform.position, closestTarget.position), 0f, 0.1f);

        distance *= 10f;

        targetEffector.position = Vector3.Lerp(closestTarget.position, mainTarget.transform.position, distance);
        targetEffector.rotation = Quaternion.Lerp(closestTarget.rotation, mainTarget.transform.rotation, distance);
    }

    private Transform GetClosestTarget()
    {
        Transform closestTarget = targets[0];
        float currentDistance = Vector3.Distance(mainTarget.transform.position, closestTarget.position);

        foreach (Transform target in targets)
        {
            float newDistance = Vector3.Distance(mainTarget.transform.position, target.position);

            if (newDistance < currentDistance)
            {
                closestTarget = target;
            }
        }

        return closestTarget;
    }

    public void AddToList(Transform target)
    {
        if (!targets.Contains(target))
        {
            targets.Add(target);
        }
    }

    public void RemoveFromList(Transform target)
    {
        if (targets.Contains(target))
        {
            targets.Remove(target);
        }
    }
}
