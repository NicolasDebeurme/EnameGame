using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;

public class PortalManager : MonoBehaviour
{
	public GameObject MainCamera;
	public GameObject Sponza;

	private Material[] SponzaMaterials;

	// Use this for initialization
	void Start()
	{
		SponzaMaterials = Sponza.GetComponent<Renderer>().sharedMaterials;
        if (MainCamera== null )
        {
			MainCamera = Camera.main.gameObject;
        }
	}

	// Update is called once per frame
	void OnTriggerStay(Collider collider)
	{

		Vector3 camPositionInPortalSpace = transform.InverseTransformPoint(MainCamera.transform.position);
		Debug.Log(camPositionInPortalSpace);

		if (camPositionInPortalSpace.y < .3f)
		{
			//disable stencil test
			for (int i = 0; i < SponzaMaterials.Length; ++i)
			{
				SponzaMaterials[i].SetInt("_StencilComp", (int)CompareFunction.Always);
			}
		}
		else
		{
			//enable stencil test
			for (int i = 0; i < SponzaMaterials.Length; ++i)
			{
				SponzaMaterials[i].SetInt("_StencilComp", (int)CompareFunction.Equal);
			}
		}
	}
}

