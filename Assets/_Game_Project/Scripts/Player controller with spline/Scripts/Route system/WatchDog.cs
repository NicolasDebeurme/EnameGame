using UnityEngine;

public class WatchDog : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        gameObject.GetComponentInParent<RoutePicker>().WatchDogAlert(other);
    }

    private void OnTriggerStay(Collider other)
    {
        gameObject.GetComponentInParent<RoutePicker>().WatchDogWatch(other);
    }

    private void OnTriggerExit(Collider other)
    {
        gameObject.GetComponentInParent<RoutePicker>().WatchDogSafe(other);
    }
}
