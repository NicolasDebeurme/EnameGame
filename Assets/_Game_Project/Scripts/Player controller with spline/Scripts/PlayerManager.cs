using System.Collections;
using UnityEngine;

namespace PlayerController
{
    public enum TRAJECTMODE
    {
        story,
        exploration
    }

    public enum PLAYERMODE
    {
        spline,
        free,
        locked,
        auto
    }

    [RequireComponent(typeof(CharacterController))]
    [RequireComponent(typeof(PlayerMove))]
    public class PlayerManager : MonoBehaviour
    {
        public static PlayerManager Instance
        {
            get; private set;
        }

        public TRAJECTMODE currentTrajectMode;

        public PLAYERMODE currentMode;

        public CharacterController CharController
        {
            get; private set;
        }

        [SerializeField] private string horizontalInputName;
        [SerializeField] private string verticalInputName;
        [SerializeField] private string runInputName;
        [SerializeField] private string jumpInputName;
        [SerializeField] private string moveOntoSplineInputName;
        [SerializeField] private string autoRouteInputName;
        [SerializeField] private string resetCameraInputName;

        [SerializeField] private float walkSpeed, runSpeed;
        [SerializeField] private float runBuildUpSpeed;
        [SerializeField] private float groundDistance = 0.2f;
        [SerializeField] private float jumpHeight;

        [SerializeField] private Transform groundCheck;

        [SerializeField] private LayerMask groundMask;

        public RoutePicker movieRoute;

        public int currentWayPointId = 0;
        public int showLineAmount = 100;

        public float reachDistance = .5f;

        private float movementSpeed;
        private float originalSlope;

        public Vector3 closestPointOnBounds;
        public Vector3 velocity = Vector3.zero;

        private bool isGrounded;
        private bool floating;

        public bool inWater = false;
        public bool inCrossRoadCollider = false;
        public bool onCrossRoad = false;
        public bool crossRoadChoice = false;
        public bool lookingForward = true;

        public PlayerMove PlayerMove
        {
            get; private set;
        }
        public PlayerLook PlayerLook
        {
            get; private set;
        }
        public PlayerFloat PlayerFloat
        {
            get; private set;
        }

        public RoutePicker currentRoute = null;
        public RoutePicker inRouteCollider = null;

        public GameObject lineRendererTemplate = null;

        private void Awake()
        {
            if (Instance == null)
            {
                Instance = this;
                DontDestroyOnLoad(gameObject);
            }
            else if (Instance != this)
            {
                Destroy(gameObject);
            }

            PlayerMove = GetComponent<PlayerMove>();
            PlayerLook = GetComponentInChildren<PlayerLook>();
            PlayerFloat = GetComponent<PlayerFloat>();

            CharController = GetComponent<CharacterController>();
            originalSlope = CharController.slopeLimit;

            LoadHandling.LoadingManager loadInstance = LoadHandling.LoadingManager.Instance;

            if (loadInstance)
            {
                loadInstance.OnFinishLoadingSequence.AddListener((scene) =>
                {
                    SetPlayerMode(PLAYERMODE.free);
                });
            }
        }

