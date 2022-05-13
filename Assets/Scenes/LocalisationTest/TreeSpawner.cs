using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TreeSpawner : MonoBehaviour
{


    [Header("StoryTree")]
    private NodeEditorData[] _availableTrees;

    private void Start()
    {
        LoadTreesFromAssets();

        if (_availableTrees[0]?.storyTree != null)
            SpawnStoryTree(_availableTrees[0].storyTree, null, _availableTrees[0].name+" - Root");
    }
    void SpawnStoryTree(NTree<NodeInfo> tree, GameObject parent, string name)
    {
        if (tree != null)
        {
            GameObject go = new GameObject(name);
            NodeInfoMonoBehaviour newNodeInfo = go.AddComponent<NodeInfoMonoBehaviour>();
            newNodeInfo.LoadData(tree.data);

            if (tree.children.Count > 0)
            {
                foreach (var child in tree.children)
                {
                    tree.data.choiceList.Add(child.data);
                    SpawnStoryTree(child, go, tree.children.IndexOf(child).ToString());
                }
            }

            if (parent != null)
            {
                go.transform.parent = parent.transform;
            }
        }
    }

    public void LoadTreesFromAssets()
    {
        _availableTrees = null;
        _availableTrees = Resources.LoadAll<NodeEditorData>("StoryTree");
    }
}
