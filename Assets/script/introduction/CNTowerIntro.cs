using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro; // 引入TextMeshPro命名空间
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
        targetText.text = "中央电视塔高约405米，是世界上较高的电视塔之一，虽然它不是世界上最高的塔，但它在全球电视塔中排名前列，是北京的重要地标之一。";
    }
    public void ChangeMyTextB()
    {
        targetText.text = "中央电视塔不仅提供观光服务，还设有旋转餐厅、数字影院、展览厅等设施。游客可以在这里享受美食、观看展览，体验高科技娱乐项目。";
    }
    public void ChangeMyTextC()
    {
        buildingInput.SetActive(true);
        buildingAI.talk(inputField.text);
    }
}
