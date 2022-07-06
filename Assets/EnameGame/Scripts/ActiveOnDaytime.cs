using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ActiveOnDaytime : MonoBehaviour
{
    [Header("Disables first found light and particle system")]
    public ACTIVETIME activeTime = ACTIVETIME.ALWAYS;

    new private Light light;
    new ParticleSystem particleSystem;

    private void Start()
    {
        light = GetComponent<Light>();
        particleSystem = GetComponent<ParticleSystem>();

        if (!!!light && !!!particleSystem)
        {
            Destroy(GetComponent<ActiveOnDaytime>());
        }

        EnviroSkyMgr.instance.OnDayTime += HandleDayTime;
        EnviroSkyMgr.instance.OnNightTime += HandleNightTime;

        HandleDayTime();
    }

    private void HandleNightTime()
    {
        bool setActive = activeTime != ACTIVETIME.DAY;

        if (!!light)
            light.enabled = (setActive);

        if (!!particleSystem)
        {
            if (setActive)
            {
                particleSystem.Play();
            }
            else
            {
                particleSystem.Stop();
            }
        }
    }

    private void HandleDayTime()
    {
        bool setActive = activeTime != ACTIVETIME.NIGHT;

        if (!!light)
            light.enabled = (setActive);

        if (!!particleSystem)
        {
            if (setActive)
            {
                particleSystem.Play();
            }
            else
            {
                particleSystem.Stop();
            }
        }
    }
}
