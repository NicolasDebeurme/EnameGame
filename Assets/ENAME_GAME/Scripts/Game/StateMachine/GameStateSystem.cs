using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;
using static Enums;
using Niantic.ARDK.LocationService;

public class GameStateSystem : StateMachine
{
    public static GameStateSystem Instance { get; private set;}
    public static LocationService LocationService { get; set;}


    //Tree
    public Serialized_Tree[] _availableTrees;

    public NTree<StoryTreeNodeInfo> ActualNode;
    //

    //GamePlay
    [NonSerialized]
    public Roles _playerRole;

    [NonSerialized]
    public Inventory inventory;

    [NonSerialized]
    public StepAction actualAction = null;

    [NonSerialized]
    public WaySpotService waySpotService = null;

    [NonSerialized]
    public bool isDialogueDone = false;
    //

    [NonSerialized]
    public GameInfo _gameInfo;
    private void Awake()
    {
        Instance = this;

        //Initialize inventory system----
        inventory = new Inventory(UseItem);
        GameManager.Instance.uiInventory.SetInventory(inventory);
    }

    private void Start()
    {
        LoadTreesFromAssets();

        foreach(var tree in _availableTrees)
        {
            if(tree.name == GameManager.Instance.TreeToLoad_Name && tree?.root != null)
                ActualNode = tree.root;
        }

        if (ActualNode == null)
        {
            ActualNode = _availableTrees[0].root;
            Debug.Log("DefaultTree taken");
        }

        SetState(new Lobby(this));
    }

    //// Tree Managment
    private void LoadTreesFromAssets()
    {
        _availableTrees = null;
        _availableTrees = Resources.LoadAll<Serialized_Tree>("StoryTree");
    }
    
    public static void SetNextActualNode(int indexOfChild)
    {
        Instance.ActualNode = Instance.ActualNode.children[indexOfChild];
        Debug.Log("SessionPaused - " + Instance._gameInfo._session);
        Instance._gameInfo._session.Pause();
        Instance.SetState(new GoToPlace(Instance));
    }
    ////

    //Inventory
    private void UseItem(ItemWorld item)
    {
        Debug.Log(item.GetItem().itemType.ToString() + " used !");
    }
    //

}
