using Niantic.ARDK;
using System;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    public static GameManager Instance { get; private set; }


    private GameInfo _gameInfo = null;

    //Runtime environment
    public RuntimeEnvironment runtimeEnv;


    //GamePlay
    [NonSerialized]
    public GameStateSystem _actualGameState = null;

    public UI_Inventory uiInventory;
    //


    //GPS
    [Header("GPS")]
    public Image imageBoussole;
    public Point pointToReach;
    //

    #region Monobehaviour
    private void Awake()
    {
        Instance = this;
    }

    private void Start()
    {
        UIManager.Instance.SetUIEvents();
        _actualGameState = gameObject.AddComponent<GameStateSystem>();
    }

    #endregion

    

    public void OnContinue()
    {
        GameStateSystem._instance.GetState().NextState();
    }

    public void NetworkInitialized(GameInfo ARNetworkingSession)
    {
        _actualGameState._gameInfo = ARNetworkingSession;  
    }

}
