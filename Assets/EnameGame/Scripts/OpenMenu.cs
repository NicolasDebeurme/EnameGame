using PlayerController;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class OpenMenu : MonoBehaviour
{
    public GameObject canvas;
    public Button initialSelected;

    // Start is called before the first frame update
    void Start()
    {
        if (canvas)
        {
            canvas.SetActive(false);
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (canvas)
        {
            if (Input.GetButtonDown("Menu"))
            {
                canvas.SetActive(!canvas.activeSelf);

                if (PlayerManager.Instance)
                {
                    if (canvas.activeSelf)
                    {
                        PlayerManager.Instance.SetPlayerMode(PLAYERMODE.locked);
                    }
                    else
                    {
                        PlayerManager.Instance.SetPlayerMode(PLAYERMODE.free);
                    }

                }

                if (initialSelected)
                {
                    initialSelected.Select();
                }
            }
        }
    }
}
