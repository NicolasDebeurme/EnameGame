using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class Jar : MonoBehaviour
{
    private ItemWorld _jarWorld;
    private void Awake()
    {
        _jarWorld=ItemWorld.SpawnItemWorld(new Item { itemType = Enums.ItemType.Jar },transform);
    }

}
