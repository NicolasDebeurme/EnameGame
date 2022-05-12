using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class NodeEditorData : ScriptableObject
{
    public NTree<NodeInfo> storyTree;
}
