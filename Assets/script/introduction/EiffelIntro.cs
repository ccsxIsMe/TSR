using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro; // ����TextMeshPro�����ռ�
using UnityEngine.UI;
using static UnityEngine.Rendering.DebugUI;

public class EiffelIntro : MonoBehaviour
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
        targetText.text = "���ƶ�������300�ף�������Ȼ�ǰ�����������ߵĽ����";
    }
    public void ChangeMyTextB()
    {
        targetText.text = "������Ϊ���㣬�οͿ��Գ������ݻ��߲�����¥���Ӷ���۾�̨�ϣ��������ܵ����˾�̾�İ���ȫ����";
    }
    public void ChangeMyTextC()
    {
        buildingInput.SetActive(true);
        buildingAI.talk(inputField.text);
    }
}
