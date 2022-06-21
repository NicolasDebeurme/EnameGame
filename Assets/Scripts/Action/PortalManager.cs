using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;

public class PortalManager : MonoBehaviour
{
	public GameObject MainCamera;
	public GameObject Sponza;

	private Renderer[] SponzaMaterials;
	void Start()
	{
		SponzaMaterials = Sponza.GetComponentsInChildren<Renderer>();
        if (MainCamera== null )
        {
			MainCamera = Camera.main.gameObject;
        }
	}

	// Update is called once per frame
	void OnTriggerStay(Collider collider)
	{

		Vector3 camPositionInPortalSpace = transform.InverseTransformPoint(MainCamera.transform.position);
		//Debug.Log(camPositionInPortalSpace);

		if (camPositionInPortalSpace.y < .3f)
		{
			//disable stencil test
			for (int i = 0; i < SponzaMaterials.Length; ++i)
			{
				Debug.Log(SponzaMaterials[i].name + SponzaMaterials[i].gameObject.name);
				SponzaMaterials[i].sharedMaterial.SetInt("_StencilComp", (int)CompareFunction.Always);
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
				Debug.Log(SponzaMaterials.Length);
				SponzaMaterials[i].sharedMaterial.SetInt("_StencilComp", (int)CompareFunction.Equal);
				for (int ii = 0; ii < SponzaMaterials[i].sharedMaterials.Length; ii++)
				{
					SponzaMaterials[i].sharedMaterials[ii].SetInt("_StencilComp", (int)CompareFunction.Equal);
				}
			}
		}
	}
}

