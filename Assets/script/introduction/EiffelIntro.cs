using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro; // 引入TextMeshPro命名空间
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
        targetText.text = "埃菲尔铁塔高300米，至今依然是巴黎市区内最高的建筑物。";
    }
    public void ChangeMyTextB()
    {
        targetText.text = "铁塔分为三层，游客可以乘坐电梯或者步行上楼。从顶层观景台上，可以享受到令人惊叹的巴黎全景。";
    }
    public void ChangeMyTextC()
    {
        buildingInput.SetActive(true);
        buildingAI.talk(inputField.text);
    }
}
