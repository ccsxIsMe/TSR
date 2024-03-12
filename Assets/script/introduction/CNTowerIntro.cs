using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro; // ����TextMeshPro�����ռ�
using UnityEngine.UI;
using static UnityEngine.Rendering.DebugUI;

public class CNTowerIntro : MonoBehaviour
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
        targetText.text = "�����������Լ405�ף��������Ͻϸߵĵ�����֮һ����Ȼ��������������ߵ�����������ȫ�������������ǰ�У��Ǳ�������Ҫ�ر�֮һ��";
    }
    public void ChangeMyTextB()
    {
        targetText.text = "��������������ṩ�۹���񣬻�������ת����������ӰԺ��չ��������ʩ���οͿ���������������ʳ���ۿ�չ��������߿Ƽ�������Ŀ��";
    }
    public void ChangeMyTextC()
    {
        buildingInput.SetActive(true);
        buildingAI.talk(inputField.text);
    }
}
