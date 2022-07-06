using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class rayyy : MonoBehaviour
{
    public GameObject Cube;
    public GameObject cam;
    private LayerMask hitmask;
    void Start()
    {
        cam = gameObject;
        hitmask = 1<<6;
    }

    void Update()
    {
        OnClickShoot();
    }

    public void OnClickShoot()
    {
        Debug.DrawLine(cam.transform.position, cam.transform.position + cam.transform.forward * 10, Color.white, 0.5f);
        RaycastHit hit;
        if (Physics.Raycast(cam.transform.position, cam.transform.forward, out hit, 100, hitmask))
        {
            Debug.Log("Shhoot");
            Debug.Log("________________________________");
                
            //GameObject PrefabObjectImpactClone = Instantiate(PrefabObjectImpact, ContenaireObjectImpact);
            //PrefabObjectImpactClone.transform.position = hit.point;
            //PrefabObjectImpactClone.transform.rotation = Quaternion.Euler(hit.normal);
            //Debug.Log(hit.normal);

            if (hit.transform.gameObject == Cube)
            {
                Debug.Log("Touch The Cube ");
                Debug.Log("________________________________");
                    
            }


        }
            
        
        
    }
}
