using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class GoToPlaceView : View
{
    public delegate void OnSpoofValueChangeDelegate(bool isSpoofEnabled);

    public event OnSpoofValueChangeDelegate OnSpoofValueChange;

    public override void Initialize()
    {
    }

    public void OnSpoofToggle(bool value)
    {
        if(OnSpoofValueChange != null)
            OnSpoofValueChange(value);
    }
}
