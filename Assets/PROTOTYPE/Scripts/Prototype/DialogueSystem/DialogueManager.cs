using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class DialogueManager : MonoBehaviour
{
    public static DialogueManager _dialogueInstance;


    private Queue<string> sentences;
    private Queue<Dialogue> dialogues;

    [SerializeField]
    private Animator _dialogueBoxAnim;
    [SerializeField]
    private TextMeshProUGUI _dialogueText;

    //Events
    public EventHandler DialogueEnded;
    private void Awake()
    {
        _dialogueInstance = this;
    }
    void Start()
    {
        sentences = new Queue<string>();
        dialogues = new Queue<Dialogue>();
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

    private IEnumerator sentencePlaying = null;
    private void DisplayNextSentence()
    {
        Debug.Log("DisplayNext");
        if(sentences.Count == 0)
        {
            Debug.Log("EndOfDialogue");
            EndDialogue();
            return;
        }

        string sentence = sentences.Dequeue();

        if(sentencePlaying != null)
            StopCoroutine(sentencePlaying);

        sentencePlaying = TypeSentence(sentence);
        StartCoroutine(sentencePlaying);
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
        DialogueEnded.Invoke(this, EventArgs.Empty);
        DisplayNextDialogue();
    }

    bool isPlaying = false;

    private IEnumerator PlayDialogue(Dialogue dialogue)
    {
        StartDialogue(dialogue);

        while (isPlaying)
        {
            yield return new WaitForSeconds(dialogue.TimeStamp);
            DisplayNextSentence();
        }
    }

    public void EnqueueDialogue(Dialogue dialogue)
    {
        dialogues.Enqueue(dialogue);

        if(!isPlaying)
            DisplayNextDialogue();
    }
    private void DisplayNextDialogue()
    {
        if (dialogues.Count == 0)
        {
            return;
        }

        Dialogue dialogue = dialogues.Dequeue();

        StartCoroutine(PlayDialogue(dialogue));
    }
}
