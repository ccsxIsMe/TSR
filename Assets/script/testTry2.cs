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
    private AudioSource audioSource;

    void Start()
    {
        audioSource = GetComponent<AudioSource>();
        //StartCoroutine(GenerateText("介绍原神", HandleTextResponse));
        //StartCoroutine(GenerateAudio("介绍原神", "xiaofu", HandleAudioResponse));
    }

    private void HandleTextResponse(string generatedText)
    {
        // 输出生成的文本结果
        Debug.Log("生成的文本结果：\n" + generatedText);
        StartCoroutine(GenerateAudio(generatedText, "xiaofu", HandleAudioResponse));
    }
    private void HandleAudioResponse(AudioClip generatedAudio)
    {
        // 将生成的音频播放出来
        audioSource.clip = generatedAudio;
        audioSource.Play();
    }

    public void talk(string playerWord)
    {
        StartCoroutine(GenerateText(playerWord, HandleTextResponse));
    }

    // Base URL for the API
    private string baseURL = "http://114.115.210.247:6464";

    // Method to generate text using the model
    public IEnumerator GenerateText(string prompt, System.Action<string> callback)
    {
        Debug.Log("1");
        // Construct the request URL
        string url = baseURL + "/generate";

        // Construct the request body
        Dictionary<string, string> requestBody = new Dictionary<string, string>();
        requestBody.Add("prompt", prompt);
        string requestBodyJson = JsonUtility.ToJson(requestBody);

        // Set up the request
        var request = new UnityWebRequest(url, "POST");
        byte[] bodyRaw = Encoding.UTF8.GetBytes(requestBodyJson);
        request.uploadHandler = new UploadHandlerRaw(bodyRaw);
        request.downloadHandler = new DownloadHandlerBuffer();
        request.SetRequestHeader("Content-Type", "application/json");

        // Send the request
        yield return request.SendWebRequest();
        Debug.Log("2");

        // Check for errors
        if (request.result != UnityWebRequest.Result.Success)
        {
            Debug.LogError(request.error);
        }
        else
        {
            Debug.Log("3");
            // Parse the response
            string responseJson = request.downloadHandler.text;
            APITextResponse responseData = JsonUtility.FromJson<APITextResponse>(responseJson);

            // Callback with the generated text
            callback(responseData.data.content);
        }
    }

    // Method to generate audio from text
    public IEnumerator GenerateAudio(string text, string vcn, System.Action<AudioClip> callback)
    {
        // Construct the request URL
        string url = baseURL + "/generate_audio";

        // Construct the request body
        Dictionary<string, string> requestBody = new Dictionary<string, string>();
        requestBody.Add("text", text);
        requestBody.Add("vcn", vcn);
        string requestBodyJson = JsonUtility.ToJson(requestBody);

        // Set up the request
        var request = new UnityWebRequest(url, "POST");
        byte[] bodyRaw = Encoding.UTF8.GetBytes(requestBodyJson);
        request.uploadHandler = new UploadHandlerRaw(bodyRaw);
        request.downloadHandler = new DownloadHandlerAudioClip("generatedAudio.wav", AudioType.WAV);
        request.SetRequestHeader("Content-Type", "application/json");

        // Send the request
        yield return request.SendWebRequest();

        // Check for errors
        if (request.result != UnityWebRequest.Result.Success)
        {
            Debug.LogError(request.error);
        }
        else
        {
            // Get the audio clip from the response
            AudioClip audioClip = DownloadHandlerAudioClip.GetContent(request);

            // Callback with the generated audio clip
            callback(audioClip);
        }
    }
}

// Class to hold the response data for text generation
[System.Serializable]
public class APITextResponse
{
    public APITextData data;
}

[System.Serializable]
public class APITextData
{
    public string content;
}