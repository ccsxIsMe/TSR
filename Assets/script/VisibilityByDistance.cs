using UnityEngine;

public class VisibilityByDistance : MonoBehaviour
{
    public Transform player; // 玩家的Transform组件
    public GameObject objectToShowHide; // 需要显示或隐藏的物体
    public float visibilityDistance = 5.0f; // 触发显示/隐藏的距离阈值

    void Update()
    {
        // 计算玩家与当前物体之间的距离
        float distance = Vector3.Distance(player.position, transform.position);

        // 根据距离显示或隐藏另一个物体
        if (distance <= visibilityDistance)
        {
            // 如果玩家与物体的距离小于或等于设定的阈值，显示物体
            objectToShowHide.SetActive(true);
        }
        else
        {
            // 如果玩家与物体的距离大于设定的阈值，隐藏物体
            objectToShowHide.SetActive(false);
        }
    }
}
