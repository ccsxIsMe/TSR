using UnityEngine;

public class CharacterController : MonoBehaviour
{
    public Transform startPoint; // 起点
    public Transform endPoint; // 终点
    public float speed = 5f; // 人物移动速度

    private bool movingToEnd = true; // 是否向终点移动

    void Start()
    {
        // 初始化位置为起点位置
        transform.position = startPoint.position;
    }

    void Update()
    {
        // 根据移动方向移动人物
        if (movingToEnd)
        {
            transform.position = Vector3.MoveTowards(transform.position, endPoint.position, speed * Time.deltaTime);
        }
        else
        {
            transform.position = Vector3.MoveTowards(transform.position, startPoint.position, speed * Time.deltaTime);
        }

        // 判断是否到达终点或起点
        if (Vector3.Distance(transform.position, endPoint.position) < 0.01f)
        {
            // 到达终点则改变移动方向为返回起点，并翻转物体
            movingToEnd = false;
            FlipCharacter1();
        }
        else if (Vector3.Distance(transform.position, startPoint.position) < 0.01f)
        {
            // 到达起点则改变移动方向为前往终点，并翻转物体
            movingToEnd = true;
            FlipCharacter2();
        }
    }

    // 翻转人物
    void FlipCharacter1()
    {
        transform.Rotate(0f, 163f, 0f);
    }
    void FlipCharacter2()
    {
        transform.Rotate(0f, -163f, 0f);
    }
}
