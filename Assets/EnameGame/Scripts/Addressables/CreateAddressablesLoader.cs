using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.ResourceLocations;

public static class CreateAddressablesLoader
{
    public static async Task<bool> InitAsset(string assetNameOrLabel, List<GameObject> createdObjs, GameObject parent = null)
    {
        IList<IResourceLocation> locations = await Addressables.LoadResourceLocationsAsync(assetNameOrLabel).Task;

        List<Task> loadingTasks = new List<Task>();

        foreach (IResourceLocation location in locations)
        {

            if (location == null)
            {
                Debug.LogWarning("Null location found");
            }
            else
            {
                loadingTasks.Add(LoadAsset(createdObjs, location, parent));
            }
        }

        await Task.WhenAll(tasks: loadingTasks);
        return true;
    }

    private static async Task LoadAsset<T>(List<T> createdObjs, IResourceLocation location, GameObject parent) where T : Object
    {

        var newCreatedObject = await Addressables.InstantiateAsync(location, parent.transform).Task as T;

        createdObjs.Add(newCreatedObject);
    }
}
