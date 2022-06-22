using UnityEngine;
using UnityEngine.AddressableAssets;

public class SpawnInSphere : MonoBehaviour
{
    public bool usePrefabTransform = false;

    public float sphereRadius = 0.5f;
    public float secondsBeforeLoad = 3.0f;

    public LayerMask layerMask;

    public AssetReference objectToLoad;

    bool loadedAssets = false;
    bool currentlyLoading = false;

    float loadTimer = 0.0f; 
    float unLoadTimer = 0.0f;

    GameObject instantiatedObject;

    private void FixedUpdate()
    {
        if (!currentlyLoading)
        {
            if (Physics.CheckSphere(transform.position, sphereRadius, layerMask))
            {
                unLoadTimer = 0.0f;

                if (!loadedAssets)
                {
                    if (loadTimer >= secondsBeforeLoad)
                    {
                        loadTimer = 0.0f;
                        LoadAsset();
                    }
                    else
                    {
                        loadTimer += Time.fixedDeltaTime;
                    }
                }
            }
            else
            {
                loadTimer = 0.0f;

                if (loadedAssets)
                {
                    if (unLoadTimer >= secondsBeforeLoad)
                    {
                        unLoadTimer = 0.0f;
                        UnloadAsset();
                    }
                    else
                    {
                        unLoadTimer += Time.fixedDeltaTime;
                    }
                }
            }
        }
    }

    private async void LoadAsset()
    {
        currentlyLoading = true;
        if (usePrefabTransform)
        {
            instantiatedObject = await objectToLoad.InstantiateAsync(transform, true).Task;
        }
        else
        {
            instantiatedObject = await objectToLoad.InstantiateAsync(transform.position, transform.rotation, transform).Task;
        }
        currentlyLoading = false;
        loadedAssets = true;
    }

    private void UnloadAsset()
    {
        currentlyLoading = true;
        Addressables.Release(instantiatedObject);

        Resources.UnloadUnusedAssets();
        System.GC.Collect(System.GC.GetGeneration(instantiatedObject), System.GCCollectionMode.Optimized, false);

        currentlyLoading = false;
        loadedAssets = false;
    }

    private void OnDrawGizmosSelected()
    {
        Gizmos.color = Color.red;

        Gizmos.DrawWireSphere(transform.position, sphereRadius);
    }
}
