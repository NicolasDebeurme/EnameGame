using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static Enums;

public class ItemWorld : MonoBehaviour
{
    private Item _item;

    public static Vector3 HandSpawnPos = new(0.2f, -0.4f, 0.7f);
    public static Quaternion HandSpawnRot = Quaternion.Euler(-2.5f, -10f, 0);
    public static List<ItemWorld> itemsWorld = new();
    public static ItemWorld SpawnItemWorld(Vector3 position, Item item)
    {
        Transform transform = Instantiate(ItemAssets.Instance.Assets[item.itemType].prefab, position, Quaternion.identity).transform;

        ItemWorld itemWorld = transform.GetComponent<ItemWorld>();
        itemWorld.SetItem(item);
        itemsWorld.Add(itemWorld);
        return itemWorld;
    }
    public static ItemWorld SpawnItemWorld(Item item, Transform parent)
    {
        Transform transform = Instantiate(ItemAssets.Instance.Assets[item.itemType].prefab,parent).transform;
        Instantiate(ItemAssets.Instance.arrowPrefab, parent);

        ItemWorld itemWorld = transform.GetComponent<ItemWorld>();
        itemWorld.SetItem(item);
        itemsWorld.Add(itemWorld);

        return itemWorld;
    }

    public static ItemWorld SpawnItemHand(Item item)
    {
        Transform transform = Instantiate(ItemAssets.Instance.Assets[item.itemType].prefab,Camera.main.transform).transform;

        transform.localPosition = HandSpawnPos;
        transform.localRotation = HandSpawnRot;

        ItemWorld itemWorld = transform.GetComponent<ItemWorld>();
        itemWorld.SetItem(item);

        return itemWorld;
    }

    public static bool DestroyItemOnBroadcast(ItemType itemType)
    {
        foreach(var itemWorld in itemsWorld)
        {
            if(itemWorld.TryGetComponent<ItemWorld>(out var itemWorldScript))
            {
                if (itemWorldScript._item.itemType == itemType)
                {
                    itemWorldScript.DestroySelf();
                    return true;
                }
            }

        }
        return false;
    }

    public void SetItem(Item item)
    {
        _item = item;
    }

    public Item GetItem()
    {
        return _item;
    }

    public void DestroySelf()
    {
        if (transform.parent.gameObject != Camera.main.gameObject)
            Destroy(gameObject.transform.parent.gameObject);
        else
            Destroy(gameObject);
    }

    public void OnRayHitAddItem()
    {
        GameManager.Instance._actualGameState.inventory.AddItem(_item);
        NetworkingManager.BroadcastItemTaken(_item.itemType);
    }

    private void OnDestroy()
    {
        itemsWorld.Remove(this);
    }
}
