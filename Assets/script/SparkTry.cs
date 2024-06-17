using System;
using System.Text;
using UnityEngine;
using System.Net.WebSockets;
using System.Threading;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;
using System.Security.Cryptography;
using System.Collections.Generic;
using System.Data.Common;

public class SparkTry : MonoBehaviour
{
    private ClientWebSocket webSocket;
    private CancellationTokenSource cancellationTokenSource;

    const string x_appid = "ec50f7dc";
    const string api_secret = "Zjc2NmMyYTJiYTM5MmVjYWZlMWRlMzEz";
    const string api_key = "a52bc6e94597abb9363630d012b1ac6c";

    static string hostUrl = "wss://spark-api.xf-yun.com/v3.5/chat";

    void Start()
    {
        cancellationTokenSource = new CancellationTokenSource();
        ConnectToWebSocket();
    }
    async void ConnectToWebSocket()
    {
        string authUrl = GetAuthUrl();
        string url = authUrl.Replace("http://", "ws://").Replace("https://", "wss://");
        webSocket = new ClientWebSocket();

        Debug.Log("Attempting to connect to WebSocket at: " + url);  // 添加调试信息

        try
        {
            await webSocket.ConnectAsync(new Uri(url), cancellationTokenSource.Token);
            Debug.Log("WebSocket connected");  // 确认连接成功
            SendMessage("你是谁");
            ReceiveMessages();
        }
        catch (Exception e)
        {
            Debug.LogError("WebSocket connection error: " + e.Message);
        }
    }

    async void SendMessage(string messageContent)
    {
        JsonRequest request = new JsonRequest
        {
            header = new Header
            {
                app_id = x_appid, // 你的 app_id
                uid = "12345" // 用户 ID
            },
            parameter = new Parameter
            {
                chat = new Chat
                {
                    domain = "general",
                    temperature = 0.5,
                    max_tokens = 1024
                }
            },
            payload = new Payload
            {
                message = new Message
                {
                    text = new List<Content>
                    {
                        new Content { role = "user", content = messageContent }
                    }
                }
            }
        };

        string jsonString = JsonConvert.SerializeObject(request);
        ArraySegment<byte> buffer = new ArraySegment<byte>(Encoding.UTF8.GetBytes(jsonString));
        await webSocket.SendAsync(buffer, WebSocketMessageType.Text, true, cancellationTokenSource.Token);
        Debug.Log("Message sent: " + jsonString);
    }

    async void ReceiveMessages()
    {
        Debug.Log("Starting to receive messages...");
        byte[] receiveBuffer = new byte[4096];  // 调整缓冲区大小
        try
        {
            while (webSocket.State == WebSocketState.Open)
            {
                var result = await webSocket.ReceiveAsync(new ArraySegment<byte>(receiveBuffer), cancellationTokenSource.Token);
                switch (result.MessageType)
                {
                    case WebSocketMessageType.Text:
                        string receivedMessage = Encoding.UTF8.GetString(receiveBuffer, 0, result.Count);
                        Debug.Log("Received message: " + receivedMessage);
                        break;
                    case WebSocketMessageType.Binary:
                        Debug.Log("Received binary data");
                        break;
                    case WebSocketMessageType.Close:
                        Debug.Log("WebSocket connection closed");
                        await webSocket.CloseAsync(WebSocketCloseStatus.NormalClosure, string.Empty, CancellationToken.None);
                        break;
                }
            }
        }
        catch (Exception e)
        {
            Debug.LogError("Error in receiving messages: " + e.Message);
        }
    }



    static string GetAuthUrl()
    {
        string date = DateTime.UtcNow.ToString("r");
        Uri uri = new Uri(hostUrl);
        string sha = HMACsha256(api_secret, $"host: {uri.Host}\n" +
                                           $"date: {date}\n" +
                                           $"GET {uri.LocalPath} HTTP/1.1");
        string authorization = $"api_key=\"{api_key}\", algorithm=\"hmac-sha256\", headers=\"host date request-line\", signature=\"{sha}\"";

        string encodedAuthorization = Convert.ToBase64String(Encoding.UTF8.GetBytes(authorization));
        date = Uri.EscapeDataString(date);
        string host = uri.Host;

        string newUrl = $"{uri.Scheme}://{uri.Host}{uri.LocalPath}?authorization={encodedAuthorization}&date={date}&host={host}";
        return newUrl;
    }

    public static string HMACsha256(string apiSecret, string builder)
    {
        byte[] keyBytes = Encoding.UTF8.GetBytes(apiSecret);
        using (HMACSHA256 hmac = new HMACSHA256(keyBytes))
        {
            byte[] hashBytes = hmac.ComputeHash(Encoding.UTF8.GetBytes(builder));
            return Convert.ToBase64String(hashBytes);
        }
    }

    void OnDestroy()
    {
        cancellationTokenSource.Cancel();
        if (webSocket != null)
        {
            webSocket.Dispose();
        }
    }

    class JsonRequest
    {
        public Header header { get; set; }
        public Parameter parameter { get; set; }
        public Payload payload { get; set; }
    }

    class Header
    {
        public string app_id { get; set; }
        public string uid { get; set; }
    }

    class Parameter
    {
        public Chat chat { get; set; }
    }

    class Chat
    {
        public string domain { get; set; }
        public double temperature { get; set; }
        public int max_tokens { get; set; }
    }

    class Payload
    {
        public Message message { get; set; }
    }

    class Message
    {
        public List<Content> text { get; set; }
    }

    class Content
    {
        public string role { get; set; }
        public string content { get; set; }
    }
}
