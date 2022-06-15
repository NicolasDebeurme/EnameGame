using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

[System.Serializable]
public struct Gesture
{
    public string name;
    public List<Vector3> fingerDatas;
    public UnityEvent onRecognized;
}

public class GestureDetector : MonoBehaviour
{
    [Header("Treshold value")]
    public float treshold = 0.05f;

    [Header("Hand Skeleton")]
    public GameObject handObject;
    private List<GameObject> fingerBones = new List<GameObject>();

    [Header("List of gestures")]
    public List<Gesture> gestures;

    [Header("DebugMode")]
    public bool debugMode = true;

    private bool hasRecognized = false;
    private bool done = false;

    [Header("No gesture recognized event")]
    public UnityEvent notRecognized;

    // Start is called before the first frame update
    void Start()
    {
        GetChildRecursive(handObject);
    }

    private void GetChildRecursive(GameObject obj)
    {
        if (obj == null)
        {
            return;
        }

        foreach (Transform child in obj.transform)
        {
            if (child == null)
                continue;

            fingerBones.Add(child.gameObject);
            GetChildRecursive(child.gameObject);
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (debugMode && Input.GetKeyDown(KeyCode.Space))
        {
            Save();
        }

        if (fingerBones?.Count > 0)
        {
            Gesture currentGesture = Recognize();

            hasRecognized = !currentGesture.Equals(new Gesture());

            if (hasRecognized)
            {
                done = true;

                if (debugMode)
                    Debug.Log("Gesture found: " + currentGesture.name);

                currentGesture.onRecognized?.Invoke();
            }
            else
            {
                if (done)
                {
                    if (debugMode)
                        Debug.Log("Not recognized");

                    done = false;

                    notRecognized?.Invoke();
                }
            }
        }
    }

    void Save()
    {
        Gesture g = new Gesture();

        g.name = "New Gesture";

        List<Vector3> data = new List<Vector3>();

        foreach (var bone in fingerBones)
        {
            data.Add(handObject.transform.InverseTransformPoint(bone.transform.position));
        }

        g.fingerDatas = data;

        gestures.Add(g);
    }

    Gesture Recognize()
    {
        Gesture currentGesture = new Gesture();

        float currentMin = Mathf.Infinity;

        foreach (var gesture in gestures)
        {
            float sumDistance = 0;

            bool isDiscared = false;

            for (int i = 0; i < fingerBones.Count; i++)
            {
                Vector3 currentData = handObject.transform.InverseTransformPoint(fingerBones[i].transform.position);

                float distance = Vector3.Distance(currentData, gesture.fingerDatas[i]);

                if (distance > treshold)
                {
                    isDiscared = true;
                    break;
                }

                sumDistance += distance;
            }

            if (!isDiscared && sumDistance < currentMin)
            {
                currentMin = sumDistance;
                currentGesture = gesture;
            }
        }

        return currentGesture;
    }
}
