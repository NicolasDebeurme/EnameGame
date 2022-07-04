using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;

public class PortalManager : MonoBehaviour
{
	public GameObject MainCamera;
	public GameObject Sponza;

	private Renderer[] SponzaMaterials;
	private Terrain Terrain;

	// Use this for initialization
	void Start()
	{
		SponzaMaterials = Sponza.GetComponentsInChildren<Renderer>();
		Terrain = Sponza.GetComponentInChildren<Terrain>();

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

    void OnTriggerStay(Collider collider)
	{
		SponzaMaterials = Sponza.GetComponentsInChildren<Renderer>();

		Vector3 camPositionInPortalSpace = transform.InverseTransformPoint(MainCamera.transform.position);

		if (camPositionInPortalSpace.y < .3f)
		{
			if (Terrain != null)
				Terrain.gameObject.SetActive(false);
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
			if (Terrain != null)
				Terrain.gameObject.SetActive(true);
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

