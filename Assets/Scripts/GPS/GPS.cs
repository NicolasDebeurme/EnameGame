using UnityEngine;
using System.Collections;
using TMPro;
using UnityEngine.UI;
using UnityEngine.Android;
using System;

public class GPS : MonoBehaviour
{
    public float MinimumDistanceReachPoint = 20;
    public TextMeshProUGUI[] positions;
    public TextMeshProUGUI Distance;
    public TextMeshProUGUI DistanceAproximation;
    public TextMeshProUGUI Boussole;
    public TextMeshProUGUI TargetAngle;

    public Image ImageBoussole;
    public Point YourPosition;
    public Point pointB;
    public Point[] Places;

    public float AnglePlayerTarget;

    public void Start()
    {
        //StartCoroutine(Position());
    }

    public void Update()
    {
        if (GameManager.instance.actualState == ActualState.GO_TO_PLACE)
        {
            UpdateCompass();
            pointB = Places[GameManager.instance.actualPlace - 1];
        }
    }


    IEnumerator Position()
    {
        //InvokeRepeating(nameof(UpdateGPSData), 0.5f, 1f); // FOR PC ________________________________________

        Input.compass.enabled = true;
        Debug.LogFormat("Start");
        if (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
        {
            Debug.LogFormat("Ask Permission");
            Permission.RequestUserPermission(Permission.FineLocation);
            while (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
            {
                yield return null;
            }
        }
        Debug.LogFormat("Have Permission");

        // Check if the user has location service enabled.
        if (!Input.location.isEnabledByUser)
        {
            Debug.LogFormat("No GPS on phone");
            yield break;
        }
        // Starts the location service.
        Input.location.Start(0.01f,0.01f);
        Debug.LogFormat("Start");
        // Waits until the location service initializes
        int maxWait = 20;
        while (Input.location.status == LocationServiceStatus.Initializing && maxWait > 0)
        {
            yield return new WaitForSeconds(1);
            maxWait--;
        }

        // If the service didn't initialize in 20 seconds this cancels location service use.
        if (maxWait < 1)
        {
            Debug.LogFormat("Timed out");
            yield break;
        }

        // If the connection failed this cancels location service use.
        if (Input.location.status == LocationServiceStatus.Failed)
        {
            Debug.LogFormat("Unable to determine device location");
            yield break;
        }
        else
        {
            // If the connection succeeded, this retrieves the device's current location and displays it in the Console window.
            InvokeRepeating(nameof(UpdateGPSData), 0.5f, 1f);
        }



        Debug.LogFormat("Unable to determine device location");
        // Stops the location service if there is no need to query location updates continuously.
        Input.location.Stop();
        //yield return new WaitForSeconds(5);
    }

    public void UpdateGPSData()
    {
        IsReachThePosition(); 

        if (Input.location.status == LocationServiceStatus.Running)
        {
            //position.text = "Location: " + Input.location.lastData.latitude.ToString() + " " + Input.location.lastData.longitude.ToString() + " " + Input.location.lastData.altitude.ToString() + " " + Input.location.lastData.horizontalAccuracy.ToString() + " " + Input.location.lastData.timestamp.ToString();
            positions[0].text = "Latitude: " + (double)Input.location.lastData.latitude;
            positions[1].text = "Longitude: " + (double)Input.location.lastData.longitude;
            positions[2].text = "Altitude: " + (double)Input.location.lastData.altitude;
            positions[3].text = "HorizontalAccuracy: " + (double)Input.location.lastData.horizontalAccuracy;
            positions[4].text = "VerticalAccuracy: " + (double)Input.location.lastData.verticalAccuracy;
            positions[5].text = "Timestamp: " + (double)Input.location.lastData.timestamp;




            YourPosition.X = Input.location.lastData.latitude;
            YourPosition.Y = Input.location.lastData.longitude;
        }

        Distance.text ="Distance: " + YourPosition.Distance(YourPosition, pointB);
        DistanceAproximation.text = "DistanceAproximation: " + YourPosition.DistanceAproximation(YourPosition, pointB, Input.location.lastData.horizontalAccuracy, Input.location.lastData.verticalAccuracy);


    }

    public void UpdateCompass()
    {
        Boussole.text = "Angle from North: "  + Input.compass.magneticHeading.ToString();

        Vector2 v1 = new Vector2((float)(pointB.Y - YourPosition.Y), (float)(pointB.X - YourPosition.X));
        Vector2 v2 = new Vector2(0, 1);
        float sign = Mathf.Sign(v1.x * v2.y - v1.y * v2.x);
        AnglePlayerTarget =  - Vector2.Angle(v1, v2) * sign;





        TargetAngle.text = "AnglePlayerTarget: " + AnglePlayerTarget.ToString();
        ImageBoussole.gameObject.transform.rotation = Quaternion.Euler(0, 0, (+Input.compass.magneticHeading + AnglePlayerTarget));
        //Debug.LogFormat((new Vector2((float)(pointB.X - YourPosition.X), (float)(pointB.Y - YourPosition.Y))).ToString());
        //Debug.LogFormat("Compass: " + Input.compass.magneticHeading + "  Target: " + AnglePlayerTarget);
    }

    public void IsReachThePosition()
    {
        if (YourPosition.Distance(YourPosition, pointB) < MinimumDistanceReachPoint)
        {
            GameManager.instance.actualState = ActualState.AR;
            GameManager.instance.ChangeState();

        }
    }

    public void OnClickGlitch()
    {
        GameManager.instance.actualState = ActualState.AR;
        GameManager.instance.ChangeState();
    }


}