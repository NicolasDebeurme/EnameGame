using Cinemachine;
using PlayerController;
using System.Collections.Generic;
using UnityEngine;

namespace CameraControl
{
    public class CameraManager : MonoBehaviour
    {
        public static CameraManager Instance { get; private set; }

        [SerializeField] private bool InitOnStart = false;

        public Camera MainCam { get; private set; }

        public PlayerLook PlayerLook { get; private set; }

        public CinemachineVirtualCamera PlayerCam { get; private set; }
        public CinemachineVirtualCamera TopViewCam { get; private set; }

        private List<CinemachineVirtualCamera> virtualCameras;

        public CinemachineVirtualCamera CurrentCam { get; private set; }
        private CinemachineVirtualCamera previousCam;

        private void Awake()
        {
            if (Instance == null)
            {
                Instance = this;
                DontDestroyOnLoad(gameObject);
            }
            else
            {
                Destroy(gameObject);
            }
        }

        private void Start()
        {
            if (InitOnStart)
            {
                Init(CAMERA_MODE.mouseLook);
            }
        }

        public void Init(CAMERA_MODE initMode)
        {
            MainCam = Camera.main;

            PlayerCam = GameObject.FindGameObjectWithTag("CharacterCamera").GetComponent<CinemachineVirtualCamera>();
            TopViewCam = GameObject.FindGameObjectWithTag("CharacterTopViewCamera").GetComponent<CinemachineVirtualCamera>();
            PlayerLook = GameObject.FindGameObjectWithTag("CharacterCamera").GetComponent<PlayerLook>();

            CurrentCam = PlayerCam;
            previousCam = PlayerCam;

            PlayerLook.SetCameraMode(initMode);
        }

        private void Update()
        {
            if (CurrentCam != previousCam)
            {
                CurrentCam.Priority = 15;
                previousCam.Priority = 0;
                previousCam = CurrentCam;
            }

            if (CurrentCam == TopViewCam)
            {
                TopViewCam.transform.rotation = PlayerCam.transform.rotation;
            }
        }

        public void SwitchTopView()
        {
            if ((PlayerLook.CurrentMode == CAMERA_MODE.mouseLook || PlayerLook.CurrentMode == CAMERA_MODE.focusRoute) && (CurrentCam == PlayerCam || CurrentCam == TopViewCam))
            {
                if (CurrentCam == PlayerCam)
                {
                    CurrentCam = TopViewCam;
                }
                else if (CurrentCam == TopViewCam)
                {
                    CurrentCam = PlayerCam;
                }
            }
        }

        public void SetTopviewCamActive()
        {
            CurrentCam = TopViewCam;
        }

        public void SetPlayerCamActive()
        {
            CurrentCam = PlayerCam;
        }

        public void FindSceneCameras()
        {
            GameObject[] camObjects = GameObject.FindGameObjectsWithTag("VirtualCam");
            virtualCameras = new List<CinemachineVirtualCamera>();

            foreach (var item in camObjects)
            {
                virtualCameras.Add(item.GetComponent<CinemachineVirtualCamera>());
            }
        }
    }
}

