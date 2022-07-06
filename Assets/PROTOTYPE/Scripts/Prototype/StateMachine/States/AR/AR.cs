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


    public AR(GameStateSystem gameStateSystem) : base(gameStateSystem)
    {
    }

    public override IEnumerator Start()
    {
        _view = UIManager.Show<ARView>();
        _view.continueButton.gameObject.SetActive(false);
        textPanel = _view.textPanel;


        if (GameStateSystem.waySpotService == null)
        {
            GameStateSystem.waySpotService = GameStateSystem.gameObject.AddComponent<WaySpotService>();
            GameStateSystem.waySpotService.Init(GameStateSystem._gameInfo._session, _view.textPanel);
            GameStateSystem.waySpotService.ScreenTap += GameStateSystem.inventory.UseItem;
        }

        GameStateSystem.waySpotService.WayspotLocalized += OnWayspotLocalized;
        GameStateSystem.waySpotService.WayspotLost += OnWayspotLost;
        GameStateSystem.inventory.OnItemHanded += UpdateItemUI;

        GameStateSystem._gameInfo._session.Run(GameStateSystem._gameInfo._sessionConfigData);
        yield break;
    }

    private void UpdateItemUI(object sender, Item item)
    {
        _view.UpdateItemUI(item);
    }
    private void OnWayspotLost(object sender, EventArgs e)
    {
        Debug.Log("wayspotLost");
        if(GameStateSystem.actualAction != null)
        {
            GameStateSystem.actualAction.DestroySelf();
        }
    }

    private void OnWayspotLocalized(object sender, EventArgs e)
    {
        Debug.Log("wayspotLocalized");
        if (GameStateSystem.actualAction == null)
        {
            GameStateSystem.actualAction = GameStateSystem.gameObject.AddComponent(Type.GetType(GameStateSystem.ActualNode.data.action)) as StepAction;

            if (GameStateSystem.actualAction != null)
                GameStateSystem.actualAction.Initialize(GameStateSystem);
            else
                Debug.Log("No action provided");
        }
    }

    public override void NextState()
    {
        GameStateSystem.waySpotService.WayspotLocalized -= OnWayspotLocalized;
        GameStateSystem.waySpotService.WayspotLost -= OnWayspotLost;
        GameStateSystem.inventory.OnItemHanded -= UpdateItemUI;


        if (GameStateSystem.ActualNode.children?.Count > 0)
        {
            if (GameStateSystem.ActualNode.children.Count == 1)
            {
                if (GameStateSystem.actualAction != null)
                    GameStateSystem.actualAction.DestroySelf();

                GameStateSystem.SetNextActualNode(0);
            }
            else
                GameStateSystem.SetState(new MakeAChoice(GameStateSystem));
        }
        else
        {
            if (GameStateSystem.actualAction != null)
                GameStateSystem.actualAction.DestroySelf();

            GameStateSystem.SetState(new End(GameStateSystem));
        }
    }
}
