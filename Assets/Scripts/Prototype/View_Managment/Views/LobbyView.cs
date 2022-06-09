using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using TMPro;
using UnityEngine;
using static Enums;
using System;

public class LobbyView : View
{
    //Private
    [SerializeField]
    private TextMeshProUGUI[] players;

    [SerializeField]
    private GameObject inLobby;
    [SerializeField]
    private GameObject outLobby;

    [SerializeField]
    private TMP_Dropdown _dropDownBtn;
    [SerializeField]
    private Button _startButton;

    [HideInInspector]
    public Roles playerRole = Roles.None;

    //Public
    public InputField SessionIDField;

    //Events
    public event OnLobbyButtonPressedDelegate LobbyButtonPressed;
    public delegate void OnLobbyButtonPressedDelegate(LobbyButton buttonType);


    public override void Initialize()
    {
        List <TMP_Dropdown.OptionData> newOptions = new List<TMP_Dropdown.OptionData>();

        foreach (string role in Enum.GetNames(typeof(Roles)))
        {
            newOptions.Add(new TMP_Dropdown.OptionData(role));
        }
            
        _dropDownBtn.AddOptions(newOptions);
    }

    #region Public methods
    public void OnDropDownButtonDown(int role)
    {
        playerRole = (Roles)role;

        if(role != 0)
            _startButton.interactable = true;
        else
            _startButton.interactable = false;
    }

    public void OnPlayerConnected(int index)
    {
        players[index].text = "Player " + index.ToString() + " connected !";
    }

    public void OnPlayerDisconnected(int index)
    {
        players[index].text = "Waiting for players ...";
    }

    public void OnLobbyButton(int buttonType)
    {
        LobbyButtonPressed?.Invoke((LobbyButton)buttonType);

        ChangeLobbyState();
    }
    #endregion

    #region Private methods
    private void ChangeLobbyState()
    {
        if (inLobby.activeSelf)
        {
            inLobby.SetActive(false);
            outLobby.SetActive(true);
        }
        else
        {
            outLobby.SetActive(false);
            inLobby.SetActive(true);
        }
    }

    #endregion
}

