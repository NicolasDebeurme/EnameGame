using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using static Enums;

public class PharmacyAction : StepAction
{
    
    public override void Initialize(GameStateSystem gameStateSystem)
    {
        base.Initialize(gameStateSystem, this);

        

        ArState.textPanel.GetComponentsInChildren<TextMeshProUGUI>()[0].text = "Pharmacy..";

        ArState.textPanel.GetComponentsInChildren<TextMeshProUGUI>()[1].text = "Do you want to switch the medecin jar with the poison one?";
        
    }

    private void Update()
    {
       
    }

    
    private void OnDestroy()
    {
       
    }
}
