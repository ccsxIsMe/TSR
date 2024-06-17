using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro; // ����TextMeshPro�����ռ�
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
        targetText.text = "�����������Ҳ����Ϊ��������������1994�꽨�ɲ����⿪�š�����ҪĿ����Ϊ���ӹ㲥�ṩ��Ч�ķ������ͬʱ��Ϊ������һ����־�Խ�����չʾ���й����ִ����ɾͺͼ���������";
    }
    public void HistoryB()
    {
        targetText.text = "�������������ƺͽ�������������˶�����ս���������ȷ��������ȶ����Լ�����ڱ�������һ����ʷ�ƾõĳ����������ִ����Ľ��������⣬���ǵ����ĸ߶Ⱥ͹������������Ч�ش�������źŵķ���ͽ���Ҳ��һ��������ս��";
    }
    public void HistoryC()
    {
        targetText.text = "��1994�꽨��������������������������ɴμ�����������Ҫ��Ϊ��������㲥������������Ӧ���ֵ��ӵ��¼����ķ�չ�����⣬Ϊ�������ο����飬�۹���ʩ�ͷ���Ҳ�����˸��ƺ���չ��Ȼ������Щ�����͸��춼���ڲ��ı���������ṹ����۵Ļ����Ͻ��еġ�\r\n\r\n\r\n\r\n\r\n";
    }
    public void DesignA()
    {
        targetText.text = "�������������Ƴ�����Ϊ�˳�Ϊ������һ�������ر꼰�๦�ܽ�������������Ϊ���Ӻ͹㲥�źŵķ�������ͬʱҲ�ṩ�۹⡢���������ֹ��ܡ���������Դ�ڽ���ִ����������ʹ�ͳ�й�Ԫ�ص�����Դ���һ�����ִ��־����й���ɫ�Ľ�����";
    }
    public void DesignB()
    {
        targetText.text = "����������������ṹ�ص�����߶Ⱥ�����Ķ�����״������405�ף����������һ���𽥱�ϸ����ƣ�����װ��һ�����͵Ĺ۹�ƽ̨����ת������������Ʋ������ۣ�Ҳȷ����������ȶ��ԺͶԷ�������Ч�ֿ���";
    }
    public void DesignC()
    {
        targetText.text = "���������������ƺͽ�������У�������ս֮һ��ȷ��������ȶ��ԺͰ�ȫ�ԣ������ǿ��ǵ����������ķ����͵��������⣬���ĸ߶ȺͶ��صĽṹ���Ҫ��ʹ���Ƚ��Ľ������Ϻͼ�����ͬʱ�������Ŷ���Ҫ��ȷ�����ʵʩ���ӵĹ��̽����������ʵ����һ��־�Խ��������Ը����";
    }
    public void TourA()
    {
        targetText.text = "����������Ŀ���ʱ��ͨ��������9:00������9:30������������ʱ����ܻ���ݼ��ں������¼����е�������˽����ο��ڼƻ�����֮ǰ��ͨ���ٷ���վ��绰��ѯ���µĿ���ʱ�䡣";
    }
    public void TourB()
    {
        targetText.text = "�οͿ���ͨ������������Ĺٷ���վ���߹�Ʊ������ֱ�����ֳ�������Ʊ����Ʊͨ����������Ҫ�۹�ƽ̨�ķ���Ȩ�ޡ���ЩƱ��ѡ����ܻ�������ת�����ľͲ������������ɫ����Ϊ�����ܸ�����񣬽�����ϸ�鿴��ͬ��Ʊ��ѡ�";
    }
    public void TourC()
    {
        targetText.text = "�ι����������ʱ����Ҫ���λ�������Ŀ���ʽ�۹�ƽ̨�����ṩ��360�ȵı�������ȫ�����ر��������ʵ��������Ұ��Ϊ׳�ۡ����⣬��ת����Ҳ��һ�����㣬�οͿ�����������ʳ��ͬʱ�����ͱ����еľ�ɫ������ǰչ������������ӰԺ��4DӰԺ��Ϊ�ο��ṩ��Ԣ�����ֵ����顣";
    }
    public void askAI()
    {
        buildingInput.SetActive(true);
        buildingAI.talk(inputField.text);
    }
}
