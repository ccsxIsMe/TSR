using UnityEngine;

public class VisibilityByDistance : MonoBehaviour
{
    public Transform player; // ��ҵ�Transform���
    public GameObject objectToShowHide; // ��Ҫ��ʾ�����ص�����
    public float visibilityDistance = 5.0f; // ������ʾ/���صľ�����ֵ

    void Update()
    {
        // ��������뵱ǰ����֮��ľ���
        float distance = Vector3.Distance(player.position, transform.position);

        // ���ݾ�����ʾ��������һ������
        if (distance <= visibilityDistance)
        {
            // ������������ľ���С�ڻ�����趨����ֵ����ʾ����
            objectToShowHide.SetActive(true);
        }
        else
        {
            // ������������ľ�������趨����ֵ����������
            objectToShowHide.SetActive(false);
        }
    }
}
