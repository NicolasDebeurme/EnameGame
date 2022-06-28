using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static Enums;

public class Item
{
    public ItemType itemType;
    public ItemWorld itemWorld;
    public Sprite GetSprite()
    {
        var itemSprite = ItemAssets.Instance.Assets[itemType].sprite;
        

        return itemSprite;
    }

}


