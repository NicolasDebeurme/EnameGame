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

    //Load the action data (ScriptableObject)
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

    //virtual method to be subscribed to when a dialogue end for exemple
    public virtual IEnumerator OnActionEnded()
    {
        DialogueManager._dialogueInstance.DialogueEnded -= OnActionEnded;
        Debug.Log("ActionEnded");
        yield return new WaitForSeconds(2f);

        ArState._view.continueButton.gameObject.SetActive(true);
    }
   
    
    //Called from the MakeAChoice scene when the player click on a choice button and an action need to be make
    public virtual IEnumerator ShowDecisionResult(int indexOfDecison)
    {
        Debug.Log("No decison result ..");
        Destroy(this);
        yield break;
    }

    internal void DestroySelf()
    {
        Destroy(this);
    }
    public virtual void OnDestroy()
    {
        foreach (var gO in AnchorsPrefab)
        {
            Destroy(gO);
        }
    }
}
