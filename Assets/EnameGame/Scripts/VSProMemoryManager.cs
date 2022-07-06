using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using AwesomeTechnologies.VegetationStudio;

/// <summary>
/// This script is intended to be placed on the Camera and will manually cause VegetationStudio Pro 
/// to clear its cache using a bounds to exclude currently needed cells whenever the camera has 
/// moved enough.
/// </summary>
public class VSProMemoryManager : MonoBehaviour
{
	[Range(10f, 10000f), Tooltip("The square distance before a ClearCache is performed\n\nShould be at an interval that doesn't introduce a large impact to frametime when a ClearCache is performed")]
	public float sqrDistance = 100f;
	[Range(2f, 3f), Tooltip("The multiplier on vegetation distance to determine the bounds size for a ClearCache\n\nShould be a value that doesn't cause cells currently needed to be cleared")]
	public float vegetationMultiplier = 2.1f;
	[Tooltip("Whether billboard cells should also be cleared\n\nNOTE: Increases the amount of work to evaluate cells for slightly less memory leaking")]
	public bool clearBillboards = true;

	private Vector3 lastPosition;

	void Start()
	{
		if (VegetationStudioManager.Instance == null)
		{
			var vspro = (VegetationStudioManager)FindObjectOfType(typeof(VegetationStudioManager));
			if (vspro == null)
			{
#if UNITY_EDITOR
				Debug.LogWarning("VSProMemoryManager: Could not find VegetationStudioManager. Disabling...", this);
#endif
				enabled = false;
				return;
			}
		}

		lastPosition = transform.position;
	}

	void Update()
	{
		if (Vector3.SqrMagnitude(transform.position - lastPosition) > sqrDistance)
		{
			ClearCache();
		}
	}

	public void ClearCache()
	{
		lastPosition = transform.position;

		float size = 130 * vegetationMultiplier;
		Bounds bounds = new Bounds(transform.position, new Vector3(size, size, size));
		VegetationStudioManager.ClearCacheInverse(bounds, clearBillboards);
	}
}
