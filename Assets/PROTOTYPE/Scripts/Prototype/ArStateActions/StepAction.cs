using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

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

    public virtual void DestroySelf()
    {
        Destroy(this);
    }
}
