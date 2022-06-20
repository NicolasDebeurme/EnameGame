using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShowObject : MonoBehaviour
{
    public List<GameObject> objectsToShow = new List<GameObject>();
    public List<GameObject> objectsToHide = new List<GameObject>();
    public new GameObject collider = null;

    private void OnEnable()
    {
        collider.SetActive(false);
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player") && objectsToShow.Count > 0)
        {
            foreach (GameObject objectToHide in objectsToHide)
            {
                objectToHide.SetActive(false);
            }

            foreach (GameObject objectToShow in objectsToShow)
            {
                objectToShow.SetActive(true);
            }

            collider.SetActive(true);
        }
    }
}
