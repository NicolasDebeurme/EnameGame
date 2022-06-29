using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "ActionData", menuName = "Actions/CreateActionData", order = 1)]
public class ActionData : ScriptableObject
{
    [Serializable]
    public class Prefab
    {
        public string name;
        public GameObject prefab;
    }

    public Prefab[] prefabs;

    [Serializable]
    public class Payload
    {
        public string name;
        public string jsonData;
        public GameObject prefab;
    }
    public Payload[] payloads;

    //Dialogues
    [Serializable]
    public class DialogueArray
    {
        [SerializeField]
        private Dialogue[] dialogues;

        public Dialogue this[string name]
        {
            get
            {
                foreach (var dialogue in dialogues)
                {
                    if (dialogue.name == name)
                        return dialogue;
                }
                return null;
            }
        }
    }

    public DialogueArray dialogues;
    public bool automaticNextScene = false;
}
