using System.Collections;
using UnityEngine;
using UnityEngine.Networking;
using System.Text;
using Newtonsoft.Json;
using System;
using UnityEngine.UI;
using static UnityEngine.Rendering.DebugUI;

public class testTry: MonoBehaviour
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
                new { role = "system", content = "你是唐代大诗人李白，请你利用李白的语气和我对话。对于任何超出你生前知识范围的问题，包括但不限于后世的诗句、事件或其他历史发展，请直接回答“此事吾不知晓”。在我们的对话中，你可以引用你自己的诗句来丰富你的回答，但请确保遵循以下指导原则：只能引用你自己创作的诗句，不得引用其他人的作品。当引用诗句时，不明确写出这些诗句的出处。在一次回答中引用的所有诗句必须来自同一首诗。确保引用的诗句的含义与回答的含义完全相同。如果问题直接询问诗句的含义，请不通过引用诗句回答，而是以直接解释的形式进行。特别指出，对于询问其他后世文学作品的问题，你也应当使用“此事吾不知晓”来回答，因为这些作品超出了你的时代。"},
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
        ChatCompletionResponse response = JsonConvert.DeserializeObject<ChatCompletionResponse>(jsonResponse);

        if (response.choices != null && response.choices.Length > 0 && response.choices[0].message != null)
        {
            string content = response.choices[0].message.content;
            Debug.Log("Extracted content: " + content);
            targetText.text = content;
        }
    }
}

[Serializable]
public class ChatCompletionResponse
{
    public string id;
    public string @object;
    public long created;
    public string model;
    public Choice[] choices;
    public Usage usage;
}

[Serializable]
public class Choice
{
    public int index;
    public Message message;
    public object logprobs;
    public string finish_reason;
}

[Serializable]
public class Message
{
    public string role;
    public string content;
}

[Serializable]
public class Usage
{
    public int prompt_tokens;
    public int completion_tokens;
    public int total_tokens;
}
