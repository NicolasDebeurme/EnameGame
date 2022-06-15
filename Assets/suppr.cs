using AmplifyImpostors;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class suppr : MonoBehaviour
{
    [ContextMenu("Test")]
    public void Supp()
    {
        foreach (var child in GetComponentsInChildren<AmplifyImpostor>())
        {
            Destroy(child);
        }
    }
}
