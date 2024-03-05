using UnityEngine;

public class CharacterController : MonoBehaviour
{
    public Transform startPoint; // ���
    public Transform endPoint; // �յ�
    public float speed = 5f; // �����ƶ��ٶ�

    private bool movingToEnd = true; // �Ƿ����յ��ƶ�

    void Start()
    {
        // ��ʼ��λ��Ϊ���λ��
        transform.position = startPoint.position;
    }

    void Update()
    {
        // �����ƶ������ƶ�����
        if (movingToEnd)
        {
            transform.position = Vector3.MoveTowards(transform.position, endPoint.position, speed * Time.deltaTime);
        }
        else
        {
            transform.position = Vector3.MoveTowards(transform.position, startPoint.position, speed * Time.deltaTime);
        }

        // �ж��Ƿ񵽴��յ�����
        if (Vector3.Distance(transform.position, endPoint.position) < 0.01f)
        {
            // �����յ���ı��ƶ�����Ϊ������㣬����ת����
            movingToEnd = false;
            FlipCharacter1();
        }
        else if (Vector3.Distance(transform.position, startPoint.position) < 0.01f)
        {
            // ���������ı��ƶ�����Ϊǰ���յ㣬����ת����
            movingToEnd = true;
            FlipCharacter2();
        }
    }

    // ��ת����
    void FlipCharacter1()
    {
        transform.Rotate(0f, 163f, 0f);
    }
    void FlipCharacter2()
    {
        transform.Rotate(0f, -163f, 0f);
    }
}
