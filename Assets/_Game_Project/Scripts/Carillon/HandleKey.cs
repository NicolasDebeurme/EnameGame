using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Runtime.Serialization.Formatters.Binary;
using UnityEngine;

[Serializable]
public class SaveData
{
    public float lowerLimit;
    public float upperLimit;
}

[Serializable]
public class Hand
{
    public GameObject hand;

    private Vector3 lastHandPosition;
    private List<float> velocities;

    public Hand(GameObject hand)
    {
        this.hand = hand;
        lastHandPosition = hand.transform.position;
        velocities = new List<float>();
    }

    public void CalculateVelocity()
    {
        float newVelocity = (hand.transform.position - lastHandPosition).magnitude / Time.deltaTime;

        velocities.Add(newVelocity);

        lastHandPosition = hand.transform.position;

        if (velocities.Count > 4)
        {
            velocities.RemoveAt(0);
        }
    }

    public float GetVelocity()
    {
        return velocities.Sum() / velocities.Count;
    }
}

public class HandleKey : MonoBehaviour
{
    private string DATAPATH;

    public GameObject leftHandObject;
    public GameObject rightHandObject;

    private Hand leftHand;
    private Hand rightHand;

    public SaveData savedData;

    public LayerMask collisionMask;

    AudioManager audioManager;

    private void Start()
    {
        DATAPATH = Application.dataPath + "/sensitivity.json";

        audioManager = AudioManager.Instance;
        Load();

        leftHand = new Hand(leftHandObject);
        rightHand = new Hand(rightHandObject);
    }

    private void LateUpdate()
    {
        leftHand.CalculateVelocity();
        rightHand.CalculateVelocity();
    }

    private void OnTriggerEnter(Collider other)
    {
        if (collisionMask == (collisionMask | 1 << other.gameObject.layer) && !!audioManager && other.gameObject.TryGetComponent(out HandRegister hand))
        {
            float speed = 0.0f;

            switch (hand.GetTouchingHand())
            {
                case TouchingHand.none:
                    break;
                case TouchingHand.left:
                    speed = leftHand.GetVelocity();
                    ;
                    break;
                case TouchingHand.right:
                    speed = rightHand.GetVelocity();
                    break;
                default:
                    break;
            }

            speed = Mathf.Abs(speed);

            if (speed < savedData.lowerLimit)
            {
                AudioManager.Instance.Play("P" + other.gameObject.name);
                AudioManager.Instance.Stop("MF" + other.gameObject.name);
                AudioManager.Instance.Stop("F" + other.gameObject.name);
            }
            else if (speed < savedData.upperLimit)
            {
                AudioManager.Instance.Play("MF" + other.gameObject.name);
                AudioManager.Instance.Stop("P" + other.gameObject.name);
                AudioManager.Instance.Stop("F" + other.gameObject.name);
            }
            else
            {
                AudioManager.Instance.Play("F" + other.gameObject.name);
                AudioManager.Instance.Stop("P" + other.gameObject.name);
                AudioManager.Instance.Stop("MF" + other.gameObject.name);
            }
        }
    }

    void Save()
    {
        SaveData data = new SaveData
        {
            lowerLimit = 0.25f,
            upperLimit = 0.75f,
        };

        savedData = data;

        string json = JsonUtility.ToJson(data, true);

        File.WriteAllText(DATAPATH, json);
    }

    public void Load()
    {
        if (File.Exists(Path.Combine(DATAPATH)))
        {
            string json = File.ReadAllText(DATAPATH);

            SaveData saveData = JsonUtility.FromJson<SaveData>(json);

            savedData = saveData;
        }
        else
        {
            Save();
        }
    }
}
