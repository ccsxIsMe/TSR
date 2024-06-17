using UnityEngine;
using TMPro; // ����TextMeshPro�����ռ�
using UnityEngine.UI;
using System.IO;

public class SDUTextUpdater : MonoBehaviour
{
    public TMP_InputField inputField; // ָ��TextMeshPro Input Field������
    //public TextMeshProUGUI targetText; // ָ��Ҫ���µ�TextMeshPro�ı����������
    public Text targetText; // ������Unity��Text���ͣ�����TextMeshProUGUI
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
        targetText.text = "�Ե�...";
        robotWord.talk("�������ɽ����ѧ����У��֪��¥");
        //targetText.text = "֪��¥��ɽ����ѧ����У���ı�־�Խ���֮һ����Ҫ����ѧ���о��ͽ�ѧ�������¥���ѧ�����С�����������һ�壬����ִ�����ʩ�Ƚ���Ϊʦ���ṩ�����õ�ѧ���о�������";
        myAnimator.SetBool("startTalk", true);
        Invoke("stopAnim", 5f);
    }
    public void ChangeMyTextB()
    {
        robotText.SetActive(true);
        targetText.text = "�Ե�...";
        robotWord.talk("�������ɽ����ѧ����У���ٳ�");
        //targetText.text = "����У���Ĳٳ���ѧ���ճ��������У԰�������µ���Ҫ���ء����䱸�˱�׼���ܵ��������Լ�����������ʩ���Ǿٰ������������ճ�ѵ��������֮�ء�";
        myAnimator.SetBool("startTalk", true);
        Invoke("stopAnim", 5f);
    }
    public void ChangeMyTextC()
    {
        robotText.SetActive(true);
        targetText.text = "�Ե�...";
        robotWord.talk("�������ɽ����ѧ����У��������");
        //targetText.text = "����У������������һ���๦��������ʩ������֧���������������������Ŀ��Ҳ��������ѧУ�Ĵ��ͼ�����Ļ���ĳ������������ڲ���ʩ��ȫ���������ˮƽ�������µ�����";
        myAnimator.SetBool("startTalk", true);
        Invoke("stopAnim", 5f);
    }
    public void ChangeMyTextD()
    {
        robotText.SetActive(true);
        targetText.text = "�Ե�...";
        robotWord.talk(inputField.text);
        //targetText.text = "�ǳ���Ǹ��������ⲻ���ҵ�ҵ��Χ��";
        myAnimator.SetBool("startTalk", true);
        Invoke("stopAnim", 5f);
    }

    public void ChangeMyText1()
    {
        robotText.SetActive(true);
        targetText.text = "�Ե�...";
        robotWord.talk("�������ɽ����ѧ���԰У����ѧ¥");
        //targetText.text = "���԰У���Ľ�ѧ¥��Ҫ�������ѧԺ�����ѧ�ƵĽ�ѧ�����Щ�����ִ����̶ȸߣ��ṩ�˶�ý����ҡ������ʵ���ҵȽ�ѧ��Դ���������߼�������˲ŵ���Ҫ������";
        myAnimator.SetBool("startTalk", true);
        Invoke("stopAnim", 5f);
    }
    public void ChangeMyText2()
    {
        robotText.SetActive(true);
        targetText.text = "�Ե�...";
        robotWord.talk("�������ɽ����ѧ���ѧԺ");
        //targetText.text = "ɽ����ѧ���ѧԺ�Ǹ�У���ص�ѧԺ֮һ����Ҫ����������̺���������רҵ�˲š�ѧԺӵ��һ���Ľ�ʦ������Ƚ��Ľ�ѧ��ʩ��ע��ʵ�������ʹ�������������������֪����ҵ�������еĺ�����ϵ��";
        myAnimator.SetBool("startTalk", true);
        Invoke("stopAnim", 5f);
    }
    public void ChangeMyText3()
    {
        robotText.SetActive(true);
        targetText.text = "�Ե�...";
        robotWord.talk("�������ɽ����ѧ���԰У������¥");
        //targetText.text = "���԰У���Ŀ���¥��Ҫ�������ѧԺ���������л������о���������Щ�����������֧�ָ�ˮƽ�Ŀ��л���ڲ�����ʵ���ҡ��о����ĺʹ��¹����ң���ѧ�������ͿƼ����µ���Ҫ���ء�";
        myAnimator.SetBool("startTalk", true);
        Invoke("stopAnim", 5f);
    }
    public void ChangeMyText4()
    {
        robotText.SetActive(true);
        targetText.text = "�Ե�...";
        robotWord.talk(inputField.text);
        //targetText.text = "ɽ����ѧ���԰У��λ�ڼ����и��¼�������������ɽ����ѧΪ��Ӧ��Ϣʱ������������רҵ�˲������������һ���ִ���У������У��������������ѧ��ʩ�Ƚ�����Ҫ�е����ѧԺ��ѧ�ƵĽ�ѧ���о�������";
        myAnimator.SetBool("startTalk", true);
        Invoke("stopAnim", 5f);
    }

    private void stopAnim()
    {
        myAnimator.SetBool("startTalk", false);
    }
}
