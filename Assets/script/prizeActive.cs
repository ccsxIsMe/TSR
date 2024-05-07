using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class prizeActive : MonoBehaviour
{
    
    // Start is called before the first frame update
    void Start()
    {
        if(SceneManager.GetActiveScene().buildIndex == 2)
        {
            for (int i = 0; i < 5; i++)
            {
                AllRoundVariable.prop[i] = 1;
            }
        }
        else if(SceneManager.GetActiveScene().buildIndex == 3)
        {
            for (int i = 5; i < 10; i++)
            {
                AllRoundVariable.prop[i] = 1;
            }
        }
        else
        {
            for (int i = 10; i < 15; i++)
            {
                AllRoundVariable.prop[i] = 1;
            }
        }
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
