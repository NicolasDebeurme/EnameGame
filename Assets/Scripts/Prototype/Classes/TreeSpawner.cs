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
        if (_availableTrees[0]?.root != null)
            SpawnStoryTree(_availableTrees[0].root, null, _availableTrees[0].name+" - Root");
    }
    public void SpawnStoryTree(NTree<StoryTreeNodeInfo> tree, GameObject parent, string name)
    {
        if (tree != null)
        {
            GameObject go = new GameObject(name);
            NodeInfoMonoBehaviour newNodeInfo = go.AddComponent<NodeInfoMonoBehaviour>();
            newNodeInfo.LoadData(tree.data);

            if (tree.children?.Count > 0)
            {
                foreach (var child in tree.children)
                {
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
        _availableTrees = Resources.LoadAll<Serialized_Tree>("StoryTree");
    }
}
