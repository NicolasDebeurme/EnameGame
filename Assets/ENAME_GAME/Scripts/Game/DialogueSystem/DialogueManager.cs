using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class DialogueManager : MonoBehaviour
{
    public static DialogueManager _dialogueInstance;


    private Queue<string> sentences;
    private Queue<Dialogue> dialogues;

    [SerializeField]
    private Animator _dialogueBoxAnim;
    [SerializeField]
    private TextMeshProUGUI _speakerText;
    [SerializeField]
    private TextMeshProUGUI _dialogueText;

    //Events
    public event DialogueEndedDelegate DialogueEnded;
    public delegate IEnumerator DialogueEndedDelegate();

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

        _speakerText.text = dialogue.speaker;
        DisplayNextSentence();
    }

    private IEnumerator sentencePlaying = null;
    private void DisplayNextSentence()
    {
        if(sentences.Count == 0)
        {
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
        var RectTransform = _dialogueText.transform.parent.GetComponent<RectTransform>();
        _dialogueText.text = "";

        foreach(var letter in sentence)
        {
            _dialogueText.text += letter;
            LayoutRebuilder.ForceRebuildLayoutImmediate(RectTransform);
            yield return new WaitForSeconds(0.04f);
        }
    }
    private void EndDialogue()
    {
        isPlaying = false;
        _dialogueBoxAnim.SetTrigger("Close");

        if(DialogueEnded != null)
        {
            foreach (DialogueEndedDelegate handler in DialogueEnded.GetInvocationList())
            {
                StartCoroutine(handler.Invoke());
            }
        }

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
