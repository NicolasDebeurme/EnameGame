using System;
using UnityEngine.Events;
using UnityEngine.SceneManagement;

namespace LoadHandling
{
    [Serializable]
    public class OnSceneUnloaded : UnityEvent<Scene> { };
}