using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;

public class PortalManager : MonoBehaviour
{
	public GameObject MainCamera;
	public GameObject Sponza;

	private Renderer[] SponzaMaterials;

	// Use this for initialization
	void Start()
	{
		SponzaMaterials = Sponza.GetComponentsInChildren<Renderer>();
		if (MainCamera== null )
        {
			MainCamera = Camera.main.gameObject;
        }
	}

    public void Update()
    {
        if (MainCamera==null)
        {
			Debug.Log("CamNull");
        }
    }
    // Update is called once per frame
    void OnTriggerStay(Collider collider)
	{
		SponzaMaterials = Sponza.GetComponentsInChildren<Renderer>();
		Vector3 camPositionInPortalSpace = transform.InverseTransformPoint(MainCamera.transform.position);

		if (camPositionInPortalSpace.y < .3f)
		{
			//disable stencil test
			for (int i = 0; i < SponzaMaterials.Length; ++i)
			{
				for (int ii = 0; ii < SponzaMaterials[i].sharedMaterials.Length; ii++)
				{
					SponzaMaterials[i].sharedMaterials[ii].SetInt("_StencilComp", (int)CompareFunction.Always);
				}
			}
		}
		else
		{
			//enable stencil test
			for (int i = 0; i < SponzaMaterials.Length; ++i)
			{
				for (int ii = 0; ii < SponzaMaterials[i].sharedMaterials.Length; ii++)
				{
					SponzaMaterials[i].sharedMaterials[ii].SetInt("_StencilComp", (int)CompareFunction.Equal);
				}
			}
		}
	}
}

