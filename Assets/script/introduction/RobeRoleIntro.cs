using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro; // 引入TextMeshPro命名空间
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
        targetText.text = "自由女神像是美国独立和美法友谊的象征，于1886年由法国赠送给美国。它代表自由和民主，也是历史上抵达美国的移民的欢迎象征。";
    }
    public void ChangeMyTextB()
    {
        targetText.text = "雕塑家弗雷德里克·奥古斯特·巴托尔迪设计了自由女神像，而著名的埃菲尔铁塔设计师古斯塔夫·埃菲尔则负责其内部铁架的设计和建造。";
    }
    public void ChangeMyTextC()
    {
        buildingInput.SetActive(true);
        buildingAI.talk(inputField.text);
    }
}
