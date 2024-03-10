using System.Collections;
using UnityEngine;
using UnityEngine.Networking;
using System.Text;
using Newtonsoft.Json;

public class OpenAIChat : MonoBehaviour
{
    private string apiKey = "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";

    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(CreateChatCompletionCoroutine());
    }

    IEnumerator CreateChatCompletionCoroutine()
    {
        var data = new
        {
            model = "gpt-4-0125-preview",
            messages = new[]
            {
                new { role = "system", content = "�����ƴ���ʫ�����" },
                new { role = "user", content = "�������á���ҹ˼���е�ʫ��ش��������⣺����������" }
            }
        };

        var jsonData = JsonConvert.SerializeObject(data);
        var url = "https://api.openai.com/v1/chat/completions";

        using (UnityWebRequest request = new UnityWebRequest(url, "POST"))
        {
            byte[] bodyRaw = Encoding.UTF8.GetBytes(jsonData);
            request.uploadHandler = new UploadHandlerRaw(bodyRaw);
            request.downloadHandler = new DownloadHandlerBuffer();
            request.SetRequestHeader("Content-Type", "application/json");
            request.SetRequestHeader("Authorization", "Bearer " + apiKey);

            yield return request.SendWebRequest();

            if (request.result != UnityWebRequest.Result.Success)
            {
                Debug.LogError("Error: " + request.error);
            }
            else
            {
                Debug.Log("Received: " + request.downloadHandler.text);
            }
        }
    }
}