        private void Update()
        {
            if (currentMode != PLAYERMODE.locked)
            {
                PlayerMovement();
                SetMovementSpeed();

                if (Input.GetButtonDown(moveOntoSplineInputName) && currentTrajectMode == TRAJECTMODE.exploration)
                {
                    if (currentRoute != null || inRouteCollider != null)
                    {
                        if (currentMode == PLAYERMODE.spline || currentMode == PLAYERMODE.auto)
                        {
                            SetPlayerMode(PLAYERMODE.free);
                            PlayerLook.SetCameraMode(CAMERA_MODE.mouseLook);
                        }
                        else
                        {
                            if (inRouteCollider != null)
                            {
                                currentRoute = inRouteCollider;
                            }

                            StartCoroutine(MoveOntoClosestPoint());
                        }
                    }
                    else
                    {
                        Debug.Log("Geen spline in de buurt");
                    }
                }
                else if (Input.GetButtonDown(moveOntoSplineInputName) && currentTrajectMode == TRAJECTMODE.story)
                {
                    if (currentMode == PLAYERMODE.spline || currentMode == PLAYERMODE.auto)
                    {
                        SetPlayerMode(PLAYERMODE.free);
                        PlayerLook.SetCameraMode(CAMERA_MODE.mouseLook);
                    }
                    else
                    {
                        StartCoroutine(MoveOntoPoint());
                    }
                }

                if (Input.GetButtonDown(autoRouteInputName))
                {
                    if (currentMode == PLAYERMODE.spline)
                    {
                        SetPlayerMode(PLAYERMODE.auto);
                    }
                    else if (currentMode == PLAYERMODE.auto)
                    {
                        SetPlayerMode(PLAYERMODE.spline);
                    }
                }

                if (Input.GetButtonDown(resetCameraInputName))
                {
                    PlayerLook.resetView = true;
                    PlayerLook.resetting = true;
                }

                if (!inWater)
                {
                    floating = false;
                }
            }
        }

        private void LateUpdate()
        {
            if (currentMode == PLAYERMODE.spline && currentRoute.originPoint != currentWayPointId)
            {
                currentRoute.ShowPoints(currentWayPointId, showLineAmount, showLineAmount);
            }
        }

        private void PlayerMovement()
        {
            if (transform.position.y <= -5f)
            {
                CharController.enabled = false;
                transform.position = new Vector3(transform.position.x, 10f, transform.position.z);
                CharController.enabled = true;
            }

            float horizInput = Input.GetAxis(horizontalInputName);
            float vertInput = Input.GetAxis(verticalInputName);

            Vector3 finalMove = Vector3.zero;

            if (horizInput != 0 || vertInput != 0 || currentMode == PLAYERMODE.auto)
            {
                switch (currentMode)
                {
                    case PLAYERMODE.spline:
                        finalMove = PlayerMove.MoveAlong(vertInput, movementSpeed);
                        break;
                    case PLAYERMODE.free:
                        finalMove = PlayerMove.GetDirection(horizInput, vertInput, movementSpeed);
                        break;
                    case PLAYERMODE.locked:
                        finalMove = Vector3.zero;
                        break;
                    case PLAYERMODE.auto:
                        finalMove = PlayerMove.MoveAlong(1f, movementSpeed);
                        break;
                    default:
                        finalMove = Vector3.zero;
                        break;
                }
            }

            finalMove += ApplyGravity();

            CharController.Move(finalMove);
        }

        public void SetTrajectMode(TRAJECTMODE mode)
        {
            switch (mode)
            {
                case TRAJECTMODE.story:
                    currentTrajectMode = TRAJECTMODE.story;
                    currentRoute = movieRoute;
                    currentWayPointId = 1;
                    break;
                case TRAJECTMODE.exploration:
                    currentTrajectMode = TRAJECTMODE.exploration;
                    break;
                default:
                    break;
            }

            SetPlayerMode(PLAYERMODE.free);
            PlayerLook.SetCameraMode(CAMERA_MODE.mouseLook);
        }

        public void SetPlayerMode(PLAYERMODE mode)
        {
            switch (mode)
            {
                case PLAYERMODE.spline:
                    currentMode = PLAYERMODE.spline;
                    break;
                case PLAYERMODE.free:
                    currentMode = PLAYERMODE.free;
                    break;
                case PLAYERMODE.locked:
                    currentMode = PLAYERMODE.locked;
                    break;
                case PLAYERMODE.auto:
                    currentMode = PLAYERMODE.auto;
                    break;
                default:
                    break;
            }
        }

