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
    public static GameStateSystem _instance;


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
    public LocationService locationService = null;
    [NonSerialized]
    public WaySpotService waySpotService = null;
    //

    [NonSerialized]
    public GameInfo _gameInfo;
    private void Awake()
    {
        _instance = this;
    }

    private void Start()
    {
        inventory = new Inventory(UseItem);
        GameManager.Instance.uiInventory.SetInventory(inventory);

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

    //Tree Managment
    public void LoadTreesFromAssets()
    {
        _availableTrees = null;
        _availableTrees = Resources.LoadAll<Serialized_Tree>("StoryTree");
    }

    public static void SetNextActualNode(int indexOfChild)
    {
        _instance.ActualNode = _instance.ActualNode.children[indexOfChild];
        _instance.GetState().NextState();
    }
    //

    private void UseItem(ItemWorld item)
    {
        Debug.Log(item.GetItem().itemType.ToString() + " used !");
    }


}
