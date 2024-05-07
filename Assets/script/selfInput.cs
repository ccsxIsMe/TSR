using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro; // 引入TextMeshPro命名空间
using UnityEngine.UI;
using static UnityEngine.Rendering.DebugUI;
using UnityEngine.SceneManagement;

public class selfInput : MonoBehaviour
{
    public TMP_InputField nameField;
    public TMP_InputField passwordField;
    public GameObject nextUI;

    private void Start()
    {
        
    }
    public void myLogin()
    {
        //这里对于用户名和密码进行验证之后，进行登录
        //nextUI.SetActive(true);
        SceneManager.LoadScene(1);
    }
}
