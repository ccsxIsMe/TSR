using UnityEngine;
using UnityEngine.SceneManagement;

public class SwitchScene : MonoBehaviour
{
    public int sceneIndex = 0;
    public void SwitchToScene()
    {
        SceneManager.LoadScene(sceneIndex);
    }
}
