using UnityEngine.Audio;
using System;
using UnityEngine;

public class AudioManager : MonoBehaviour
{

	public static AudioManager Instance { get; set; }

	public Sound[] sounds;

	void Awake()
	{
		if (Instance != null)
		{
			Destroy(gameObject);
		}
		else
		{
			Instance = this;
			DontDestroyOnLoad(gameObject);
		}

		foreach (Sound s in sounds)
		{
			s.source = gameObject.AddComponent<AudioSource>();

            s.source.dopplerLevel = 0f;
            s.source.clip = s.clip;
			s.source.loop = s.loop;
            s.source.volume = s.volume;
            s.source.outputAudioMixerGroup = s.mixerGroup;
		}
	}

	public void Play(string sound, float volume = 0f)
	{
		Sound s = Array.Find(sounds, item => item.name == sound);

		if (s == null)
		{
			Debug.LogWarning("Sound: " + sound + " not found!");
			return;
		}

        //Debug.Log("Playing: " + sound);

        if (s.source.isPlaying)
        {
            s.source.Stop();
        }

        if (volume != 0)
        {
            s.source.volume = volume;
        }
        else
        {
            s.source.volume = s.volume;
        }

		s.source.Play();
	}

    public void Play(int sound, float volume = 0f)
    {
        Sound s = Array.Find(sounds, item => item.number == sound);

        if (s == null)
        {
            Debug.LogWarning("Sound: " + sound + " not found!");
            return;
        }

        //Debug.Log("Playing: " + sound);

        if (s.source.isPlaying)
        {
            s.source.Stop();
        }

        if (volume != 0)
        {
            s.source.volume = volume;
        }
        else
        {
            s.source.volume = s.volume;
        }

        s.source.Play();
    }

    public void Stop(string sound)
    {
        Sound s = Array.Find(sounds, item => item.name == sound);

        if (s == null)
        {
            Debug.LogWarning("Sound: " + name + " not found!");
            return;
        }

        s.source.Stop();
    }

}
