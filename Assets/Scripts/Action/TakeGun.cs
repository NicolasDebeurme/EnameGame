using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TakeGun : MonoBehaviour
{
    private bool isGunTake= false;
    public GameObject Gun;
    public Transform HandPos;
    public Animator TextAnimator;
    void Start()
    {
        
    }

    void Update()
    {

        TakeTheGun();

    }


    public void TakeTheGun()
    {

        if (Input.touchCount > 0 && Input.touches[0].phase == TouchPhase.Began)
        {
            Ray ray = Camera.main.ScreenPointToRay(Input.touches[0].position);
            RaycastHit hit;

            if (Physics.Raycast(ray, out hit))
            {
                if (hit.collider != null)
                {
                    Debug.Log("Touch " + hit.transform.gameObject.name);
                    if (hit.transform.gameObject == Gun) // hit.transform.tag = " ..."
                    {
                        isGunTake = true;
                        TextAnimator.SetTrigger("show");
                    }
                }
            }

        }

#if UNITY_EDITOR
        if (Input.GetMouseButtonDown(0))
        {
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            RaycastHit hit;
            Debug.Log("Touch ");
            Debug.DrawRay(ray.origin, ray.direction * 20, Color.white, 1);
            if (Physics.Raycast(ray, out hit, 100))
            {
                Debug.Log("Touch " + hit.transform.gameObject.name);
                if (hit.collider != null)
                {
                    Debug.Log("Touch " + hit.transform.gameObject.name);
                    if (hit.transform.gameObject == Gun) // hit.transform.tag = " ..."
                    {
                        isGunTake = true;
                        TextAnimator.SetTrigger("show");
                    }
                }
            }

        }

#endif

        if (isGunTake)
        {
            Gun.transform.position = Vector3.Lerp(Gun.transform.position, HandPos.position, Time.deltaTime);

            Vector3 Angle =new Vector3(0,0,0);
            if (HandPos.rotation.eulerAngles.x < 0)
            {
                Angle.x = 360 - HandPos.rotation.eulerAngles.x;
            }
            else
            {
                Angle.x = HandPos.rotation.eulerAngles.x;
            }

            if (HandPos.rotation.eulerAngles.y < 0)
            {
                Angle.y = 360 - HandPos.rotation.eulerAngles.y;
            }
            else
            {
                Angle.y = HandPos.rotation.eulerAngles.y;
            }

            if (HandPos.rotation.eulerAngles.z < 0)
            {
                Angle.z = 360 - HandPos.rotation.eulerAngles.z;
            }
            else
            {
                Angle.z = HandPos.rotation.eulerAngles.z;
            }
            Debug.Log(Angle);
            Gun.transform.eulerAngles = Vector3.Lerp(Angle, HandPos.rotation.eulerAngles, Time.deltaTime * 30);
        }
    }

}
