using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI; // ����UI�����ռ�

public class SwitchScene : MonoBehaviour
{
    public Dropdown sceneDropdown; // ����������˵��ϵ����������

    // �����������������˵���ѡ���л�����
    public void SwitchToScene()
    {
        if (sceneDropdown != null)
        {
            int selectedIndex = sceneDropdown.value; // ��ȡ�����˵���ǰ��ѡ������
            switch (selectedIndex)
            {
                case 0: // ����ѡ��A������Ϊ0
                    SceneManager.LoadScene(1); // ���س���indexΪ1�ĳ���
                    break;
                case 1: // ����ѡ��B������Ϊ1
                    SceneManager.LoadScene(2); // ���س���indexΪ2�ĳ���
                    break;
                // ���Ը�����Ҫ��Ӹ����case
                default:
                    break;
            }
        }
    }

    public void easySwitch()
    {
        SceneManager.LoadScene(0);
    }
}
