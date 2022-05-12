using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class NTree<T>
{
    public T data;
    public LinkedList<NTree<T>> children;


    public NTree(T data)
    {
        this.data = data;
        children = new LinkedList<NTree<T>>();
    }

    public NTree<T> AddChild(T data)
    {
        children.AddFirst(new NTree<T>(data));
        return children.First.Value;
    }

    public NTree<T> GetChild(int i)
    {
        foreach (NTree<T> child in children)
            if (--i == 0)
                return child;
        return null;
    }

    public void Traverse(NTree<T> node , Action<T> visitor)
    {
        visitor(node.data);

        foreach(NTree<T> child in node.children)
            Traverse(child, visitor);
    }
}
