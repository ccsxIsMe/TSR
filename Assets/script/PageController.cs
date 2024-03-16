using UnityEngine;

public class PageController : MonoBehaviour
{
    public GameObject[] pages; // 用于存放三个物体的数组
    private int currentPageIndex = 0; // 当前显示物体的索引

    void Start()
    {
        UpdatePageState();
    }

    // 下一页按钮调用的方法
    public void NextPage()
    {
        currentPageIndex = (currentPageIndex + 1) % pages.Length;
        UpdatePageState();
    }

    // 上一页按钮调用的方法
    public void PreviousPage()
    {
        // 防止索引变成负数，使用模运算循环
        currentPageIndex = (currentPageIndex - 1 + pages.Length) % pages.Length;
        UpdatePageState();
    }

    // 更新页面状态
    private void UpdatePageState()
    {
        for (int i = 0; i < pages.Length; i++)
        {
            pages[i].SetActive(i == currentPageIndex);
        }
    }
}
