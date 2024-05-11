using UnityEngine;
using System;
using System.IO;
using System.Net.Http;
using System.Net.Http.Headers;
using System.Threading.Tasks;

public class upLoadImage : MonoBehaviour
{
    //这个代码是用来上传图片
    private HttpClient _httpClient;
    private string _baseUrl = "http://114.115.210.247:8848/api/userInfo";

    private void Awake()
    {
        _httpClient = new HttpClient();
    }

    private void Start()
    {
        //UploadImag();
    }

    public async Task<string> UploadImageAsync(string filePath, string account)
    {
        // Check if the file exists
        if (!File.Exists(filePath))
        {
            throw new FileNotFoundException("File not found.", filePath);
        }

        using (var content = new MultipartFormDataContent("----WebKitFormBoundary7MA4YWxkTrZu0gW"))
        {
            // Read file data
            var fileContent = new ByteArrayContent(File.ReadAllBytes(filePath));
            fileContent.Headers.ContentType = MediaTypeHeaderValue.Parse("image/jpeg");
            content.Add(fileContent, "file", Path.GetFileName(filePath));

            // Add account data
            content.Add(new StringContent(account), "account");

            // Create request to upload the image
            var response = await _httpClient.PostAsync($"{_baseUrl}/uploadImage", content);

            // Ensure the request was successful
            response.EnsureSuccessStatusCode();

            // Read response content
            return await response.Content.ReadAsStringAsync();
        }
    }

    // Example usage:
    public async void UploadImag()
    {
        try
        {
            string filePath = Application.persistentDataPath + "/screenshot.jpg";
            string result = await UploadImageAsync(filePath, login.nameValue);
            Debug.Log("Response from server: " + result);
        }
        catch (Exception ex)
        {
            Debug.LogError("Error occurred: " + ex.Message);
        }
    }
}
