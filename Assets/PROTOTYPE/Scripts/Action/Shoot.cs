using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Shoot : MonoBehaviour
{
    public Camera Camera;
    public GameObject Boat;
    public GameObject Gun;

    public GameObject PrefabObjectImpact;
    public Transform ContenaireObjectImpact;
    public Transform BoatUnderWaterPosition;

    private float ShootDistance = 10f;
    public int numberBullet = 5;
    private bool hasTouch = false;
    [Header("UI")]
    public Image Reticule;
    public Button ShootButton;

    void Start()
    {
        Reticule.gameObject.SetActive(true);
        ShootButton.gameObject.SetActive(true);
    }

    void Update()
    {
        if (hasTouch)
        {
            //Boat.transform.position = Vector3.Lerp(Boat.transform.position, BoatUnderWaterPosition.position, Time.deltaTime);
            Boat.transform.position -= new Vector3(0, 0.005f, 0);
        }
    }

    public void OnClickShoot()
    {
        Gun.GetComponent<Animator>().SetTrigger("shoot");
        if (numberBullet>=1)
        {
            RaycastHit hit;
            if (Physics.Raycast(Camera.transform.position, Camera.transform.forward, out hit, ShootDistance))
            {
                Debug.Log("Shhoot");
                Debug.DrawLine(Camera.transform.position, Camera.transform.position + Camera.transform.forward * ShootDistance, Color.white, 0.5f);
                GameObject PrefabObjectImpactClone = Instantiate(PrefabObjectImpact, ContenaireObjectImpact);
                PrefabObjectImpactClone.transform.position = hit.point;
                PrefabObjectImpactClone.transform.rotation = Quaternion.Euler(hit.normal);
                Debug.Log(hit.normal);

                if (hit.transform.gameObject == Boat)
                {
                    Debug.Log("Touch The Boat ");
                    hasTouch = true;
                }


            }
            numberBullet--;
            if (numberBullet == 0)
            {
                Reticule.gameObject.SetActive(false);
                ShootButton.gameObject.SetActive(false);
            }
        }
        else
        {

        }
    }

}
