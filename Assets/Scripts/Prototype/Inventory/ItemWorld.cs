using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static Enums;

public class ItemWorld : MonoBehaviour
{
    private Item _item;

    public static Vector3 HandSpawnPos = new Vector3(0.25f, -0.5f, 1.15f);
    public static Quaternion HandSpawnRot = Quaternion.Euler(-2.5f, -10f, 0);
    public static ItemWorld SpawnItemWorld(Vector3 position, Item item)
    {
        Transform transform = Instantiate(ItemAssets.Instance.Assets[item.itemType].prefab, position, Quaternion.identity).transform;

        ItemWorld itemWorld = transform.GetComponent<ItemWorld>();
        itemWorld.SetItem(item);

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
        Destroy(gameObject);
    }
}
