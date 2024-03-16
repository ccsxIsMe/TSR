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
    public void HistoryA()
    {
        targetText.text = "埃菲尔铁塔最初是为1889年巴黎世界博览会而建造的，旨在庆祝法国大革命100周年，并展示法国的工程技术和工业实力。它最初遭到了许多批评，但随后成为了法国乃至全世界最著名的地标之一。";
    }
    public void HistoryB()
    {
        targetText.text = "埃菲尔铁塔的建造面临了技术上的挑战，包括如何设计一个既稳固又能承受风力的结构。此外，它还面临来自公众和艺术家群体的强烈反对，许多人认为这个结构过于工业化，会破坏巴黎的美景。尽管如此，工程团队成功克服了这些挑战，按时完成了铁塔的建设。";
    }
    public void HistoryC()
    {
        targetText.text = "埃菲尔铁塔的设计和建造不仅是工程技术的一个重要里程碑，也为之后的高塔和天线塔建设提供了参考。它的成功挑战了当时对建筑美学和工程实践的看法，开辟了现代建筑和工程领域的新方向。此外，铁塔成为了全球识别度极高的符号，影响了人们对于纪念性建筑的看法和价值。";
    }
    public void DesignA()
    {
        targetText.text = "埃菲尔铁塔的设计采用了铁框架结构，这种结构不仅轻量但也极其坚固，能够有效分散风力压力。塔的四脚扩展开来，形成了一个坚实的基础，这样可以增加其稳定性，同时减轻对地面的压力。设计师古斯塔夫·埃菲尔还利用了先进的计算方法，确保塔体即使在强风中也能保持稳定。";
    }
    public void DesignB()
    {
        targetText.text = "埃菲尔铁塔的设计融合了功能主义和一定的装饰性元素，这在当时是非常创新的。塔的结构本身既是其功能的直接体现，也具有美学价值，其交错的金属梁和螺旋形的铁架不仅确保了结构的稳定性，也创造了独特的视觉效果。此外，铁塔顶部的装饰性拱门和观景台，增添了一丝浪漫主义的风格。";
    }
    public void DesignC()
    {
        targetText.text = "埃菲尔铁塔的设计和建造过程中引入了多项创新技术，包括使用蒸汽动力的起重机、桅杆和索具来运输和安装重达7吨的铁件。此外，为了精确安装这些铁件，设计团队采用了详细的数学计算和物理测试，确保每个部分都能精确匹配。塔的铁件在工厂预制，现场组装时使用了近200万个铆钉，这一过程在当时代表了极高的工程和组织水平。";
    }
    public void TourA()
    {
        targetText.text = "埃菲尔铁塔共有三个观景台，位于不同的高度。第一层观景台高57米，提供了一个宽阔的平台和小商店，还有一个小型电影院播放有关塔的历史的影片。第二层观景台高115米，设有餐厅，从这里可以享受到壮观的巴黎全景。最高的第三层观景台则位于276米的高度，提供了对巴黎市景无与伦比的全方位视角。";
    }
    public void TourB()
    {
        targetText.text = "虽然现场购票是可能的，但强烈建议提前在线预订票，特别是在旅游高峰期间。预订票可以减少等待时间，并确保您能够在希望的日期和时间访问。对于希望访问顶层观景台的游客，预订尤为重要，因为票数有限。";
    }
    public void TourC()
    {
        targetText.text = "访问埃菲尔铁塔时，穿着舒适的鞋子是很重要的，因为可能需要爬楼梯或在各个层级间走动。此外，考虑到巴黎的天气变化，携带适当的防雨或防晒用品也很重要。为了避免人群，建议在早晨或晚上进行参观。最后，不要忘记带上相机，从塔上可以拍摄到巴黎一些最美丽的照片。";
    }
    public void askAI()
    {
        buildingInput.SetActive(true);
        buildingAI.talk(inputField.text);
    }
}
