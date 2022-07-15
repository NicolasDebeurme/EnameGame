using Niantic.ARDK;
using Niantic.ARDK.LocationService;
using System;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;
using static Enums;

public class GameManager : MonoBehaviour
{
    public static GameManager Instance { get; private set; }

    //Runtime environment
    public RuntimeEnvironment runtimeEnv;
    public string TreeToLoad_Name ="DefaultTree";

    //GamePlay
    [NonSerialized]
    public GameStateSystem _actualGameState = null;

    public UI_Inventory uiInventory;

    public bool HasSwap = false;
    public bool HasDenounce = false;
    public bool HasShoot = false;
    //

    #region Monobehaviour
    private void Awake()
    {
        Instance = this;
    }

    private void Start()
    {
        _actualGameState = gameObject.AddComponent<GameStateSystem>();
    }
    #endregion

    public void OnContinue()
    {
        GameStateSystem.Instance.GetState().NextState();
    }
    public void BroadcastNextState()
    {
        NetworkingManager.BroadCastNextState();
    }
}
