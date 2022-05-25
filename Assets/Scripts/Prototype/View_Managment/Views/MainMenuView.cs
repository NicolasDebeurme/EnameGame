using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using TMPro;
using UnityEngine;
using static Enums;
using System;

public class MainMenuView : View
{
    [SerializeField]
    private TMP_Dropdown _dropDownBtn;
    [SerializeField]
    private Button _startButton;

    [HideInInspector]
    public Roles playerRole = Roles.None;
    public override void Initialize()
    {
        List <TMP_Dropdown.OptionData> newOptions = new List<TMP_Dropdown.OptionData>();

        foreach (string role in Enum.GetNames(typeof(Roles)))
        {
            newOptions.Add(new TMP_Dropdown.OptionData(role));
        }
            
        _dropDownBtn.AddOptions(newOptions);
    }

    public void OnDropDownButtonDown(int role)
    {
        playerRole = (Roles)role;

        if(role != 0)
            _startButton.interactable = true;
        else
            _startButton.interactable = false;
    }
}

