using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro; // 引入TextMeshPro命名空间
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
        targetText.text = "伦敦塔起初是由威廉一世于1066年建立，目的是作为诺曼王朝权力的象征。经过几个世纪的扩建，它从一个木制要塞演变成了今天我们所见的石制城堡。伦敦塔的用途多样，曾经是皇家居所、武器库、宝库、监狱，甚至是皇家动物园。";
    }
    public void ChangeMyTextB()
    {
        targetText.text = "最著名的展品当属王冠珠宝，其中包括皇冠、权杖和国玺等重要的国家象征。此外，还有中古时期的武器和盔甲、历史文献和囚犯的铭刻。";
    }
    public void ChangeMyTextC()
    {
        buildingInput.SetActive(true);
        buildingAI.talk(inputField.text);
    }
}
