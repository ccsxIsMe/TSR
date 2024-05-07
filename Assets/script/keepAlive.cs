using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class keepAlive : MonoBehaviour
{
    
    public static keepAlive Instance;

    void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else if (Instance != this)
        {
            Destroy(gameObject);
            int currentSceneIndex = SceneManager.GetActiveScene().buildIndex;
        }
    }
}
