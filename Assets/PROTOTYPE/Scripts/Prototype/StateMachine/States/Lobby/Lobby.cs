using Niantic.ARDK;
using Niantic.ARDK.AR;
using Niantic.ARDK.AR.Configuration;
using Niantic.ARDK.AR.Networking;
using Niantic.ARDK.Networking;
using Niantic.ARDK.Networking.MultipeerNetworkingEventArgs;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using static Enums;

public class Lobby : State
{
    private LobbyView _view =null;
    private IMultipeerNetworking networking = null;

    public Lobby(GameStateSystem gameStateSystem) : base(gameStateSystem)
    {
    }

    public override IEnumerator Start()
    {
        _view =UIManager.Show<LobbyView>();

        _view._dropDownBtn.transform.parent.gameObject.SetActive(false);
        _view.LobbyButtonPressed += OnLobbyButtonPressed;
        _view.StartButtonTriggered += OnStartButton;

        GameStateSystem.gameObject.AddComponent<NetworkingManager>();

        yield break ;
    }

    public override void NextState()
    {
        GameStateSystem._playerRole = _view.playerRole;
        GameStateSystem.SetState(new GoToPlace(GameStateSystem));
    }

    private void OnStartButton()
    {
        if (networking.Self == networking.Host)
        {
            NetworkingManager.BroadCastNextState();
        }
        else
            throw new Exception("You'r not the HOST");
    }
    private void OnLobbyButtonPressed(LobbyButton buttonType)
    {
        switch(buttonType)
        {
            case (LobbyButton.Join):
                if (GameStateSystem._gameInfo == null)
                    CreateNetworking();
                break;

            case (LobbyButton.Create):
                if (GameStateSystem._gameInfo == null)
                    CreateNetworking();
                break;

            case(LobbyButton.Leave):
                if (GameStateSystem._gameInfo != null)
                    DisposeNetworking();
                break;

            default:
                throw new Exception("No such buttonType");

        }
    }

    private void CreateNetworking()
    {
        NetworkingManager.Instance.NetworkStateChanged += UpdateLobby;
        NetworkingManager.Instance.PlayerDictionnaryUpdated += OnPlayerDictionnaryUpdated;

        NetworkingManager.Instance.CreateAndRunSharedAR(_view.SessionIDField);
    }

    private void DisposeNetworking()
    {
        NetworkingManager.Instance.StopSharedAR();
        _view._dropDownBtn.transform.parent.gameObject.SetActive(false);
        _view.PlayerRoleChange -= OnRoleChange;
    }
    private void UpdateLobby(GameInfo gameInfo)
    {
        GameStateSystem._gameInfo = gameInfo;

        if(gameInfo != null)
        {
            networking = gameInfo._networking;
            _view._dropDownBtn.transform.parent.gameObject.SetActive(true);
            _view.PlayerRoleChange += OnRoleChange;
        }
        else
        {
            networking = null;
            _view._dropDownBtn.transform.parent.gameObject.SetActive(false);
            _view.PlayerRoleChange -= OnRoleChange;
        }
    }

    private void OnRoleChange(Roles newRole)
    {

        NetworkingManager.players[networking.Self.Identifier] = newRole;
        NetworkingManager.BroadCastLobbyRole();

        if (newRole != 0 && networking.Self == networking.Host)
            _view._startButton.interactable = true;
        else
            _view._startButton.interactable = false;
    }
    private void OnPlayerDictionnaryUpdated(Dictionary<Guid, Roles> players)
    {
        _view.UpdateUI(players);
    }
}
