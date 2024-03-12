using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro; // 引入TextMeshPro命名空间
using UnityEngine.UI;
using static UnityEngine.Rendering.DebugUI;

public class BisaIntro : MonoBehaviour
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
        targetText.text = "斜塔的倾斜是因为其建造在一个软弱的地基上，导致塔身一侧下沉。尽管在建造过程中尝试了各种方法来纠正这一倾斜，但塔还是继续倾斜，成为其标志性特征。";
    }
    public void ChangeMyTextB()
    {
        targetText.text = "比萨斜塔大约高56米（约184英尺），目前的倾斜度约为3.97度。由于稳定化工程的介入，这个倾斜度已被成功减少，以防止进一步的倾斜。";
    }
    public void ChangeMyTextC()
    {
        buildingInput.SetActive(true);
        buildingAI.talk(inputField.text);
    }
}
