using PlayerController;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;

[RequireComponent(typeof(PlayableDirector))]
public class CinematicTimer : MonoBehaviour
{
    public PlayableDirector cinematic;
    public float duration = 60.0f;
    public bool playCinematic = true;

    private PlayerManager player;

    private Transform originalPlayerTransform;

    float timer = 0.0f;

    private void Start()
    {
        cinematic = GetComponent<PlayableDirector>();

        player = PlayerManager.Instance;

        originalPlayerTransform = player.transform;
    }

    private void Update()
    {
        if (Input.anyKey || Input.GetAxis("Horizontal") != 0 || Input.GetAxis("Vertical") != 0 || !playCinematic)
        {
            cinematic.Stop();

            timer = 0.0f;
            return;
        }

        if (!(cinematic.state == PlayState.Playing) && playCinematic)
        {
            if (timer >= duration)
            {
                PlayCinematic();
            }
            else
            {
                timer += Time.deltaTime;
            }
        }
    }

    public void PlayNow()
    {
        PlayCinematic();
    }

    public void StopNow()
    {
        cinematic.Stop();
        timer = 0f;
    }

    void PlayCinematic()
    {
        cinematic.Play();
        timer = 0.0f;

        player.TeleportPlayer(originalPlayerTransform.position, originalPlayerTransform.rotation);
    }
}
