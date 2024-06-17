using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro; // 引入TextMeshPro命名空间
using UnityEngine.UI;
using static UnityEngine.Rendering.DebugUI;

public class RobeRoleIntro : MonoBehaviour
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
        targetText.text = "自由女神像由法国雕塑家弗雷德里克·奥古斯特·巴托尔迪设计，内部铁架由著名的工程师古斯塔夫·埃菲尔设计。它是作为美国独立100周年纪念而由法国人赠送给美国的礼物，旨在庆祝两国之间的友谊和共同的自由与民主价值观。雕像于1886年正式揭幕。";
    }
    public void HistoryB()
    {
        targetText.text = "自由女神像象征着自由和民主，是迎接到达美国的移民的标志，象征着他们对新生活的希望和追求。她的右手高举火炬，左手持有宣布美国独立的《独立宣言》，脚下碎链象征摆脱压迫。";
    }
    public void HistoryC()
    {
        targetText.text = "自由女神像主要由铜板制成，外部覆盖在一个巨大的铁架构上，这个铁架由古斯塔夫·埃菲尔设计。在建造过程中的一个主要挑战是如何设计一个既结实又能抵御强风的结构。此外，筹集建造和运输雕像到美国的资金也是一个挑战，这需要两国人民的共同努力和捐款。雕像最初在法国制造和组装，然后拆解成350片，运输到美国重新组装。";
    }
    public void DesignA()
    {
        targetText.text = "自由女神像的设计灵感来源于罗马自由女神的形象，象征着自由和民主。设计者弗雷德里克·奥古斯特·巴托尔迪希望通过这座雕像传达解放的信息，特别是在法国和美国共同庆祝美国独立百年和两国之间友谊的背景下。女神的右手高举的火炬和左手中的宣言板，上面刻有美国独立宣言的签署日期，都富有深刻的象征意义。";
    }
    public void DesignB()
    {
        targetText.text = "自由女神像主要使用了覆铜技术，采用薄铜片覆盖在铁框架上。这种技术允许雕像展示复杂的细节同时保持相对轻盈，便于跨海运输并在纽约港的小岛上重建。雕像的内部结构由著名的工程师古斯塔夫·埃菲尔设计，他使用了铁桁架结构来支撑铜皮，确保雕像的稳定性和耐久性。";
    }
    public void DesignC()
    {
        targetText.text = "自由女神像设计中包含多个象征元素，其中最为显著的包括她高高举起的火炬，象征着启迪世界的光明；她左手中的宣言板，上面刻有“JULY IV MDCCLXXVI”（1776年7月4日），代表美国独立宣言的签署日期，象征着自由和独立的精神；雕像脚下的破碎的锁链和镣铐，象征摆脱压迫。此外，她头顶的七角星冠表示照亮世界的七大洲和四大洋，强调自由的普遍性。";
    }
    public void TourA()
    {
        targetText.text = "访问自由女神像通常需要乘坐渡轮。游客可以从纽约的巴特里公园或新泽西的自由州立公园乘坐渡轮前往。所有前往自由岛和埃利斯岛的游客都必须使用官方授权的渡轮服务，渡轮票通常包括岛屿入场费。建议提前在线购票，以确保乘坐所需时间的渡轮。";
    }
    public void TourB()
    {
        targetText.text = "是的，强烈建议提前在线预订参观自由女神像的票，尤其是如果您打算访问塔冠或基座的展览。预订可以确保您选择的日期和时间可用，特别是在旅游高峰季节，因为票务可能会迅速售罄。基座和塔冠的访问权限限制严格，需要特别的票种。";
    }
    public void TourC()
    {
        targetText.text = "访问自由女神像时，请注意服装舒适，特别是穿着合适的鞋子，因为可能需要在岛上步行或爬楼梯。所有访客在乘坐渡轮和进入自由女神像基座或塔冠前都必须接受安全检查。由于天气变化可能会影响渡轮服务和参观体验，请检查天气预报并相应准备。此外，尽量带上必要的防晒霜和水，特别是在炎热的夏季。";
    }
    public void askAI()
    {
        buildingInput.SetActive(true);
        buildingAI.talk(inputField.text);
    }
}
