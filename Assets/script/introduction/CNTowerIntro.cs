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
    private GetUrlWorld buildingAI;

    private void Start()
    {
        buildingAI = building.GetComponent<GetUrlWorld>();
    }
    public void HistoryA()
    {
        targetText.text = "中央电视塔，也被称为北京电视塔，于1994年建成并对外开放。其主要目的是为电视广播提供高效的发射服务，同时作为北京的一个标志性建筑，展示了中国的现代化成就和技术进步。";
    }
    public void HistoryB()
    {
        targetText.text = "中央电视塔的设计和建设过程中面临了多重挑战，包括如何确保塔体的稳定性以及如何在北京这样一个历史悠久的城市中融入现代化的建筑。此外，考虑到塔的高度和功能需求，如何有效地处理电视信号的发射和接收也是一个技术挑战。";
    }
    public void HistoryC()
    {
        targetText.text = "自1994年建成以来，中央电视塔经历了若干次技术升级，主要是为了提升其广播发射能力和适应数字电视等新技术的发展。此外，为了提升游客体验，观光设施和服务也进行了改善和扩展。然而，这些升级和改造都是在不改变塔的主体结构和外观的基础上进行的。\r\n\r\n\r\n\r\n\r\n";
    }
    public void DesignA()
    {
        targetText.text = "中央电视塔的设计初衷是为了成为北京的一个显著地标及多功能建筑，它不仅作为电视和广播信号的发射塔，同时也提供观光、餐饮和娱乐功能。设计灵感来源于结合现代建筑技术和传统中国元素的理念，以创造一个既现代又具有中国特色的建筑。";
    }
    public void DesignB()
    {
        targetText.text = "中央电视塔的显著结构特点是其高度和塔身的独特形状。塔高405米，塔身采用了一个逐渐变细的设计，顶部装有一个大型的观光平台和旋转餐厅。这种设计不仅美观，也确保了塔体的稳定性和对风力的有效抵抗。";
    }
    public void DesignC()
    {
        targetText.text = "在中央电视塔的设计和建造过程中，最大的挑战之一是确保塔体的稳定性和安全性，尤其是考虑到北京地区的风力和地震活动。此外，塔的高度和独特的结构设计要求使用先进的建筑材料和技术。同时，工程团队需要精确计算和实施复杂的工程解决方案，以实现这一标志性建筑的设计愿景。";
    }
    public void TourA()
    {
        targetText.text = "中央电视塔的开放时间通常从早上9:00到晚上9:30。不过，开放时间可能会根据季节和特殊事件进行调整，因此建议游客在计划访问之前，通过官方网站或电话查询最新的开放时间。";
    }
    public void TourB()
    {
        targetText.text = "游客可以通过中央电视塔的官方网站在线购票，或者直接在现场购买门票。门票通常包括对主要观光平台的访问权限。有些票务选项可能还包括旋转餐厅的就餐体验或其他特色服务。为了享受更多服务，建议详细查看不同的票务选项。";
    }
    public void TourC()
    {
        targetText.text = "参观中央电视塔时，不要错过位于塔顶的开放式观光平台，它提供了360度的北京城市全景，特别是在晴朗的日子里，视野尤为壮观。此外，旋转餐厅也是一大亮点，游客可以在享用美食的同时，欣赏北京市的景色逐渐在眼前展开。还有数字影院和4D影院，为游客提供了寓教于乐的体验。";
    }
    public void askAI()
    {
        buildingInput.SetActive(true);
        buildingAI.talk(inputField.text);
    }
}
