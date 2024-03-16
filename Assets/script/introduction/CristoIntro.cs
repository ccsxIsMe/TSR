using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro; // 引入TextMeshPro命名空间
using UnityEngine.UI;
using static UnityEngine.Rendering.DebugUI;

public class CristoIntro : MonoBehaviour
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
        targetText.text = "救世基督像建造于1922年到1931年间，其建造是为了纪念巴西独立100周年，并象征着巴西人民对和平的渴望以及对基督教信仰的深厚情感。这座雕像是巴西与法国之间合作的成果，设计者是法国雕塑家保罗·兰多斯基，而建筑师是巴西人海托尔·达席尔瓦·科斯塔。";
    }
    public void HistoryB()
    {
        targetText.text = "科尔科瓦多山因其独特的地理位置和高度被选为救世基督像的立地。山顶提供了一个几乎360度的完美视角，可俯瞰整个里约热内卢和周边地区，包括糖面包山、科帕卡巴纳海滩和里约热内卢湾，使雕像不仅成为宗教和文化的象征，也成为吸引游客的绝佳观光点。";
    }
    public void HistoryC()
    {
        targetText.text = "救世基督像的建设面临了多项挑战，包括复杂的运输问题和恶劣的工作条件。所有建筑材料和工人都需要通过狭窄的山路或使用缆车运到近700米高的山顶。此外，雕像的建造还需要创新的工程技术，特别是在安装重达数吨的混凝土和石棉部件时。尽管面临困难，项目团队还是克服了这些挑战，完成了这座雄伟雕像的建设。";
    }
    public void DesignA()
    {
        targetText.text = "救世基督像的设计师是法国雕塑家保罗·兰多斯基（Paul Landowski）。他的设计理念旨在通过这座雕像表达和平与爱的普世价值，同时展现耶稣基督的慈爱与庇护。兰多斯基通过救世基督的开放双臂，象征着拥抱所有人，不分种族、国籍或信仰。";
    }
    public void DesignB()
    {
        targetText.text = "救世基督像主要使用了钢筋混凝土作为结构支撑，外层则覆盖了一层由石棉瓷砖制成的马赛克。这种材料选择使得雕像不仅坚固耐用，能够抵抗恶劣的天气条件，而且表面的马赛克瓷砖反射阳光，使雕像在不同的光线下展现出独特的光泽和生动性。";
    }
    public void DesignC()
    {
        targetText.text = "救世基督像高约30米（98英尺），臂展宽约28米（92英尺），座落在约8米（26英尺）高的底座上，总体高度达到38米（125英尺）。这样的构造和尺寸使得救世基督像成为世界上最大的耶稣雕像之一，其宏伟的体态和独特的姿势在全球范围内具有极高的识别度，成为巴西乃至全世界的文化和宗教象征。";
    }
    public void TourA()
    {
        targetText.text = "到达救世基督像的常见方式是乘坐从里约热内卢市区出发的小火车。这条小火车穿过提若卡森林（Tijuca Forest），直达科尔科瓦多山顶。除了小火车，游客还可以选择乘坐小巴、出租车或参加旅行团。近年来，还引入了步行或骑自行车上山的方式，但这要求良好的体力条件。";
    }
    public void TourB()
    {
        targetText.text = "是的，参观救世基督像需要购买入场票。票价可能根据访问方式（如乘坐小火车、小巴）有所不同。建议游客提前在线购票，以确保入场，并选择合适的访问时间。票价信息和购票服务通常可以在官方网站上找到。";
    }
    public void TourC()
    {
        targetText.text = "参观救世基督像时，建议游客选择清晨或傍晚时分，这时候人流相对较少，可以更好地欣赏雕像和周围风景。同时，穿着舒适的鞋子和衣物，准备好防晒霜和水，因为里约热内卢的阳光可能非常强烈。此外，别忘了带上相机，从山顶上可以拍摄到壮观的里约热内卢全景。";
    }
    public void askAI()
    {
        buildingInput.SetActive(true);
        buildingAI.talk(inputField.text);
    }
}
