using UnityEngine;
using TMPro; // 引入TextMeshPro命名空间
using UnityEngine.UI;

public class TextUpdater : MonoBehaviour
{
    public TMP_InputField inputField; // 指向TextMeshPro Input Field的引用
    //public TextMeshProUGUI targetText; // 指向要更新的TextMeshPro文本对象的引用
    public Text targetText; // 现在是Unity的Text类型，不是TextMeshProUGUI
    public GameObject libaiText;
    public GameObject libai;
    private Animator myAnimator;
    private testTry libaiWord;

    void Start()
    {
        //if (inputField != null)
        //{
        //    // 为inputField的文本更改事件添加监听器
        //    inputField.onValueChanged.AddListener(UpdateTargetText);
        //}
        myAnimator= libai.GetComponent<Animator>();
        libaiWord = libai.GetComponent<testTry>();
    }

    //void UpdateTargetText(string newText)
    //{
    //    if (newText == "1" || newText == "2")
    //    {
    //        // 如果输入是1或2，更新目标TextMeshPro对象的文本为相应的值
    //        targetText.text = newText;
    //    }
    //}
    public void ChangeMyTextA()
    {
        libaiText.SetActive(true);
        targetText.text = inputField.text;
        libaiWord.talk("请你引用《静夜思》中的诗句回答以下问题：我最近很想家");
        myAnimator.SetBool("startTalk", true);
    }
    public void ChangeMyTextB()
    {
        libaiText.SetActive(true);
        libaiWord.talk("你知道静夜思吗");
        myAnimator.SetBool("startTalk", true);
    }
    public void ChangeMyTextC()
    {
        libaiText.SetActive(true);
        libaiWord.talk(inputField.text);
        myAnimator.SetBool("startTalk", true);
    }
}
