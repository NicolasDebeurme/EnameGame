using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;
using static Enums;

public class GameStateSystem : StateMachine
{
    public static GameStateSystem _instance;


    //Tree
    private Serialized_Tree[] _availableTrees;

    public NTree<StoryTreeNodeInfo> ActualNode;
    //

    //GamePlay
    [NonSerialized]
    public Roles _playerRole;
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

        SetState(new Begin(this));
    }

    //Tree Managment
    public void LoadTreesFromAssets()
    {
        _availableTrees = null;
        _availableTrees = Resources.LoadAll<Serialized_Tree>("StoryTree");
    }
    //

    //Choice State
    private List<Button> _choiceButtons;

    //
}
