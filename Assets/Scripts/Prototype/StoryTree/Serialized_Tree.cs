using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class Serialized_Tree: ScriptableObject, ISerializationCallbackReceiver
{
    [NonSerialized]
    //the root of what we use at runtime. not serialized.
    public NTree<StoryTreeNodeInfo> root;

    //the field we give unity to serialize.
    public List<SerializableNode> serializedNodes;

    private void OnEnable()
    {
        serializedNodes = new List<SerializableNode>();
    }

    //node class that we will use for serialization
    [Serializable]
    public struct SerializableNode
    {
        public StoryTreeNodeInfo data;
        public int childCount;
        public int indexOfFirstChild;
    }

    public void OnBeforeSerialize()
    {
        Debug.Log("Serialize");
        //unity is about to read the serializedNodes field's contents. lets make sure
        //we write out the correct data into that field "just in time".
        serializedNodes.Clear();
        AddNodeToSerializedNodes(root);
    }

    void AddNodeToSerializedNodes(NTree<StoryTreeNodeInfo> n)
    {
        int childrenCount = 0;

        if (n.children != null)
        {
            childrenCount = n.children.Count;
        }

        var serializedNode = new SerializableNode()
        {
            data = n.data,
            childCount = childrenCount,
            indexOfFirstChild = serializedNodes.Count + 1
        };

        serializedNodes.Add(serializedNode);

        if (n.children != null)
            foreach (var child in n.children)
                AddNodeToSerializedNodes(child);
    }

    public void OnAfterDeserialize()
    {
        Debug.Log("Unserialize");
        //Unity has just written new data into the serializedNodes field.
        //let's populate our actual runtime data with those new values.

        if (serializedNodes.Count > 0)
            root = ReadNodeFromSerializedNodes(0);
        else
            root = new NTree<StoryTreeNodeInfo>();
    }

    NTree<StoryTreeNodeInfo> ReadNodeFromSerializedNodes(int index)
    {
        var serializedNode = serializedNodes[index];
        var children = new List<NTree<StoryTreeNodeInfo>>();
        for (int i = 0; i != serializedNode.childCount; i++)
            children.Add(ReadNodeFromSerializedNodes(serializedNode.indexOfFirstChild + i));

        return new NTree<StoryTreeNodeInfo>()
        {
            data = serializedNode.data,
            children = children
        };
    }
}
