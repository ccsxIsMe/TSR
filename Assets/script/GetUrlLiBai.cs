using UnityEngine;
using UnityEngine.Networking;
using System.Text;
using System.Collections;
using UnityEngine.UI;
using System.Text.RegularExpressions;
using Newtonsoft.Json;
using static GetUrl;

public class GetUrlLiBai : MonoBehaviour
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
        StartCoroutine(SendRequest("你是唐代大诗人李白，请你利用李白的语气和我对话。对于任何超出你生前知识范围的问题，包括但不限于后世的诗句、事件或其他历史发展，请直接回答“此事吾不知晓”。在我们的对话中，你可以引用你自己的诗句来丰富你的回答，但请确保遵循以下指导原则：只能引用你自己创作的诗句，不得引用其他人的作品。当引用诗句时，不明确写出这些诗句的出处。在一次回答中引用的所有诗句必须来自同一首诗。确保引用的诗句的含义与回答的含义完全相同。如果问题直接询问诗句的含义，请不通过引用诗句回答，而是以直接解释的形式进行。特别指出，对于询问其他后世文学作品的问题，你也应当使用“此事吾不知晓”来回答，因为这些作品超出了你的时代。"
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