        private Vector3 ApplyGravity()
        {
            isGrounded = Physics.CheckSphere(groundCheck.position, groundDistance, groundMask);

            if ((isGrounded || CharController.collisionFlags == CollisionFlags.Above) && !inWater)
            {
                velocity = Vector3.zero;
            }

            if (isGrounded)
            {
                CharController.slopeLimit = originalSlope;
            }

            if (Input.GetButtonDown(jumpInputName) && isGrounded)
            {
                CharController.slopeLimit = 90f;
                velocity.y = Mathf.Sqrt(jumpHeight * -2f * Physics.gravity.y);
            }

            if (inWater)
            {
                velocity += new Vector3(0, PlayerFloat.BuoyancyForce()) * Time.deltaTime;
            }
            else
            {
                velocity += Physics.gravity * Time.deltaTime;
            }

            if (inWater && isGrounded)
            {
                if (velocity.y < 0)
                {
                    velocity = Vector3.zero;
                }
            }

            if ((PlayerFloat.previouslyUnderWater && !PlayerFloat.underWater && inWater) || floating)
            {
                floating = true;
                velocity = Vector3.zero;
            }

            return velocity * Time.deltaTime;
        }

        private void SetMovementSpeed()
        {
            if (Input.GetButton(runInputName))
            {
                movementSpeed = Mathf.Lerp(movementSpeed, runSpeed, Time.deltaTime * runBuildUpSpeed);
            }
            else
            {
                movementSpeed = Mathf.Lerp(movementSpeed, walkSpeed, Time.deltaTime * runBuildUpSpeed);
            }
        }

        public IEnumerator MoveOntoPoint()
        {
            Vector3 telLocation = currentRoute.Spline.GetPoint((1f / currentRoute.pointAmount) * currentWayPointId);
            Vector3 lookDirection = currentRoute.Spline.GetForward((1f / currentRoute.pointAmount) * currentWayPointId);
            telLocation.y += CharController.height;

            transform.rotation = Quaternion.LookRotation(lookDirection);

            GoOnSpline();

            yield return StartCoroutine(MoveToPosition(telLocation));
        }

        public IEnumerator MoveOntoClosestPoint()
        {
            Vector3 telLocation = currentRoute.Spline.FindClosest(transform.position, currentRoute.pointAmount, out int currentPointId);
            telLocation.y += CharController.height;
            currentWayPointId = currentPointId;

            if (currentWayPointId == currentRoute.pointAmount)
            {
                currentWayPointId--;
                telLocation = currentRoute.Spline.GetPoint((1f / currentRoute.pointAmount) * currentWayPointId);
            }

            if (currentWayPointId == 0)
            {
                currentWayPointId++;
                telLocation = currentRoute.Spline.GetPoint((1f / currentRoute.pointAmount) * currentWayPointId);
            }

            GoOnSpline();

            yield return StartCoroutine(MoveToPosition(telLocation));
        }

        public void GoOnSpline()
        {
            if (!!CameraControl.CameraManager.Instance)
            {
                CameraControl.CameraManager.Instance.SetPlayerCamActive();
            }

            if (currentMode == PLAYERMODE.free)
            {
                SetPlayerMode(PLAYERMODE.spline);
            }

            PlayerLook.SetLookDirection(currentRoute.Spline.GetForward((1f / currentRoute.pointAmount) * (currentWayPointId)));
            PlayerLook.resetView = true;
            PlayerLook.resetting = true;

            currentRoute.StartSpline(currentWayPointId, showLineAmount, showLineAmount);

            PlayerLook.SetCameraMode(CAMERA_MODE.focusRoute);
        }

        public void TeleportPlayer(Vector3 location, Quaternion rotation)
        {
            PlayerLook.ResetView();
            transform.rotation = rotation;

            TeleportPlayer(location);
        }

        public void TeleportPlayer(Vector3 location)
        {
            StartCoroutine(MoveToPosition(location));
        }

        public IEnumerator MoveToPosition(Vector3 location)
        {
            yield return new WaitForFixedUpdate();
            transform.position = location;
            yield return new WaitForFixedUpdate();
        }
    }
}