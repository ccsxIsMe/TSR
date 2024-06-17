using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI; // 引入UI命名空间

public class SwitchScene : MonoBehaviour
{
    public Dropdown sceneDropdown; // 将你的下拉菜单拖到这个变量上

    // 这个方法会根据下拉菜单的选项切换场景
    public void SwitchToScene()
    {
        if (sceneDropdown != null)
        {
            int selectedIndex = sceneDropdown.value; // 获取下拉菜单当前的选项索引
            switch (selectedIndex)
            {
                case 0: // 假设选项A的索引为0
                    SceneManager.LoadScene(3); // 加载场景index为1的场景
                    break;
                case 1: // 假设选项A的索引为0
                    SceneManager.LoadScene(4); // 加载场景index为1的场景
                    break;
                case 2: // 假设选项B的索引为1
                    SceneManager.LoadScene(1); // 加载场景index为2的场景
                    break;
                case 3: // 假设选项B的索引为1
                    SceneManager.LoadScene(2); // 加载场景index为2的场景
                    break;
                case 4: // 假设选项B的索引为1
                    SceneManager.LoadScene(5); // 加载场景index为2的场景
                    break;
                // 可以根据需要添加更多的case
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
