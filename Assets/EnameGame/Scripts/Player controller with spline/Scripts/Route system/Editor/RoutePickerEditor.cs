using UnityEngine;
using UnityEditor;

[CustomEditor(typeof(RoutePicker))]
public class RoutePickerEditor : Editor
{
    RoutePicker routePicker;

    private void OnEnable()
    {
        routePicker = (RoutePicker)target;
    }

    public override void OnInspectorGUI()
    {
        base.OnInspectorGUI();
    }
}
