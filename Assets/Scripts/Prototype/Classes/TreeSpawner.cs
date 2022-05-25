using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TreeSpawner : MonoBehaviour
{
    private Serialized_Tree[] _availableTrees;

    [ContextMenu("Instantiate Tree")]
    public void Start()
    {
        LoadTreesFromAssets();
        if (_availableTrees?[0]?.root != null)
            SpawnStoryTree(_availableTrees[0].root, null, _availableTrees[0].name+" - Root");
    }
    public NodeInfoMonoBehaviour SpawnStoryTree(NTree<StoryTreeNodeInfo> tree, GameObject parent, string name)
    {
        if (tree != null)
        {
            GameObject go = new(name);
            NodeInfoMonoBehaviour newNodeInfo = go.AddComponent<NodeInfoMonoBehaviour>();

            NodeInfoMonoBehaviour[] choiceList;

            if (tree.children?.Count > 0)
            {
                choiceList = new NodeInfoMonoBehaviour[tree.children.Count];

                foreach (var child in tree.children)
                {
                    choiceList[tree.children.IndexOf(child)] = SpawnStoryTree(child, go, tree.children.IndexOf(child).ToString());
                }
            }
            else
                choiceList = new NodeInfoMonoBehaviour[0];

            if (parent != null)
            {
                go.transform.parent = parent.transform;
            }

            newNodeInfo.LoadData(tree.data, choiceList);
            return newNodeInfo;
        }

        return null;
    }

    public void LoadTreesFromAssets()
    {
        _availableTrees = null;
        _availableTrees = Resources.LoadAll<Serialized_Tree>("StoryTree");
    }
}
