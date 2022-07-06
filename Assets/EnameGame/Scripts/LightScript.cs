using UnityEngine;
using System.Collections;
using System;

[Serializable]
public enum ACTIVETIME
{
    ALWAYS,
    DAY,
    NIGHT
}

public class LightScript : MonoBehaviour
{
    public ACTIVETIME activeTime = ACTIVETIME.ALWAYS;
    public float availableDistance;
    private float Distance;
    public float Timer = 3f;
    private Light Lightcomponent;
    private GameObject Player;
    ///------------------------------
    void Start()
    {
        Lightcomponent = gameObject.GetComponent<Light>();
        Player = GameObject.FindGameObjectWithTag("MainCamera");
        Distance = Vector3.Distance(Player.transform.position, transform.position);

        if (Distance > availableDistance || activeTime == ACTIVETIME.NIGHT)
        {
            Lightcomponent.enabled = false;
        }
        else
        {
            Lightcomponent.enabled = true;
        }

        if (activeTime != ACTIVETIME.NIGHT)
        {
            StartCoroutine(distancetimer());
        }

        EnviroSkyMgr.instance.OnDayTime += SwitchDay;
        EnviroSkyMgr.instance.OnNightTime += SwitchNight;
    }

    IEnumerator distancetimer()
    {
        yield return new WaitForSeconds(Timer);
        Distance = Vector3.Distance(Player.transform.position, transform.position);


        if (Distance > availableDistance)
        {
            Lightcomponent.enabled = false;
        }
        else
        {
            Lightcomponent.enabled = true;
        }

        StartCoroutine(distancetimer());
        yield break;
    }

    public void SwitchDay()
    {
        SwitchTime(ACTIVETIME.DAY);
    }

    public void SwitchNight()
    {
        SwitchTime(ACTIVETIME.NIGHT);
    }

    public void SwitchTime(ACTIVETIME time)
    {
        StopAllCoroutines();

        Lightcomponent.enabled = false;

        if (activeTime == time || activeTime == ACTIVETIME.ALWAYS)
        {
            Distance = Vector3.Distance(Player.transform.position, transform.position);

            if (Distance > availableDistance)
            {
                Lightcomponent.enabled = false;
            }
            else
            {
                Lightcomponent.enabled = true;
            }

            StartCoroutine(distancetimer());
        }
    }

}