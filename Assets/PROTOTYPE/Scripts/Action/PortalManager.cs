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

    private void OnTriggerEnter(Collider other)
    {
		SponzaMaterials = Sponza.GetComponentsInChildren<Renderer>();
		//disable stencil test
		for (int i = 0; i < SponzaMaterials.Length; ++i)
		{
			for (int ii = 0; ii < SponzaMaterials[i].sharedMaterials.Length; ii++)
			{
				SponzaMaterials[i].sharedMaterials[ii].SetInt("_StencilComp", (int)CompareFunction.Always);
			}
		}
	}

    private void OnTriggerExit(Collider other)
    {
		SponzaMaterials = Sponza.GetComponentsInChildren<Renderer>();
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

