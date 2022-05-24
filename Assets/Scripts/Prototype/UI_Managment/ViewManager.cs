using System;
using System.Collections.Generic;
using UnityEngine;

public abstract class ViewManager<Ti> : MonoBehaviour where Ti : ViewManager<Ti>
{
	//View Managment
	private protected static Ti s_instance;
	public static Ti Instance
	{
		get
		{
			return s_instance;
		}
	}

	private protected View[] _views;

	private View _currentView;

	private readonly Stack<View> _history = new Stack<View>();
    //

    protected virtual void Awake()
    {
		s_instance = this as Ti;
	}
    public static T GetView<T>() where T : View
	{
		for (int i = 0; i < s_instance._views.Length; i++)
		{
			if (s_instance._views[i] is T tView)
			{
				return tView;
			}
		}

		return null;
	}

	public static void Show<T>(bool remember = true) where T : View
	{
		for (int i = 0; i < s_instance._views.Length; i++)
		{
			if (s_instance._views[i] is T)
			{
				if (s_instance._currentView != null)
				{
					if (remember)
					{
						s_instance._history.Push(s_instance._currentView);
					}

					s_instance._currentView.Hide();
				}

				s_instance._views[i].Show();

				s_instance._currentView = s_instance._views[i];
			}
		}
	}

	public static void Show(View view, bool remember = true)
	{
		if (s_instance._currentView != null)
		{
			if (remember)
			{
				s_instance._history.Push(s_instance._currentView);
			}

			s_instance._currentView.Hide();
		}

		view.Show();

		s_instance._currentView = view;
	}

	public static void ShowLast()
	{
		if (s_instance._history.Count != 0)
		{
			Show(s_instance._history.Pop(), false);
		}
	}
}