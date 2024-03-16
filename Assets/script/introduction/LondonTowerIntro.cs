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
    public void HistoryA()
    {
        targetText.text = "伦敦塔最初由威廉一世（也被称为征服者威廉）在1066年英格兰征服后建造，目的是为了巩固诺曼人对英格兰的控制，同时作为一种象征威廉权威的标志。塔楼最初是作为王室的居所及军事要塞而建立的，随着时间的推移，其功能不断扩展，包括作为监狱、兵工厂、国家档案库和皇家铸币厂等。";
    }
    public void HistoryB()
    {
        targetText.text = "伦敦塔的用途随着历史而变化，包括作为皇家宫殿、兵工厂、宝物库、国家档案保管所、皇家铸币厂、公共记录办公室、观光景点以及监狱。特别是作为监狱，它曾关押过许多著名的囚犯，包括安妮·博林、托马斯·莫尔、伊丽莎白一世（在她成为女王前）等。";
    }
    public void HistoryC()
    {
        targetText.text = "伦敦塔中的乌鸦与一项古老的传说相连，据说如果这些乌鸦离开了伦敦塔，那么塔和王国都将倒塌。为了防止这个预言成真，塔内一直饲养着至少六只乌鸦，并由专人负责照顾它们。这些乌鸦被认为是塔的保护者，是伦敦塔历史和文化中不可分割的一部分。";
    }
    public void DesignA()
    {
        targetText.text = "伦敦塔的建筑风格主要是诺曼式（Norman）建筑，这种风格属于罗曼式建筑的一种，特点是厚重的墙壁、圆形拱门、坚固的塔楼和少量的装饰。这种风格代表了中世纪早期的建筑特征，尤其是11世纪至12世纪期间。伦敦塔的白塔（White Tower），作为最古老的部分，是诺曼式建筑的典型代表。";
    }
    public void DesignB()
    {
        targetText.text = "伦敦塔自从1066年由威廉一世建立以来，经历了多次扩建和改造。12世纪和13世纪，理查德一世和亨利三世分别扩建了塔区，增加了围墙和防御塔。在14世纪，爱德华一世进一步增强了塔的防御能力，扩建了围墙并增设了护城河。此外，后续的君主也根据需要对塔进行了多次修改和增建，使其成为一个复杂的建筑群。";
    }
    public void DesignC()
    {
        targetText.text = "伦敦塔的设计充分体现了其作为军事要塞的功能。厚实的墙壁、护城河、多层防御系统和战略位置（位于泰晤士河边）都增强了其防御能力。塔内的布局也为防御作战做了准备，包括箭窗和抛油孔等设计，使得守军可以有效地抵御外部攻击。此外，塔的高墙和孤立的塔楼不仅用于监视和防守，也用于展示权力和威慑潜在的攻击者。";
    }
    public void TourA()
    {
        targetText.text = "参观伦敦塔需要购票。游客可以选择在线预订门票，这样不仅方便而且通常比现场购票更便宜。还有家庭票和团体票等多种票务选项，以满足不同游客的需求。此外，还有一些特殊的参观项目，如夜间参观等，这些可能需要单独预订。";
    }
    public void TourB()
    {
        targetText.text = "伦敦塔内有许多不容错过的看点，包括王冠珠宝展览室、白塔、中世纪王宫、囚犯展览以及乌鸦。王冠珠宝展览室展出了英国王室的珠宝和王冠，是最受欢迎的展览之一。白塔是伦敦塔最古老的部分，展示了武器和盔甲。此外，游客还可以参加由“叶曼卫士”（也称为比菲特）进行的导览，了解伦敦塔的历史和故事。";
    }
    public void TourC()
    {
        targetText.text = "伦敦塔的开放时间因季节而异，通常在夏季（3月至10月）的开放时间较长。建议提前查看官方网站以获取最准确的开放时间。一般来说，参观伦敦塔至少需要2-3小时，以充分体验其历史遗迹、展览和活动。如果时间允许，花更多时间探索会更好，因为伦敦塔内有许多故事和细节值得细细品味。";
    }
    public void askAI()
    {
        buildingInput.SetActive(true);
        buildingAI.talk(inputField.text);
    }
}
