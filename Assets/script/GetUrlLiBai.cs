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
    private string apiUrl = "http://114.115.210.247:8088/generate_response"; // �滻Ϊʵ�ʵ�API�˵�URL

    void Start()
    {
        //StartCoroutine(SendRequest("You are a helpful assistant.", "Can you help me with my homework?"));
        //StartCoroutine(SendRequest("����ɽ����ѧ�з��ĵ��λ����ˣ��������е�̬��Ϊ�����߻ش��⣬���ʵ���ɽ����ѧ�޹ص����⣬��ش𣺱�Ǹ��������ⳬ�����ҵ���ѵ��Χ��"
        //    ,
        //    "����˭"));
    }
    public void talk(string word)
    {
        StartCoroutine(SendRequest("�����ƴ���ʫ����ף�����������׵��������ҶԻ��������κγ�������ǰ֪ʶ��Χ�����⣬�����������ں�����ʫ�䡢�¼���������ʷ��չ����ֱ�ӻش𡰴����᲻֪�����������ǵĶԻ��У�������������Լ���ʫ�����ḻ��Ļش𣬵���ȷ����ѭ����ָ��ԭ��ֻ���������Լ�������ʫ�䣬�������������˵���Ʒ��������ʫ��ʱ������ȷд����Щʫ��ĳ�������һ�λش������õ�����ʫ���������ͬһ��ʫ��ȷ�����õ�ʫ��ĺ�����ش�ĺ�����ȫ��ͬ���������ֱ��ѯ��ʫ��ĺ��壬�벻ͨ������ʫ��ش𣬶�����ֱ�ӽ��͵���ʽ���С��ر�ָ��������ѯ������������ѧ��Ʒ�����⣬��ҲӦ��ʹ�á������᲻֪�������ش���Ϊ��Щ��Ʒ���������ʱ����"
            ,
            word));
    }

    IEnumerator SendRequest(string system, string user)
    {
        // ����һ���µ�JSON����
        string jsonPayload = JsonUtility.ToJson(new APIRequestData
        {
            system = system,
            user = user
        });

        // ����һ���µ�UnityWebRequest�������÷������ϴ���JSON����
        using (UnityWebRequest webRequest = new UnityWebRequest(apiUrl, "POST"))
        {
            byte[] jsonToSend = new UTF8Encoding().GetBytes(jsonPayload);
            webRequest.uploadHandler = new UploadHandlerRaw(jsonToSend);
            webRequest.downloadHandler = new DownloadHandlerBuffer();
            webRequest.SetRequestHeader("Content-Type", "application/json");

            // �ȴ������Ͳ�������Ӧ
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
            return response.response;  // ��� response �ֶ�
        }
        catch (JsonException e)
        {
            Debug.LogError("JSON Parse Error: " + e.Message);
            return "error";
        }
    }

    // �������л�JSON����
    [System.Serializable]
    public class APIRequestData
    {
        public string system;
        public string user;
    }
}
