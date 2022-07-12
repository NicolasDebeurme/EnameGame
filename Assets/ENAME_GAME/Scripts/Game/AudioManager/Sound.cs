using UnityEngine.Audio;
using UnityEngine;

[System.Serializable]
public class Sound {
	[Space(5)]
	public string name;

	public AudioClip clip;

	[Range(0f, 1f)]
	public float volume = .75f;

	[Range(.1f, 3f)]
	public float pitch = 1f;

	public bool loop = false;
    
	public AudioSource source;
	
}
