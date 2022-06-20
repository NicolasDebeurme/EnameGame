using UnityEngine;

namespace PlayerController
{
    public class PlayerMove : MonoBehaviour
    {
        PlayerManager playerManager;

        private bool previouslyLookingForward = true;

        Vector3 frontPoint;
        Vector3 backPoint;

        private void Start()
        {
            playerManager = PlayerManager.Instance;
        }

        private void Update()
        {
            if (playerManager.currentMode == PLAYERMODE.spline || playerManager.currentMode == PLAYERMODE.auto)
            {
                if (playerManager.currentWayPointId == playerManager.currentRoute.pointAmount - 1)
                {
                    if (playerManager.currentRoute.endingRoute != null)
                    {
                        frontPoint = playerManager.currentRoute.endingRoute.Spline.GetPoint((1f / playerManager.currentRoute.endingRoute.pointAmount) * playerManager.currentRoute.startingRouteWayPoint);
                    }
                }
                else
                {
                    frontPoint = playerManager.currentRoute.Spline.GetPoint((1f / playerManager.currentRoute.pointAmount) * (playerManager.currentWayPointId + 1));
                }

                if (playerManager.currentWayPointId == 0)
                {
                    if (playerManager.currentRoute.startingRoute != null)
                    {
                        backPoint = playerManager.currentRoute.startingRoute.Spline.GetPoint((1f / playerManager.currentRoute.startingRoute.pointAmount) * playerManager.currentRoute.startingRouteWayPoint);
                    }
                }
                else
                {
                    backPoint = playerManager.currentRoute.Spline.GetPoint((1f / playerManager.currentRoute.pointAmount) * (playerManager.currentWayPointId - 1));
                }

                Vector3 heading = frontPoint - transform.position;

                float dot = Vector3.Dot(heading, transform.forward);

                if (dot < -0.1)
                {
                    if (!previouslyLookingForward)
                    {
                        playerManager.lookingForward = false;
                    }
                    else
                    {
                        previouslyLookingForward = false;
                    }
                }
                else if (dot > .1)
                {
                    if (previouslyLookingForward)
                    {
                        playerManager.lookingForward = true;
                    }
                    else
                    {
                        previouslyLookingForward = true;
                    }
                }
            }
        }

        // Basic move in given input direction
        public Vector3 GetDirection(float horizInput, float vertInput, float movementSpeed)
        {
            Vector3 forwardMovement = transform.forward * vertInput;
            Vector3 rightMovement = transform.right * horizInput;

            return Vector3.ClampMagnitude(forwardMovement + rightMovement, 1.0f) * (movementSpeed * Time.deltaTime);
        }

