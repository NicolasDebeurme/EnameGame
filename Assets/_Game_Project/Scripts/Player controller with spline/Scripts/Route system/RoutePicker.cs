using PlayerController;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

[RequireComponent(typeof(SplineComponent))]
public class RoutePicker : MonoBehaviour
{
    public string startLocationName = "New Route start";
    public string destinationLocationName = "New Route destination";

    [SerializeField] [Min(0)] private float showSpeed = 20f;

    public GameObject start = null;
    [HideInInspector]
    public Crossroad startingCrossroad = null;
    [HideInInspector]
    public RoutePicker startingRoute = null;
    [HideInInspector]
    public int startingRouteWayPoint = 0;

    public bool endAtSamePoint = false;
    public GameObject end = null;
    [HideInInspector]
    public Crossroad endingCrossroad = null;
    [HideInInspector]
    public RoutePicker endingRoute = null;
    [HideInInspector]
    public int endingRouteWayPoint = 0;

    public SplineComponent Spline { get; private set; }

    private List<Vector3> controlPoints;
    private List<Vector3> previousPoints;

    [HideInInspector]
    public LineRenderer lineRenderer;

    private TrailRenderer trail;
    private TrailRenderer trailBack;

    List<Vector3> progress = new List<Vector3>();

    public GameObject trailTemplate;

    [Min(1)] public int pointAmount = 8;
    public int originPoint = 0;

    private int currentPoint = 0;
    private int currentAmount = 0;
    private int frontDistance = 0;
    private int currentBackPoint = 0;
    private int currentBackAmount = 0;
    private int backDistance = 0;

    private float step;

    public bool playerInCollider = false;
    public bool showPoints = false;
    public bool manualRefresh = false;

    private int time;
    
    private void OnDrawGizmos()
    {
#if UNITY_EDITOR
        if (!EditorApplication.isPlaying)
        {
            Spline = GetComponent<SplineComponent>();

            if (start != null)
            {
                if (start.GetComponent<RoutePicker>() && startingRoute == null)
                {
                    startingRoute = start.GetComponent<RoutePicker>();

                    if (GetClosestRouteWayPoint(startingRoute.Spline.transform.TransformPoint(startingRoute.Spline.GetControlPoint(1)),
                        startingRoute.Spline.transform.TransformPoint(startingRoute.Spline.GetControlPoint(startingRoute.Spline.ControlPointCount - 2)),
                        Spline.transform.TransformPoint(Spline.GetControlPoint(1)),
                        POSITION.start) == 1)
                    {
                        startingRoute.start = gameObject;
                        startingRoute.startingRoute = this;
                    }
                    else
                    {
                        startingRoute.end = gameObject;
                        startingRoute.endingRoute = this;
                    }
                    startingCrossroad = null;
                }

                if (start.GetComponent<Crossroad>() && startingCrossroad == null)
                {
                    startingCrossroad = start.GetComponent<Crossroad>();
                    startingCrossroad.AddChoice(this);
                    startingRoute = null;
                }
            }
            else if (start == null && (startingRoute != null || startingCrossroad != null))
            {
                if (startingRoute != null)
                {
                    startingRoute.end = null;
                    startingRoute = null;
                }

                if (startingCrossroad != null)
                {
                    startingCrossroad.RemoveChoice(this);
                    startingCrossroad = null;
                }
            }

            if (endAtSamePoint)
            {
                end = start;
                endingRoute = startingRoute;
                endingRouteWayPoint = startingRouteWayPoint;
            }

            if (end != null)
            {
                if (end.GetComponent<RoutePicker>() && endingRoute == null && !endAtSamePoint)
                {
                    endingRoute = end.GetComponent<RoutePicker>();

                    if (GetClosestRouteWayPoint(endingRoute.Spline.transform.TransformPoint(endingRoute.Spline.GetControlPoint(1)),
                        endingRoute.Spline.transform.TransformPoint(endingRoute.Spline.GetControlPoint(endingRoute.Spline.ControlPointCount - 2)),
                        Spline.transform.TransformPoint(Spline.GetControlPoint(Spline.ControlPointCount - 2)),
                        POSITION.end) == 1)
                    {
                        endingRoute.start = gameObject;
                        endingRoute.startingRoute = this;
                    }
                    else
                    {
                        endingRoute.end = gameObject;
                        endingRoute.endingRoute = this;
                    }
                    endingCrossroad = null;
                }

                if (end.GetComponent<Crossroad>() && endingCrossroad == null && !endAtSamePoint)
                {
                    endingCrossroad = end.GetComponent<Crossroad>();
                    endingCrossroad.AddChoice(this);
                    endingRoute = null;
                }
            }
            else if (end == null && (endingRoute != null || endingCrossroad != null))
            {
                if (endingRoute != null)
                {
                    endingRoute.start = null;
                    endingRoute = null;
                }

                if (endingCrossroad != null)
                {
                    endingCrossroad.RemoveChoice(this);
                    endingCrossroad = null;
                }
            }

            if (!ListChecks.CheckEqual(controlPoints, Spline.points) && ListChecks.CheckEqual(Spline.points, previousPoints) || manualRefresh)
            {
                if (time == 100)
                {
                    time = DateTime.Now.Second;
                }

                if (time + 1 > 59 && time != 100)
                {
                    time -= 60;
                }

                if (DateTime.Now.Second >= time + 1)
                {
                    IEnumerator controlHandler = HandleControlPoints();
                    while (controlHandler.MoveNext()) ;
                    time = 100;
                    manualRefresh = false;
                }
            }

            previousPoints = new List<Vector3>(Spline.points);
        }
#endif
    }

