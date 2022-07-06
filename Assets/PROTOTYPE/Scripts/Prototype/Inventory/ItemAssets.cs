using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static Enums;

public class ItemAssets : MonoBehaviour
{
    [Serializable]
    public class ItemAsset
    {
        public ItemType type;
        public Sprite sprite;
        public GameObject prefab;
        public GameObject UI;
    }
    public static ItemAssets Instance{get; private set;}

    [SerializeField]
    private List<ItemAsset> assets;

    [HideInInspector]
    public Dictionary<ItemType,ItemAsset> Assets { get; private set; }
    public GameObject arrowPrefab;
    private void Awake()
    {
        Instance = this;

        Assets = new Dictionary<ItemType, ItemAsset>();

        foreach (var item in assets)
        {
            Assets.Add(item.type, item);
        }
    }

}
