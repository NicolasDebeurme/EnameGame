using CameraControl;
using System.Collections;
using UnityEngine;

namespace PlayerController
{
    public enum CAMERA_MODE
    {
        mouseLook,
        focusObject,
        focusRoute,
        locked
    }

    public class PlayerLook : MonoBehaviour
    {
        private CameraManager cameraManager;
        private PlayerManager playerManager;

        [SerializeField] private string horizontalInputName, verticalInputName;

        [SerializeField] private float mouseSensitivity;
        [SerializeField] private float resetTime;
        [SerializeField] private float rotationSpeed = 5.0f;

        public CAMERA_MODE CurrentMode
        {
            get; private set;
        }

        public bool LockState
        {
            get; private set;
        }
        public bool resetView = false;
        public bool resetting = false;

        private float xAxisClamp;

        public bool timerStarted = false;

        private Vector3 targetPosition;
        private Vector3 lookDirection;

        private void Awake()
        {
            xAxisClamp = 0.0f;
            targetPosition = Vector3.zero;
        }

        private void Start()
        {
            cameraManager = CameraManager.Instance;
            playerManager = PlayerManager.Instance;
        }

        private void Update()
        {
            if (playerManager.currentMode == PLAYERMODE.free && CurrentMode == CAMERA_MODE.focusRoute)
            {
                CurrentMode = CAMERA_MODE.mouseLook;
            }

            if (CurrentMode == CAMERA_MODE.mouseLook || CurrentMode == CAMERA_MODE.focusRoute)
            {
                CameraRotation();
            }

            if (CurrentMode == CAMERA_MODE.focusObject)
            {
                LookAtTarget();
            }

            if (!resetView)
            {
                StopAllCoroutines();
            }

            if (!timerStarted && resetView)
            {
                StartCoroutine(ResetTimer());
            }
        }

        private void CameraRotation()
        {
            float horizontal = Input.GetAxis(horizontalInputName) * mouseSensitivity * Time.deltaTime;
            float vertical = Input.GetAxis(verticalInputName) * mouseSensitivity * Time.deltaTime;

            if (horizontal != 0 || vertical != 0)
            {
                timerStarted = false;
                resetting = false;
                resetView = false;
            }

            xAxisClamp += vertical;

            if (resetting && CurrentMode == CAMERA_MODE.focusRoute)
            {
                LookAtRoute();

                Vector3 eulerRotation = transform.localEulerAngles;

                if (eulerRotation.x < 360.0f && eulerRotation.x > 270.0f)
                {
                    xAxisClamp = 360.0f - eulerRotation.x;
                }
                else if (eulerRotation.x > 0 && eulerRotation.x < 90)
                {
                    xAxisClamp = -eulerRotation.x;
                }

                return;
            }

            if (xAxisClamp > 90.0f)
            {
                xAxisClamp = 90.0f;
                vertical = 0.0f;
                ClampXAxisRotationToValue(270.0f);
            }
            else if (xAxisClamp < -90.0f)
            {
                xAxisClamp = -90.0f;
                vertical = 0.0f;
                ClampXAxisRotationToValue(90.0f);
            }

            transform.Rotate(Vector3.left * vertical);
            playerManager.gameObject.transform.Rotate(Vector3.up * horizontal);
        }

        private void ClampXAxisRotationToValue(float value)
        {
            Vector3 eulerRotation = transform.eulerAngles;
            eulerRotation.x = value;
            transform.eulerAngles = eulerRotation;
        }

        public void ToggleCursorLock()
        {
            if (LockState)
            {
                UnlockCursor();
            }
            else
            {
                LockCursor();
            }
        }

        public void UnlockCursor()
        {
            LockState = false;
            Cursor.lockState = CursorLockMode.None;
            Cursor.visible = true;
        }

        public void LockCursor()
        {
            LockState = true;
            Cursor.lockState = CursorLockMode.Locked;
            Cursor.visible = false;
        }

        public void SetCameraMode(CAMERA_MODE mode)
        {
            switch (mode)
            {
                case CAMERA_MODE.mouseLook:
                    CurrentMode = CAMERA_MODE.mouseLook;
                    break;
                case CAMERA_MODE.focusObject:
                    CurrentMode = CAMERA_MODE.focusObject;
                    break;
                case CAMERA_MODE.focusRoute:
                    CurrentMode = CAMERA_MODE.focusRoute;
                    break;
                case CAMERA_MODE.locked:
                    CurrentMode = CAMERA_MODE.locked;
                    break;
                default:
                    break;
            }
        }

        public IEnumerator ResetTimer()
        {
            timerStarted = true;

            yield return new WaitForSeconds(resetTime);

            resetting = true;
            timerStarted = false;

            yield break;
        }

        public void SetLookAtTarget(Vector3 newTargetPosition)
        {
            targetPosition = newTargetPosition;
        }

        public void SetLookDirection(Vector3 direction)
        {
            lookDirection = direction;
        }

        private void LookAtTarget()
        {
            Quaternion rotation;
            Transform player = playerManager.gameObject.transform;

            rotation = Quaternion.LookRotation(targetPosition - player.position);
            rotation.eulerAngles = new Vector3(0.0f, rotation.eulerAngles.y, 0.0f);
            //rotation.x = 0.0f;
            //rotation.z = 0.0f;
            player.rotation = Quaternion.Slerp(player.rotation, rotation, Time.deltaTime * rotationSpeed);

            var m_CameraTargetRot = Quaternion.Euler(0f, 0f, 0f);

            transform.localRotation = Quaternion.Slerp(transform.localRotation, m_CameraTargetRot, Time.deltaTime * rotationSpeed);
        }

        private void LookAtRoute()
        {
            Quaternion rotation;
            Transform player = playerManager.gameObject.transform;

            rotation = Quaternion.LookRotation(lookDirection);
            rotation.eulerAngles = new Vector3(0.0f, rotation.eulerAngles.y, 0.0f);
            //rotation.x = 0.0f;
            //rotation.z = 0.0f;
            player.rotation = Quaternion.Slerp(player.rotation, rotation, Time.deltaTime * rotationSpeed);

            var m_CameraTargetRot = Quaternion.Euler(0f, 0f, 0f);

            transform.localRotation = Quaternion.Slerp(transform.localRotation, m_CameraTargetRot, Time.deltaTime * rotationSpeed);
        }

        public void ResetView()
        {
            transform.localRotation = Quaternion.identity;
        }
    }
}

