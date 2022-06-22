using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public abstract class StepAction : MonoBehaviour
{
    protected GameStateSystem GameStateSystem;
    protected ActionData actionData;
    protected AR ArState;
    public virtual void Initialize(GameStateSystem GameStateSystem)
    {
        this.GameStateSystem = GameStateSystem;

        ArState = GameStateSystem.GetState() as AR;
    }

    protected T LoadFromFile<T>(string actionName) where T : ScriptableObject
    {
        var loadedObject = Resources.Load<T>(actionName+ "/ActionData");
        if (loadedObject == null)
        {
            throw new FileNotFoundException("...no file found - please check the configuration");
        }
        return loadedObject;
    }

    public virtual void DestroySelf()
    {
        Destroy(this);
    }
}
