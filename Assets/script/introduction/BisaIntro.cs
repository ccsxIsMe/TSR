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
    private GetUrlWorld buildingAI;

    private void Start()
    {
        buildingAI = building.GetComponent<GetUrlWorld>();
    }
    public void HistoryA()
    {
        targetText.text = "比萨斜塔的建造始于1173年，作为比萨大教堂的钟楼。这座塔最初的目的是展示比萨城市及其海军力量的财富和技术成就。比萨当时是一个强大的海上共和国，斜塔的建造旨在体现其地位和繁荣。";
    }
    public void HistoryB()
    {
        targetText.text = "比萨斜塔之所以倾斜，是因为它建立在一片软弱的地基上，这使得塔的重量没有均匀分布。在建造过程中，土壤的下沉导致了塔体的倾斜。尽管在建造期间尝试了多种方法来纠正这一倾斜，但塔体继续倾斜，成为了它著名的特征之一。";
    }
    public void HistoryC()
    {
        targetText.text = "直到20世纪末，比萨斜塔的倾斜度确实一直在逐渐增加，引发了对其安全的严重担忧。1990年代，进行了一系列的工程干预，以稳定塔体并减少其倾斜度。这些措施包括从塔下移除土壤以及在塔的基座周围安装锚杆，成功地稳定了塔体，确保了其长期安全。";
    }
    public void DesignA()
    {
        targetText.text = "比萨斜塔展现了典型的罗马式建筑风格，特征包括使用大量的圆拱和圆柱，以及其白色大理石的外观。塔的设计细节和装饰性元素体现了中世纪意大利的建筑美学，其美丽的外观和精细的雕刻工作突出了罗马式建筑的特点。";
    }
    public void DesignB()
    {
        targetText.text = "比萨斜塔最初设计为比萨大教堂的钟楼，其结构旨在容纳教堂的钟声，这解释了其高耸和突出的结构。设计中包括了多层环形拱廊，这不仅增加了建筑的美感，也有助于声音的传播。虽然倾斜并非设计中预期的特点，但该设计最终必须适应并加以稳定化以防进一步倾斜。";
    }
    public void DesignC()
    {
        targetText.text = "在比萨斜塔的建造过程中，当注意到塔开始倾斜时，建造者试图通过增加一侧的高度来纠正这一倾斜，希望通过这种方式使结构直立。这一调整使得塔的一侧比另一侧更高，尽管这种做法减缓了倾斜的速度，但并未根本解决问题。20世纪90年代的稳定化工程采用了更现代和科学的方法来减少塔的倾斜并确保其安全。";
    }
    public void TourA()
    {
        targetText.text = "比萨斜塔的开放时间根据季节有所不同。通常在夏季（4月至9月）开放时间较长，从早上8:30或9:00开始，到晚上8:00或10:00结束。在冬季（10月至3月），开放时间可能会短些，从上午9:00或10:00开始，到下午5:00或7:00结束。建议游客提前查看最新的开放时间，并根据计划安排访问。";
    }
    public void TourB()
    {
        targetText.text = "是的，强烈建议游客提前在线预订比萨斜塔的门票，尤其是在旅游高峰期间。这样可以确保您能选择合适的访问时间，避免现场长时间排队等待。在线预订还经常提供各种票务选项，包括快速通道票等。";
    }
    public void TourC()
    {
        targetText.text = "参观比萨斜塔时，需要注意的主要事项包括穿着舒适的鞋子，因为您需要爬楼梯到达顶部；保持身体健康状态，特别是心脏和呼吸系统没有问题的人，因为爬塔是一项体力活动；还应注意保护个人财物，尤其是在人多的地方。此外，由于塔内空间有限，参观时可能需要等待进入。";
    }
    public void askAI()
    {
        buildingInput.SetActive(true);
        buildingAI.talk(inputField.text);
    }
}
