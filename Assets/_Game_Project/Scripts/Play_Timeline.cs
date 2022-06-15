using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;

public class Play_Timeline : MonoBehaviour
{
    public PlayableDirector timeline;

    private bool IsPlaying = false;
    private bool IsFinished = false;

    public void OnEnable()
    {
        timeline.stopped += OnPlayableDirectorStopped;
    }

    private void OnPlayableDirectorStopped(PlayableDirector obj)
    {
        if (timeline == obj)
        {
            Debug.Log("PlayableDirector named " + obj.name + " is now stopped.");
        }
    }

    public void OnDisable()
    {
        timeline.stopped -= OnPlayableDirectorStopped;
    }

    private void Update()
    {
        if (timeline.duration == timeline.time)
        {
            IsPlaying = false;
            IsFinished = true;
        }
    }

    private void OnTriggerStay(Collider other)
    {
        if (other.CompareTag("Player") && !IsPlaying && Input.GetButtonDown("Submit"))
        {
            IsPlaying = true;

            if (IsFinished)
            {
                timeline.Stop();
                IsFinished = false;
            }

            timeline.Play();
        }
    }

    public void PauseTimeLine()
    {
        IsPlaying = false;
        timeline.Pause();
    }
}