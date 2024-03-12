using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro; // ����TextMeshPro�����ռ�
using UnityEngine.UI;
using static UnityEngine.Rendering.DebugUI;

public class RobeRoleIntro : MonoBehaviour
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
        targetText.text = "����Ů���������������������������������1886���ɷ������͸����������������ɺ�������Ҳ����ʷ�ϵִ�����������Ļ�ӭ������";
    }
    public void ChangeMyTextB()
    {
        targetText.text = "���ܼҸ��׵���ˡ��¹�˹�ء����ж������������Ů���񣬶������İ��ƶ��������ʦ��˹���򡤰��ƶ��������ڲ����ܵ���ƺͽ��졣";
    }
    public void ChangeMyTextC()
    {
        buildingInput.SetActive(true);
        buildingAI.talk(inputField.text);
    }
}
