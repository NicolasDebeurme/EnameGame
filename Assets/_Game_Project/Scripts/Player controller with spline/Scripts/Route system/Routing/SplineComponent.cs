using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Routing
{
    public class SplineComponent : MonoBehaviour, ISpline
    {
        [HideInInspector]
        public bool closed = false;
        [HideInInspector]
        public List<Vector3> points = new List<Vector3>();
        [HideInInspector]
        public float? length;
        [HideInInspector]
        public bool stickToTerrain = false;

        public LayerMask collisionMasks;

        [HideInInspector]
        public float distanceFromTerrain = 0f;

        SplineIndex uniformIndex;
        public SplineIndex Index
        {
            get
            {
                if (uniformIndex == null) uniformIndex = new SplineIndex(this);
                return uniformIndex;
            }
        }

        void Reset()
        {
            points = new List<Vector3>() {
            Vector3.forward * 3,
            Vector3.forward * 6,
            Vector3.forward * 9,
            Vector3.forward * 12
        };
        }

        void OnValidate()
        {
            if (uniformIndex != null) uniformIndex.ReIndex();
        }

        public int ControlPointCount => points.Count;

        public Vector3 FindClosest(Vector3 worldPoint, int pointAmount)
        {
            var smallestDelta = float.MaxValue;
            var step = 1f / pointAmount;
            var closestPoint = Vector3.zero;
            for (var i = 0; i <= pointAmount; i++)
            {
                var p = GetPoint(i * step);
                var delta = (worldPoint - p).sqrMagnitude;
                if (delta < smallestDelta)
                {
                    closestPoint = p;
                    smallestDelta = delta;
                }
            }
            return closestPoint;
        }

        public Vector3 FindClosest(Vector3 worldPoint, int pointAmount, out int currentPointId)
        {
            var smallestDelta = float.MaxValue;
            var step = 1f / pointAmount;
            var currentPoint = 0;
            var closestPoint = Vector3.zero;
            for (var i = 0; i <= pointAmount; i++)
            {
                var p = GetPoint(i * step);
                var delta = (worldPoint - p).sqrMagnitude;
                if (delta < smallestDelta)
                {
                    currentPoint = i;
                    closestPoint = p;
                    smallestDelta = delta;
                }
            }
            currentPointId = currentPoint;
            return closestPoint;
        }


        public Vector3 GetBackward(float t) => -GetForward(t);


        public Vector3 GetControlPoint(int index)
        {
            return points[index];
        }


        public Vector3 GetDistance(float distance)
        {
            if (length == null) length = GetLength();
            return Index.GetPoint(distance / length.Value);
        }


        public Vector3 GetDown(float t) => -GetUp(t);


        public Vector3 GetForward(float t)
        {
            var A = GetPoint(t - 0.001f);
            var B = GetPoint(t + 0.001f);
            return (B - A).normalized;
        }


        public Vector3 GetLeft(float t) => -GetRight(t);


        public float GetLength(float step = 0.001f)
        {
            var D = 0f;
            var A = GetNonUniformPoint(0);
            for (var t = 0f; t < 1f; t += step)
            {
                var B = GetNonUniformPoint(t);
                var delta = (B - A);
                D += delta.magnitude;
                A = B;
            }
            return D;
        }


        public Vector3 GetNonUniformPoint(float t)
        {
            switch (points.Count)
            {
                case 0:
                    return Vector3.zero;
                case 1:
                    Vector3 point = transform.TransformPoint(points[0]);
                    if (stickToTerrain)
                    {
                        if (Physics.Raycast(point, Vector3.down, out RaycastHit hitpoint, Mathf.Infinity, collisionMasks))
                        {
                            point.y -= (point.y - hitpoint.point.y) - distanceFromTerrain;
                        };
                    }
                    return point;
                case 2:
                    point = transform.TransformPoint(Vector3.Lerp(points[0], points[1], t));
                    if (stickToTerrain)
                    {
                        if (Physics.Raycast(point, Vector3.down, out RaycastHit hitpoint, Mathf.Infinity, collisionMasks))
                        {
                            point.y -= (point.y - hitpoint.point.y) - distanceFromTerrain;
                        };
                    }
                    return point;
                case 3:
                    point = transform.TransformPoint(points[1]);
                    if (stickToTerrain)
                    {
                        if (Physics.Raycast(point, Vector3.down, out RaycastHit hitpoint, Mathf.Infinity, collisionMasks))
                        {
                            point.y -= (point.y - hitpoint.point.y) - distanceFromTerrain;
                        };
                    }
                    return point;
                default:
                    point = Hermite(t);
                    if (stickToTerrain)
                    {
                        if (Physics.Raycast(point, Vector3.down, out RaycastHit hitpoint, Mathf.Infinity, collisionMasks))
                        {
                            point.y -= (point.y - hitpoint.point.y) - distanceFromTerrain;
                        };
                    }
                    return point;
            }
        }


        public Vector3 GetPoint(float t)
        {
            Vector3 point = Index.GetPoint(t);

            if (stickToTerrain)
            {
                if (Physics.Raycast(point, Vector3.down, out RaycastHit hitpoint, Mathf.Infinity, collisionMasks))
                {
                    point.y -= (point.y - hitpoint.point.y) - distanceFromTerrain;
                };
            }

            return point;
        }


        public Vector3 GetRight(float t)
        {
            var A = GetPoint(t - 0.001f);
            var B = GetPoint(t + 0.001f);
            var delta = (B - A);
            return new Vector3(-delta.z, 0, delta.x).normalized;
        }


        public Vector3 GetUp(float t)
        {
            var A = GetPoint(t - 0.001f);
            var B = GetPoint(t + 0.001f);
            var delta = (B - A).normalized;
            return Vector3.Cross(delta, GetRight(t));
        }


        public void InsertControlPoint(int index, Vector3 position)
        {
            ResetIndex();
            if (index >= points.Count)
                points.Add(position);
            else
                points.Insert(index, position);
        }


        public void RemoveControlPoint(int index)
        {
            ResetIndex();
            points.RemoveAt(index);
        }


        public void SetControlPoint(int index, Vector3 position)
        {
            ResetIndex();
            points[index] = position;
        }

        internal static Vector3 Interpolate(Vector3 a, Vector3 b, Vector3 c, Vector3 d, float u)
        {
            return (
                0.5f *
                (
                    (-a + 3f * b - 3f * c + d) *
                    (u * u * u) +
                    (2f * a - 5f * b + 4f * c - d) *
                    (u * u) +
                    (-a + c) *
                    u + 2f * b
                )
            );
        }

        Vector3 Hermite(float t)
        {
            var count = points.Count - (closed ? 0 : 3);
            var i = Mathf.Min(Mathf.FloorToInt(t * (float)count), count - 1);
            var u = t * (float)count - (float)i;
            var a = GetPointByIndex(i);
            var b = GetPointByIndex(i + 1);
            var c = GetPointByIndex(i + 2);
            var d = GetPointByIndex(i + 3);
            return transform.TransformPoint(Interpolate(a, b, c, d, u));
        }

        Vector3 GetPointByIndex(int i)
        {
            if (i < 0) i += points.Count;
            return points[i % points.Count];
        }

        public void ResetIndex()
        {
            uniformIndex = null;
            length = null;
        }
    }
}
