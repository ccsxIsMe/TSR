using UnityEngine;
using TMPro; // ����TextMeshPro�����ռ�
using UnityEngine.UI;
using System.IO;

public class SDUTextUpdater : MonoBehaviour
{
    public TMP_InputField inputField; // ָ��TextMeshPro Input Field������
    //public TextMeshProUGUI targetText; // ָ��Ҫ���µ�TextMeshPro�ı����������
    public Text targetText; // ������Unity��Text���ͣ�����TextMeshProUGUI
    public GameObject robotText;
    public GameObject robot;
    public GameObject robotAI;
    private Animator myAnimator;
    private SDUchat robotWord;

    void Start()
    {
        //if (inputField != null)
        //{
        //    // ΪinputField���ı������¼���Ӽ�����
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
        targetText.text = "�Ե�...";
        robotWord.talk("�������ɽ����ѧ����У��֪��¥");
        myAnimator.SetBool("startTalk", true);
        Invoke("stopAnim", 5f);
    }
    public void ChangeMyTextB()
    {
        robotText.SetActive(true);
        targetText.text = "�Ե�...";
        robotWord.talk("�������ɽ����ѧ����У���ٳ�");
        myAnimator.SetBool("startTalk", true);
        Invoke("stopAnim", 5f);
    }
    public void ChangeMyTextC()
    {
        robotText.SetActive(true);
        targetText.text = "�Ե�...";
        robotWord.talk("�������ɽ����ѧ����У��������");
        myAnimator.SetBool("startTalk", true);
        Invoke("stopAnim", 5f);
    }
    public void ChangeMyTextD()
    {
        robotText.SetActive(true);
        targetText.text = "�Ե�...";
        robotWord.talk(inputField.text);
        myAnimator.SetBool("startTalk", true);
        Invoke("stopAnim", 5f);
    }

    private void stopAnim()
    {
        myAnimator.SetBool("startTalk", false);
    }
}
