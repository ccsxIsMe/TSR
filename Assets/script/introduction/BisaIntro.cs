using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro; // ����TextMeshPro�����ռ�
using UnityEngine.UI;
using static UnityEngine.Rendering.DebugUI;

public class BisaIntro : MonoBehaviour
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
        targetText.text = "б������б����Ϊ�佨����һ�������ĵػ��ϣ���������һ���³��������ڽ�������г����˸��ַ�����������һ��б���������Ǽ�����б����Ϊ���־��������";
    }
    public void ChangeMyTextB()
    {
        targetText.text = "����б����Լ��56�ף�Լ184Ӣ�ߣ���Ŀǰ����б��ԼΪ3.97�ȡ������ȶ������̵Ľ��룬�����б���ѱ��ɹ����٣��Է�ֹ��һ������б��";
    }
    public void ChangeMyTextC()
    {
        buildingInput.SetActive(true);
        buildingAI.talk(inputField.text);
    }
}
