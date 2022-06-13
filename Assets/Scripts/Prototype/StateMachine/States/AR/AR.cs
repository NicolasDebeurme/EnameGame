using Niantic.ARDK.AR;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class AR : State
{

    //WaySpot
    private WaySpotService wayspotService;
    private ARView _view;

    private Inventory _inventory;
        public UI_Inventory uiInventory;
    public AR(GameStateSystem gameStateSystem) : base(gameStateSystem)
    {
    }

    public override IEnumerator Start()
    {
        _view = UIManager.Show<ARView>();

        _inventory = new Inventory(UseItem);
        _inventory.OnItemHanded += UpdateItemUI;
        GameManager._instance.uiInventory.SetInventory(_inventory);

        GameStateSystem._gameInfo._session.Run(GameStateSystem._gameInfo._sessionConfigData);

        wayspotService = GameStateSystem.gameObject.AddComponent<WaySpotService>();
        wayspotService.Init(GameStateSystem._gameInfo._session, _view.prefabToSpawn, GameStateSystem.locationService._locationService, _view.LocalizationStatus, GameStateSystem.level);
        wayspotService.ScreenTap += _inventory.UseItem;
        GameStateSystem._gameInfo._session.Ran += wayspotService.OnSessionStarted;

        yield break;
    }

    public override void NextState()
    {
        GameStateSystem.level++;

        if(GameStateSystem.ActualNode.children?.Count > 0)
            GameStateSystem.SetState(new MakeAChoice(GameStateSystem));
        else
        {
            GameManager._instance.StopSharedAR();
            GameStateSystem.SetState(new End(GameStateSystem));
        }
    }

    private void UseItem(ItemWorld item)
    {
        Debug.Log(item.GetItem().itemType.ToString() + " used !");
    }

    private void UpdateItemUI(object sender, Item item)
    {
        _view.UpdateItemUI(item);
    }
}
