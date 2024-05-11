using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Net.Http;
using System.Security.Cryptography;
using System.Text;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class testTry2 : MonoBehaviour
{
    public Text targetText;

    private static readonly string appId = "3033545828";
    private static readonly string appKey = "WttGndHenwVnTuSe";
    private static readonly string uri = "/vivogpt/completions";
    private static readonly string domain = "api-ai.vivo.com.cn";
    private static readonly string method = "POST";

    void Start()
    {
        StartCoroutine(SyncVivoGPT("你好，你是谁？"));
    }

    public void talk(string playerWord)
    {
        StartCoroutine(SyncVivoGPT(playerWord));
    }

    // 这里的prompt就是输入的内容，content是返回的结果
    // 例如：
    // prompt:你好
    // content：嗨！我是蓝心小V，和你相遇真的好开心！如果你有任何疑问或者想聊聊天，我都在这里哦。分享一点快乐或者是奇思妙想给我吧，我们一起让对话变得有趣起来！你今天有什么新奇的事想要告诉我吗？😊
    //private IEnumerator Start()
    //{
    //    var prompt = "你好";
    //    yield return StartCoroutine(SyncVivoGPT(prompt));
    //}

    private IEnumerator SyncVivoGPT(string prompt)
    {
        var client = new HttpClient();
        var paramsDict = new Dictionary<string, string>
    {
        { "requestId", Guid.NewGuid().ToString() }
    };

        var data = new
        {
            prompt = prompt,
            model = "vivo-BlueLM-TB",
            sessionId = Guid.NewGuid().ToString(),
            extra = new { temperature = 0.9 }
        };

        var headers = GenSignHeaders(appId, appKey, method, uri, paramsDict);
        client.DefaultRequestHeaders.TryAddWithoutValidation("Content-Type", "application/json");
        foreach (var header in headers)
            client.DefaultRequestHeaders.TryAddWithoutValidation(header.Key, header.Value);

        var content = new StringContent(Newtonsoft.Json.JsonConvert.SerializeObject(data), Encoding.UTF8, "application/json");
        var url = $"https://{domain}{uri}?{BuildQueryString(paramsDict)}";
        var request = new UnityWebRequest(url, "POST");
        byte[] bodyRaw = Encoding.UTF8.GetBytes(Newtonsoft.Json.JsonConvert.SerializeObject(data));
        request.uploadHandler = new UploadHandlerRaw(bodyRaw);
        request.downloadHandler = new DownloadHandlerBuffer();

        yield return request.SendWebRequest();

        if (request.result == UnityWebRequest.Result.Success)
        {
            var responseContent = request.downloadHandler.text;
            var responseObj = Newtonsoft.Json.JsonConvert.DeserializeObject<Response>(responseContent);
            if (responseObj.code == 0 && responseObj.data != null)
                Debug.Log(responseObj.data.content);
        }
        else
        {
            Debug.LogError($"Error: {request.error}");
        }
    }

    public class Response
    {
        public int code { get; set; }
        public Data data { get; set; }
    }

    public class Data
    {
        public string content { get; set; }
    }


    private Dictionary<string, string> GenSignHeaders(string appId, string appKey, string method, string uri, Dictionary<string, string> query)
    {
        var timestamp = DateTimeOffset.Now.ToUnixTimeSeconds().ToString();
        var nonce = GenerateNonce();
        var canonicalQueryString = BuildQueryString(query);
        var signedHeadersString = $"x-ai-gateway-app-id:{appId}\nx-ai-gateway-timestamp:{timestamp}\nx-ai-gateway-nonce:{nonce}";
        var signingString = $"{method}\n{uri}\n{canonicalQueryString}\n{appId}\n{timestamp}\n{signedHeadersString}";
        var signature = GenerateSignature(appKey, signingString);

        return new Dictionary<string, string>
        {
            { "X-AI-GATEWAY-APP-ID", appId },
            { "X-AI-GATEWAY-TIMESTAMP", timestamp },
            { "X-AI-GATEWAY-NONCE", nonce },
            { "X-AI-GATEWAY-SIGNED-HEADERS", "x-ai-gateway-app-id;x-ai-gateway-timestamp;x-ai-gateway-nonce" },
            { "X-AI-GATEWAY-SIGNATURE", signature }
        };
    }

    private string BuildQueryString(Dictionary<string, string> queryParams)
    {
        return string.Join("&", queryParams.Select(kv => $"{Uri.EscapeDataString(kv.Key)}={Uri.EscapeDataString(kv.Value)}"));
    }

    private string GenerateNonce(int length = 8)
    {
        const string chars = "abcdefghijklmnopqrstuvwxyz0123456789";
        var random = new System.Random();
        return new string(Enumerable.Repeat(chars, length).Select(s => s[random.Next(s.Length)]).ToArray());
    }

    private string GenerateSignature(string key, string data)
    {
        var encoding = new UTF8Encoding();
        byte[] keyByte = encoding.GetBytes(key);
        byte[] messageBytes = encoding.GetBytes(data);
        using (var hmacsha256 = new HMACSHA256(keyByte))
        {
            byte[] hashmessage = hmacsha256.ComputeHash(messageBytes);
            return Convert.ToBase64String(hashmessage);
        }
    }
}
