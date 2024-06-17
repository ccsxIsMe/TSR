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
                    SceneManager.LoadScene(3); // ���س���indexΪ1�ĳ���
                    break;
                case 1: // ����ѡ��A������Ϊ0
                    SceneManager.LoadScene(4); // ���س���indexΪ1�ĳ���
                    break;
                case 2: // ����ѡ��B������Ϊ1
                    SceneManager.LoadScene(1); // ���س���indexΪ2�ĳ���
                    break;
                case 3: // ����ѡ��B������Ϊ1
                    SceneManager.LoadScene(2); // ���س���indexΪ2�ĳ���
                    break;
                case 4: // ����ѡ��B������Ϊ1
                    SceneManager.LoadScene(5); // ���س���indexΪ2�ĳ���
                    break;
                // ���Ը�����Ҫ��Ӹ����case
                default:
                    break;
            }
        }
    }

    public void SwitchToBegining()
    {
        SceneManager.LoadScene(0);
    }

    public void easySwitch()
    {
        SceneManager.LoadScene(0);
    }

    public void switchToStory1()
    {
        SceneManager.LoadScene(2);
    }
    public void switchToStory2()
    {
        SceneManager.LoadScene(3);
    }
    public void switchToConstruct()
    {
        SceneManager.LoadScene(4);
    }
}
