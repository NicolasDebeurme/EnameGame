using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
[System.Serializable]
public class Point 
{
    public double X;
    public double Y;
    public Image picture;
    public string infos;

    public double Distance(Point A, Point B)
    {
       // Debug.LogFormat(A.X.ToString() + " " + B.X.ToString());
        //Debug.LogFormat(A.Y.ToString() + " " + B.Y.ToString());

        return Math.Sqrt(Math.Pow(A.X - B.X, 2)+ Math.Pow(A.Y - B.Y, 2)) * Math.Pow(10,5);//en metre
    }

    public bool isInCircle(Point A, Point B, float distance)
    {
        //Debug.Log(Mathf.Pow(distance, 2) + " " + (Mathf.Pow(A.X - B.X, 2) + Mathf.Pow(A.Y - B.Y, 2)));
        if (Mathf.Pow(distance, 2)  <=   Math.Pow(A.X - B.X, 2) + Math.Pow(A.Y - B.Y, 2))
        {
            return false;
        }
        else
        {
            return true;
        }
    }

    public (double, double) DistanceAproximation(Point A, Point B, double aproximationH, double aproximatioV)
    {
        double rayonAproximation = Math.Sqrt(Math.Pow(aproximationH, 2) + Math.Pow(aproximatioV, 2));
        double distance= Math.Sqrt(Math.Pow(A.X - B.X, 2) + Math.Pow(A.Y - B.Y, 2)) * Math.Pow(10, 5);
        double min = distance - rayonAproximation > 0 ? distance - rayonAproximation : 0;
        double max = distance + rayonAproximation;

        return ( min        ,    max     );

    }


}
