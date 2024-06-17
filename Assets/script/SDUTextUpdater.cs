using UnityEngine;
using TMPro; // 引入TextMeshPro命名空间
using UnityEngine.UI;
using System.IO;

public class SDUTextUpdater : MonoBehaviour
{
    public TMP_InputField inputField; // 指向TextMeshPro Input Field的引用
    //public TextMeshProUGUI targetText; // 指向要更新的TextMeshPro文本对象的引用
    public Text targetText; // 现在是Unity的Text类型，不是TextMeshProUGUI
    public GameObject robotText;
    public GameObject robot;
    public GameObject robotAI;
    private Animator myAnimator;
    private GetUrl robotWord;

    void Start()
    {
        myAnimator = robot.GetComponent<Animator>();
        robotWord = robotAI.GetComponent<GetUrl>();
        //ChangeMyText1();
        //string PathName = Path.Combine(Application.persistentDataPath, "1111.osgb");
        //targetText.text = PathName;
    }

    public void ChangeMyTextA()
    {
        robotText.SetActive(true);
        targetText.text = "稍等...";
        robotWord.talk("请你介绍山东大学中心校区知新楼");
        //targetText.text = "知新楼是山东大学中心校区的标志性建筑之一，主要用于学术研究和教学活动。这座楼宇集教学、科研、行政功能于一体，设计现代，设施先进，为师生提供了良好的学术研究环境。";
        myAnimator.SetBool("startTalk", true);
        Invoke("stopAnim", 5f);
    }
    public void ChangeMyTextB()
    {
        robotText.SetActive(true);
        targetText.text = "稍等...";
        robotWord.talk("请你介绍山东大学中心校区操场");
        //targetText.text = "中心校区的操场是学生日常体育活动和校园体育赛事的主要场地。它配备了标准的跑道、足球场以及其他体育设施，是举办大型体育活动和日常训练的理想之地。";
        myAnimator.SetBool("startTalk", true);
        Invoke("stopAnim", 5f);
    }
    public void ChangeMyTextC()
    {
        robotText.SetActive(true);
        targetText.text = "稍等...";
        robotWord.talk("请你介绍山东大学中心校区体育馆");
        //targetText.text = "中心校区的体育馆是一个多功能体育设施，不仅支持篮球、排球等室内体育项目，也经常用作学校的大型集会和文化活动的场所。体育馆内部设施齐全，能满足高水平体育赛事的需求。";
        myAnimator.SetBool("startTalk", true);
        Invoke("stopAnim", 5f);
    }
    public void ChangeMyTextD()
    {
        robotText.SetActive(true);
        targetText.text = "稍等...";
        robotWord.talk(inputField.text);
        //targetText.text = "非常抱歉，这个问题不在我的业务范围内";
        myAnimator.SetBool("startTalk", true);
        Invoke("stopAnim", 5f);
    }

    public void ChangeMyText1()
    {
        robotText.SetActive(true);
        targetText.text = "稍等...";
        robotWord.talk("请你介绍山东大学软件园校区教学楼");
        //targetText.text = "软件园校区的教学楼主要用于软件学院及相关学科的教学活动。这些建筑现代化程度高，提供了多媒体教室、计算机实验室等教学资源，是培养高技能软件人才的重要场所。";
        myAnimator.SetBool("startTalk", true);
        Invoke("stopAnim", 5f);
    }
    public void ChangeMyText2()
    {
        robotText.SetActive(true);
        targetText.text = "稍等...";
        robotWord.talk("请你介绍山东大学软件学院");
        //targetText.text = "山东大学软件学院是该校的重点学院之一，主要培养软件工程和相关领域的专业人才。学院拥有一流的教师队伍和先进的教学设施，注重实践能力和创新能力的培养，与多家知名企业有着密切的合作关系。";
        myAnimator.SetBool("startTalk", true);
        Invoke("stopAnim", 5f);
    }
    public void ChangeMyText3()
    {
        robotText.SetActive(true);
        targetText.text = "稍等...";
        robotWord.talk("请你介绍山东大学软件园校区科研楼");
        //targetText.text = "软件园校区的科研楼主要用于软件学院及其他科研机构的研究工作。这些建筑设计用于支持高水平的科研活动，内部设有实验室、研究中心和创新工作室，是学术交流和科技创新的重要基地。";
        myAnimator.SetBool("startTalk", true);
        Invoke("stopAnim", 5f);
    }
    public void ChangeMyText4()
    {
        robotText.SetActive(true);
        targetText.text = "稍等...";
        robotWord.talk(inputField.text);
        //targetText.text = "山东大学软件园校区位于济南市高新技术开发区，是山东大学为适应信息时代对软件及相关专业人才需求而建立的一个现代化校区。该校区环境优美，教学设施先进，主要承担软件学院等学科的教学和研究工作。";
        myAnimator.SetBool("startTalk", true);
        Invoke("stopAnim", 5f);
    }

    private void stopAnim()
    {
        myAnimator.SetBool("startTalk", false);
    }
}
