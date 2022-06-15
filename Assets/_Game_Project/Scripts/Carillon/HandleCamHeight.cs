using System;
using TMPro;
using UnityEngine;

public class HandleCamHeight : MonoBehaviour
{
    public TextMeshProUGUI textMeshpro;
    public float amount = 0.40f;

    Vector3 initialPosition;

    private void Awake()
    {
        initialPosition = transform.localPosition;
        initialPosition.y -= CalculatePercentage(.5f);
    }

    public void HandleHeight(Single value)
    {
        Vector3 newPosition = initialPosition;

        newPosition.y += CalculatePercentage(value);

        transform.localPosition = newPosition;
        if (textMeshpro)
            textMeshpro.text = "Grootte:\n" + (newPosition.y + .6f).ToString("0.00") + "m";
    }

    float CalculatePercentage(float percentage)
    {
        return percentage * amount;
    }
}