    private void Awake()
    { 
        Spline = GetComponent<SplineComponent>();

        if (!!trailTemplate)
        {
            trail = Instantiate(trailTemplate.GetComponent<TrailRenderer>(), transform);
            trailBack = Instantiate(trailTemplate.GetComponent<TrailRenderer>(), transform);

            trail.enabled = false;
            trail.emitting = false;
        }
    }

    private void Start()
    {
        step = 1f / pointAmount;

        if (startingRoute != null)
        {
            startingRoute.Spline.FindClosest(Spline.transform.TransformPoint(Spline.GetControlPoint(1)), startingRoute.pointAmount, out startingRouteWayPoint);

            if (!startingRoute.endAtSamePoint)
            {
                if (startingRouteWayPoint == 0)
                {
                    startingRouteWayPoint++;
                }
                else
                {
                    startingRouteWayPoint--;
                }
            }
            else
            {
                startingRouteWayPoint = 1;
            }
        }

        if (endingRoute != null)
        {
            endingRoute.Spline.FindClosest(Spline.transform.TransformPoint(Spline.GetControlPoint(Spline.ControlPointCount - 2)), endingRoute.pointAmount, out endingRouteWayPoint);

            if (!endingRoute.endAtSamePoint)
            {
                if (endingRouteWayPoint == 0)
                {
                    endingRouteWayPoint++;
                }
                else
                {
                    endingRouteWayPoint--;
                }
            }
            else
            {
                endingRouteWayPoint = 1;
            }
        }
    }

    private void LateUpdate()
    {
        if (PlayerManager.Instance.currentMode == PLAYERMODE.spline && PlayerManager.Instance.currentRoute == this && lineRenderer == null)
        {
            PlayerManager.Instance.GoOnSpline();
        }

        if (PlayerManager.Instance.currentMode == PLAYERMODE.spline && PlayerManager.Instance.currentRoute == this && lineRenderer != null)
        {
            float trailSpeed = Time.deltaTime * showSpeed;

            List<Vector3> finalProgress = new List<Vector3>();

            FrontalPoints();
            BackwardsPoints();

            lineRenderer.positionCount = 0;

            if (startingRoute != null && (!endAtSamePoint || originPoint <= pointAmount / 2))
            {
                List<Vector3> startProgress = startingRoute.GetProgress();
                lineRenderer.positionCount += startProgress.Count;

                if (startingRouteWayPoint == 1)
                {
                    startProgress.Reverse();
                }

                finalProgress.AddRange(startProgress);
            }

            lineRenderer.positionCount += progress.Count;
            finalProgress.AddRange(progress);

            if (endingRoute != null && (!endAtSamePoint || originPoint > pointAmount / 2))
            {
                List<Vector3> endProgress = endingRoute.GetProgress();
                lineRenderer.positionCount += endProgress.Count;

                if (endingRouteWayPoint > 1)
                {
                    endProgress.Reverse();
                }

                finalProgress.AddRange(endProgress);
            }

            lineRenderer.SetPositions(finalProgress.ToArray());
        }

        if (!(PlayerManager.Instance.currentMode == PLAYERMODE.spline) && lineRenderer != null)
        {
            ClearSpline();
        }
    }

