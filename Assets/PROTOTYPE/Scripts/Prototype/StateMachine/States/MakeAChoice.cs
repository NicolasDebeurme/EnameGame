using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;
using static Enums;

public class MakeAChoice : State
{
    private MakeAChoiceView _view;
    private TypeOfChoice typeOfChoice;
    public MakeAChoice(GameStateSystem gameStateSystem) : base(gameStateSystem)
    {
    }

    public override IEnumerator Start()
    {
        _view = UIManager.Show<MakeAChoiceView>();

        if (GameStateSystem.ActualNode.data.visibilitys.See.Contains(GameStateSystem._playerRole))
        {
            _view.Question.text = GameStateSystem.ActualNode.data.dialogueText;

        }
        else if(GameStateSystem.ActualNode.data.visibilitys.Decide.Contains(GameStateSystem._playerRole))
        {
            _view.Question.text = GameStateSystem.ActualNode.data.dialogueText;

            foreach (var child in GameStateSystem.ActualNode.children)
            {
                Button btn = _view.Buttons[GameStateSystem.ActualNode.children.IndexOf(child)];
                btn.gameObject.SetActive(true);
                btn.GetComponentInChildren<TextMeshProUGUI>().text = child.data.textToBeChose;
                btn.onClick.AddListener(() => ButtonClicked(child));
            }
        }
        else
        {
            _view.Question.text = "Waiting for other player ..";
        }

        if (GameStateSystem.ActualNode.data.place == Places.Pharmacy) 
                typeOfChoice = TypeOfChoice.HasSwap;
        else if (GameStateSystem.ActualNode.data.place == Places.Abbey_Courtyard)
            typeOfChoice = TypeOfChoice.HasDenounce;
        else if (GameStateSystem.ActualNode.data.place == Places.Harbour)
            typeOfChoice = TypeOfChoice.HasShoot;

        yield break;
    }
    private void ButtonClicked(NTree<StoryTreeNodeInfo> child)
    {
        NetworkingManager.BroadCastChoice(GameStateSystem.ActualNode.children.IndexOf(child),typeOfChoice);
    }

    private void ResetButtons()
    {
        foreach (var btn in _view.Buttons)
        {
            btn.gameObject.SetActive(false);
            btn.onClick.RemoveAllListeners();
        }
    }

    public override void NextState()
    {
        ResetButtons();
        GameStateSystem._gameInfo._session.Pause();
        GameStateSystem.SetState(new GoToPlace(GameStateSystem));
    }

}
