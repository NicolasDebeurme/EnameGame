using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EntranceAction : StepAction
{
    public override void Initialize(GameStateSystem gameStateSystem)
    {
        base.Initialize(gameStateSystem);

        actionData = LoadFromFile<ActionData>(GetType().ToString());

        Instantiate(actionData.prefabs[0].prefab, Vector3.zero, Quaternion.identity);
    }

}
