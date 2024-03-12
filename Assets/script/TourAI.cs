using System.Collections;
using UnityEngine;
using UnityEngine.Networking;
using System.Text;
using Newtonsoft.Json;
using System;
using UnityEngine.UI;
using static UnityEngine.Rendering.DebugUI;

public class TourAI : MonoBehaviour
{
    [SerializeField]
    private string apiKey = ""; // ���滻�����API��Կ
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
                new { role = "system", content = "����һ����ͨ����ر꽨���ĵ��Σ�������һ�������˵ر���콨���Ĺ�԰��������ش�����������ο͵����⡣"},
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

            // ���ó�ʱʱ��
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


