using UnityEngine;

public class RotateObject : MonoBehaviour
{
    // 设置旋转速度，每秒旋转的度数
    public float rotationSpeed = 30.0f;

    void Update()
    {
        // 绕世界坐标系的Y轴旋转物体
        transform.Rotate(Vector3.up, rotationSpeed * Time.deltaTime, Space.World);

    }
}
