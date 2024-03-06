using UnityEngine;
using TMPro; // 引入TextMeshPro命名空间
using UnityEngine.UI;

public class TextUpdater : MonoBehaviour
{
    public TMP_InputField inputField; // 指向TextMeshPro Input Field的引用
    //public TextMeshProUGUI targetText; // 指向要更新的TextMeshPro文本对象的引用
    public Text targetText; // 现在是Unity的Text类型，不是TextMeshProUGUI
    public GameObject libaiText;


    //void Start()
    //{
    //    if (inputField != null)
    //    {
    //        // 为inputField的文本更改事件添加监听器
    //        inputField.onValueChanged.AddListener(UpdateTargetText);
    //    }
    //}

    //void UpdateTargetText(string newText)
    //{
    //    if (newText == "1" || newText == "2")
    //    {
    //        // 如果输入是1或2，更新目标TextMeshPro对象的文本为相应的值
    //        targetText.text = newText;
    //    }
    //}
    public void ChangeMyText()
    {
        //targetText.text = inputField.text;
        libaiText.SetActive(true);
        targetText.text = "你请讲，我在听。";
    }
}