    public void StartSpline(int startingPoint, int frontDistance, int backDistance)
    {
        currentPoint = startingPoint + 1;
        currentBackPoint = startingPoint - 1;
        originPoint = startingPoint;

        this.frontDistance = frontDistance;
        this.backDistance = backDistance;

        lineRenderer = Instantiate(PlayerManager.Instance.lineRendererTemplate).GetComponent<LineRenderer>();

        if (!!trailTemplate)
        {
            trail.transform.position = Spline.GetPoint(currentPoint * step);
            trailBack.transform.position = Spline.GetPoint(currentBackPoint * step);

            trail.Clear();
            trailBack.Clear();

            trail.enabled = true;
            trailBack.enabled = true;

            trail.emitting = true;
            trailBack.emitting = true;
        }
    }

    public void StartSpline(int startingPoint, int frontDistance, int backDistance, LineRenderer renderer)
    {
        currentPoint = startingPoint + 1;
        currentBackPoint = startingPoint - 1;
        originPoint = startingPoint;

        this.frontDistance = frontDistance;
        this.backDistance = backDistance;

        lineRenderer = renderer;

        if (!!trailTemplate)
        {
            trail.transform.position = Spline.GetPoint(currentPoint * step);
            trailBack.transform.position = Spline.GetPoint(currentBackPoint * step);

            trail.Clear();
            trailBack.Clear();

            trail.enabled = true;
            trailBack.enabled = true;

            trail.emitting = true;
            trailBack.emitting = true;
        }
    }

    public void ShowPoints(int origin, int frontDistance, int backDistance)
    {
        originPoint = origin;

        this.frontDistance = frontDistance;
        this.backDistance = backDistance;
    }

    public void FrontalPoints()
    {
        if (currentPoint < originPoint + frontDistance && currentPoint < pointAmount)
        {
            Vector3 newPoint = Spline.GetPoint(currentPoint * step);

            if (!progress.Contains(newPoint))
            {
                progress.Add(newPoint);
            }
            currentPoint++;

            if (currentPoint == pointAmount)
            {
                newPoint = Spline.GetPoint(currentPoint * step);

                if (!progress.Contains(newPoint))
                {
                    progress.Add(Spline.GetPoint(currentPoint * step));
                }
            }
        }
        else if(currentPoint > originPoint + frontDistance)
        {
            progress.Remove(Spline.GetPoint(currentPoint * step));
            currentPoint--;
        }
        
        currentAmount = currentPoint - originPoint;

        int restAmount = frontDistance - currentAmount;

        if (endAtSamePoint && originPoint <= pointAmount / 2)
        {
            return;
        }

        if (currentAmount < frontDistance && currentPoint == pointAmount)
        {
            if (endingRoute != null)
            {
                if (endingRoute.lineRenderer == null)
                {
                    if (endingRouteWayPoint > 1)
                    {
                        endingRoute.StartSpline(endingRouteWayPoint + 1, 0, restAmount, lineRenderer);
                    }
                    else
                    {
                        endingRoute.StartSpline(endingRouteWayPoint - 1, restAmount, 0, lineRenderer);
                    }
                }
                else
                {
                    if (endingRouteWayPoint > 1)
                    {
                        endingRoute.ShowPoints(endingRouteWayPoint + 1, 0, restAmount);
                    }
                    else
                    {
                        endingRoute.ShowPoints(endingRouteWayPoint - 1, restAmount, 0);
                    }
                }
            }

            if (endingCrossroad != null)
            {
                if (restAmount > 0)
                {
                    endingCrossroad.showRender = true;
                }
            }
        }
        else if (endingRoute != null && PlayerManager.Instance.currentRoute == this)
        {
            endingRoute.ClearProgress();
        }
        else if (endingCrossroad != null)
        {
            endingCrossroad.showRender = false;
        }
    }

