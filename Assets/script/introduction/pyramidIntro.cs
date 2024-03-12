using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro; // ����TextMeshPro�����ռ�
using UnityEngine.UI;
using static UnityEngine.Rendering.DebugUI;

public class pyramidIntro : MonoBehaviour
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
        targetText.text = "�������ǹŰ�������������Ĺ�������ڴ�Լ��Ԫǰ2580������Ԫǰ2560��䣬�Լ����ĺ����������Ϊ������";
    }
    public void ChangeMyTextB()
    {
        targetText.text = "�������Ľ���Ŀ����Ϊ�˱�������ķ����������������ǽ���������";
    }
    public void ChangeMyTextC()
    {
        buildingInput.SetActive(true);
        buildingAI.talk(inputField.text);
    }
}
