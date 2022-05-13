using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NodeEditorData : ScriptableObject
{
    private void OnEnable()
    {
        hideFlags = HideFlags.DontUnloadUnusedAsset;
    }

    public NTree<NodeInfo> storyTree;
}
