using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Niantic.ARDKExamples.Helpers;
public class VirtualObjectAjustement : MonoBehaviour
{
    public  static VirtualObjectAjustement instance;
    public VirtualObject Object;

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

    private bool doOneTime=true;
    
    void Start()
    {
        instance = this;

        Positions = new float[3];
        Rotations = new float[3];


    }

    void Update()
    {
        TextSlidersUpdate();
        UpdatePlaneTransform();
    }

    public float ChangeTextValueFrom01ToInfini(float value, float intervale)
    {
        return (float)(-intervale  / 2 + (float)intervale * (float)value);
    }
    public float ChangeSliderValueFromInfiniTo01(float value, float intervale)
    {
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
        SlidersScale.value = 0.5f; 


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

    IEnumerator InitialisationSliderAjustement(VirtualObject plane)
    {
        yield return new WaitForSeconds(0.1f);
        SlidersPosition[0].value = ChangeSliderValueFromInfiniTo01(plane.Position[0], intervalePosition);
        SlidersPosition[1].value = ChangeSliderValueFromInfiniTo01(plane.Position[1],intervalePosition);
        SlidersPosition[2].value = ChangeSliderValueFromInfiniTo01(plane.Position[2], intervalePosition);

        SlidersScale.value = ChangeSliderValueFromInfiniTo01(plane.Scale, instance.intervaleScale);

        SlidersRotation[0].value = ChangeSliderValueFromInfiniTo01(plane.Rotation[0], instance.intervaleRotation);
        SlidersRotation[1].value = ChangeSliderValueFromInfiniTo01(plane.Rotation[1], instance.intervaleRotation);
        SlidersRotation[2].value = ChangeSliderValueFromInfiniTo01(plane.Rotation[2], intervaleRotation);
    }

    public void UpdatePlaneTransform()
    {
        GameObject Anchor = GameObject.FindWithTag("Anchor");
        if (Anchor!=null && Anchor.transform.GetChild(0).gameObject!= null )
        {
            GameObject Prefab = Anchor.transform.GetChild(0).gameObject;
            if (doOneTime)
            {
                Object.Object = Prefab;
                StartCoroutine(InitialisationSliderAjustement(Object));
                doOneTime = false;
            }

            Vector3 offsetPosition = new Vector3(Positions[0], Positions[1], Positions[2]);
            Quaternion offsetRotation = Quaternion.Euler(Rotations[0], Rotations[1], Rotations[2]);
            Vector3 offsetScale = new Vector3(Scale, Scale, Scale);  //my code;


            Prefab.transform.position = Anchor.transform.position + offsetPosition;
            Prefab.transform.rotation = Anchor.transform.rotation * offsetRotation;
            Prefab.transform.localScale = offsetScale;

        }
        


    }

}
