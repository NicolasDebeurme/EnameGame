using System;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
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
        //Unity has just written new data into the serializedNodes field.
        //let's populate our actual runtime data with those new values.

        if (serializedNodes.Count > 0)
        {
            ReadNodeFromSerializedNodes(0,out root);
        }
    }

    int ReadNodeFromSerializedNodes(int index, out NTree<StoryTreeNodeInfo> node )
    {
        var serializedNode = serializedNodes[index];

        var children = new List<NTree<StoryTreeNodeInfo>>();

        NTree<StoryTreeNodeInfo> newNode = 
        new NTree<StoryTreeNodeInfo>()
        {
            data = serializedNode.data,
            children = serializedNode.childCount > 0 ? children : null
        };


        // The tree needs to be read in depth-first, since that's how we wrote it out.
        for (int i = 0; i != serializedNode.childCount; i++)
        {
            NTree<StoryTreeNodeInfo> childNode;
            index = ReadNodeFromSerializedNodes(++index, out childNode);
            newNode.children.Add(childNode);
        }
        node = newNode;
        return index;       
    }
}
