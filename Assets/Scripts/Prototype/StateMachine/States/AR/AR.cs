using Niantic.ARDK.AR;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static Enums;

public class AR : State
{
    //Action
    private StepAction action;
    //WaySpot
    private WaySpotService wayspotService;
    private ARView _view;

    public UI_Inventory uiInventory;
    public AR(GameStateSystem gameStateSystem) : base(gameStateSystem)
    {
    }

    public override IEnumerator Start()
    {
        _view = UIManager.Show<ARView>();

        GameStateSystem.inventory.OnItemHanded += UpdateItemUI;
        GameStateSystem.inventory.AddItem(new Item { itemType = ItemType.Pistol });

        GameStateSystem._gameInfo._session.Run(GameStateSystem._gameInfo._sessionConfigData);

        wayspotService = GameStateSystem.gameObject.AddComponent<WaySpotService>();
        wayspotService.Init(GameStateSystem._gameInfo._session, _view.prefabToSpawn, GameStateSystem.locationService._locationService, _view.LocalizationStatus);
        wayspotService.ScreenTap += GameStateSystem.inventory.UseItem;
        GameStateSystem._gameInfo._session.Ran += wayspotService.OnSessionStarted;

        yield return new WaitForSeconds(1f);

        action = GameStateSystem.gameObject.AddComponent(Type.GetType(GameStateSystem.ActualNode.data.action)) as StepAction;
        action.Initialize(GameStateSystem);

        yield break;
    }
    public override void NextState()
    {
        GameStateSystem.inventory.OnItemHanded -= UpdateItemUI;

        action.DestroySelf();
        wayspotService.DestroySelf();

        if (GameStateSystem.ActualNode.children?.Count > 0)
        {
            if (GameStateSystem.ActualNode.children.Count ==1)
            {
                NetworkingManager.BroadCastChoice(GameStateSystem.ActualNode.children.IndexOf(GameStateSystem.ActualNode.children[0]));

                GameStateSystem.ActualNode = GameStateSystem.ActualNode.children[0];
                GameStateSystem._gameInfo._session.Pause();
                GameStateSystem.SetState(new GoToPlace(GameStateSystem));
            }
            else
                GameStateSystem.SetState(new MakeAChoice(GameStateSystem));
        }
        else
        {
            NetworkingManager.Instance.StopSharedAR();
            GameStateSystem.SetState(new End(GameStateSystem));
        }
    }

    private void UpdateItemUI(object sender, Item item)
    {
        _view.UpdateItemUI(item);
    }
}
