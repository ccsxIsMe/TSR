using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using TriLib;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class LoadModel2Scene : MonoBehaviour
{
    public Text loadText;
    public InputField inputField;
    private string url = "http://114.115.210.247:8080/getModelUrl";
    private string originText;
    // Start is called before the first frame update
    void Start()
    {
        originText = inputField.text;
    }

    // Update is called once per frame
    void Update()
    {

    }
    public void Load()
    {
        if(inputField.text == originText)
        {
            loadText.text = "输入不能为空";
            return;
        }
        Debug.Log(inputField.text);
        loadText.text = "模型生成中，需要约5至6分钟...";
        StartCoroutine(getModel(inputField.text));
    }
    IEnumerator getModel(string prompt)
    {
        WWWForm form = new WWWForm();
        form.AddField("prompt", prompt);
        using (UnityWebRequest www = UnityWebRequest.Post(url, form))
        {
            yield return www.SendWebRequest();

            if (www.isNetworkError || www.isHttpError)
            {
                Debug.Log(www.error);
            }
            else
            {
                string url = www.downloadHandler.text;
                StartCoroutine(LoadModel(url));
            }
        }
    }
    IEnumerator LoadModel(string url)
    {
        string progress;
        WWW w = new WWW(url);
        while (!w.isDone)
        {
            progress = (((int)(w.progress * 100)) % 100) + "%";
            loadText.text = "下载模型中" + progress;
            yield return null;
        }
        yield return w;
        if (w.isDone)
        {
            loadText.text = "保存模型中";
            byte[] model = w.bytes;
            int length = model.Length;

            //文件流信息  
            Stream sw;

            DirectoryInfo t = new DirectoryInfo(Application.persistentDataPath + "/model/" + name);
            if (!t.Exists)
            {
                //如果此文件夹不存在则创建  
                t.Create();
            }
            var timeStamp = DateTime.UtcNow.Ticks;
            var path = Application.persistentDataPath + "/model/" + name + "/" + timeStamp + ".fbx";
            FileInfo j = new FileInfo(path);
            if (!j.Exists)
            {
                //如果此文件不存在则创建  
                sw = j.Create();
            }
            else
            {
                //如果此文件存在则打开  
                sw = j.OpenWrite();
            }
            sw.Write(model, 0, length);
            //关闭流  
            sw.Close();
            //销毁流  
            sw.Dispose();
            // 加载
            loadText.text = "模型加载";
            var assetLoader = new AssetLoader();
            var assetLoaderOptions = AssetLoaderOptions.CreateInstance();
            var wrapperGameObject = gameObject;
            var myGameObject = assetLoader.LoadFromFile(path, assetLoaderOptions, wrapperGameObject);
        }
        
    }
}
