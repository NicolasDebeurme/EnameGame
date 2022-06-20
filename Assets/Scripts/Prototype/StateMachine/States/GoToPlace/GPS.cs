using UnityEngine;
using System.Collections;
using TMPro;
using UnityEngine.UI;
using UnityEngine.Android;
using System;

public class GPS : MonoBehaviour
{
    //ToSet
    private float _minimumDistanceReachPoint = 1;

    private Image _imageBoussole;

    private Point _pointToReach;

    private State _senderState;

    //NotToSet
    [HideInInspector]
    public Point _yourPosition;

    private float _anglePlayerTarget;

    private void Awake()
    {

        GameManager gm = GameManager.Instance;

        Init(5, gm.imageBoussole, gm.pointToReach, GameStateSystem._instance.GetState());
    }

    private void Start()
    {
        StartCoroutine(Position());
    }

    private void Init(float minimumDistanceReachPoint, Image imageBoussole, Point pointToReach, State senderState)
    {
        _minimumDistanceReachPoint = minimumDistanceReachPoint;
        _imageBoussole = imageBoussole;
        _pointToReach = pointToReach;
        _senderState = senderState;
        _yourPosition = new Point();
    }

    IEnumerator Position()
    {
        InvokeRepeating(nameof(UpdateGPSData), 0.5f, 1f); // FOR PC ________________________________________

        Input.compass.enabled = true;


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
            InvokeRepeating("UpdateGPSData", 0.5f, 1f);
        }

        // Stops the location service if there is no need to query location updates continuously.
        //Input.location.Stop();
        //yield return new WaitForSeconds(5);
    }

    public void UpdateGPSData()
    {

        if (Input.location.status == LocationServiceStatus.Running)
        {

            _yourPosition.X = Input.location.lastData.latitude;
            _yourPosition.Y = Input.location.lastData.longitude;
        }

        AsReachPosition();
        UpdateCompass();
    }

    public void AsReachPosition()
    {
        if (_yourPosition.Distance(_yourPosition, _pointToReach) < _minimumDistanceReachPoint && GameStateSystem._instance != null)
        {
            _senderState.NextState();
        }
    }

    public void UpdateCompass()
    {
        Vector2 v1 = new Vector2((float)(_pointToReach.Y - _yourPosition.Y), (float)(_pointToReach.X - _yourPosition.X));
        Vector2 v2 = new Vector2(0, 1);
        float sign = Mathf.Sign(v1.x * v2.y - v1.y * v2.x);
        _anglePlayerTarget = -Vector2.Angle(v1, v2) * sign;

        _imageBoussole.gameObject.transform.rotation = Quaternion.Euler(0, 0, (+Input.compass.magneticHeading + _anglePlayerTarget));
    }

    public void Destroy()
    {
        Destroy(this);
    }
}