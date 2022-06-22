using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Clock : MonoBehaviour
{
    const float hoursToDegrees = 30f, minutesToDegrees = 6f, secondsToDegrees = 6f;

    [SerializeField]
    Transform hoursPivot = default, minutesPivot, secondsPivot;

    private void Update()
    {
        var time = EnviroSkyMgr.instance.Time;

        hoursPivot.localRotation = Quaternion.Euler(0f, hoursToDegrees * (float)time.Hours, 0f);
        minutesPivot.localRotation = Quaternion.Euler(0f, minutesToDegrees * (float)time.Minutes, 0f);
        secondsPivot.localRotation = Quaternion.Euler(0f, secondsToDegrees * (float)time.Seconds, 0f);
    }
}
