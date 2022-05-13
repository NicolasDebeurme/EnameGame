using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Niantic.ARDKExamples.Helpers;
public class VirtualObjectAjustement : MonoBehaviour
{
    public  static VirtualObjectAjustement instance;

    [Header("Position")]
    public float intervalePosition;
    public Slider[] SlidersPosition;
    public TextMeshProUGUI[] SlidersTextPosition;
    public float[] Positions;

    [Header("Scale")]
    public float intervaleScale;
    public Slider SlidersScale;
    public TextMeshProUGUI SlidersTextScale;
    public float Scale;

    [Header("Rotation")]
    public float intervaleRotation;
    public Slider[] SlidersRotation;
    public TextMeshProUGUI[] SliderTextRotation;
    public float[] Rotations;



    void Start()
    {
        instance = this;

        Positions = new float[3];
        Rotations = new float[3];

        SetupSliderValue();
    }

    void Update()
    {
        TextSlidersUpdate();
        //Debug.Log("pos:" + Positions[0] + " " + Positions[1] + " " + Positions[2]);
        //Debug.Log("scale:" + Scale);
        //Debug.Log("rot:" + Rotations[0] + " " + Rotations[1] + " " + Rotations[2]);
    }

    public float ChangeSliderValue(float value, float intervale)
    {
        return -intervale / 2 + intervale * value;
    }

    public void SetupSliderValue()
    {
        for (int i = 0; i < SlidersPosition.Length; i++)
        {
            SlidersPosition[i].value = 0.5f;
        }
        for (int i = 0; i < SlidersRotation.Length; i++)
        {
            SlidersRotation[i].value = 0.5f;
        }
        SlidersScale.value = 0.5f; // pour avoir 1 mettre  : (1 + intervaleScale / 2) / intervaleScale;


    }


    public void TextSlidersUpdate()
    {
        float value;
        for (int i = 0; i < SlidersPosition.Length; i++)
        {
            value = SlidersPosition[i].value ;
            SlidersTextPosition[i].text = ChangeSliderValue(value, intervalePosition).ToString();
            Positions[i] = ChangeSliderValue(value, intervalePosition);
        }

        value = SlidersScale.value;
        SlidersTextScale.text = ChangeSliderValue(value, intervaleScale).ToString();
        Scale= ChangeSliderValue(value, intervaleScale);


        for (int i = 0; i < SlidersRotation.Length; i++)
        {
            value =  SlidersRotation[i].value;
            SliderTextRotation[i].text = ChangeSliderValue(value, intervaleRotation).ToString();
            Rotations[i] = ChangeSliderValue(value, intervaleRotation);
        }
    }

    


}
