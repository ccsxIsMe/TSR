using UnityEngine;
using System;
using System.Net.Http;
using System.Threading.Tasks;
using System.Web;
using UnityEngine.Networking;
using System.Collections.Generic;
using System.Collections;

public class Chapter : MonoBehaviour
{
    //������������ָ���û����½ڲ��Զ�������һ�½�

    private HttpClient _httpClient; // �Ƴ� readonly ���η�

    private readonly string _baseUri = "http://114.115.210.247:8848/api/userInfo";

    private void Awake()
    {
        _httpClient = new HttpClient(); // �� Awake �����г�ʼ�� _httpClient
    }

    public void CompleteChapter1()
    {
        CompleteChapterAsync(login.nameValue, "ch1"); // Start CompleteChapterAsync method in parallel
    }

    public void CompleteChapter2()
    {
        CompleteChapterAsync(login.nameValue, "ch2"); // Start CompleteChapterAsync method in parallel
    }
    public void CompleteChapter3()
    {
        CompleteChapterAsync(login.nameValue, "ch3"); // Start CompleteChapterAsync method in parallel
    }

    private async Task CompleteChapterAsync(string account, string chapterName)
    {
        // Constructing the query parameters
        var builder = new UriBuilder($"{_baseUri}/completeChapter");
        var query = HttpUtility.ParseQueryString(builder.Query);
        query["account"] = account;
        query["chapterName"] = chapterName;
        builder.Query = query.ToString();

        // Sending the POST request
        var response = await _httpClient.PostAsync(builder.Uri, null); // No content needed for the body, using null

        // Reading the response
        string responseBody = await response.Content.ReadAsStringAsync();

        if (response.IsSuccessStatusCode)
        {
            Debug.Log("Response from server: " + responseBody);
        }
        else
        {
            Debug.LogError("Error: " + responseBody);
        }
    }

}
