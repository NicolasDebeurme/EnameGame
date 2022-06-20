using System;
using UnityEngine.Events;
using UnityEngine.SceneManagement;

namespace LoadHandling
{
    [Serializable]
    public class OnSceneLoaded : UnityEvent<Scene,LoadSceneMode> { }
}