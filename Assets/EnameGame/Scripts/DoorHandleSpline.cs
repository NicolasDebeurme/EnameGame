using PlayerController;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class DoorHandleSpline : MonoBehaviour
{
    PlayerManager playerManager;

    public UnityEvent triggered;

    private void Start()
    {
        playerManager = PlayerManager.Instance;
    }

    private void OnTriggerEnter(Collider other)
    {
        if (!playerManager)
        {
            playerManager = PlayerManager.Instance;
        }

        if (playerManager.currentMode == PLAYERMODE.auto && other.CompareTag("Player"))
        {
            triggered.Invoke();
        }
    }
}