        // Move along currently selected route
        public Vector3 MoveAlong(float input, float speed)
        {
            Vector3 finalMove = Vector3.zero;

            if (playerManager.lookingForward)
            {
                if (input > 0)
                {
                    finalMove = HandleFront(frontPoint, speed);
                    playerManager.PlayerLook.resetView = true;
                    playerManager.PlayerLook.SetLookDirection(playerManager.currentRoute.Spline.GetForward((1f / playerManager.currentRoute.pointAmount) * (playerManager.currentWayPointId)));
                }
                else
                {
                    finalMove = HandleBack(backPoint, speed);
                    playerManager.PlayerLook.resetView = false;
                }

                //playerManager.PlayerLook.SetLookAtTarget(frontPoint - transform.position);
            }
            else if (!playerManager.lookingForward)
            {
                if (input < 0)
                {
                    finalMove = HandleFront(frontPoint, speed);
                    playerManager.PlayerLook.resetView = false;
                }
                else
                {
                    finalMove = HandleBack(backPoint, speed);
                    playerManager.PlayerLook.resetView = true;
                    playerManager.PlayerLook.SetLookDirection(playerManager.currentRoute.Spline.GetBackward((1f / playerManager.currentRoute.pointAmount) * (playerManager.currentWayPointId)));
                }
            }

            return finalMove;

            //int pointAmount = playerManager.currentRoute.pointAmount;
            //int FrontPointId = currentWayPointId + 1;
            //int BackPointId = currentWayPointId - 1;

            //float step = 1f / pointAmount;

            //Vector3 frontPoint = playerManager.currentRoute.Spline.GetPoint(FrontPointId * step);
            //Vector3 point = playerManager.currentRoute.Spline.GetPoint(currentWayPointId * step);
            //Vector3 backPoint = playerManager.currentRoute.Spline.GetPoint(BackPointId * step);

            //Vector3 heading = frontPoint - transform.position;

            //float dot = Vector3.Dot(heading, transform.forward);

            //if (dot < 0)
            //{
            //    if (!previouslyLookingForward)
            //    {
            //        playerManager.lookingForward = false;
            //        input = -input;
            //    }
            //    else
            //    {
            //        previouslyLookingForward = false;
            //    }
            //}
            //else
            //{
            //    if (previouslyLookingForward)
            //    {
            //        playerManager.lookingForward = true;
            //    }
            //    else
            //    {
            //        previouslyLookingForward = true;
            //    }
            //}

            //if (input > 0)
            //{
            //    finalMove = point - transform.position;

            //    finalMove.y = 0;

            //    //If we're further away than .1 unit, move towards the target.
            //    //The minimum allowable tolerance varies with the speed of the object and the framerate. 
            //    // 2 * tolerance must be >= moveSpeed / framerate or the object will jump right over the stop.
            //    if (finalMove.magnitude > 2 * (speed / (Time.frameCount / Time.time)))
            //    {
            //        //normalize it and account for movement speed.
            //        finalMove = finalMove.normalized * (speed * Time.deltaTime);
            //    }

            //    if ((new Vector3(point.x, 0.0f, point.z) - new Vector3(transform.position.x, 0.0f, transform.position.z)).sqrMagnitude <= reachDistance * reachDistance)
            //    {
            //        playerManager.currentWayPointId++;
            //        if (currentWayPointId >= pointAmount)
            //        {
            //            if (playerManager.currentRoute.endingRoute != null && playerManager.currentRoute != playerManager.currentRoute.endingRoute)
            //            {
            //                playerManager.currentWayPointId = playerManager.currentRoute.endingRouteWayPoint;

            //                playerManager.currentRoute.ClearProgress();

            //                playerManager.currentRoute = playerManager.currentRoute.endingRoute;
            //            }
            //            else if (!playerManager.inCrossRoadCollider)
            //            {
            //                playerManager.SetPlayerMode(PLAYERMODE.free);
            //            }
            //        }
            //    }
            //}

            //if (input < 0)
            //{
            //    if (currentWayPointId <= 0)
            //    {
            //        if (playerManager.currentRoute.startingRoute != null)
            //        {
            //            playerManager.currentWayPointId = playerManager.currentRoute.startingRouteWayPoint;
            //            playerManager.currentRoute = playerManager.currentRoute.startingRoute;
            //        }
            //        else if(!playerManager.inCrossRoadCollider)
            //        {
            //            playerManager.SetPlayerMode(PLAYERMODE.free);
            //        }
            //    }

            //    if (playerManager.currentMode == PLAYERMODE.spline || playerManager.currentMode == PLAYERMODE.auto)
            //    {
            //        finalMove = backPoint - transform.position;

            //        finalMove.y = 0;

            //        if (finalMove.magnitude > 2 * (speed / (Time.frameCount / Time.time)))
            //        {
            //            finalMove = finalMove.normalized * (speed * Time.deltaTime);
            //        }

            //        if ((new Vector3(backPoint.x, 0.0f, backPoint.z) - new Vector3(transform.position.x, 0.0f, transform.position.z)).sqrMagnitude <= reachDistance * reachDistance)
            //        {
            //            playerManager.currentWayPointId--;
            //            if (currentWayPointId < 0)
            //            {
            //                if (playerManager.currentRoute.startingRoute != null)
            //                {
            //                    playerManager.currentWayPointId = playerManager.currentRoute.startingRouteWayPoint;
            //                    playerManager.currentRoute = playerManager.currentRoute.startingRoute;
            //                }
            //                else if (!playerManager.inCrossRoadCollider)
            //                {
            //                    playerManager.SetPlayerMode(PLAYERMODE.free);
            //                }
            //            }
            //        }
            //    }
            //}

            //if (playerManager.PlayerLook.CurrentMode == CAMERA_MODE.focusRoute && !playerManager.PlayerLook.timerStarted && input != 0)
            //{
            //    playerManager.PlayerLook.resetView = true;
            //}

            //return finalMove;
        }

