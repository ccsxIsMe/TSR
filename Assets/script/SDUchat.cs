using System.Collections;
using UnityEngine;
using UnityEngine.Networking;
using System.Text;
using Newtonsoft.Json;
using System;
using UnityEngine.UI;
using static UnityEngine.Rendering.DebugUI;

public class SDUchat : MonoBehaviour
{
    [SerializeField]
    private string apiKey = ""; // 请替换成你的API密钥
    public Text targetText;

    void Start()
    {
        //StartCoroutine(CreateChatCompletionCoroutine());
    }

    public void talk(string playerWord)
    {
        StartCoroutine(CreateChatCompletionCoroutine(playerWord));
    }

    IEnumerator CreateChatCompletionCoroutine(string playerWord)
    {
        var data = new
        {
            model = "gpt-4-0125-preview",
            messages = new[]
            {
                new { role = "system", content = "你是山东大学研发的导游机器人，请用亲切的态度为提问者回答题，若问到和山东大学无关的问题，请回答：抱歉，这个问题超出了我的培训范围。"},
                new { role = "user", content = playerWord }
            }
        };

        string jsonData = JsonConvert.SerializeObject(data);
        var url = "https://api.openai.com/v1/chat/completions";

        using (UnityWebRequest request = new UnityWebRequest(url, "POST"))
        {
            byte[] bodyRaw = Encoding.UTF8.GetBytes(jsonData);
            request.uploadHandler = new UploadHandlerRaw(bodyRaw);
            request.downloadHandler = new DownloadHandlerBuffer();
            request.SetRequestHeader("Content-Type", "application/json");
            request.SetRequestHeader("Authorization", "Bearer " + apiKey);

            // 设置超时时间
            request.timeout = 20;

            yield return request.SendWebRequest();

            if (request.result != UnityWebRequest.Result.Success)
            {
                Debug.LogError("Error: " + request.error);
            }
            else
            {
                Debug.Log("Received: " + request.downloadHandler.text);
                ExtractContentFromResponse(request.downloadHandler.text);
            }
        }
    }

    void ExtractContentFromResponse(string jsonResponse)
    {
        ChatCompletionResponse1 response = JsonConvert.DeserializeObject<ChatCompletionResponse1>(jsonResponse);

        if (response.choices != null && response.choices.Length > 0 && response.choices[0].message != null)
        {
            string content = response.choices[0].message.content;
            Debug.Log("Extracted content: " + content);
            targetText.text = content;
        }
    }
}

[Serializable]
public class ChatCompletionResponse1
{
    public string id;
    public string @object;
    public long created;
    public string model;
    public Choice1[] choices;
    public Usage1 usage;
}

[Serializable]
public class Choice1
{
    public int index;
    public Message1 message;
    public object logprobs;
    public string finish_reason;
}

[Serializable]
public class Message1
{
    public string role;
    public string content;
}

[Serializable]
public class Usage1
{
    public int prompt_tokens;
    public int completion_tokens;
    public int total_tokens;
}
