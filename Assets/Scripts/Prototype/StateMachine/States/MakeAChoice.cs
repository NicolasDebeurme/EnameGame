using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;

public class MakeAChoice : State
{
    private MakeAChoiceView _view;
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

        yield break;
    }
    private void ButtonClicked(NTree<StoryTreeNodeInfo> child)
    {
        GameManager.BroadCastChoice(GameStateSystem.ActualNode.children.IndexOf(child));

        GameStateSystem.ActualNode = child;

        NextState();
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
