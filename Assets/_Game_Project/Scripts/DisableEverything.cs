using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DisableEverything : MonoBehaviour
{
    public bool disableAll = false;

    private void Awake()
    {
        if (disableAll)
        {
            var gos = FindObjectsOfType<GameObject>();

            foreach (var go in gos)
            {
                go.SetActive(false);
            }
        }
    }
}
