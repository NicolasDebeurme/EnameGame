using UnityEngine.Audio;
using System;
using UnityEngine;
public class AudioManager : MonoBehaviour
{
    public static AudioManager instance;

    [Range(0f, 1f)]
    public float MainVolume =1f;
    /*
    [Range(0f, 1f)]
    public float MusicVolume;

    [Range(0f, 1f)]
    public float FXVolume;
    */

    public Sound[] sounds;
    
    private AudioSource[] audioSources;


    void Awake()
    {
        if (instance == null)
        {
            DontDestroyOnLoad(gameObject);
            instance = this;
        }
        foreach (Sound s in sounds)
        {
            s.source = gameObject.AddComponent<AudioSource>();
            s.source.clip = s.clip;
            s.source.volume = s.volume  * MainVolume;
            s.source.pitch = s.pitch;
            s.source.loop = s.loop;



        }
    }

    public void Start()
    {
        Play("Theme");
    }

    public void Update()
    {
        UpdateValue();


    }


    public void Play(string name)
    {
        Sound s = Array.Find(sounds, sound => sound.name == name);
        if (s==null)
        {
            Debug.LogWarning("Sound: " + name + " not found!");
            return;
        }
        if (!s.source.isPlaying)
        {
            s.source.Play();
        }
        
    }

    public void UpdateValue()
    {

        foreach (Sound s in sounds)
        {
            //s.source.volume.onv
            s.source.volume = s.volume * MainVolume;
            s.source.pitch = s.pitch;
        }
    }
    

}