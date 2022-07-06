using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Pistol : MonoBehaviour
{
    private ItemWorld _pistolWorld;
    private void Awake()
    {
        _pistolWorld = ItemWorld.SpawnItemWorld(new Item { itemType = Enums.ItemType.Pistol }, transform);
    }
}
