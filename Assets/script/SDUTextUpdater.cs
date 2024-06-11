using UnityEngine;
using TMPro; // 引入TextMeshPro命名空间
using UnityEngine.UI;
using System.IO;

public class SDUTextUpdater : MonoBehaviour
{
    public TMP_InputField inputField; // 指向TextMeshPro Input Field的引用
    //public TextMeshProUGUI targetText; // 指向要更新的TextMeshPro文本对象的引用
    public Text targetText; // 现在是Unity的Text类型，不是TextMeshProUGUI
    public GameObject robotText;
    public GameObject robot;
    public GameObject robotAI;
    private Animator myAnimator;
    private SDUchat robotWord;

    void Start()
    {
        //if (inputField != null)
        //{
        //    // 为inputField的文本更改事件添加监听器
        //    inputField.onValueChanged.AddListener(UpdateTargetText);
        //}
        myAnimator = robot.GetComponent<Animator>();
        robotWord = robotAI.GetComponent<SDUchat>();
        //ChangeMyTextA();
        string PathName = Path.Combine(Application.persistentDataPath, "1111.osgb");
        targetText.text = PathName;
    }

    public void ChangeMyTextA()
    {
        robotText.SetActive(true);
        targetText.text = "稍等...";
        robotWord.talk("请你介绍山东大学中心校区知新楼");
        myAnimator.SetBool("startTalk", true);
        Invoke("stopAnim", 5f);
    }
    public void ChangeMyTextB()
    {
        robotText.SetActive(true);
        targetText.text = "稍等...";
        robotWord.talk("请你介绍山东大学中心校区操场");
        myAnimator.SetBool("startTalk", true);
        Invoke("stopAnim", 5f);
    }
    public void ChangeMyTextC()
    {
        robotText.SetActive(true);
        targetText.text = "稍等...";
        robotWord.talk("请你介绍山东大学中心校区体育馆");
        myAnimator.SetBool("startTalk", true);
        Invoke("stopAnim", 5f);
    }
    public void ChangeMyTextD()
    {
        robotText.SetActive(true);
        targetText.text = "稍等...";
        robotWord.talk(inputField.text);
        myAnimator.SetBool("startTalk", true);
        Invoke("stopAnim", 5f);
    }

    private void stopAnim()
    {
        myAnimator.SetBool("startTalk", false);
    }
}
