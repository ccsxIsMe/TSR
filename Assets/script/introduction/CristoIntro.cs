using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro; // 引入TextMeshPro命名空间
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
        targetText.text = "救世基督像建于1922年到1931年，旨在纪念巴西独立100周年并象征基督的爱护覆盖全巴西。它不仅是巴西的象征，也成为了世界和平与爱的象征。";
    }
    public void ChangeMyTextB()
    {
        targetText.text = "游客通常通过乘坐小火车从科尔科瓦多山脚开始上山，小火车穿过热带雨林，游客可以一路欣赏壮丽的自然风光直至山顶。";
    }
    public void ChangeMyTextC()
    {
        buildingInput.SetActive(true);
        buildingAI.talk(inputField.text);
    }
}
