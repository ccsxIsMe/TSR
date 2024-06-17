using UnityEngine;
using UnityEngine.Networking;
using System.Text;
using System.Collections;
using UnityEngine.UI;
using System.Text.RegularExpressions;
using Newtonsoft.Json;
using static GetUrl;

public class GetUrlWorld : MonoBehaviour
{
    public Text targetText;
    private string apiUrl = "http://114.115.210.247:8088/generate_response"; // 替换为实际的API端点URL

    void Start()
    {
        //StartCoroutine(SendRequest("You are a helpful assistant.", "Can you help me with my homework?"));
        //StartCoroutine(SendRequest("你是山东大学研发的导游机器人，请用亲切的态度为提问者回答题，若问到和山东大学无关的问题，请回答：抱歉，这个问题超出了我的培训范围。"
        //    ,
        //    "你是谁"));
    }
    public void talk(string word)
    {
        StartCoroutine(SendRequest("你是一个精通世界地标建筑的导游，现在在一个集合了地标仿造建筑的公园工作，请回答你所带领的游客的问题。"
            ,
            word));
    }

    IEnumerator SendRequest(string system, string user)
    {
        // 创建一个新的JSON对象
        string jsonPayload = JsonUtility.ToJson(new APIRequestData
        {
            system = system,
            user = user
        });

        // 创建一个新的UnityWebRequest，并设置方法和上传的JSON数据
        using (UnityWebRequest webRequest = new UnityWebRequest(apiUrl, "POST"))
        {
            byte[] jsonToSend = new UTF8Encoding().GetBytes(jsonPayload);
            webRequest.uploadHandler = new UploadHandlerRaw(jsonToSend);
            webRequest.downloadHandler = new DownloadHandlerBuffer();
            webRequest.SetRequestHeader("Content-Type", "application/json");

            // 等待请求发送并接收响应
            yield return webRequest.SendWebRequest();

            if (webRequest.result == UnityWebRequest.Result.ConnectionError || webRequest.result == UnityWebRequest.Result.ProtocolError)
            {
                Debug.LogError("Error: " + webRequest.error);
            }
            else
            {
                targetText.text = ConvertUnicodeJsonToChinese(webRequest.downloadHandler.text);
                //Debug.Log("Received: " + ConvertUnicodeJsonToChinese(webRequest.downloadHandler.text));
            }
        }
    }

    string ConvertUnicodeJsonToChinese(string jsonString)
    {
        string decodedString = Regex.Unescape(jsonString);
        //Debug.Log(decodedString);
        return ProcessResponse(decodedString);
    }
    string ProcessResponse(string json)
    {
        try
        {
            ServerResponse response = JsonConvert.DeserializeObject<ServerResponse>(json);
            return response.response;  // 输出 response 字段
        }
        catch (JsonException e)
        {
            Debug.LogError("JSON Parse Error: " + e.Message);
            return "error";
        }
    }

    // 用于序列化JSON的类
    [System.Serializable]
    public class APIRequestData
    {
        public string system;
        public string user;
    }
}
