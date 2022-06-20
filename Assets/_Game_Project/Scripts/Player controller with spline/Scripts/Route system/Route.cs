using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Assertions;

public class Route : MonoBehaviour
{
    [SerializeField] private Transform[] controlPoints = null;
    [SerializeField] [Range(0.001f, 1f)]private float pointAmount = .005f;
    private Vector3 gizmoPosition;
    private Vector3 curvePoint;
    public List<Vector3> CurvePoints { get; private set; } = new List<Vector3>();

    private void Awake()
    {
        Assert.IsNotNull(controlPoints);
        for (float t = 0; t < 1; t += pointAmount)
        {
            curvePoint = Mathf.Pow(1 - t, 3) * controlPoints[0].position +
                3 * Mathf.Pow(1 - t, 2) * t * controlPoints[1].position +
                3 * (1 - t) * Mathf.Pow(t, 2) * controlPoints[2].position +
                Mathf.Pow(t, 3) * controlPoints[3].position;

            if (Physics.Raycast(curvePoint, Vector3.down, out RaycastHit hitpoint))
            {
                curvePoint.y -= (curvePoint.y - hitpoint.point.y) - .2f;
                CurvePoints.Add(curvePoint);
            };
        }
        Vector3 lastPoint = controlPoints[3].position;
        if (Physics.Raycast(lastPoint, Vector3.down, out RaycastHit hitpointLast))
        {
            lastPoint.y -= (lastPoint.y - hitpointLast.point.y) - .2f;
            CurvePoints.Add(lastPoint);
        };
    }

    private void OnDrawGizmosSelected()
    {
        for (float t = 0; t<1; t += pointAmount)
        {
            gizmoPosition = Mathf.Pow(1 - t, 3) * controlPoints[0].position +
                3 * Mathf.Pow(1 - t, 2) * t * controlPoints[1].position +
                3 * (1 - t) * Mathf.Pow(t, 2) * controlPoints[2].position +
                Mathf.Pow(t, 3) * controlPoints[3].position;

            if (Physics.Raycast(gizmoPosition, Vector3.down, out RaycastHit hitpoint))
            {
                gizmoPosition.y -= (gizmoPosition.y - hitpoint.point.y) - .2f;
            };
            Gizmos.DrawSphere(gizmoPosition, 0.25f);
        }

        Gizmos.DrawLine(new Vector3(controlPoints[0].position.x, controlPoints[0].position.y, controlPoints[0].position.z), new Vector3(controlPoints[1].position.x, controlPoints[1].position.y, controlPoints[1].position.z));
        Gizmos.DrawLine(new Vector3(controlPoints[2].position.x, controlPoints[2].position.y, controlPoints[2].position.z), new Vector3(controlPoints[3].position.x, controlPoints[3].position.y, controlPoints[3].position.z));
    }
}
