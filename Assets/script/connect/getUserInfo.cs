using UnityEngine;
using UnityEngine.Networking;
using System.Collections.Generic;
using System;
using Newtonsoft.Json;
using System.Collections;
using UnityEngine.SceneManagement;

public class getUserInfo: MonoBehaviour
{
    private const string baseUrl = "http://114.115.210.247:8848/api/userInfo";
    private bool unLock;
    public static int unLockMax = -1;
    private string unLockName = "0";

    //public GameObject[] builder;
    public GameObject popWindow;

    void Start()
    {
        StartCoroutine(GetChaptersCoroutine(login.nameValue));
        //GetChapter("ch1", "123");
        Invoke("checkLater", 1f);
    }

    private void checkLater()
    {
        Debug.Log("unLockName" + unLockName);
        if (unLockName == "ch1") unLockMax = 0;
        else if (unLockName == "ch2") unLockMax = 1;
        else if (unLockName == "ch3") unLockMax = 2;
        else unLockMax = 0;
    }

    public void ifChapterOne()
    {
        if(unLockMax>=0) SceneManager.LoadScene(2);
        else popWindow.SetActive(true);
    }
    public void ifChapterTwo()
    {
        if (unLockMax >= 1) SceneManager.LoadScene(3);
        else popWindow.SetActive(true);
    }
    public void ifChapterThree()
    {
        //没有做第三章所以这里还是加载第二章
        if (unLockMax >= 2) SceneManager.LoadScene(3);
        else popWindow.SetActive(true);
    }

    private IEnumerator<UnityWebRequestAsyncOperation> GetChaptersCoroutine(string account)
    {
        string url = baseUrl + "/chapters?account=" + account;
        using (UnityWebRequest www = UnityWebRequest.Get(url))
        {
            yield return www.SendWebRequest();

            if (www.result != UnityWebRequest.Result.Success)
            {
                Debug.LogError("Error: " + www.error);
            }
            else
            {
                string json = www.downloadHandler.text;
                Debug.Log("JSON response: " + json);

                // 使用Json.NET解析JSON字符串
                List<ChapterData> chapters = JsonConvert.DeserializeObject<List<ChapterData>>(json);

                if (chapters != null && chapters.Count > 0)
                {
                    foreach (ChapterData chapter in chapters)
                    {
                        Debug.Log("Chapter: " + chapter.chapter + ", Unlocked: " + chapter.unlocked + ", Completed: " + chapter.completed);
                        if (chapter.unlocked) unLockName = chapter.chapter;
                    }
                }
                else
                {
                    Debug.LogError("Error: No chapters found");
                }
            }
        }
    }

    void GetChapter(string chapterName,string accountName)
    {
        StartCoroutine(GetChapterUnlockedCoroutine(chapterName,accountName, (unlocked) =>
        {
            Debug.Log("Chapter unlocked: " + unlocked);
            unLock = unlocked;
        }));
    }

    private IEnumerator GetChapterUnlockedCoroutine(string mychapter, string account, Action<bool> callback)
    {
        string url = baseUrl + "/chapters?account=" + account;
        using (UnityWebRequest www = UnityWebRequest.Get(url))
        {
            yield return www.SendWebRequest();

            if (www.result != UnityWebRequest.Result.Success)
            {
                Debug.LogError("Error: " + www.error);
                callback(false); // 返回默认值
            }
            else
            {
                string json = www.downloadHandler.text;
                Debug.Log("JSON response: " + json);

                // 使用Json.NET解析JSON字符串
                List<ChapterData> chapters = JsonConvert.DeserializeObject<List<ChapterData>>(json);

                if (chapters != null && chapters.Count > 0)
                {
                    foreach (ChapterData chapter in chapters)
                    {
                        if (chapter.chapter == mychapter)
                        {
                            bool unlocked = chapter.unlocked;
                            callback(unlocked);
                        }
                    }
                }
                else
                {
                    Debug.LogError("Error: No chapter data found");
                    callback(false); // 返回默认值
                }
                
            }
        }
    }
}





[System.Serializable]
public class ChapterData
{
    public string chapter;
    public bool unlocked;
    public bool completed;
}

[System.Serializable]
public class ChapterDataResponse
{
    public List<ChapterData> chapters;
}