    public void BackwardsPoints()
    {
        if (currentBackPoint > originPoint - backDistance && currentBackPoint > 0)
        {
            Vector3 newPoint = Spline.GetPoint(currentBackPoint * step);

            if (!progress.Contains(newPoint))
            {
                progress.Insert(0, newPoint);
            }
            currentBackPoint--;
        }
        else if (currentBackPoint < originPoint - backDistance)
        {
            if (progress.Count > 0)
            {
                progress.RemoveAt(0);
                currentBackPoint++;
            }
        }

        currentBackAmount = originPoint - currentBackPoint;

        int restAmount = backDistance - currentBackAmount;

        if (endAtSamePoint && originPoint > pointAmount / 2)
        {
            return;
        }

        if (currentBackAmount < backDistance && currentBackPoint == 0 && restAmount > 0)
        {
            if (startingRoute != null)
            {
                if (startingRoute.lineRenderer == null)
                {
                    if (startingRouteWayPoint > 1)
                    {
                        startingRoute.StartSpline(startingRouteWayPoint + 1, 0, restAmount, lineRenderer);
                    }
                    else
                    {
                        startingRoute.StartSpline(startingRouteWayPoint - 1, restAmount, 0, lineRenderer);
                    }
                }
                else
                {
                    if (startingRouteWayPoint > 1)
                    {
                        startingRoute.ShowPoints(startingRouteWayPoint + 1, 0, restAmount);
                    }
                    else
                    {
                        startingRoute.ShowPoints(startingRouteWayPoint - 1, restAmount, 0);
                    }
                }
            }

            if (startingCrossroad != null)
            {
                if (restAmount > 0)
                {
                    startingCrossroad.showRender = true;
                }
            }
        }
        else if (startingRoute != null && PlayerManager.Instance.currentRoute == this)
        {
            startingRoute.ClearProgress();
        }
        else if (startingCrossroad != null)
        {
            startingCrossroad.showRender = false;
        }
    }

    public List<Vector3> GetProgress()
    {
        FrontalPoints();
        BackwardsPoints();

        return new List<Vector3>(progress);
    }

    public void ClearProgress()
    {
        progress = new List<Vector3>();

        originPoint = 0;

        currentPoint = 0;
        currentAmount = 0;
        frontDistance = 0;

        currentBackPoint = 0;
        currentBackAmount = 0;
        backDistance = 0;
    }

    public void ClearSpline()
    {
        ClearProgress();

        if (lineRenderer != null)
        {
            Destroy(lineRenderer.gameObject);
            lineRenderer = null;
        }

        if (!!trailTemplate)
        {
            trail.emitting = false;
            trailBack.emitting = false;

            trail.enabled = false;
            trailBack.enabled = false;
        }
    }

    public void WatchDogAlert(Collider other)
    {
        if (other.CompareTag("Player") && !PlayerManager.Instance.onCrossRoad)
        {
            playerInCollider = true;
            PlayerManager.Instance.inRouteCollider = this;
        }
    }

