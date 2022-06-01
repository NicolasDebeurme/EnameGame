using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class InputTest : MonoBehaviour
{
    public GameObject cube;
    public TextMeshProUGUI text1;

    void Update()
    {
        foreach (Touch touch in Input.touches)
        {
            Debug.Log("Start");
            text1.text = "touch";
            if (touch.phase == TouchPhase.Began)
            {
                Debug.Log("Began");
                // Construct a ray from the current touch coordinates
                Ray ray = Camera.main.ScreenPointToRay(touch.position);

                RaycastHit hit;
                if (Physics.Raycast(ray,out hit))
                {
                    // Create a particle if hit
                    Instantiate(cube, hit.point, hit.transform.rotation);
                    text1.text = "create";

                }
            }
        }

    }
    public void OnClickedButton()
    {
        StartCoroutine(WaitAndPrint());
        
    }

    IEnumerator WaitAndPrint()
    {
        // suspend execution for 5 seconds
        yield return new WaitForSeconds(1);
        text1.text = "Click";
        print("WaitAndPrint " + Time.time);
    }

}