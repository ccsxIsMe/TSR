using UnityEngine;
using System.Collections.Generic;
using System;
using System.Collections;

public class ChapterManager : MonoBehaviour
{
    //private getUserInfo userInfo;

    //private void Start()
    //{
    //    userInfo = new getUserInfo();
    //    StartCoroutine(GetChapters("123"));
    //}

    //private IEnumerator GetChapters(string account)
    //{
    //    yield return StartCoroutine(userInfo.GetChapters(account, OnChaptersReceived, OnChaptersError));
    //}

    //private void OnChaptersReceived(List<ChapterData> chapters)
    //{
    //    // �����ﴦ����յ����½���Ϣ
    //    foreach (var chapter in chapters)
    //    {
    //        Debug.Log($"Chapter: {chapter.chapter}, Unlocked: {chapter.unlocked}, Completed: {chapter.completed}");
    //    }

    //    // ʾ������ȡ�ض��½ڵ� Unlocked ֵ
    //    string targetChapter = "ch1";
    //    bool unlocked = GetUnlockedValue(chapters, targetChapter);
    //    Debug.Log($"Unlocked value for chapter {targetChapter}: {unlocked}");
    //}

    //private void OnChaptersError(string error)
    //{
    //    Debug.LogError("Error occurred while fetching chapters: " + error);
    //}

    //// ���½��б��л�ȡ�ض��½ڵ� Unlocked ֵ
    //private bool GetUnlockedValue(List<ChapterData> chapters, string targetChapter)
    //{
    //    foreach (var chapter in chapters)
    //    {
    //        if (chapter.chapter == targetChapter)
    //        {
    //            return chapter.unlocked;
    //        }
    //    }
    //    return false; // ���δ�ҵ�ƥ����½ڣ��򷵻�Ĭ��ֵ������Ϊδ������
    //}
}
