using System;
using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LoadScene : MonoBehaviour
{
    public GameObject Menu1;
    public GameObject Menu2;
    public GameObject StartButton;

    public GameObject Monk;
    public int moonkAnimationFrame = 0;
    public DialogueArray dialogues;



    public void Start()
    {
        DialogueManager._dialogueInstance.DialogueEnded += DialogueEnd;
        StartButton.SetActive(false);
        Menu1.SetActive(true);
        Menu2.SetActive(false);
    }

    

    public void OnClickPlay()
    {
        Menu1.SetActive(false);
        Menu2.SetActive(true);
        Monk.SetActive(true);
        DialogueManager._dialogueInstance.EnqueueDialogue(dialogues["First"]);
    }

    private IEnumerator DialogueEnd()
    {
        StartCoroutine(MoonkAnimation());

        yield return new WaitForSeconds(1);
        StartButton.SetActive(true);
        Monk.SetActive(false);
        yield break;
    }

    public void OnStartClick()
    {
        SceneManager.LoadScene("Game", LoadSceneMode.Single);

    }


    public IEnumerator MoonkAnimation()
    {
        while (moonkAnimationFrame <  100)
        {
            moonkAnimationFrame++;
            Monk.transform.position += new Vector3(-100,0,0);
            yield return new WaitForSeconds(0.01f);
        }



    }





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

    



}
