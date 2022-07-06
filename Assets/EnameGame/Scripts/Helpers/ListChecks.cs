using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ListChecks : MonoBehaviour
{
    public static bool CheckEqual<T>(List<T> l1, List<T> l2)
    {
        if (l1 == null && l2 == null)
        {
            return true;
        }
        else if (l1 == null || l2 == null)
        {
            return false;
        }

        if (l1.Count != l2.Count)
        {
            return false;
        }

        for (int i = 0; i < l1.Count; i++)
        {
            if (l1[i].ToString() != l2[i].ToString())
            {
                return false;
            }
        }

        return true;
    }
}
