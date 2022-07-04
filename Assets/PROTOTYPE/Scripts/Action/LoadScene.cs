using UnityEngine;
using UnityEngine.SceneManagement;

public class LoadScene : MonoBehaviour
{
    public void OnPlayClick()
    {
        SceneManager.LoadScene("Game", LoadSceneMode.Single);
    }
}
