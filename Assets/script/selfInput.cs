using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro; // ����TextMeshPro�����ռ�
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
        //��������û��������������֤֮�󣬽��е�¼
        //nextUI.SetActive(true);
        SceneManager.LoadScene(1);
    }
}
