using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class Ajustement : MonoBehaviour
{
    public static Ajustement instance;

    public Slider SliderX;
    public TextMeshProUGUI TextX;

    public Slider SliderY;
    public TextMeshProUGUI TextY;

    public Slider SliderZ;
    public TextMeshProUGUI TextZ;

    void Start()
    {
        instance = this;
    }

    void Update()
    {
        TextX.text = SliderX.value.ToString();
        TextY.text = SliderY.value.ToString();
        TextZ.text = SliderZ.value.ToString();











    }
}
