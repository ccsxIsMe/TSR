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
    private GetUrlWorld buildingAI;

    private void Start()
    {
        buildingAI = building.GetComponent<GetUrlWorld>();
    }
    public void HistoryA()
    {
        targetText.text = "埃及金字塔主要建造于古埃及王国时期，大约公元前2600年至公元前2500年间，特别是在第四王朝时期。金字塔最初的用途是作为法老王的陵墓，用来为他们的来世提供保护，并存放供奉品和贵重物品。";
    }
    public void HistoryB()
    {
        targetText.text = "胡夫金字塔（又称吉萨大金字塔）是最古老且最大的金字塔，位于埃及吉萨金字塔群中。它建于约公元前2580年到公元前2560年，是古代世界七大奇迹中唯一至今仍然存在的。胡夫金字塔之所以特别，不仅因为其规模和构造的复杂性，还因为它展示了古埃及人在工程、数学和天文学上的高超技能。";
    }
    public void HistoryC()
    {
        targetText.text = "金字塔的建造技术体现了古埃及人在工程和组织方面的非凡能力。他们使用了大量的石灰石和花岗岩块石，这些石块需要从远处运来，然后精确地切割和堆砌。尽管具体的建造技术仍有许多未解之谜，但研究者普遍认为，这需要了复杂的工程规划、劳动力组织以及高度发展的工具和测量技术。此外，一些理论提出使用了斜坡和杠杆等辅助工具来帮助移动和定位重达数吨的石块。";
    }
    public void DesignA()
    {
        targetText.text = "金字塔的设计利用了简单但极其有效的原理来保证其稳定性，主要是通过其庞大的质量和形状。它们的基座广阔，随着高度的增加逐渐收窄，这样的结构设计使得重心保持在低位，从而大大增强了结构的稳定性。此外，使用了精确的石块切割和堆砌技术，确保了结构的密封和耐久性。";
    }
    public void DesignB()
    {
        targetText.text = "古埃及人使用了一系列的先进技术和工具来解决建造金字塔时的对准和测量问题。他们使用了绳子和木制的标尺来测量距离和角度，确保金字塔的四边精确对齐至四个基本方向（北、南、东、西）。此外，古埃及人还利用了星星，特别是北极星，来帮助确定方向，确保金字塔的精确对准。";
    }
    public void DesignC()
    {
        targetText.text = "金字塔内部的通道和室室设计不仅仅是为了安置法老的遗体和陪葬品，而且充满了象征意义，反映了古埃及人对于死后世界的信仰和宗教仪式。例如，陵墓室通常位于金字塔的中心或稍下方的位置，象征法老与地下世界的连接。此外，一些通道被认为是象征性的，指向特定的星座，反映了古埃及人对天文学的深入了解和死后生命的信仰。";
    }
    public void TourA()
    {
        targetText.text = "参观金字塔时，建议穿着舒适的鞋子和适合在沙漠环境下行走的衣物。太阳镜、帽子和防晒霜对保护皮肤免受强烈阳光伤害也很重要。建议带足够的水保持水分，并注意保持身体健康。此外，对于进入金字塔内部的游客，应准备好在狭窄和封闭的空间内移动。";
    }
    public void TourB()
    {
        targetText.text = "不是所有的金字塔都对公众开放。埃及政府出于保护文物和安全的考虑，对部分金字塔实行了限制访问。开放的金字塔可能会根据考古活动和维护工作而有所变化。对于开放的金字塔，可能需要额外购买门票。建议提前查看最新的访问信息。";
    }
    public void TourC()
    {
        targetText.text = "避免高温和人潮，参观金字塔的最佳时间是早上早些时候或晚上接近傍晚时分。这些时段不仅人较少，温度也更加宜人。此外，冬季（11月至2月）是访问埃及的旺季，此时气候凉爽，更适合户外活动。避开夏季的高温是明智的选择。";
    }
    public void askAI()
    {
        buildingInput.SetActive(true);
        buildingAI.talk(inputField.text);
    }
}
