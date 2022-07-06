using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.AddressableAssets;

[ExecuteInEditMode]
public class PrefabToAddress : MonoBehaviour
{
    List<AssetReference> assetReferences = new List<AssetReference>();

    private void Start()
    {
        foreach (Transform prefab in transform)
        {
            Debug.Log(prefab.gameObject.ToString());
            AssetReference newReference = new AssetReference(GetGUIDFromPrefab(prefab.gameObject));
            Debug.Log(newReference.ToString());
            assetReferences.Add(newReference);
        }
    }

    public static string GetGUIDFromPrefab(GameObject target)
    {
        string path = AssetDatabase.GetAssetPath(target);
        Debug.Log(path);
        string guid = AssetDatabase.AssetPathToGUID(path);
        Debug.Log(guid);

        return guid;
        //var assetEntry = UnityEditor.AddressableAssets.AddressableAssetSettingsDefaultObject.Settings.FindAssetEntry(guid);
        //return assetEntry.address;
    }

}
