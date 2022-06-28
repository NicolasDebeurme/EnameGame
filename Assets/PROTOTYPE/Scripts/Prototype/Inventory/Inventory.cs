using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static Enums;

public class Inventory
{
    public EventHandler OnItemListChanged;
    public EventHandler<Item> OnItemHanded;

    private Action<ItemWorld> useItemAction;

    private List<Item> _itemList;

    public ItemWorld _itemOut = null;

    public Inventory(Action<ItemWorld> useItemAction)
    {
        this.useItemAction = useItemAction;

        _itemList = new List<Item>();
    }

    public void AddItem(Item item)
    {
        _itemList.Add(item);
        OnItemListChanged?.Invoke(this,EventArgs.Empty);
    }

    public List<Item> GetItemList()
    {
        return _itemList;
    }

    public void ItemClicked(Item item)
    {
        if (_itemOut == null)
        {
            _itemOut = ItemWorld.SpawnItemHand(item);
        }
        else if (_itemOut.GetItem() != item)
        {
            _itemOut.DestroySelf();
            _itemOut = ItemWorld.SpawnItemHand(item);
        }
        else
        {
            _itemOut.DestroySelf();
            _itemOut = null;
        }

        item.itemWorld = _itemOut;
        OnItemHanded?.Invoke(this, item);
    }

    public void UseItem(object sender, EventArgs e)
    {
        if(_itemOut != null)
            useItemAction?.Invoke(_itemOut);
    }
}
