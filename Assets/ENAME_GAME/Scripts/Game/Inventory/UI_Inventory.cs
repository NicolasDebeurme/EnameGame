using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UI_Inventory : MonoBehaviour
{
    private Inventory _inventory;
    [SerializeField] private Transform itemSlotTemplate;

    public void SetInventory(Inventory inventory)
    {
        _inventory = inventory;

        _inventory.OnItemListChanged += Inventory_OnItemListChanged;

        RefreshInventoryItems();
    }

    private void Inventory_OnItemListChanged(object sender, EventArgs e)
    {
        foreach(Transform child in transform)
        {
            if (child == itemSlotTemplate) continue;

            Destroy(child.gameObject);
        }
        RefreshInventoryItems();
    }

    private void RefreshInventoryItems()
    {
        int x = 0;
        int y = 0;

        foreach(var item in _inventory.GetItemList())
        {
            RectTransform itemSlotRectTransform = Instantiate(itemSlotTemplate,transform).GetComponent<RectTransform>();
            itemSlotRectTransform.gameObject.SetActive(true);

            itemSlotRectTransform.anchoredPosition = new Vector2(x, y* (itemSlotRectTransform.rect.height+ itemSlotRectTransform.rect.height/5));

            Image itemImage = itemSlotRectTransform.GetComponentsInChildren<Image>()[1];
            itemImage.sprite = item.GetSprite();

            Button itemButton = itemSlotRectTransform.GetComponent<Button>();
            itemButton.onClick.AddListener(() => _inventory.ItemClicked(item));

            y++;

        }
    }
}
