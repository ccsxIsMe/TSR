using UnityEngine;

public class PageController : MonoBehaviour
{
    public GameObject[] pages; // ���ڴ���������������
    private int currentPageIndex = 0; // ��ǰ��ʾ���������

    void Start()
    {
        UpdatePageState();
    }

    // ��һҳ��ť���õķ���
    public void NextPage()
    {
        currentPageIndex = (currentPageIndex + 1) % pages.Length;
        UpdatePageState();
    }

    // ��һҳ��ť���õķ���
    public void PreviousPage()
    {
        // ��ֹ������ɸ�����ʹ��ģ����ѭ��
        currentPageIndex = (currentPageIndex - 1 + pages.Length) % pages.Length;
        UpdatePageState();
    }

    // ����ҳ��״̬
    private void UpdatePageState()
    {
        for (int i = 0; i < pages.Length; i++)
        {
            pages[i].SetActive(i == currentPageIndex);
        }
    }
}
