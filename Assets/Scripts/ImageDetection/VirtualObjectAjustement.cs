using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Niantic.ARDKExamples.Helpers;
public class VirtualObjectAjustement : MonoBehaviour
{
    public  static VirtualObjectAjustement instance;

    [Header("\nPosition")]
    public float intervalePosition;
    public Slider[] SlidersPosition;
    public TextMeshProUGUI[] SlidersTextPosition;
    public float[] Positions;

    [Header("\nScale")]
    public float intervaleScale;
    public Slider SlidersScale;
    public TextMeshProUGUI SlidersTextScale;
    public float Scale;

    [Header("\nRotation")]
    public float intervaleRotation;
    public Slider[] SlidersRotation;
    public TextMeshProUGUI[] SliderTextRotation;
    public float[] Rotations;



    void Start()
    {
        instance = this;

        Positions = new float[3];
        Rotations = new float[3];

        //SetupSliderValue();
    }

    void Update()
    {
        TextSlidersUpdate();
        //Debug.Log("pos:" + Positions[0] + " " + Positions[1] + " " + Positions[2]);
        //Debug.Log("scale:" + Scale);
        //Debug.Log("rot:" + Rotations[0] + " " + Rotations[1] + " " + Rotations[2]);
    }

    public float ChangeTextValueFrom01ToInfini(float value, float intervale)
    {
        //Debug.Log(value+ " " + (float)(-intervale / 2 + (float)intervale * (float)value));
        return (float)(-intervale  / 2 + (float)intervale * (float)value);
    }
    public float ChangeSliderValueFromInfiniTo01(float value, float intervale)
    {
        //Debug.LogFormat((0.5f + 0.5f / intervale / 2 * value).ToString());
        return  (0.5f +(0.5f/(intervale/2))*value) ;
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
            SlidersTextPosition[i].text = ChangeTextValueFrom01ToInfini(value, intervalePosition).ToString();
            Positions[i] = ChangeTextValueFrom01ToInfini(value, intervalePosition);
        }

        value = SlidersScale.value;
        SlidersTextScale.text = ChangeTextValueFrom01ToInfini(value, intervaleScale).ToString();
        Scale= ChangeTextValueFrom01ToInfini(value, intervaleScale);


        for (int i = 0; i < SlidersRotation.Length; i++)
        {
            value =  SlidersRotation[i].value;
            SliderTextRotation[i].text = ChangeTextValueFrom01ToInfini(value, intervaleRotation).ToString();
            Rotations[i] = ChangeTextValueFrom01ToInfini(value, intervaleRotation);
        }
    }

    


}
