using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.ResourceLocations;

public class AssetObject
{
    public GameObject parent;

    public List<GameObject> assets;

    public AssetObject(IEnumerable<string> labels)
    {
        parent = new GameObject(string.Join("_", labels));
        assets = new List<GameObject>();
    }

    public AssetObject(string label)
    {
        parent = new GameObject(label);
        assets = new List<GameObject>();
    }

    public string GetLabel()
    {
        return parent.name;
    }

    public void ClearMyAssets()
    {
        CreatedAssets.ClearAssets(GetLabel());
    }

    public static bool operator true(AssetObject x)
    {
        if (x.parent && x.assets != null)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    public static bool operator false(AssetObject x)
    {
        if (x.parent && x.assets != null)
        {
            return false;
        }
        else
        {
            return true;
        }
    }

    public static implicit operator bool(AssetObject exists)
    {
        return exists;
    }
}

public static class CreatedAssets
{
    public static Dictionary<string, AssetObject> AssetDictionary { get; private set; } = new Dictionary<string, AssetObject>();

    public static async Task CreateAndWaitUntilCompleted(IEnumerable<string> _labels)
    {
        AssetObject assetObject = new AssetObject(_labels);

        foreach (string label in _labels)
        {
            await CreateAddressablesLoader.InitAsset(label, assetObject.assets, assetObject.parent);
        }

        AssetDictionary.Add(assetObject.GetLabel(), assetObject);
    }

    public static async Task CreateAndWaitUntilCompleted(string _label)
    {
        AssetObject assetObject = new AssetObject(_label);

        await CreateAddressablesLoader.InitAsset(_label, assetObject.assets, assetObject.parent);

        AssetDictionary.Add(assetObject.GetLabel(), assetObject);
    }

    public static void ClearAssets(IEnumerable<string> labels)
    {
        HandleRemove(string.Join("_", labels));
    }

    public static void ClearAssets(string label)
    {
        HandleRemove(label);
    }

    public static Task ClearAssets(IEnumerable<string> labels, IEnumerable<string> newLabels)
    {
        return HandleRemove(string.Join("_", labels), string.Join("_", newLabels));
    }

    public static Task ClearAssets(string label, string newLabel)
    {
        return HandleRemove(label, newLabel);
    }

    public static Task ClearAssets(string label, IEnumerable<string> newLabels)
    {
        return HandleRemove(label, string.Join("_", newLabels));
    }

    public static Task ClearAssets(IEnumerable<string> label, string newLabels)
    {
        return HandleRemove(string.Join("_", label), newLabels);
    }

    private static void HandleRemove(string label)
    {
        if (AssetDictionary.TryGetValue(label, out AssetObject assetObject))
        {
            AssetDictionary.Remove(assetObject.GetLabel());

            foreach (var asset in assetObject.assets)
            {
                if (asset != null)
                {
                    Addressables.ReleaseInstance(asset);
                }
            }

            if (assetObject.parent)
            {
                UnityEngine.Object.Destroy(assetObject.parent);
            }
        }
    }

    private static Task HandleRemove(string label, string _newLabel)
    {
        if (AssetDictionary.TryGetValue(label, out AssetObject assetObject))
        {
            AssetDictionary.Remove(assetObject.GetLabel());

            foreach (var asset in assetObject.assets)
            {
                if (asset != null)
                {
                    Addressables.ReleaseInstance(asset);
                }
            }

            if (assetObject.parent)
            {
                UnityEngine.Object.Destroy(assetObject.parent);
            }
        }

        return CreateAndWaitUntilCompleted(_newLabel);
    }
}
