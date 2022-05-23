using UnityEngine;


public enum TEST
{
    JESSAIE,
    [InspectorName("16 bits")]
    TESSAIE,
    YESSAIE
}


[HelpURL("http://example.com/docs/MyComponent.html")]
[Icon("Assets/Art/Sans_titre__4_-removebg-preview.png")]
[SelectionBase]
public class Exemple : MonoBehaviour
{
    [Space(0, order = 10)]
    [Header("Header with some space around it")]
    [Space(40, order = 2)]

    public string playerName = "Unnamed";

    public TEST estt;

    [Min(5)]
    public int min;

    [NonReorderable]
    public GameObject[] array;

    public GameObject[] array2;

}