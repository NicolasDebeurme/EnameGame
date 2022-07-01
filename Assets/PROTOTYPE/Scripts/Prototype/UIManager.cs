using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using static Enums;

public class UIManager : ViewManager<UIManager>
{

	//GameState
	[Header("Views")]
	[SerializeField]
	private View[] _gameViews;
	//
	protected override void Awake()
	{
		base.Awake();
	}


	private void Start()
	{

	}

	#region private Methodes
	private void GameInitialized()
	{

		_views = new View[_gameViews.Length];

		foreach (var gameView in _gameViews)
		{
			_views[Array.IndexOf(_gameViews, gameView)] = gameView;
		}

		for (int i = 0; i < _views.Length; i++)
		{
            _views[i].Initialize();

			_views[i].Hide();
		}
	}
	#endregion

	#region public static Methodes
	public void SetUIEvents()
    {
        s_instance.GameInitialized();
    }
	#endregion
}