        private Vector3 HandleFront(Vector3 frontPoint, float speed)
        {
            Vector3 finalMove = frontPoint - transform.position;

            finalMove.y = 0;

            //If we're further away than .1 unit, move towards the target.
            //The minimum allowable tolerance varies with the speed of the object and the framerate. 
            // 2 * tolerance must be >= moveSpeed / framerate or the object will jump right over the stop.
            if (finalMove.magnitude > 2 * (speed / (Time.frameCount / Time.time)))
            {
                //normalize it and account for movement speed.
                finalMove = finalMove.normalized * (speed * Time.deltaTime);
            }

            if ((new Vector3(frontPoint.x, 0.0f, frontPoint.z) - new Vector3(transform.position.x, 0.0f, transform.position.z)).sqrMagnitude <= playerManager.reachDistance * playerManager.reachDistance)
            {
                playerManager.currentWayPointId++;
                if (playerManager.currentWayPointId >= playerManager.currentRoute.pointAmount)
                {
                    playerManager.currentWayPointId = 1;
                    if (playerManager.currentRoute.endingRoute != null && playerManager.currentRoute != playerManager.currentRoute.endingRoute)
                    {
                        playerManager.currentWayPointId = playerManager.currentRoute.endingRouteWayPoint;

                        playerManager.currentRoute.ClearProgress();

                        playerManager.currentRoute = playerManager.currentRoute.endingRoute;
                    }
                    else if (!playerManager.inCrossRoadCollider)
                    {
                        //playerManager.SetPlayerMode(PLAYERMODE.free);
                        //playerManager.SetPlayerMode(PLAYERMODE.free);
                    }
                }
            }

            return finalMove;
        }

        private Vector3 HandleBack(Vector3 backPoint, float speed)
        {
            Vector3 finalMove = backPoint - transform.position;

            finalMove.y = 0;

            //If we're further away than .1 unit, move towards the target.
            //The minimum allowable tolerance varies with the speed of the object and the framerate. 
            // 2 * tolerance must be >= moveSpeed / framerate or the object will jump right over the stop.
            if (finalMove.magnitude > 2 * (speed / (Time.frameCount / Time.time)))
            {
                //normalize it and account for movement speed.
                finalMove = finalMove.normalized * (speed * Time.deltaTime);
            }

            if ((new Vector3(backPoint.x, 0.0f, backPoint.z) - new Vector3(transform.position.x, 0.0f, transform.position.z)).sqrMagnitude <= playerManager.reachDistance * playerManager.reachDistance)
            {
                playerManager.currentWayPointId--;
                if (playerManager.currentWayPointId <= 0)
                {
                    playerManager.currentWayPointId = playerManager.currentRoute.pointAmount - 1;
                    if (playerManager.currentRoute.startingRoute != null && playerManager.currentRoute != playerManager.currentRoute.startingRoute)
                    {
                        playerManager.currentWayPointId = playerManager.currentRoute.startingRouteWayPoint;

                        playerManager.currentRoute.ClearProgress();

                        playerManager.currentRoute = playerManager.currentRoute.startingRoute;
                    }
                    else if (!playerManager.inCrossRoadCollider)
                    {
                        //playerManager.SetPlayerMode(PLAYERMODE.free);
                    }
                }
            }

            return finalMove;
        }
    }

}
