using UnityEngine;
using UnityEngine.Networking;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;

public class login : MonoBehaviour
{
    public TMP_InputField name;
    public TMP_InputField password;
    public TMP_Text tmpText;
    public GameObject window;

    [HideInInspector]
    public static string nameValue = "";
    [HideInInspector]
    public static string passwordValue = "";


    // Simulated database for demonstration purposes
    private static readonly Dictionary<string, string> userDatabase = new Dictionary<string, string>
    {
        { "exampleUser", "examplePassword" }
    };

    // Define the URL to access the API
    private readonly string baseUrl = "http://114.115.210.247:8848/api/userInfo/login";


    private void Start()
    {
        // ��ȡ�����ֶ����
        //name = GetComponent<TMP_InputField>();
        //password = GetComponent<TMP_InputField>();
        //tmpText = GetComponent<TMP_Text>();
    }
    public void myLogin()
    {
        nameValue = name.text;
        passwordValue = password.text;
        StartCoroutine(Login(nameValue, passwordValue));
    }


    private IEnumerator Login(string account, string password)
    {
        // Create a JSON object representing the login request
        LoginRequest request = new LoginRequest
        {
            account = account,
            password = password
        };
        string json = JsonUtility.ToJson(request);

        using (UnityWebRequest requestUnity = new UnityWebRequest(baseUrl, "POST"))
        {
            byte[] bodyRaw = System.Text.Encoding.UTF8.GetBytes(json);
            requestUnity.uploadHandler = new UploadHandlerRaw(bodyRaw);
            requestUnity.downloadHandler = new DownloadHandlerBuffer();
            requestUnity.SetRequestHeader("Content-Type", "application/json");

            yield return requestUnity.SendWebRequest();

            if (requestUnity.result == UnityWebRequest.Result.Success)
            {
                //��½�ɹ�ת���³���
                SceneManager.LoadScene(1);
                //Debug.Log("Login successful: " + requestUnity.downloadHandler.text);
            }
            else
            {
                //��½ʧ�ܣ������ؿ�
                window.SetActive(true);
                tmpText.text = "�û����������������" + requestUnity.error;
                //Debug.LogError("Login error: " + requestUnity.error);
            }
        }
    }

    [System.Serializable]
    public class LoginRequest
    {
        public string account;
        public string password;
    }
}
