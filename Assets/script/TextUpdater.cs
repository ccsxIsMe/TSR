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


    void Start()
    {
        //if (inputField != null)
        //{
        //    // ΪinputField���ı������¼���Ӽ�����
        //    inputField.onValueChanged.AddListener(UpdateTargetText);
        //}
        myAnimator= libai.GetComponent<Animator>();
    }

    //void UpdateTargetText(string newText)
    //{
    //    if (newText == "1" || newText == "2")
    //    {
    //        // ���������1��2������Ŀ��TextMeshPro������ı�Ϊ��Ӧ��ֵ
    //        targetText.text = newText;
    //    }
    //}
    public void ChangeMyText()
    {
        //targetText.text = inputField.text;
        libaiText.SetActive(true);
        targetText.text = "���뽲����������";
        myAnimator.SetBool("startTalk", true);
    }
}
