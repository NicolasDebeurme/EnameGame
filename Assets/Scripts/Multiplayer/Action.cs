using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
 public abstract class Action : MonoBehaviour
{
    public abstract void OnStart();


    public abstract void OnUpdate();

}
