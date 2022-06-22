using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class DialogueManager : MonoBehaviour
{
    public static DialogueManager _dialogueInstance;

    private Queue<string> sentences;

    [SerializeField]
    private Animator _dialogueBoxAnim;
    [SerializeField]
    private TextMeshProUGUI _dialogueText;

    private void Awake()
    {
        _dialogueInstance = this;
    }
    void Start()
    {
        sentences = new Queue<string>();
    }

    public void StartDialogue(Dialogue dialogue)
    {
        Debug.Log("Starting dialogue of "+ dialogue.name);

        sentences.Clear();

        _dialogueBoxAnim.SetTrigger("Open");
        foreach (var sentence in dialogue.sentences)
        {
            sentences.Enqueue(sentence);
        }

        isPlaying = true;

        DisplayNextSentence();
    }

    private void DisplayNextSentence()
    {
        if(sentences.Count == 0)
        {
            EndDialogue();
            return;
        }

        string sentence = sentences.Dequeue();

        StopAllCoroutines();
        StartCoroutine(TypeSentence(sentence));
    }
    IEnumerator TypeSentence(string sentence)
    {
        _dialogueText.text = "";

        foreach(var letter in sentence)
        {
            _dialogueText.text += letter;
            yield return null;
        }
    }
    private void EndDialogue()
    {
        isPlaying = false;
        _dialogueBoxAnim.SetTrigger("Close");
    }

    bool isPlaying = false;
    public IEnumerator PlayDialogue(Dialogue dialogue)
    {
        StartDialogue(dialogue);

        while(isPlaying)
        {
            yield return new WaitForSeconds(3f);
            DisplayNextSentence();
        }
    }
}
