using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using static Enums;

public abstract class StepAction : MonoBehaviour
{
    protected GameStateSystem GameStateSystem;
    protected ActionData actionData;
    protected AR ArState;
    protected GameObject[] AnchorsPrefab;

    public virtual void Initialize(GameStateSystem GameStateSystem) {}
    public virtual void Initialize(GameStateSystem GameStateSystem,StepAction actionType)
    {
        this.GameStateSystem = GameStateSystem;

        ArState = GameStateSystem.GetState() as AR;

        actionData = LoadAction(actionType.GetType().ToString());

#if !UNITY_EDITOR

        if (actionData.payloads != null)
        {
            foreach(var payload in actionData.payloads)
            {
                AnchorsPrefab = GameStateSystem.waySpotService.LoadPayloads(payload.jsonData,payload.prefab);
            }
        }
#else
        AnchorsPrefab = new GameObject[3];

        if(actionData.prefabs.Length > 0)
            AnchorsPrefab[0] = Instantiate(actionData.prefabs[0].prefab);
#endif

    }

    protected ActionData LoadAction(string actionName) 
    {
        var loadedObject = Resources.Load<ActionData>(actionName+ "/ActionData");
        if (loadedObject == null)
        {
            throw new FileNotFoundException("...no file found - please check the configuration");
        }
        return loadedObject;
    }

    protected void NextState()
    {
        GameStateSystem.GetState().NextState();
    }

    public virtual IEnumerator OnActionEnded()
    {
        Debug.Log("ActionEnded");
        yield return new WaitForSeconds(2f);

        if (actionData.automaticNextScene)
            GameManager.Instance.BroadcastNextState();
        else
            ArState._view.continueButton.gameObject.SetActive(true);
    }
    public virtual void DestroySelf()
    {
        foreach(var gO in AnchorsPrefab)
        {
            Destroy(gO);
        }
        Destroy(this);
    }
    public virtual IEnumerator ShowDecisionResult(int indexOfDecison)
    {
        Debug.Log("No decison result ..");
        DestroySelf();
        yield break;
    }

    public ActionData GetActionData()
    {
        return actionData;
    }

}
