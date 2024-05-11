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
    //    // 在这里处理接收到的章节信息
    //    foreach (var chapter in chapters)
    //    {
    //        Debug.Log($"Chapter: {chapter.chapter}, Unlocked: {chapter.unlocked}, Completed: {chapter.completed}");
    //    }

    //    // 示例：获取特定章节的 Unlocked 值
    //    string targetChapter = "ch1";
    //    bool unlocked = GetUnlockedValue(chapters, targetChapter);
    //    Debug.Log($"Unlocked value for chapter {targetChapter}: {unlocked}");
    //}

    //private void OnChaptersError(string error)
    //{
    //    Debug.LogError("Error occurred while fetching chapters: " + error);
    //}

    //// 从章节列表中获取特定章节的 Unlocked 值
    //private bool GetUnlockedValue(List<ChapterData> chapters, string targetChapter)
    //{
    //    foreach (var chapter in chapters)
    //    {
    //        if (chapter.chapter == targetChapter)
    //        {
    //            return chapter.unlocked;
    //        }
    //    }
    //    return false; // 如果未找到匹配的章节，则返回默认值（假设为未解锁）
    //}
}
