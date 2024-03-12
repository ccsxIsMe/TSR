using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro; // ����TextMeshPro�����ռ�
using UnityEngine.UI;
using static UnityEngine.Rendering.DebugUI;

public class LondonTowerIntro : MonoBehaviour
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
        targetText.text = "�׶��������������һ����1066�꽨����Ŀ������Ϊŵ������Ȩ���������������������͵�����������һ��ľ��Ҫ���ݱ���˽�������������ʯ�ƳǱ����׶�������;�����������ǻʼҾ����������⡢���⡢�����������ǻʼҶ���԰��";
    }
    public void ChangeMyTextB()
    {
        targetText.text = "��������չƷ���������鱦�����а����ʹڡ�Ȩ�Ⱥ͹�������Ҫ�Ĺ������������⣬�����й�ʱ�ڵ������Ϳ��ס���ʷ���׺����������̡�";
    }
    public void ChangeMyTextC()
    {
        buildingInput.SetActive(true);
        buildingAI.talk(inputField.text);
    }
}
