using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public class NTree<T>
{
    public T data;
    public List<NTree<T>> children;

    public NTree<T> AddChild()
    {
        if(children == null)
            children = new List<NTree<T>>();

        children.Add(new NTree<T>());
        return children[0];
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
