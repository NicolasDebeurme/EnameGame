using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;

public class ARView : View
{
    public GameObject textPanel;
    public GameObject prefabToSpawn;
    public GameObject shootButton;
    public Button continueButton;

    private GameObject _itemUI = null;
    public override void Initialize()
    {
    }

    internal void UpdateItemUI(Item item)
    {
        if (_itemUI == null)
        {
            _itemUI = ItemAssets.Instance.Assets[item.itemType].UI;
            _itemUI.SetActive(true);
        }
        else if (_itemUI != ItemAssets.Instance.Assets[item.itemType].UI)
        {
            _itemUI.SetActive(false);
            _itemUI = ItemAssets.Instance.Assets[item.itemType].UI;
            _itemUI.SetActive(true);
        }
        else
        {
            _itemUI.SetActive(false);
            _itemUI = null;
        }
    }
}
