using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace PlayerController
{
    public class JumpToStart : MonoBehaviour
    {
        [SerializeField] private int startingPoint = 1;

        private PlayerManager playerManager;

        private void Start()
        {
            playerManager = PlayerManager.Instance;
        }

        private void OnTriggerEnter(Collider other)
        {
            

            if (!!playerManager && other.CompareTag("Player"))
            {
                if (playerManager.currentMode != PLAYERMODE.free)
                {
                    playerManager.currentRoute.ClearSpline();
                    MoveToStart();
                }
            }
        }

        private void MoveToStart()
        {
            playerManager.currentWayPointId = startingPoint;

            StartCoroutine(playerManager.MoveOntoPoint());
        }

        //public override void Trigger(bool enter, Object sender)
        //{
        //    if (!!playerManager && enter)
        //    {
        //        if (playerManager.currentMode != PLAYERMODE.free)
        //        {
        //            playerManager.currentRoute.ClearSpline();
        //            playerManager.currentMode = PLAYERMODE.free;
        //            MoveToStart();
        //        }
        //    }
        //}
    }
}
