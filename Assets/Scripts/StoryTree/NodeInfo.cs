using System;
using System.Collections;
using System.Collections.Generic;
using UnityEditor.MemoryProfiler;
using UnityEngine;

public class NodeInfo
{
    public string _question;
    public int _role;
    public int _place;

    public NodeInfo(string question, int role, int place)
    {
        _question = question;
        _role = role;
        _place = place;
    }

    public void Print()
    {
        Debug.Log(_question + "- Role:" + _role + "- Place:" + _place);
    }
}