    public void WatchDogSafe(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            playerInCollider = false;
            PlayerManager.Instance.inRouteCollider = null;
        }
    }

    public void WatchDogWatch(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            if (!PlayerManager.Instance.onCrossRoad && !PlayerManager.Instance.crossRoadChoice)
            {
                playerInCollider = true;
                PlayerManager.Instance.inRouteCollider = this;
            }
        }
    }

    private enum POSITION
    {
        start, end
    }

    private int GetClosestRouteWayPoint(Vector3 startPoint, Vector3 endPoint, Vector3 connectPoint, POSITION position)
    {
        if ((connectPoint - startPoint).sqrMagnitude <= (connectPoint - endPoint).sqrMagnitude)
        {
            switch (position)
            {
                case POSITION.start:
                    startingRouteWayPoint = 1;
                    break;
                case POSITION.end:
                    endingRouteWayPoint = 1;
                    break;
                default:
                    break;
            }

            return 1;
        }
        else
        {
            switch (position)
            {
                case POSITION.start:
                    startingRouteWayPoint = startingRoute.pointAmount - 1;
                    return startingRoute.pointAmount - 1;
                case POSITION.end:
                    endingRouteWayPoint = endingRoute.pointAmount - 1;
                    return endingRoute.pointAmount - 1;
                default:
                    break;
            }
        }

        return 1;
    }

    private IEnumerator HandleControlPoints()
    {
        yield return new WaitForSecondsRealtime(2);

        if (startingRoute != null)
        {
            var connectPoint = Spline.GetControlPoint(1);
            var connectPoint2 = Spline.GetControlPoint(2);

            Vector3 wp = Spline.transform.TransformPoint(connectPoint);
            Vector3 wp2 = Spline.transform.TransformPoint(connectPoint2);
            Vector3 controlPointWp;

            if (startingRouteWayPoint == 1)
            {
                var inversedWp = startingRoute.Spline.transform.InverseTransformPoint(wp);
                var inversedWp2 = startingRoute.Spline.transform.InverseTransformPoint(wp2);

                controlPointWp = startingRoute.transform.TransformPoint(startingRoute.Spline.GetControlPoint(2));
                var inversedControlPointWp = Spline.transform.InverseTransformPoint(controlPointWp);

                if (
                    startingRoute.Spline.GetControlPoint(1) != inversedWp ||
                    startingRoute.Spline.GetControlPoint(0) != inversedWp2 ||
                    Spline.GetControlPoint(0) != inversedControlPointWp
                    )
                {
                    startingRoute.Spline.SetControlPoint(1, inversedWp);
                    startingRoute.Spline.SetControlPoint(0, inversedWp2);
                    Spline.SetControlPoint(0, inversedControlPointWp);

                    startingRoute.manualRefresh = true;
                }

            }
            else
            {
                var inversedWp = startingRoute.Spline.transform.InverseTransformPoint(wp);
                var inversedWp2 = startingRoute.Spline.transform.InverseTransformPoint(wp2);

                controlPointWp = startingRoute.transform.TransformPoint(startingRoute.Spline.GetControlPoint(startingRoute.Spline.ControlPointCount - 3));
                var inversedControlPointWp = Spline.transform.InverseTransformPoint(controlPointWp);

                if (
                    startingRoute.Spline.GetControlPoint(startingRoute.Spline.ControlPointCount - 2) != inversedWp ||
                    startingRoute.Spline.GetControlPoint(startingRoute.Spline.ControlPointCount - 1) != inversedWp2 ||
                    Spline.GetControlPoint(0) != inversedControlPointWp
                    )
                {
                    startingRoute.Spline.SetControlPoint(startingRoute.Spline.ControlPointCount - 2, inversedWp);
                    startingRoute.Spline.SetControlPoint(startingRoute.Spline.ControlPointCount - 1, inversedWp2);
                    Spline.SetControlPoint(0, inversedControlPointWp);

                    startingRoute.manualRefresh = true;
                }
            }
        }

        if (startingCrossroad != null)
        {
            Spline.SetControlPoint(1, Spline.transform.InverseTransformPoint(startingCrossroad.transform.position));
            Spline.SetControlPoint(0, Spline.GetControlPoint(1) + Spline.GetForward(0));
        }

        if (endingRoute != null)
        {
            var startPoint = endingRoute.Spline.GetControlPoint(1);
            var endPoint = endingRoute.Spline.GetControlPoint(endingRoute.Spline.ControlPointCount - 2);

            var thisEndPoint = Spline.GetControlPoint(Spline.ControlPointCount - 2);

            Vector3 wp;
            Vector3 wp2;
            Vector3 controlPointWp = Spline.transform.TransformPoint(Spline.GetControlPoint(Spline.ControlPointCount - 3));

            var inversedControlPointWp = endingRoute.Spline.transform.InverseTransformPoint(controlPointWp);

            if (endingRouteWayPoint == 1)
            {
                wp = endingRoute.Spline.transform.TransformPoint(startPoint);
                wp2 = endingRoute.Spline.transform.TransformPoint(endingRoute.Spline.GetControlPoint(2));

                if (endingRoute.Spline.GetControlPoint(0) != inversedControlPointWp && !endAtSamePoint)
                {
                    endingRoute.Spline.SetControlPoint(0, inversedControlPointWp);
                }
            }
            else
            {
                wp = endingRoute.Spline.transform.TransformPoint(endPoint);
                wp2 = endingRoute.Spline.transform.TransformPoint(endingRoute.Spline.GetControlPoint(endingRoute.Spline.ControlPointCount - 3));

                if (endingRoute.Spline.GetControlPoint(endingRoute.Spline.ControlPointCount - 1) != inversedControlPointWp && !endAtSamePoint)
                {
                    endingRoute.Spline.SetControlPoint(endingRoute.Spline.ControlPointCount - 1, inversedControlPointWp);
                }
            }

            if (thisEndPoint != Spline.transform.InverseTransformPoint(wp) || Spline.GetControlPoint(Spline.ControlPointCount -1) != Spline.transform.InverseTransformPoint(wp2))
            {
                Spline.SetControlPoint(Spline.ControlPointCount - 2, Spline.transform.InverseTransformPoint(wp));
                //Spline.SetControlPoint(Spline.ControlPointCount - 1, Spline.transform.InverseTransformPoint(wp2));
                endingRoute.manualRefresh = true;
            }
        }

        if (endingCrossroad != null)
        {
            Spline.SetControlPoint(Spline.ControlPointCount - 2, Spline.transform.InverseTransformPoint(endingCrossroad.transform.position));
            Spline.SetControlPoint(Spline.ControlPointCount - 1, Spline.GetControlPoint(Spline.ControlPointCount - 2) + Spline.GetForward(1));
        }

        controlPoints = new List<Vector3>(Spline.points);

        yield break;
    }
}
