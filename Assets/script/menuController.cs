using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.XR;

public class menuController: MonoBehaviour
{
    public static InputDevice[] hands = new InputDevice[2];//˫��
    public GameObject targetObject;
    private bool isGripPressed = false;

    void Start()
    {
        hands[0] = InputDevices.GetDeviceAtXRNode(XRNode.LeftHand);//����
        hands[1] = InputDevices.GetDeviceAtXRNode(XRNode.RightHand);//����
    }

    // Update is called once per frame
    void Update()
    {
        if (hands[1].TryGetFeatureValue(CommonUsages.gripButton, out bool istriggerButton) && istriggerButton)
        {
            Debug.Log("���ְ����˰��trigger��");
            if (!isGripPressed)
            {
                targetObject.SetActive(!targetObject.activeSelf);
                isGripPressed = true;
            }
        }
        else
        {
            // ��ץ�ռ��ͷ�ʱ�����ð���״̬��¼
            isGripPressed = false;
        }
    }
}