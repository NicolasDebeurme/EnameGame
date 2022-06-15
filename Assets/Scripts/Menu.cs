using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement; 

public class Menu : MonoBehaviour
{

    public GameObject ScenePlay;
    public GameObject SceneIntro;
    public GameObject SceneAbout;

    


    void Start()
    {
        ScenePlay.SetActive(true);
        SceneIntro.SetActive(false);
        SceneAbout.SetActive(false);
    }

    public void OnClickPlay()
    {
        ScenePlay.SetActive(false);
        SceneIntro.SetActive(true);
        SceneAbout.SetActive(false);
    }
    public void OnClickStart()
    {
        SceneManager.LoadScene("Main", LoadSceneMode.Single);

    }

    public void OnClickAbout()
    {
        ScenePlay.SetActive(false);
        SceneIntro.SetActive(false);
        SceneAbout.SetActive(true);
    }
    
    public void OnClickBack()
    {
        ScenePlay.SetActive(true);
        SceneIntro.SetActive(false);
        SceneAbout.SetActive(false);
    }
    


    void Update()
    {
        
    }
}
