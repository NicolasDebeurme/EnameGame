using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class Rotations
{
    public enum AXIS
    {
        x,
        y,
        z
    }

    public static float GetAngleOnAxis(Vector3 p1, Vector3 p2, AXIS axis)
    {
        Vector2 Point1;
        Vector2 Point2;

        switch (axis)
        {
            case AXIS.x:
                Point1 = new Vector2(p1.y, p1.z);
                Point2 = new Vector2(p2.y, p2.z);
                break;
            case AXIS.y:
                Point1 = new Vector2(p1.x, p1.z);
                Point2 = new Vector2(p2.x, p2.z);
                break;
            case AXIS.z:
                Point1 = new Vector2(p1.x, p1.y);
                Point2 = new Vector2(p2.x, p2.y);
                break;
            default:
                Point1 = Vector2.zero;
                Point2 = Vector2.zero;
                break;
        }

        return Vector2.Angle(Point1, Point2);
    }
}
