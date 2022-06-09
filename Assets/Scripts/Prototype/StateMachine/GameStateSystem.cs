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
    public LocationService locationService;

    [NonSerialized]
    public GameInfo _gameInfo;
    //
    private void Awake()
    {
        _instance = this;
    }

    private void Start()
    {
        LoadTreesFromAssets();
        if (_availableTrees?[0]?.root != null)
            ActualNode=_availableTrees[0].root;

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
        _instance.ActualNode = _instance.ActualNode.GetChild(indexOfChild);
    }
    //

    //Choice State

    //
}
