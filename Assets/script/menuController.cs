using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.XR;

public class menuController: MonoBehaviour
{
    public static InputDevice[] hands = new InputDevice[2];//双手
    public GameObject targetObject;
    private bool isGripPressed = false;

    void Start()
    {
        hands[0] = InputDevices.GetDeviceAtXRNode(XRNode.LeftHand);//左手
        hands[1] = InputDevices.GetDeviceAtXRNode(XRNode.RightHand);//右手
    }

    // Update is called once per frame
    void Update()
    {
        if (hands[1].TryGetFeatureValue(CommonUsages.gripButton, out bool istriggerButton) && istriggerButton)
        {
            Debug.Log("右手按下了扳机trigger键");
            if (!isGripPressed)
            {
                targetObject.SetActive(!targetObject.activeSelf);
                isGripPressed = true;
            }
        }
        else
        {
            // 当抓握键释放时，重置按下状态记录
            isGripPressed = false;
        }
    }
}