using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro; // ����TextMeshPro�����ռ�
using UnityEngine.UI;
using static UnityEngine.Rendering.DebugUI;

public class CristoIntro : MonoBehaviour
{
    public TMP_InputField inputField;
    public Text targetText;
    public GameObject building;
    public GameObject buildingInput;
    private TourAI buildingAI;

    private void Start()
    {
        buildingAI = building.GetComponent<TourAI>();
    }
    public void ChangeMyTextA()
    {
        targetText.text = "������������1922�굽1931�ּ꣬�ڼ����������100���겢���������İ�������ȫ�������������ǰ�����������Ҳ��Ϊ�������ƽ�밮��������";
    }
    public void ChangeMyTextB()
    {
        targetText.text = "�ο�ͨ��ͨ������С�𳵴ӿƶ����߶�ɽ�ſ�ʼ��ɽ��С�𳵴����ȴ����֣��οͿ���һ·����׳������Ȼ���ֱ��ɽ����";
    }
    public void ChangeMyTextC()
    {
        buildingInput.SetActive(true);
        buildingAI.talk(inputField.text);
    }
}
