using UnityEngine;

public class RotateObject : MonoBehaviour
{
    // ������ת�ٶȣ�ÿ����ת�Ķ���
    public float rotationSpeed = 30.0f;

    void Update()
    {
        // ����������ϵ��Y����ת����
        transform.Rotate(Vector3.up, rotationSpeed * Time.deltaTime, Space.World);

    }
}
