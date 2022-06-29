using Niantic.ARDK.AR;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static Enums;

public class AR : State
{
    //Public
    public UI_Inventory uiInventory;
    public GameObject textPanel;
    public ARView _view;

    //Private
    private StepAction action;

    public AR(GameStateSystem gameStateSystem) : base(gameStateSystem)
    {
    }

    public override IEnumerator Start()
    {
        _view = UIManager.Show<ARView>();
        textPanel = _view.textPanel;

        if(GameStateSystem.waySpotService == null)
        {
            GameStateSystem.waySpotService = GameStateSystem.gameObject.AddComponent<WaySpotService>();
            GameStateSystem.waySpotService.Init(GameStateSystem._gameInfo._session, _view.textPanel);
            GameStateSystem.waySpotService.ScreenTap += GameStateSystem.inventory.UseItem;
            GameStateSystem.waySpotService.WayspotLocalized += OnWayspotLocalized;
            GameStateSystem.waySpotService.WayspotLost += OnWayspotLost;
        }

        GameStateSystem.inventory.OnItemHanded += UpdateItemUI;
        GameStateSystem._gameInfo._session.Run(GameStateSystem._gameInfo._sessionConfigData);

        yield break;
    }

    public override void NextState()
    {
        GameStateSystem.inventory.OnItemHanded -= UpdateItemUI;

        if(action != null)
            action.DestroySelf();

 
        if (GameStateSystem.ActualNode.children?.Count > 0)
        {
            if (GameStateSystem.ActualNode.children.Count ==1)
            {
                    GameStateSystem.ActualNode = GameStateSystem.ActualNode.children[0];
                    GameStateSystem._gameInfo._session.Pause();
                    GameStateSystem.SetState(new GoToPlace(GameStateSystem)); 
            }
            else
                GameStateSystem.SetState(new MakeAChoice(GameStateSystem));
        }
        else
        {
            GameStateSystem.SetState(new End(GameStateSystem));
        }
    }

    private void UpdateItemUI(object sender, Item item)
    {
        _view.UpdateItemUI(item);
    }
    private void OnWayspotLost(object sender, EventArgs e)
    {
        Debug.Log("wayspotLost");
        if(action != null)
            action.DestroySelf();
    }

    private void OnWayspotLocalized(object sender, EventArgs e)
    {
        Debug.Log("wayspotLocalized");
        if (action == null)
        {
            action = GameStateSystem.gameObject.AddComponent(Type.GetType(GameStateSystem.ActualNode.data.action)) as StepAction;

            if (action != null)
                action.Initialize(GameStateSystem);
            else
                Debug.Log("No action provided");
        }
    }
}
