using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro; // 引入TextMeshPro命名空间
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
        targetText.text = "金字塔是古埃及法老王的陵墓，建造于大约公元前2580年至公元前2560年间，以吉萨的胡夫金字塔最为著名。";
    }
    public void ChangeMyTextB()
    {
        targetText.text = "金字塔的建造目的是为了保护死后的法老王，并帮助他们进入来世。";
    }
    public void ChangeMyTextC()
    {
        buildingInput.SetActive(true);
        buildingAI.talk(inputField.text);
    }
}
