using UnityEngine;
using TMPro; // ����TextMeshPro�����ռ�
using UnityEngine.UI;

public class TextUpdater : MonoBehaviour
{
    public TMP_InputField inputField; // ָ��TextMeshPro Input Field������
    //public TextMeshProUGUI targetText; // ָ��Ҫ���µ�TextMeshPro�ı����������
    public Text targetText; // ������Unity��Text���ͣ�����TextMeshProUGUI
    public GameObject libaiText;
    public GameObject libai;
    private Animator myAnimator;
    private testTry libaiWord;

    void Start()
    {
        //if (inputField != null)
        //{
        //    // ΪinputField���ı������¼���Ӽ�����
        //    inputField.onValueChanged.AddListener(UpdateTargetText);
        //}
        myAnimator= libai.GetComponent<Animator>();
        libaiWord = libai.GetComponent<testTry>();
    }

    //void UpdateTargetText(string newText)
    //{
    //    if (newText == "1" || newText == "2")
    //    {
    //        // ���������1��2������Ŀ��TextMeshPro������ı�Ϊ��Ӧ��ֵ
    //        targetText.text = newText;
    //    }
    //}
    public void ChangeMyTextA()
    {
        libaiText.SetActive(true);
        targetText.text = inputField.text;
        libaiWord.talk("�������á���ҹ˼���е�ʫ��ش��������⣺����������");
        myAnimator.SetBool("startTalk", true);
    }
    public void ChangeMyTextB()
    {
        libaiText.SetActive(true);
        libaiWord.talk("��֪����ҹ˼��");
        myAnimator.SetBool("startTalk", true);
    }
    public void ChangeMyTextC()
    {
        libaiText.SetActive(true);
        libaiWord.talk(inputField.text);
        myAnimator.SetBool("startTalk", true);
    }
}
