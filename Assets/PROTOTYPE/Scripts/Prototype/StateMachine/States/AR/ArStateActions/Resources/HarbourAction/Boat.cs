using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Boat : MonoBehaviour
{
    public IEnumerator Drown()
    {
        StartCoroutine(WaitAndStop());
        while (true)
        {
            transform.GetChild(0).gameObject.transform.position -= new Vector3(0, 0.005f, 0);
            yield return null;
        }
    }

    private IEnumerator WaitAndStop()
    {
        yield return new WaitForSeconds(3f);

        StopAllCoroutines();
    }
}
