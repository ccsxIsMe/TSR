using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using UnityEngine.Networking;

[RequireComponent(typeof(AudioSource))]
public class Speech2text : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
{
    private AudioSource mAudioSource;
    private AudioClip mAudioClip;
    // 语音转换后的内容
    public Text speechContent;
    // 服务器地址
    public string url = "http://114.115.210.247:8086/getText";

    void Start()
    {
        // 这个路径在各平台有效
        Debug.Log("Audio saved at: " + Application.persistentDataPath);
        MicrophoneWrapper.Instance.Init();
        mAudioSource = GetComponent<AudioSource>();
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        this.transform.GetChild(0).GetComponent<Text>().text = "松开结束";
        MicrophoneWrapper.Instance.OnStartRecord();
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        this.transform.GetChild(0).GetComponent<Text>().text = "按下说话";
        mAudioClip = MicrophoneWrapper.Instance.OnStopRecord();
        if (mAudioSource != null && mAudioClip != null)
        {
            mAudioSource.PlayOneShot(mAudioClip);
            // record
            string fileName = DateTime.UtcNow.Ticks + ".wav";
            string filePath = Path.Combine(Application.persistentDataPath, fileName);
            WavFromClip(filePath, mAudioClip);
            // upload
            StartCoroutine(sendWav(filePath, fileName));

        }
        else
        {
            Debug.Log(" mAudioSource or mAudioClip is null ");
        }
    }
    public void WavFromClip(string WavPosition, AudioClip clip)
    {
        if (Microphone.IsRecording(null))
            return;
        Microphone.End(null);

        using (FileStream fs = CreateEmpty(WavPosition))
        {
            ConvertAndWrite(fs, clip);
            WriteHeader(fs, clip); //wav文件头
        }
    }
    private FileStream CreateEmpty(string filepath)
    {
        FileStream fileStream = new FileStream(filepath, FileMode.Create);
        byte emptyByte = new byte();

        for (int i = 0; i < 44; i++) //为wav文件头留出空间
        {
            fileStream.WriteByte(emptyByte);
        }

        return fileStream;
    }
    private void ConvertAndWrite(FileStream fileStream, AudioClip clip)
    {

        float[] samples = new float[clip.samples];
        clip.GetData(samples, 0);

        Int16[] intData = new Int16[samples.Length];

        Byte[] bytesData = new Byte[samples.Length * 2];

        int rescaleFactor = 32767; //to convert float to Int16  

        for (int i = 0; i < samples.Length; i++)
        {
            intData[i] = (short)(samples[i] * rescaleFactor);
            Byte[] byteArr = new Byte[2];
            byteArr = BitConverter.GetBytes(intData[i]);
            byteArr.CopyTo(bytesData, i * 2);
        }
        fileStream.Write(bytesData, 0, bytesData.Length);
    }
    private void WriteHeader(FileStream stream, AudioClip clip)
    {
        int hz = clip.frequency;
        int channels = clip.channels;
        int samples = clip.samples;

        stream.Seek(0, SeekOrigin.Begin);

        Byte[] riff = System.Text.Encoding.UTF8.GetBytes("RIFF");
        stream.Write(riff, 0, 4);

        Byte[] chunkSize = BitConverter.GetBytes(stream.Length - 8);
        stream.Write(chunkSize, 0, 4);

        Byte[] wave = System.Text.Encoding.UTF8.GetBytes("WAVE");
        stream.Write(wave, 0, 4);

        Byte[] fmt = System.Text.Encoding.UTF8.GetBytes("fmt ");
        stream.Write(fmt, 0, 4);

        Byte[] subChunk1 = BitConverter.GetBytes(16);
        stream.Write(subChunk1, 0, 4);

        UInt16 two = 2;
        UInt16 one = 1;

        Byte[] audioFormat = BitConverter.GetBytes(one);
        stream.Write(audioFormat, 0, 2);

        Byte[] numChannels = BitConverter.GetBytes(channels);
        stream.Write(numChannels, 0, 2);

        Byte[] sampleRate = BitConverter.GetBytes(hz);
        stream.Write(sampleRate, 0, 4);

        Byte[] byteRate = BitConverter.GetBytes(hz * channels * 2); // sampleRate * bytesPerSample*number of channels, here 44100*2*2  
        stream.Write(byteRate, 0, 4);

        UInt16 blockAlign = (ushort)(channels * 2);
        stream.Write(BitConverter.GetBytes(blockAlign), 0, 2);

        UInt16 bps = 16;
        Byte[] bitsPerSample = BitConverter.GetBytes(bps);
        stream.Write(bitsPerSample, 0, 2);

        Byte[] datastring = System.Text.Encoding.UTF8.GetBytes("data");
        stream.Write(datastring, 0, 4);

        Byte[] subChunk2 = BitConverter.GetBytes(samples * channels * 2);
        stream.Write(subChunk2, 0, 4);

    }
    IEnumerator sendWav(string filePath, string fileName)
    {
        byte[] wavFileBytes = File.ReadAllBytes(filePath);
        WWWForm form = new WWWForm();
        form.AddBinaryData("file", wavFileBytes, fileName);
        using (UnityWebRequest www = UnityWebRequest.Post(url, form))
        {
            yield return www.SendWebRequest();

            if (www.isNetworkError || www.isHttpError)
            {
                Debug.Log(www.error);
            }
            else
            {
                string text = www.downloadHandler.text;
                Response res = JsonUtility.FromJson<Response>(text);
                speechContent.text = res.content;
                //Debug.Log("服务器返回值:" + res.content);
            }
        }
    }
}
[Serializable]
class Response
{
    public bool success;
    public string content;
}
