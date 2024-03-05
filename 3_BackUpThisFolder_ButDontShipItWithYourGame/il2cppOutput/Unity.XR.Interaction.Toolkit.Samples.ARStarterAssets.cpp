#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>
struct Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074;
// System.Action`1<UnityEngine.GameObject>
struct Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractionGroupRegisteredEventArgs>
struct Action_1_t2AD535AD822BBF4C84782176E131C879B7DE281C;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractionGroupUnregisteredEventArgs>
struct Action_1_t253935EBEC6470ADBF9515523E953BB179550B28;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs>
struct Action_1_tBE7729820CBA793D8D5D57207BA5938B012863C5;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs>
struct Action_1_t9A06C49FCB3ADF4C984887951A3DC1DA07CFFBF0;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<System.Single>
struct BindableVariable_1_tAB8C2D23769D801C8E39D4AA927DD23AF0E6816C;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRGroupMember,System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRGroupMember>>
struct Dictionary_2_t8CEDD2D32D08349AD1D8C28AEAC70886C4065720;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractable,System.Single>
struct Dictionary_2_tEABA4693399BB94F9F9031F041277F4D01CA9BB2;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose>
struct Dictionary_2_tC8CDB97AFC9E538A6AF3126874A321065572174C;
// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter>
struct ExposedRegistrationList_1_t11A438A04DF188A3BE1950639AAF0CBFAF9065A5;
// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter>
struct ExposedRegistrationList_1_t0AF641D8E06922C1FFAF3DA223105F57CE5BC4D8;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable>
struct HashSetList_1_tC521CA1513DA32AFAD8144C7529793E24EA52945;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractionStrengthInteractable>
struct HashSetList_1_tC1867B681AE7023306C341F97E7483BB3C8532B2;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable>
struct HashSetList_1_t4D485A2E14AF33326E4D8B5E60BEDD0E47CEE3F0;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs>
struct LinkedPool_1_t99CFF33CB8085652A0F2FC6579D0388FB3CBAA01;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.DeactivateEventArgs>
struct LinkedPool_1_t0F5C109EA19EF35798DEF24B63645919D0B7B53B;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRActivateInteractable>
struct List_1_tAB2FD3FF9900A585A26C6DC2D8EE94D30F2AECCA;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRGroupMember>
struct List_1_t9A9CF80BD335FBFBE45DC649EDCFC4325442B48F;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable>
struct List_1_tEDA90BAEBDE9ABE36C7E54D6A64EE12E2E3A93F0;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable>
struct List_1_tC3FDFEE51803D5C604CED1C088BC2B8A566E0E5B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Object>
struct List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable>
struct List_1_t02510C493B34D49F210C22C40442D863A08509CB;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup/GroupMemberAndOverridesPair>
struct List_1_t7B533F2BFE8502F6350DBBF38D88D5B3EBE3518B;
// UnityEngine.XR.Interaction.Toolkit.Utilities.RegistrationList`1<UnityEngine.XR.Interaction.Toolkit.IXRGroupMember>
struct RegistrationList_1_t2B2426074F9547A645EEE2F3F10E3EE551BFD2EF;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARContactSpawnTrigger
struct ARContactSpawnTrigger_tD8F640BDF4DDE156DDC4531321BC98B245945267;
// UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARFeatheredPlaneMeshVisualizer
struct ARFeatheredPlaneMeshVisualizer_t6CF5956C7D39A69C97F4B67E6CA75AAAD09C8C48;
// UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARInteractorSpawnTrigger
struct ARInteractorSpawnTrigger_t4A1290908BA12C9084EF6DBB71684676CD21A8FA;
// UnityEngine.XR.ARFoundation.ARPlane
struct ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0;
// UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer
struct ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F;
// UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARSampleMenuManager
struct ARSampleMenuManager_t430D746985FAFB3C872592524116CC71BEAC8834;
// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent
struct HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB;
// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent
struct HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832;
// UnityEngine.XR.Interaction.Toolkit.IARInteractor
struct IARInteractor_t3663AA3A1C10770AF461D6960A65A91579E4AF04;
// UnityEngine.XR.Interaction.Toolkit.IXRFocusInteractable
struct IXRFocusInteractable_tC51F05C774C48143B23BF42507151489CD486AA0;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup
struct IXRInteractionGroup_tAD9069A6C37036CE5C97D68CF2F97B1F25044D5D;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractor
struct IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A;
// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable
struct IXRSelectInteractable_t588B8BE99E84540D5A1A9D6E5AAC9EDF12985735;
// UnityEngine.XR.Interaction.Toolkit.Filtering.IXRTargetFilter
struct IXRTargetFilter_t51750E0C671ECA90F38CC75BCD395285E61D2778;
// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
// UnityEngine.InputSystem.InputActionReference
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner
struct ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent
struct SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0;
// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent
struct SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.XR.Interaction.Toolkit.AR.Inputs.TouchscreenGestureInputController
struct TouchscreenGestureInputController_t214270BADC6891B444B06C4E4F7615859AD07297;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.XR.Interaction.Toolkit.UI.UIInputModule
struct UIInputModule_t9F252B720B55B1976F4B2A1D2726E3D3D46781F7;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.Interaction.Toolkit.XRBaseController
struct XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C;
// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor
struct XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E;
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable
struct XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6;
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor
struct XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158;
// UnityEngine.XR.Interaction.Toolkit.Filtering.XRBaseTargetFilter
struct XRBaseTargetFilter_t24D9DBCEA900DFEA08D543C91DFC070C1C91594F;
// UnityEngine.XR.Interaction.Toolkit.XRControllerState
struct XRControllerState_tC34C40CB942A51408D8799940A87A6AD87218B50;
// UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup
struct XRInteractionGroup_tEC6931CE543AB5A60188714198755B9B7AEBD92A;
// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager
struct XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD;
// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent
struct XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2;
// UnityEngine.XR.Interaction.Toolkit.XRScreenSpaceController
struct XRScreenSpaceController_t046F18C2FE01EB347832DB82D42C84131771FF17;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;

IL2CPP_EXTERN_C RuntimeClass* ARFeatheredPlaneMeshVisualizer_t6CF5956C7D39A69C97F4B67E6CA75AAAD09C8C48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IARInteractor_t3663AA3A1C10770AF461D6960A65A91579E4AF04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXRInteractable_t31CD4FF4D45899471D81D43D605D9C6118BF50CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral097F37F3ED2CFD2A42AD5A1A9DB967264145EEB3;
IL2CPP_EXTERN_C String_t* _stringLiteral131018280018B48DB9FF86A96C7535E6FA339C24;
IL2CPP_EXTERN_C String_t* _stringLiteralA852FE3BCFA60509BB6A26DB0CF77DFF88536BDB;
IL2CPP_EXTERN_C String_t* _stringLiteralBEF1F71BD3C21C53860EC6863B3105336E4D873B;
IL2CPP_EXTERN_C String_t* _stringLiteralCBBE344808550097351DB4FADA926BA003A2358C;
IL2CPP_EXTERN_C const RuntimeMethod* ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_m59B0E1533509EBCF5427D3BA2D879612C59F9EF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARSampleMenuManager_DeleteFocusedObject_m667D1CB386D6C76BC4D808BA66AA22FCD519C172_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARSampleMenuManager_HideMenu_mF7B36C1B86A31F383280EB20754E9176D2204493_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARSampleMenuManager_HideTapOutsideUI_m271AE72E50618073CEB7881AC57489121FEE9722_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARSampleMenuManager_ShowMenu_mE3262FD4AE0DF3CD224342BCA83D39FB7DE773B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F_m41229EDC62D1149A73F81E7B0BE27B4C1C293A01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_m8005DAC7F65600404981B996A714B5C7D29A359F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111_m79A5932A96729E5A7255BE91D9EDF1D8FF2AF2F4_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t9724DD0BE3ABFDB8DAC64B32AC20CDF230B96A69 
{
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76* ___additionalValues_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// System.Nullable`1<System.Single>
struct Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	float ___value_1;
};

// UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs
struct ARPlaneBoundaryChangedEventArgs_tE59EDE94575C8947AD3F1F8DA1370D0A426A5FFC 
{
	// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs::<plane>k__BackingField
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___U3CplaneU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs
struct ARPlaneBoundaryChangedEventArgs_tE59EDE94575C8947AD3F1F8DA1370D0A426A5FFC_marshaled_pinvoke
{
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___U3CplaneU3Ek__BackingField_0;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs
struct ARPlaneBoundaryChangedEventArgs_tE59EDE94575C8947AD3F1F8DA1370D0A426A5FFC_marshaled_com
{
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___U3CplaneU3Ek__BackingField_0;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD 
{
	// System.Boolean UnityEngine.InputSystem.InputActionProperty::m_UseReference
	bool ___m_UseReference_0;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionProperty::m_Action
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.InputSystem.InputActionProperty::m_Reference
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD_marshaled_pinvoke
{
	int32_t ___m_UseReference_0;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD_marshaled_com
{
	int32_t ___m_UseReference_0;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
};

// UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask
struct InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 
{
	// System.UInt32 UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask::m_Bits
	uint32_t ___m_Bits_0;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask::m_Mask
	int32_t ___m_Mask_1;
};

// UnityEngine.XR.Interaction.Toolkit.InteractionState
struct InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB 
{
	// System.Single UnityEngine.XR.Interaction.Toolkit.InteractionState::m_Value
	float ___m_Value_0;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.InteractionState::m_Active
	bool ___m_Active_1;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.InteractionState::m_ActivatedThisFrame
	bool ___m_ActivatedThisFrame_2;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.InteractionState::m_DeactivatedThisFrame
	bool ___m_DeactivatedThisFrame_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.Interaction.Toolkit.InteractionState
struct InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB_marshaled_pinvoke
{
	float ___m_Value_0;
	int32_t ___m_Active_1;
	int32_t ___m_ActivatedThisFrame_2;
	int32_t ___m_DeactivatedThisFrame_3;
};
// Native definition for COM marshalling of UnityEngine.XR.Interaction.Toolkit.InteractionState
struct InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB_marshaled_com
{
	float ___m_Value_0;
	int32_t ___m_Active_1;
	int32_t ___m_ActivatedThisFrame_2;
	int32_t ___m_DeactivatedThisFrame_3;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;
};

struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields
{
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___s_InvalidId_1;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 
{
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToRemove_3;
};

// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value_1;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Plane
struct Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C 
{
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_0;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_1;
};

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.XR.Interaction.Toolkit.XRControllerState
struct XRControllerState_tC34C40CB942A51408D8799940A87A6AD87218B50  : public RuntimeObject
{
	// System.Double UnityEngine.XR.Interaction.Toolkit.XRControllerState::time
	double ___time_0;
	// UnityEngine.XR.InputTrackingState UnityEngine.XR.Interaction.Toolkit.XRControllerState::inputTrackingState
	uint32_t ___inputTrackingState_1;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRControllerState::isTracked
	bool ___isTracked_2;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRControllerState::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	// UnityEngine.Quaternion UnityEngine.XR.Interaction.Toolkit.XRControllerState::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_4;
	// UnityEngine.XR.Interaction.Toolkit.InteractionState UnityEngine.XR.Interaction.Toolkit.XRControllerState::selectInteractionState
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___selectInteractionState_5;
	// UnityEngine.XR.Interaction.Toolkit.InteractionState UnityEngine.XR.Interaction.Toolkit.XRControllerState::activateInteractionState
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___activateInteractionState_6;
	// UnityEngine.XR.Interaction.Toolkit.InteractionState UnityEngine.XR.Interaction.Toolkit.XRControllerState::uiPressInteractionState
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___uiPressInteractionState_7;
	// UnityEngine.Vector2 UnityEngine.XR.Interaction.Toolkit.XRControllerState::uiScrollValue
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uiScrollValue_8;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UnityEngine.XR.ARSubsystems.BoundedPlane
struct BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_SubsumedById
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_SubsumedById_2;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Center
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Center_3;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.BoundedPlane::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_4;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Size
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size_5;
	// UnityEngine.XR.ARSubsystems.PlaneAlignment UnityEngine.XR.ARSubsystems.BoundedPlane::m_Alignment
	int32_t ___m_Alignment_6;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackingState
	int32_t ___m_TrackingState_7;
	// System.IntPtr UnityEngine.XR.ARSubsystems.BoundedPlane::m_NativePtr
	intptr_t ___m_NativePtr_8;
	// UnityEngine.XR.ARSubsystems.PlaneClassification UnityEngine.XR.ARSubsystems.BoundedPlane::m_Classification
	int32_t ___m_Classification_9;
};

struct BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_StaticFields
{
	// UnityEngine.XR.ARSubsystems.BoundedPlane UnityEngine.XR.ARSubsystems.BoundedPlane::s_Default
	BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE ___s_Default_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.InputAction::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::m_Type
	int32_t ___m_Type_1;
	// System.String UnityEngine.InputSystem.InputAction::m_ExpectedControlType
	String_t* ___m_ExpectedControlType_2;
	// System.String UnityEngine.InputSystem.InputAction::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputAction::m_Processors
	String_t* ___m_Processors_4;
	// System.String UnityEngine.InputSystem.InputAction::m_Interactions
	String_t* ___m_Interactions_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputAction::m_SingletonActionBindings
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_SingletonActionBindings_6;
	// UnityEngine.InputSystem.InputAction/ActionFlags UnityEngine.InputSystem.InputAction::m_Flags
	int32_t ___m_Flags_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputAction::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsStartIndex
	int32_t ___m_BindingsStartIndex_9;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsCount
	int32_t ___m_BindingsCount_10;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlStartIndex
	int32_t ___m_ControlStartIndex_11;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlCount
	int32_t ___m_ControlCount_12;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ActionIndexInState
	int32_t ___m_ActionIndexInState_13;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::m_ActionMap
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap_14;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnStarted
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnStarted_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnCanceled
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnCanceled_16;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnPerformed
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnPerformed_17;
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.XR.ARSubsystems.XRRaycastHit
struct XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::m_HitType
	int32_t ___m_HitType_4;
};

struct XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARSubsystems.XRRaycastHit::s_Default
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___s_Default_0;
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>
struct Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E  : public MulticastDelegate_t
{
};

// UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 
{
	// System.Single UnityEngine.XR.ARFoundation.ARRaycastHit::<distance>k__BackingField
	float ___U3CdistanceU3Ek__BackingField_0;
	// UnityEngine.XR.ARFoundation.ARTrackable UnityEngine.XR.ARFoundation.ARRaycastHit::<trackable>k__BackingField
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARFoundation.ARRaycastHit::m_Hit
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARRaycastHit::m_Transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_marshaled_pinvoke
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_marshaled_com
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARContactSpawnTrigger
struct ARContactSpawnTrigger_tD8F640BDF4DDE156DDC4531321BC98B245945267  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARContactSpawnTrigger::m_ObjectSpawner
	ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* ___m_ObjectSpawner_4;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARContactSpawnTrigger::m_RequireHorizontalUpSurface
	bool ___m_RequireHorizontalUpSurface_5;
};

// UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARFeatheredPlaneMeshVisualizer
struct ARFeatheredPlaneMeshVisualizer_t6CF5956C7D39A69C97F4B67E6CA75AAAD09C8C48  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARFeatheredPlaneMeshVisualizer::m_FeatheringWidth
	float ___m_FeatheringWidth_4;
	// UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARFeatheredPlaneMeshVisualizer::m_PlaneMeshVisualizer
	ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* ___m_PlaneMeshVisualizer_7;
	// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARFeatheredPlaneMeshVisualizer::m_Plane
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___m_Plane_8;
	// UnityEngine.Material UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARFeatheredPlaneMeshVisualizer::m_FeatheredPlaneMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_FeatheredPlaneMaterial_9;
};

struct ARFeatheredPlaneMeshVisualizer_t6CF5956C7D39A69C97F4B67E6CA75AAAD09C8C48_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARFeatheredPlaneMeshVisualizer::s_FeatheringUVs
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___s_FeatheringUVs_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARFeatheredPlaneMeshVisualizer::s_Vertices
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___s_Vertices_6;
};

// UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARInteractorSpawnTrigger
struct ARInteractorSpawnTrigger_t4A1290908BA12C9084EF6DBB71684676CD21A8FA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Object UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARInteractorSpawnTrigger::m_ARInteractorObject
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_ARInteractorObject_4;
	// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARInteractorSpawnTrigger::m_ObjectSpawner
	ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* ___m_ObjectSpawner_5;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARInteractorSpawnTrigger::m_RequireHorizontalUpSurface
	bool ___m_RequireHorizontalUpSurface_6;
	// UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARInteractorSpawnTrigger/SpawnTriggerType UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARInteractorSpawnTrigger::m_SpawnTriggerType
	int32_t ___m_SpawnTriggerType_7;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARInteractorSpawnTrigger::m_SpawnAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_SpawnAction_8;
	// UnityEngine.XR.Interaction.Toolkit.IARInteractor UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARInteractorSpawnTrigger::m_ARInteractor
	RuntimeObject* ___m_ARInteractor_9;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARInteractorSpawnTrigger::m_ARInteractorAsControllerInteractor
	XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E* ___m_ARInteractorAsControllerInteractor_10;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARInteractorSpawnTrigger::m_EverHadSelection
	bool ___m_EverHadSelection_11;
};

// UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer
struct ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Mesh UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::<mesh>k__BackingField
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___U3CmeshU3Ek__BackingField_4;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::m_TrackingStateVisibilityThreshold
	int32_t ___m_TrackingStateVisibilityThreshold_5;
	// System.Boolean UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::m_HideSubsumed
	bool ___m_HideSubsumed_6;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::m_InitialLineWidthMultiplier
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_InitialLineWidthMultiplier_7;
	// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::m_Plane
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___m_Plane_8;
};

// UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARSampleMenuManager
struct ARSampleMenuManager_t430D746985FAFB3C872592524116CC71BEAC8834  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Button UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARSampleMenuManager::m_CreateButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___m_CreateButton_4;
	// UnityEngine.UI.Button UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARSampleMenuManager::m_DeleteButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___m_DeleteButton_5;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARSampleMenuManager::m_ObjectMenu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_ObjectMenu_6;
	// UnityEngine.Animator UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARSampleMenuManager::m_ObjectMenuAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___m_ObjectMenuAnimator_7;
	// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARSampleMenuManager::m_ObjectSpawner
	ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* ___m_ObjectSpawner_8;
	// UnityEngine.UI.Button UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARSampleMenuManager::m_CancelButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___m_CancelButton_9;
	// UnityEngine.XR.Interaction.Toolkit.XRScreenSpaceController UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARSampleMenuManager::m_ScreenSpaceController
	XRScreenSpaceController_t046F18C2FE01EB347832DB82D42C84131771FF17* ___m_ScreenSpaceController_10;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARSampleMenuManager::m_InteractionGroup
	XRInteractionGroup_tEC6931CE543AB5A60188714198755B9B7AEBD92A* ___m_InteractionGroup_11;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARSampleMenuManager::m_IsPointerOverUI
	bool ___m_IsPointerOverUI_12;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARSampleMenuManager::m_ShowObjectMenu
	bool ___m_ShowObjectMenu_13;
};

// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner
struct ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner::m_CameraToFace
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_CameraToFace_4;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner::m_ObjectPrefabs
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___m_ObjectPrefabs_5;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner::m_SpawnVisualizationPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_SpawnVisualizationPrefab_6;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner::m_SpawnOptionIndex
	int32_t ___m_SpawnOptionIndex_7;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner::m_OnlySpawnInView
	bool ___m_OnlySpawnInView_8;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner::m_ViewportPeriphery
	float ___m_ViewportPeriphery_9;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner::m_ApplyRandomAngleAtSpawn
	bool ___m_ApplyRandomAngleAtSpawn_10;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner::m_SpawnAngleRange
	float ___m_SpawnAngleRange_11;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner::m_SpawnAsChildren
	bool ___m_SpawnAsChildren_12;
	// System.Action`1<UnityEngine.GameObject> UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner::objectSpawned
	Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* ___objectSpawned_13;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseController
struct XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController/UpdateType UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_UpdateTrackingType
	int32_t ___m_UpdateTrackingType_4;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_EnableInputTracking
	bool ___m_EnableInputTracking_5;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_EnableInputActions
	bool ___m_EnableInputActions_6;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelPrefab
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ModelPrefab_7;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ModelParent_8;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_Model
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Model_9;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_AnimateModel
	bool ___m_AnimateModel_10;
	// System.String UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelSelectTransition
	String_t* ___m_ModelSelectTransition_11;
	// System.String UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelDeSelectTransition
	String_t* ___m_ModelDeSelectTransition_12;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_HideControllerModel
	bool ___m_HideControllerModel_13;
	// UnityEngine.XR.Interaction.Toolkit.InteractionState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_SelectInteractionState
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___m_SelectInteractionState_14;
	// UnityEngine.XR.Interaction.Toolkit.InteractionState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ActivateInteractionState
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___m_ActivateInteractionState_15;
	// UnityEngine.XR.Interaction.Toolkit.InteractionState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_UIPressInteractionState
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___m_UIPressInteractionState_16;
	// UnityEngine.Vector2 UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_UIScrollValue
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UIScrollValue_17;
	// UnityEngine.XR.Interaction.Toolkit.XRControllerState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ControllerState
	XRControllerState_tC34C40CB942A51408D8799940A87A6AD87218B50* ___m_ControllerState_18;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_CreateControllerState
	bool ___m_CreateControllerState_19;
	// UnityEngine.Animator UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___m_ModelAnimator_20;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_HasWarnedAnimatorMissing
	bool ___m_HasWarnedAnimatorMissing_21;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_PerformSetup
	bool ___m_PerformSetup_22;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseController::<anchorControlDeadzone>k__BackingField
	float ___U3CanchorControlDeadzoneU3Ek__BackingField_23;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseController::<anchorControlOffAxisDeadzone>k__BackingField
	float ___U3CanchorControlOffAxisDeadzoneU3Ek__BackingField_24;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor
struct XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::registered
	Action_1_tBE7729820CBA793D8D5D57207BA5938B012863C5* ___registered_6;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::unregistered
	Action_1_t9A06C49FCB3ADF4C984887951A3DC1DA07CFFBF0* ___unregistered_7;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_InteractionManager_8;
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<containingGroup>k__BackingField
	RuntimeObject* ___U3CcontainingGroupU3Ek__BackingField_9;
	// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_InteractionLayerMask_10;
	// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionLayers
	InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 ___m_InteractionLayers_11;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AttachTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_AttachTransform_12;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_KeepSelectedTargetValid
	bool ___m_KeepSelectedTargetValid_13;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_DisableVisualsWhenBlockedInGroup
	bool ___m_DisableVisualsWhenBlockedInGroup_14;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingSelectedInteractable
	XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* ___m_StartingSelectedInteractable_15;
	// UnityEngine.XR.Interaction.Toolkit.Filtering.XRBaseTargetFilter UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingTargetFilter
	XRBaseTargetFilter_t24D9DBCEA900DFEA08D543C91DFC070C1C91594F* ___m_StartingTargetFilter_16;
	// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HoverEntered
	HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* ___m_HoverEntered_17;
	// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HoverExited
	HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* ___m_HoverExited_18;
	// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_SelectEntered
	SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* ___m_SelectEntered_19;
	// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_SelectExited
	SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* ___m_SelectExited_20;
	// UnityEngine.XR.Interaction.Toolkit.Filtering.IXRTargetFilter UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_TargetFilter
	RuntimeObject* ___m_TargetFilter_21;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AllowHover
	bool ___m_AllowHover_22;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AllowSelect
	bool ___m_AllowSelect_23;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_IsPerformingManualInteraction
	bool ___m_IsPerformingManualInteraction_24;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractablesHovered
	HashSetList_1_tC521CA1513DA32AFAD8144C7529793E24EA52945* ___m_InteractablesHovered_25;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractablesSelected
	HashSetList_1_t4D485A2E14AF33326E4D8B5E60BEDD0E47CEE3F0* ___m_InteractablesSelected_26;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<firstInteractableSelected>k__BackingField
	RuntimeObject* ___U3CfirstInteractableSelectedU3Ek__BackingField_27;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<isInteractingWithUI>k__BackingField
	bool ___U3CisInteractingWithUIU3Ek__BackingField_28;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingHoverFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingHoverFilters_29;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HoverFilters
	ExposedRegistrationList_1_t11A438A04DF188A3BE1950639AAF0CBFAF9065A5* ___m_HoverFilters_30;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingSelectFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingSelectFilters_31;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_SelectFilters
	ExposedRegistrationList_1_t0AF641D8E06922C1FFAF3DA223105F57CE5BC4D8* ___m_SelectFilters_32;
	// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<System.Single> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_LargestInteractionStrength
	BindableVariable_1_tAB8C2D23769D801C8E39D4AA927DD23AF0E6816C* ___m_LargestInteractionStrength_33;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AttachPoseOnSelect
	Dictionary_2_tC8CDB97AFC9E538A6AF3126874A321065572174C* ___m_AttachPoseOnSelect_34;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_LocalAttachPoseOnSelect
	Dictionary_2_tC8CDB97AFC9E538A6AF3126874A321065572174C* ___m_LocalAttachPoseOnSelect_35;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractionStrengthInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionStrengthInteractables
	HashSetList_1_tC1867B681AE7023306C341F97E7483BB3C8532B2* ___m_InteractionStrengthInteractables_36;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractable,System.Single> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionStrengths
	Dictionary_2_tEABA4693399BB94F9F9031F041277F4D01CA9BB2* ___m_InteractionStrengths_37;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_ManualInteractionInteractable
	RuntimeObject* ___m_ManualInteractionInteractable_38;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_RegisteredInteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_RegisteredInteractionManager_39;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<useAttachPointVelocity>k__BackingField
	bool ___U3CuseAttachPointVelocityU3Ek__BackingField_41;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AttachPointVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AttachPointVelocity_42;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AttachPointAngularVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AttachPointAngularVelocity_43;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_XROriginTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_XROriginTransform_44;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HasXROrigin
	bool ___m_HasXROrigin_45;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_FailedToFindXROrigin
	bool ___m_FailedToFindXROrigin_46;
	// UnityEngine.XR.Interaction.Toolkit.TargetPriorityMode UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<targetPriorityMode>k__BackingField
	int32_t ___U3CtargetPriorityModeU3Ek__BackingField_47;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<targetsForSelection>k__BackingField
	List_1_tC3FDFEE51803D5C604CED1C088BC2B8A566E0E5B* ___U3CtargetsForSelectionU3Ek__BackingField_48;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_DeltaTimeStart
	float ___m_DeltaTimeStart_49;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_FrameOn
	int32_t ___m_FrameOn_51;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_VelocityPositionsCache
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_VelocityPositionsCache_52;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_VelocityNormalsCache
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_VelocityNormalsCache_53;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_VelocityPositionsSum
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_VelocityPositionsSum_54;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_VelocityNormalsSum
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_VelocityNormalsSum_55;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnHoverEntered
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnHoverEntered_56;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnHoverExited
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnHoverExited_57;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnSelectEntered
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnSelectEntered_58;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnSelectExited
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnSelectExited_59;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<hoverTargets>k__BackingField
	List_1_t02510C493B34D49F210C22C40442D863A08509CB* ___U3ChoverTargetsU3Ek__BackingField_60;
};

struct XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158_StaticFields
{
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::s_ProcessInteractionStrengthMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_ProcessInteractionStrengthMarker_40;
};

// UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup
struct XRInteractionGroup_tEC6931CE543AB5A60188714198755B9B7AEBD92A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractionGroupRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::registered
	Action_1_t2AD535AD822BBF4C84782176E131C879B7DE281C* ___registered_4;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractionGroupUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::unregistered
	Action_1_t253935EBEC6470ADBF9515523E953BB179550B28* ___unregistered_5;
	// System.String UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::m_GroupName
	String_t* ___m_GroupName_6;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::m_InteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_InteractionManager_7;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::m_RegisteredInteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_RegisteredInteractionManager_8;
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::<containingGroup>k__BackingField
	RuntimeObject* ___U3CcontainingGroupU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::m_StartingGroupMembers
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingGroupMembers_10;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup/GroupMemberAndOverridesPair> UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::m_StartingInteractionOverridesMap
	List_1_t7B533F2BFE8502F6350DBBF38D88D5B3EBE3518B* ___m_StartingInteractionOverridesMap_11;
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractor UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::<activeInteractor>k__BackingField
	RuntimeObject* ___U3CactiveInteractorU3Ek__BackingField_12;
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractor UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::<focusInteractor>k__BackingField
	RuntimeObject* ___U3CfocusInteractorU3Ek__BackingField_13;
	// UnityEngine.XR.Interaction.Toolkit.IXRFocusInteractable UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::<focusInteractable>k__BackingField
	RuntimeObject* ___U3CfocusInteractableU3Ek__BackingField_14;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::<hasRegisteredStartingMembers>k__BackingField
	bool ___U3ChasRegisteredStartingMembersU3Ek__BackingField_15;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.RegistrationList`1<UnityEngine.XR.Interaction.Toolkit.IXRGroupMember> UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::m_GroupMembers
	RegistrationList_1_t2B2426074F9547A645EEE2F3F10E3EE551BFD2EF* ___m_GroupMembers_16;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRGroupMember> UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::m_TempGroupMembers
	List_1_t9A9CF80BD335FBFBE45DC649EDCFC4325442B48F* ___m_TempGroupMembers_17;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::m_IsProcessingGroupMembers
	bool ___m_IsProcessingGroupMembers_18;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRGroupMember,System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRGroupMember>> UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::m_InteractionOverridesMap
	Dictionary_2_t8CEDD2D32D08349AD1D8C28AEAC70886C4065720* ___m_InteractionOverridesMap_19;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::m_ValidTargets
	List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* ___m_ValidTargets_20;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::m_DeprecatedValidTargets
	List_1_t02510C493B34D49F210C22C40442D863A08509CB* ___m_DeprecatedValidTargets_21;
};

struct XRInteractionGroup_tEC6931CE543AB5A60188714198755B9B7AEBD92A_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::s_InteractablesSelected
	List_1_tC3FDFEE51803D5C604CED1C088BC2B8A566E0E5B* ___s_InteractablesSelected_22;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::s_InteractablesHovered
	List_1_tEDA90BAEBDE9ABE36C7E54D6A64EE12E2E3A93F0* ___s_InteractablesHovered_23;
};

// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARFoundation.ARPlane>
struct ARTrackable_2_t758FABA4E5998A283C2E8C792EE90E0FC3482341  : public ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0
{
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE ___U3CsessionRelativeDataU3Ek__BackingField_6;
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
};

struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor
struct XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E  : public XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158
{
	// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor/InputTriggerType UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_SelectActionTrigger
	int32_t ___m_SelectActionTrigger_61;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HideControllerOnSelect
	bool ___m_HideControllerOnSelect_62;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowHoveredActivate
	bool ___m_AllowHoveredActivate_63;
	// UnityEngine.XR.Interaction.Toolkit.TargetPriorityMode UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_TargetPriorityMode
	int32_t ___m_TargetPriorityMode_64;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnSelectEntered
	bool ___m_PlayAudioClipOnSelectEntered_65;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnSelectEntered
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnSelectEntered_66;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnSelectExited
	bool ___m_PlayAudioClipOnSelectExited_67;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnSelectExited
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnSelectExited_68;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnSelectCanceled
	bool ___m_PlayAudioClipOnSelectCanceled_69;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnSelectCanceled
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnSelectCanceled_70;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnHoverEntered
	bool ___m_PlayAudioClipOnHoverEntered_71;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnHoverEntered
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnHoverEntered_72;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnHoverExited
	bool ___m_PlayAudioClipOnHoverExited_73;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnHoverExited
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnHoverExited_74;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnHoverCanceled
	bool ___m_PlayAudioClipOnHoverCanceled_75;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnHoverCanceled
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnHoverCanceled_76;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowHoverAudioWhileSelecting
	bool ___m_AllowHoverAudioWhileSelecting_77;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnSelectEntered
	bool ___m_PlayHapticsOnSelectEntered_78;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectEnterIntensity
	float ___m_HapticSelectEnterIntensity_79;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectEnterDuration
	float ___m_HapticSelectEnterDuration_80;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnSelectExited
	bool ___m_PlayHapticsOnSelectExited_81;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectExitIntensity
	float ___m_HapticSelectExitIntensity_82;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectExitDuration
	float ___m_HapticSelectExitDuration_83;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnSelectCanceled
	bool ___m_PlayHapticsOnSelectCanceled_84;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectCancelIntensity
	float ___m_HapticSelectCancelIntensity_85;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectCancelDuration
	float ___m_HapticSelectCancelDuration_86;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnHoverEntered
	bool ___m_PlayHapticsOnHoverEntered_87;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverEnterIntensity
	float ___m_HapticHoverEnterIntensity_88;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverEnterDuration
	float ___m_HapticHoverEnterDuration_89;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnHoverExited
	bool ___m_PlayHapticsOnHoverExited_90;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverExitIntensity
	float ___m_HapticHoverExitIntensity_91;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverExitDuration
	float ___m_HapticHoverExitDuration_92;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnHoverCanceled
	bool ___m_PlayHapticsOnHoverCanceled_93;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverCancelIntensity
	float ___m_HapticHoverCancelIntensity_94;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverCancelDuration
	float ___m_HapticHoverCancelDuration_95;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowHoverHapticsWhileSelecting
	bool ___m_AllowHoverHapticsWhileSelecting_96;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowActivate
	bool ___m_AllowActivate_97;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_Controller
	XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* ___m_Controller_98;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_ActivateEventArgs
	LinkedPool_1_t99CFF33CB8085652A0F2FC6579D0388FB3CBAA01* ___m_ActivateEventArgs_99;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.DeactivateEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_DeactivateEventArgs
	LinkedPool_1_t0F5C109EA19EF35798DEF24B63645919D0B7B53B* ___m_DeactivateEventArgs_100;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_ToggleSelectActive
	bool ___m_ToggleSelectActive_102;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_ToggleSelectDeactivatedThisFrame
	bool ___m_ToggleSelectDeactivatedThisFrame_103;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_WaitingForSelectDeactivate
	bool ___m_WaitingForSelectDeactivate_104;
	// UnityEngine.AudioSource UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_EffectsAudioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___m_EffectsAudioSource_105;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::<validTargets>k__BackingField
	List_1_t02510C493B34D49F210C22C40442D863A08509CB* ___U3CvalidTargetsU3Ek__BackingField_106;
};

struct XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRActivateInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::s_ActivateTargets
	List_1_tAB2FD3FF9900A585A26C6DC2D8EE94D30F2AECCA* ___s_ActivateTargets_101;
};

// UnityEngine.XR.Interaction.Toolkit.XRScreenSpaceController
struct XRScreenSpaceController_t046F18C2FE01EB347832DB82D42C84131771FF17  : public XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C
{
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRScreenSpaceController::m_EnableTouchscreenGestureInputController
	bool ___m_EnableTouchscreenGestureInputController_25;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.XRScreenSpaceController::m_TapStartPositionAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_TapStartPositionAction_26;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.XRScreenSpaceController::m_DragCurrentPositionAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_DragCurrentPositionAction_27;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.XRScreenSpaceController::m_DragDeltaAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_DragDeltaAction_28;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.XRScreenSpaceController::m_PinchStartPositionAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_PinchStartPositionAction_29;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.XRScreenSpaceController::m_PinchGapAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_PinchGapAction_30;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.XRScreenSpaceController::m_PinchGapDeltaAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_PinchGapDeltaAction_31;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.XRScreenSpaceController::m_TwistStartPositionAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_TwistStartPositionAction_32;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.XRScreenSpaceController::m_TwistDeltaRotationAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_TwistDeltaRotationAction_33;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.XRScreenSpaceController::m_ScreenTouchCountAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_ScreenTouchCountAction_34;
	// UnityEngine.Camera UnityEngine.XR.Interaction.Toolkit.XRScreenSpaceController::m_ControllerCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_ControllerCamera_35;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRScreenSpaceController::m_BlockInteractionsWithScreenSpaceUI
	bool ___m_BlockInteractionsWithScreenSpaceUI_36;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRScreenSpaceController::<scaleDelta>k__BackingField
	float ___U3CscaleDeltaU3Ek__BackingField_37;
	// UnityEngine.XR.Interaction.Toolkit.AR.Inputs.TouchscreenGestureInputController UnityEngine.XR.Interaction.Toolkit.XRScreenSpaceController::m_GestureInputController
	TouchscreenGestureInputController_t214270BADC6891B444B06C4E4F7615859AD07297* ___m_GestureInputController_38;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRScreenSpaceController::m_HasCheckedDisabledTrackingInputReferenceActions
	bool ___m_HasCheckedDisabledTrackingInputReferenceActions_39;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRScreenSpaceController::m_HasCheckedDisabledInputReferenceActions
	bool ___m_HasCheckedDisabledInputReferenceActions_40;
	// UnityEngine.XR.Interaction.Toolkit.UI.UIInputModule UnityEngine.XR.Interaction.Toolkit.XRScreenSpaceController::m_UIInputModule
	UIInputModule_t9F252B720B55B1976F4B2A1D2726E3D3D46781F7* ___m_UIInputModule_41;
};

// UnityEngine.XR.ARFoundation.ARPlane
struct ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0  : public ARTrackable_2_t758FABA4E5998A283C2E8C792EE90E0FC3482341
{
	// System.Single UnityEngine.XR.ARFoundation.ARPlane::m_VertexChangedThreshold
	float ___m_VertexChangedThreshold_7;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs> UnityEngine.XR.ARFoundation.ARPlane::boundaryChanged
	Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* ___boundaryChanged_8;
	// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.ARFoundation.ARPlane::<subsumedBy>k__BackingField
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___U3CsubsumedByU3Ek__BackingField_9;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARFoundation.ARPlane::m_Boundary
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 ___m_Boundary_10;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARFoundation.ARPlane::m_OldBoundary
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 ___m_OldBoundary_11;
	// System.Boolean UnityEngine.XR.ARFoundation.ARPlane::m_HasBoundaryChanged
	bool ___m_HasBoundaryChanged_12;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57_gshared (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m83B9B49A5CEF71BC8798C9C8B7989333626CF3E1_gshared (Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Capacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;

// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.XRScreenSpaceController::get_dragCurrentPositionAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD XRScreenSpaceController_get_dragCurrentPositionAction_m623F46DA0FF55294919EC17BB198D6D000936FBB_inline (XRScreenSpaceController_t046F18C2FE01EB347832DB82D42C84131771FF17* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionProperty::get_action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47 (InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57 (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.InputSystem.InputAction::add_started(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.XRScreenSpaceController::get_tapStartPositionAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD XRScreenSpaceController_get_tapStartPositionAction_m15334FD6AFCAB3C891A677DC157A7EC88AC5C38E_inline (XRScreenSpaceController_t046F18C2FE01EB347832DB82D42C84131771FF17* __this, const RuntimeMethod* method) ;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::remove_started(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::RemoveListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARSampleMenuManager::HideMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSampleMenuManager_HideMenu_mF7B36C1B86A31F383280EB20754E9176D2204493 (ARSampleMenuManager_t430D746985FAFB3C872592524116CC71BEAC8834* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventSystem_IsPointerOverGameObject_m238732B4FDEA343976D798FF04DB34C3221243C2 (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, int32_t ___pointerId0, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.IXRFocusInteractable UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::get_focusInteractable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRInteractionGroup_get_focusInteractable_mE4584257FC15989E262BCC7A4552DE358B362B38_inline (XRInteractionGroup_tEC6931CE543AB5A60188714198755B9B7AEBD92A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner::get_objectPrefabs()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ObjectSpawner_get_objectPrefabs_mC013B08B69C29F13A750E8715FAB01E8681320CF_inline (ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner::set_spawnOptionIndex(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjectSpawner_set_spawnOptionIndex_m5984E7B1712BB73A2E982FE4487FCA033A922711_inline (ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animator::GetBool(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_GetBool_mBC4D952885FF7504963E5923C29481A891028FD8 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner>()
inline ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* Object_FindObjectOfType_TisObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111_m79A5932A96729E5A7255BE91D9EDF1D8FF2AF2F4 (const RuntimeMethod* method)
{
	return ((  ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARContactSpawnTrigger::TryGetSpawnSurfaceData(UnityEngine.Collider,UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARContactSpawnTrigger_TryGetSpawnSurfaceData_mC4FFEBA61C40C358542A37173B802B37B77138FD (ARContactSpawnTrigger_tD8F640BDF4DDE156DDC4531321BC98B245945267* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___objectCollider0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___surfacePosition1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___surfaceNormal2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plane__ctor_m2BFB65EBFF51123791878684ECC375B99FAD10A2 (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___inNormal0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___inPoint1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Plane::ClosestPointOnPlane(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Plane_ClosestPointOnPlane_m5350637BF436E1B5039D8AC09E7AADA126E85A84 (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner::TrySpawnObject(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ObjectSpawner_TrySpawnObject_mBE0345EF7F3D3EF69F20321A4190214DB09D65B1 (ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___spawnPoint0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___spawnNormal1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARPlane>()
inline ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* Component_GetComponent_TisARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_m8005DAC7F65600404981B996A714B5C7D29A359F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.XR.ARSubsystems.PlaneAlignment UnityEngine.XR.ARFoundation.ARPlane::get_alignment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARPlane_get_alignment_mBEF1BCDE0A964ADAE4E5F477BD4C961CA8849EC1 (ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.XR.ARFoundation.ARPlane::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ARPlane_get_normal_m12A4F62B15333D04011C0DBD6377FA1E9B3C60B7 (ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.XR.ARFoundation.ARPlane::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ARPlane_get_center_mB33D672F5673C29616BC46AC56AF1276D5A627CC (ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer>()
inline ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* Component_GetComponent_TisARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F_m41229EDC62D1149A73F81E7B0BE27B4C1C293A01 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m83B9B49A5CEF71BC8798C9C8B7989333626CF3E1 (Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m83B9B49A5CEF71BC8798C9C8B7989333626CF3E1_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARPlane::add_boundaryChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlane_add_boundaryChanged_m6A9CA2ADF4742C004EF7BCFD48A7C820320616AA (ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* __this, Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARPlane::remove_boundaryChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlane_remove_boundaryChanged_m6F71EEF2CD3C71AF069C5FE6CD993906BD8A9A10 (ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* __this, Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Mesh UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::get_mesh()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ARPlaneMeshVisualizer_get_mesh_m6C1A730CECE8AE0A0549ED615AB3B3D66E4A0FD8_inline (ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARFeatheredPlaneMeshVisualizer::GenerateBoundaryUVs(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_GenerateBoundaryUVs_mE7D48832D82B1F125A77C96A42E90DF1BC227796 (ARFeatheredPlaneMeshVisualizer_t6CF5956C7D39A69C97F4B67E6CA75AAAD09C8C48* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mesh::get_vertexCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_get_vertexCount_mB7BE0340AAF272933068D830C8E711FC8978E12C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
inline void List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Capacity()
inline int32_t List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Capacity(System.Int32)
inline void List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, const RuntimeMethod*))List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE_gshared)(__this, ___value0, method);
}
// System.Void UnityEngine.Mesh::GetVertices(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_GetVertices_m5BF8777074E383AD8C4B9974D27E4AB52963D92E (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___vertices0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, const RuntimeMethod*))List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARFeatheredPlaneMeshVisualizer::get_featheringWidth()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ARFeatheredPlaneMeshVisualizer_get_featheringWidth_m2E50FB2F2394BF511A66CB70C282F3D31177921F_inline (ARFeatheredPlaneMeshVisualizer_t6CF5956C7D39A69C97F4B67E6CA75AAAD09C8C48* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
inline void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline)(__this, ___item0, method);
}
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::Set(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Set_m1C7E543216734FB513F9CEBA44C50E6FC2AFD49D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___newX0, float ___newY1, float ___newZ2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::SetUVs(System.Int32,System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetUVs_mFEE20B5977AA358DAFA31CF621BBC4B0247789B2 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___channel0, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___uvs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::UploadMeshData(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_UploadMeshData_mE4C94F263DAA8CAC1641FE137E1CE7D3F09396EB (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, bool ___markNoLongerReadable0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared)(__this, method);
}
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34 (const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Inputs.InputActionPropertyExtensions::DisableDirectAction(UnityEngine.InputSystem.InputActionProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionPropertyExtensions_DisableDirectAction_m976F69C07BC1AF691C6D3A1E03BBD4EA0D265932 (InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___property0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.Inputs.InputActionPropertyExtensions::EnableDirectAction(UnityEngine.InputSystem.InputActionProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionPropertyExtensions_EnableDirectAction_m4F6A0B5DD5EFACC0B84BFCBD5FA15491DBE9DA26 (InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___property0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m94F967AB31244EACE68C3BE1DD85B69ED3334C0E (RuntimeObject* ___message0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.XRBaseController UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::get_xrController()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* XRBaseControllerInteractor_get_xrController_m3BBC15462D296ED35A6F2E87D290B86BF9216650_inline (XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.XRControllerState UnityEngine.XR.Interaction.Toolkit.XRBaseController::get_currentControllerState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRControllerState_tC34C40CB942A51408D8799940A87A6AD87218B50* XRBaseController_get_currentControllerState_mA9E97CEA72CB7A87F1A5D78A6F214A4879F43F6F (XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.InteractionState::get_activatedThisFrame()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InteractionState_get_activatedThisFrame_m512E1A559B40E19753A0D9F666B3BB44C8BCC6DA_inline (InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::get_hasSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRBaseInteractor_get_hasSelection_mDC47E8BD0F4498E27BD041B52008C36AD09583B1 (XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.InteractionState::get_active()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InteractionState_get_active_m1E069A7D42F19F587B2F384A8EFB9A3D6EDE8E31_inline (InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.InteractionState::get_deactivatedThisFrame()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InteractionState_get_deactivatedThisFrame_m9C1D440D21737F44E68D853F0934B0102A87470F_inline (InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputAction::WasPerformedThisFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputAction_WasPerformedThisFrame_m6EB7F845E109BB397BA5DB84FE80CB28F399D62E (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARFoundation.ARTrackable UnityEngine.XR.ARFoundation.ARRaycastHit::get_trackable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ARRaycastHit_get_trackable_mF8D64EB03AFF2E1D5FC9B88255D2A84130B43D09_inline (ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* __this, const RuntimeMethod* method) ;
// UnityEngine.Pose UnityEngine.XR.ARFoundation.ARRaycastHit::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD (ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::.ctor(System.String,UnityEngine.InputSystem.InputActionType,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction__ctor_mD042AD3CC86AEDEB5FB1F8CD9E834FE35F9060B9 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, String_t* ___name0, int32_t ___type1, String_t* ___binding2, String_t* ___interactions3, String_t* ___processors4, String_t* ___expectedControlType5, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionProperty::.ctor(UnityEngine.InputSystem.InputAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionProperty__ctor_m0E922A8B1C135221416D4ADB0B28FE1BCA80209A (InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD* __this, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___action0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.UI.Button UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARSampleMenuManager::get_createButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ARSampleMenuManager_get_createButton_m6C49FB35283528F9ADBDDE78836833419451614E (ARSampleMenuManager_t430D746985FAFB3C872592524116CC71BEAC8834* __this, const RuntimeMethod* method) 
{
	{
		// get => m_CreateButton;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___m_CreateButton_4;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARSampleMenuManager::set_createButton(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSampleMenuManager_set_createButton_m01364D255CE16286461C7559B2B791686C4FAC96 (ARSampleMenuManager_t430D746985FAFB3C872592524116CC71BEAC8834* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_CreateButton = value;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = ___value0;
		__this->___m_CreateButton_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CreateButton_4), (void*)L_0);
		return;
	}
}
// UnityEngine.UI.Button UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARSampleMenuManager::get_deleteButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ARSampleMenuManager_get_deleteButton_mA2BA9B9BBC3250994329836F3C408FE9F93528B1 (ARSampleMenuManager_t430D746985FAFB3C872592524116CC71BEAC8834* __this, const RuntimeMethod* method) 
{
	{
		// get => m_DeleteButton;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___m_DeleteButton_5;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARSampleMenuManager::set_deleteButton(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSampleMenuManager_set_deleteButton_mBB60870C38572F51C69BEACFEF8CEDC731DE4739 (ARSampleMenuManager_t430D746985FAFB3C872592524116CC71BEAC8834* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_DeleteButton = value;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = ___value0;
		__this->___m_DeleteButton_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DeleteButton_5), (void*)L_0);
		return;
	}
}
// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARSampleMenuManager::get_objectMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ARSampleMenuManager_get_objectMenu_m5A3C18CA2EE8CCC2592559E88A65AB15D44A0BFF (ARSampleMenuManager_t430D746985FAFB3C872592524116CC71BEAC8834* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ObjectMenu;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_ObjectMenu_6;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARSampleMenuManager::set_objectMenu(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSampleMenuManager_set_objectMenu_m4563068967667404B39105B9E5FC0D3A267AE5E5 (ARSampleMenuManager_t430D746985FAFB3C872592524116CC71BEAC8834* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ObjectMenu = value;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___m_ObjectMenu_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ObjectMenu_6), (void*)L_0);
		return;
	}
}
// UnityEngine.Animator UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARSampleMenuManager::get_objectMenuAnimator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ARSampleMenuManager_get_objectMenuAnimator_m580C7E238D3FEE12D238DE7A96520030FED79659 (ARSampleMenuManager_t430D746985FAFB3C872592524116CC71BEAC8834* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ObjectMenuAnimator;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___m_ObjectMenuAnimator_7;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARSampleMenuManager::set_objectMenuAnimator(UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSampleMenuManager_set_objectMenuAnimator_mDDAB59ED77EBCBDC42C07679D239DAE7DE5FD163 (ARSampleMenuManager_t430D746985FAFB3C872592524116CC71BEAC8834* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ObjectMenuAnimator = value;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = ___value0;
		__this->___m_ObjectMenuAnimator_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ObjectMenuAnimator_7), (void*)L_0);
		return;
	}
}
// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARSampleMenuManager::get_objectSpawner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* ARSampleMenuManager_get_objectSpawner_m766935A000A00258D3C64D6C5B6DE4F9083E3B57 (ARSampleMenuManager_t430D746985FAFB3C872592524116CC71BEAC8834* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ObjectSpawner;
		ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* L_0 = __this->___m_ObjectSpawner_8;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARSampleMenuManager::set_objectSpawner(UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSampleMenuManager_set_objectSpawner_m3A2258F480266870AC976CB2BFAFF2838B1CFDA4 (ARSampleMenuManager_t430D746985FAFB3C872592524116CC71BEAC8834* __this, ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ObjectSpawner = value;
		ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* L_0 = ___value0;
		__this->___m_ObjectSpawner_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ObjectSpawner_8), (void*)L_0);
		return;
	}
}
// UnityEngine.UI.Button UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARSampleMenuManager::get_cancelButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ARSampleMenuManager_get_cancelButton_mEE4598E105183EC1608A8CBA6CD2106D939B0582 (ARSampleMenuManager_t430D746985FAFB3C872592524116CC71BEAC8834* __this, const RuntimeMethod* method) 
{
	{
		// get => m_CancelButton;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___m_CancelButton_9;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARSampleMenuManager::set_cancelButton(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSampleMenuManager_set_cancelButton_mE3F9B0BFBA4C517D7F7918F75439F16DF53E517E (ARSampleMenuManager_t430D746985FAFB3C872592524116CC71BEAC8834* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_CancelButton = value;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = ___value0;
		__this->___m_CancelButton_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CancelButton_9), (void*)L_0);
		return;
	}
}
// UnityEngine.XR.Interaction.Toolkit.XRScreenSpaceController UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARSampleMenuManager::get_screenSpaceController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRScreenSpaceController_t046F18C2FE01EB347832DB82D42C84131771FF17* ARSampleMenuManager_get_screenSpaceController_mBBAD2C0A4C879B9B17193B67B6855B6F44CA420F (ARSampleMenuManager_t430D746985FAFB3C872592524116CC71BEAC8834* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ScreenSpaceController;
		XRScreenSpaceController_t046F18C2FE01EB347832DB82D42C84131771FF17* L_0 = __this->___m_ScreenSpaceController_10;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARSampleMenuManager::set_screenSpaceController(UnityEngine.XR.Interaction.Toolkit.XRScreenSpaceController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSampleMenuManager_set_screenSpaceController_mEE1B3D2395B05B9047FD886B2652008E3F991704 (ARSampleMenuManager_t430D746985FAFB3C872592524116CC71BEAC8834* __this, XRScreenSpaceController_t046F18C2FE01EB347832DB82D42C84131771FF17* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ScreenSpaceController = value;
		XRScreenSpaceController_t046F18C2FE01EB347832DB82D42C84131771FF17* L_0 = ___value0;
		__this->___m_ScreenSpaceController_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ScreenSpaceController_10), (void*)L_0);
		return;
	}
}
// UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARSampleMenuManager::get_interactionGroup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRInteractionGroup_tEC6931CE543AB5A60188714198755B9B7AEBD92A* ARSampleMenuManager_get_interactionGroup_m8FA196C12CB24FF117E7C98399BA9F399555A917 (ARSampleMenuManager_t430D746985FAFB3C872592524116CC71BEAC8834* __this, const RuntimeMethod* method) 
{
	{
		// get => m_InteractionGroup;
		XRInteractionGroup_tEC6931CE543AB5A60188714198755B9B7AEBD92A* L_0 = __this->___m_InteractionGroup_11;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARSampleMenuManager::set_interactionGroup(UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSampleMenuManager_set_interactionGroup_m5E38132E848734E8E880FBF8EE23ED55F42115FC (ARSampleMenuManager_t430D746985FAFB3C872592524116CC71BEAC8834* __this, XRInteractionGroup_tEC6931CE543AB5A60188714198755B9B7AEBD92A* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_InteractionGroup = value;
		XRInteractionGroup_tEC6931CE543AB5A60188714198755B9B7AEBD92A* L_0 = ___value0;
		__this->___m_InteractionGroup_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InteractionGroup_11), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARSampleMenuManager::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSampleMenuManager_OnEnable_m8939E29E302F1397E022C32D78C19EAC5AC2DB2E (ARSampleMenuManager_t430D746985FAFB3C872592524116CC71BEAC8834* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARSampleMenuManager_DeleteFocusedObject_m667D1CB386D6C76BC4D808BA66AA22FCD519C172_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARSampleMenuManager_HideMenu_mF7B36C1B86A31F383280EB20754E9176D2204493_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARSampleMenuManager_HideTapOutsideUI_m271AE72E50618073CEB7881AC57489121FEE9722_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARSampleMenuManager_ShowMenu_mE3262FD4AE0DF3CD224342BCA83D39FB7DE773B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// m_ScreenSpaceController.dragCurrentPositionAction.action.started += HideTapOutsideUI;
		XRScreenSpaceController_t046F18C2FE01EB347832DB82D42C84131771FF17* L_0 = __this->___m_ScreenSpaceController_10;
		NullCheck(L_0);
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_1;
		L_1 = XRScreenSpaceController_get_dragCurrentPositionAction_m623F46DA0FF55294919EC17BB198D6D000936FBB_inline(L_0, NULL);
		V_0 = L_1;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2;
		L_2 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47((&V_0), NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_3 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_3, __this, (intptr_t)((void*)ARSampleMenuManager_HideTapOutsideUI_m271AE72E50618073CEB7881AC57489121FEE9722_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_2, L_3, NULL);
		// m_ScreenSpaceController.tapStartPositionAction.action.started += HideTapOutsideUI;
		XRScreenSpaceController_t046F18C2FE01EB347832DB82D42C84131771FF17* L_4 = __this->___m_ScreenSpaceController_10;
		NullCheck(L_4);
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_5;
		L_5 = XRScreenSpaceController_get_tapStartPositionAction_m15334FD6AFCAB3C891A677DC157A7EC88AC5C38E_inline(L_4, NULL);
		V_0 = L_5;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_6;
		L_6 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47((&V_0), NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_7 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_7, __this, (intptr_t)((void*)ARSampleMenuManager_HideTapOutsideUI_m271AE72E50618073CEB7881AC57489121FEE9722_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_6, L_7, NULL);
		// m_CreateButton.onClick.AddListener(ShowMenu);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_8 = __this->___m_CreateButton_4;
		NullCheck(L_8);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_9;
		L_9 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_8, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_10 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_10, __this, (intptr_t)((void*)ARSampleMenuManager_ShowMenu_mE3262FD4AE0DF3CD224342BCA83D39FB7DE773B9_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_9, L_10, NULL);
		// m_CancelButton.onClick.AddListener(HideMenu);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_11 = __this->___m_CancelButton_9;
		NullCheck(L_11);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_12;
		L_12 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_11, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_13 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_13, __this, (intptr_t)((void*)ARSampleMenuManager_HideMenu_mF7B36C1B86A31F383280EB20754E9176D2204493_RuntimeMethod_var), NULL);
		NullCheck(L_12);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_12, L_13, NULL);
		// m_DeleteButton.onClick.AddListener(DeleteFocusedObject);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_14 = __this->___m_DeleteButton_5;
		NullCheck(L_14);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_15;
		L_15 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_14, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_16 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_16, __this, (intptr_t)((void*)ARSampleMenuManager_DeleteFocusedObject_m667D1CB386D6C76BC4D808BA66AA22FCD519C172_RuntimeMethod_var), NULL);
		NullCheck(L_15);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_15, L_16, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARSampleMenuManager::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSampleMenuManager_OnDisable_m52382A9FF69CAABF609C39913243FEDA5C8A1337 (ARSampleMenuManager_t430D746985FAFB3C872592524116CC71BEAC8834* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARSampleMenuManager_DeleteFocusedObject_m667D1CB386D6C76BC4D808BA66AA22FCD519C172_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARSampleMenuManager_HideMenu_mF7B36C1B86A31F383280EB20754E9176D2204493_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARSampleMenuManager_HideTapOutsideUI_m271AE72E50618073CEB7881AC57489121FEE9722_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARSampleMenuManager_ShowMenu_mE3262FD4AE0DF3CD224342BCA83D39FB7DE773B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// m_ShowObjectMenu = false;
		__this->___m_ShowObjectMenu_13 = (bool)0;
		// m_ScreenSpaceController.dragCurrentPositionAction.action.started -= HideTapOutsideUI;
		XRScreenSpaceController_t046F18C2FE01EB347832DB82D42C84131771FF17* L_0 = __this->___m_ScreenSpaceController_10;
		NullCheck(L_0);
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_1;
		L_1 = XRScreenSpaceController_get_dragCurrentPositionAction_m623F46DA0FF55294919EC17BB198D6D000936FBB_inline(L_0, NULL);
		V_0 = L_1;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2;
		L_2 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47((&V_0), NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_3 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_3, __this, (intptr_t)((void*)ARSampleMenuManager_HideTapOutsideUI_m271AE72E50618073CEB7881AC57489121FEE9722_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_2, L_3, NULL);
		// m_ScreenSpaceController.tapStartPositionAction.action.started -= HideTapOutsideUI;
		XRScreenSpaceController_t046F18C2FE01EB347832DB82D42C84131771FF17* L_4 = __this->___m_ScreenSpaceController_10;
		NullCheck(L_4);
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_5;
		L_5 = XRScreenSpaceController_get_tapStartPositionAction_m15334FD6AFCAB3C891A677DC157A7EC88AC5C38E_inline(L_4, NULL);
		V_0 = L_5;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_6;
		L_6 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47((&V_0), NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_7 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_7, __this, (intptr_t)((void*)ARSampleMenuManager_HideTapOutsideUI_m271AE72E50618073CEB7881AC57489121FEE9722_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_6, L_7, NULL);
		// m_CreateButton.onClick.RemoveListener(ShowMenu);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_8 = __this->___m_CreateButton_4;
		NullCheck(L_8);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_9;
		L_9 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_8, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_10 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_10, __this, (intptr_t)((void*)ARSampleMenuManager_ShowMenu_mE3262FD4AE0DF3CD224342BCA83D39FB7DE773B9_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_9, L_10, NULL);
		// m_CancelButton.onClick.RemoveListener(HideMenu);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_11 = __this->___m_CancelButton_9;
		NullCheck(L_11);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_12;
		L_12 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_11, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_13 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_13, __this, (intptr_t)((void*)ARSampleMenuManager_HideMenu_mF7B36C1B86A31F383280EB20754E9176D2204493_RuntimeMethod_var), NULL);
		NullCheck(L_12);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_12, L_13, NULL);
		// m_DeleteButton.onClick.RemoveListener(DeleteFocusedObject);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_14 = __this->___m_DeleteButton_5;
		NullCheck(L_14);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_15;
		L_15 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_14, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_16 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_16, __this, (intptr_t)((void*)ARSampleMenuManager_DeleteFocusedObject_m667D1CB386D6C76BC4D808BA66AA22FCD519C172_RuntimeMethod_var), NULL);
		NullCheck(L_15);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_15, L_16, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARSampleMenuManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSampleMenuManager_Start_mBFA0AF26C01F6462545D3A04A56D0D7CAF56882D (ARSampleMenuManager_t430D746985FAFB3C872592524116CC71BEAC8834* __this, const RuntimeMethod* method) 
{
	{
		// HideMenu();
		ARSampleMenuManager_HideMenu_mF7B36C1B86A31F383280EB20754E9176D2204493(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARSampleMenuManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSampleMenuManager_Update_m5F175EE244F8E240AF9AC3A7C780D974AAE51DEC (ARSampleMenuManager_t430D746985FAFB3C872592524116CC71BEAC8834* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ARSampleMenuManager_t430D746985FAFB3C872592524116CC71BEAC8834* G_B3_0 = NULL;
	ARSampleMenuManager_t430D746985FAFB3C872592524116CC71BEAC8834* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	ARSampleMenuManager_t430D746985FAFB3C872592524116CC71BEAC8834* G_B4_1 = NULL;
	XRInteractionGroup_tEC6931CE543AB5A60188714198755B9B7AEBD92A* G_B7_0 = NULL;
	XRInteractionGroup_tEC6931CE543AB5A60188714198755B9B7AEBD92A* G_B6_0 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	XRInteractionGroup_tEC6931CE543AB5A60188714198755B9B7AEBD92A* G_B14_0 = NULL;
	XRInteractionGroup_tEC6931CE543AB5A60188714198755B9B7AEBD92A* G_B13_0 = NULL;
	RuntimeObject* G_B15_0 = NULL;
	{
		// if (m_ShowObjectMenu)
		bool L_0 = __this->___m_ShowObjectMenu_13;
		if (!L_0)
		{
			goto IL_004c;
		}
	}
	{
		// m_CreateButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->___m_CreateButton_4;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// m_DeleteButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->___m_DeleteButton_5;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// m_IsPointerOverUI = EventSystem.current != null && EventSystem.current.IsPointerOverGameObject(-1);
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_5;
		L_5 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B2_0 = __this;
		if (!L_6)
		{
			G_B3_0 = __this;
			goto IL_0045;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_7;
		L_7 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		NullCheck(L_7);
		bool L_8;
		L_8 = EventSystem_IsPointerOverGameObject_m238732B4FDEA343976D798FF04DB34C3221243C2(L_7, (-1), NULL);
		G_B4_0 = ((int32_t)(L_8));
		G_B4_1 = G_B2_0;
		goto IL_0046;
	}

IL_0045:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B3_0;
	}

IL_0046:
	{
		NullCheck(G_B4_1);
		G_B4_1->___m_IsPointerOverUI_12 = (bool)G_B4_0;
		return;
	}

IL_004c:
	{
		// m_IsPointerOverUI = false;
		__this->___m_IsPointerOverUI_12 = (bool)0;
		// if (m_InteractionGroup?.focusInteractable != null && (!m_DeleteButton.isActiveAndEnabled || m_CreateButton.isActiveAndEnabled))
		XRInteractionGroup_tEC6931CE543AB5A60188714198755B9B7AEBD92A* L_9 = __this->___m_InteractionGroup_11;
		XRInteractionGroup_tEC6931CE543AB5A60188714198755B9B7AEBD92A* L_10 = L_9;
		G_B6_0 = L_10;
		if (L_10)
		{
			G_B7_0 = L_10;
			goto IL_0060;
		}
	}
	{
		G_B8_0 = ((RuntimeObject*)(NULL));
		goto IL_0065;
	}

IL_0060:
	{
		NullCheck(G_B7_0);
		RuntimeObject* L_11;
		L_11 = XRInteractionGroup_get_focusInteractable_mE4584257FC15989E262BCC7A4552DE358B362B38_inline(G_B7_0, NULL);
		G_B8_0 = L_11;
	}

IL_0065:
	{
		if (!G_B8_0)
		{
			goto IL_00a4;
		}
	}
	{
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_12 = __this->___m_DeleteButton_5;
		NullCheck(L_12);
		bool L_13;
		L_13 = Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A(L_12, NULL);
		if (!L_13)
		{
			goto IL_0081;
		}
	}
	{
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_14 = __this->___m_CreateButton_4;
		NullCheck(L_14);
		bool L_15;
		L_15 = Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A(L_14, NULL);
		if (!L_15)
		{
			goto IL_00a4;
		}
	}

IL_0081:
	{
		// m_CreateButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_16 = __this->___m_CreateButton_4;
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_16, NULL);
		NullCheck(L_17);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)0, NULL);
		// m_DeleteButton.gameObject.SetActive(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_18 = __this->___m_DeleteButton_5;
		NullCheck(L_18);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_18, NULL);
		NullCheck(L_19);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_19, (bool)1, NULL);
		return;
	}

IL_00a4:
	{
		// else if (m_InteractionGroup?.focusInteractable == null && (!m_CreateButton.isActiveAndEnabled || m_DeleteButton.isActiveAndEnabled))
		XRInteractionGroup_tEC6931CE543AB5A60188714198755B9B7AEBD92A* L_20 = __this->___m_InteractionGroup_11;
		XRInteractionGroup_tEC6931CE543AB5A60188714198755B9B7AEBD92A* L_21 = L_20;
		G_B13_0 = L_21;
		if (L_21)
		{
			G_B14_0 = L_21;
			goto IL_00b1;
		}
	}
	{
		G_B15_0 = ((RuntimeObject*)(NULL));
		goto IL_00b6;
	}

IL_00b1:
	{
		NullCheck(G_B14_0);
		RuntimeObject* L_22;
		L_22 = XRInteractionGroup_get_focusInteractable_mE4584257FC15989E262BCC7A4552DE358B362B38_inline(G_B14_0, NULL);
		G_B15_0 = L_22;
	}

IL_00b6:
	{
		if (G_B15_0)
		{
			goto IL_00f4;
		}
	}
	{
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_23 = __this->___m_CreateButton_4;
		NullCheck(L_23);
		bool L_24;
		L_24 = Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A(L_23, NULL);
		if (!L_24)
		{
			goto IL_00d2;
		}
	}
	{
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_25 = __this->___m_DeleteButton_5;
		NullCheck(L_25);
		bool L_26;
		L_26 = Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A(L_25, NULL);
		if (!L_26)
		{
			goto IL_00f4;
		}
	}

IL_00d2:
	{
		// m_CreateButton.gameObject.SetActive(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_27 = __this->___m_CreateButton_4;
		NullCheck(L_27);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_27, NULL);
		NullCheck(L_28);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_28, (bool)1, NULL);
		// m_DeleteButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_29 = __this->___m_DeleteButton_5;
		NullCheck(L_29);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30;
		L_30 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_29, NULL);
		NullCheck(L_30);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_30, (bool)0, NULL);
	}

IL_00f4:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARSampleMenuManager::SetObjectToSpawn(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSampleMenuManager_SetObjectToSpawn_mE75FBE5DE5481B6CF6BADF195F2CC9776A49051D (ARSampleMenuManager_t430D746985FAFB3C872592524116CC71BEAC8834* __this, int32_t ___objectIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral097F37F3ED2CFD2A42AD5A1A9DB967264145EEB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA852FE3BCFA60509BB6A26DB0CF77DFF88536BDB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_ObjectSpawner == null)
		ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* L_0 = __this->___m_ObjectSpawner_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// Debug.LogWarning("Object Spawner not configured correctly: no ObjectSpawner set.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral097F37F3ED2CFD2A42AD5A1A9DB967264145EEB3, NULL);
		goto IL_0045;
	}

IL_001a:
	{
		// if (m_ObjectSpawner.objectPrefabs.Count > objectIndex)
		ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* L_2 = __this->___m_ObjectSpawner_8;
		NullCheck(L_2);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3;
		L_3 = ObjectSpawner_get_objectPrefabs_mC013B08B69C29F13A750E8715FAB01E8681320CF_inline(L_2, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_3, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		int32_t L_5 = ___objectIndex0;
		if ((((int32_t)L_4) <= ((int32_t)L_5)))
		{
			goto IL_003b;
		}
	}
	{
		// m_ObjectSpawner.spawnOptionIndex = objectIndex;
		ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* L_6 = __this->___m_ObjectSpawner_8;
		int32_t L_7 = ___objectIndex0;
		NullCheck(L_6);
		ObjectSpawner_set_spawnOptionIndex_m5984E7B1712BB73A2E982FE4487FCA033A922711_inline(L_6, L_7, NULL);
		goto IL_0045;
	}

IL_003b:
	{
		// Debug.LogWarning("Object Spawner not configured correctly: object index larger than number of Object Prefabs.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralA852FE3BCFA60509BB6A26DB0CF77DFF88536BDB, NULL);
	}

IL_0045:
	{
		// HideMenu();
		ARSampleMenuManager_HideMenu_mF7B36C1B86A31F383280EB20754E9176D2204493(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARSampleMenuManager::ShowMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSampleMenuManager_ShowMenu_mE3262FD4AE0DF3CD224342BCA83D39FB7DE773B9 (ARSampleMenuManager_t430D746985FAFB3C872592524116CC71BEAC8834* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEF1F71BD3C21C53860EC6863B3105336E4D873B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_ShowObjectMenu = true;
		__this->___m_ShowObjectMenu_13 = (bool)1;
		// m_ObjectMenu.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_ObjectMenu_6;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// if (!m_ObjectMenuAnimator.GetBool("Show"))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->___m_ObjectMenuAnimator_7;
		NullCheck(L_1);
		bool L_2;
		L_2 = Animator_GetBool_mBC4D952885FF7504963E5923C29481A891028FD8(L_1, _stringLiteralBEF1F71BD3C21C53860EC6863B3105336E4D873B, NULL);
		if (L_2)
		{
			goto IL_0036;
		}
	}
	{
		// m_ObjectMenuAnimator.SetBool("Show", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___m_ObjectMenuAnimator_7;
		NullCheck(L_3);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_3, _stringLiteralBEF1F71BD3C21C53860EC6863B3105336E4D873B, (bool)1, NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARSampleMenuManager::HideMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSampleMenuManager_HideMenu_mF7B36C1B86A31F383280EB20754E9176D2204493 (ARSampleMenuManager_t430D746985FAFB3C872592524116CC71BEAC8834* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEF1F71BD3C21C53860EC6863B3105336E4D873B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_ObjectMenuAnimator.SetBool("Show", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___m_ObjectMenuAnimator_7;
		NullCheck(L_0);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteralBEF1F71BD3C21C53860EC6863B3105336E4D873B, (bool)0, NULL);
		// m_ShowObjectMenu = false;
		__this->___m_ShowObjectMenu_13 = (bool)0;
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARSampleMenuManager::HideTapOutsideUI(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSampleMenuManager_HideTapOutsideUI_m271AE72E50618073CEB7881AC57489121FEE9722 (ARSampleMenuManager_t430D746985FAFB3C872592524116CC71BEAC8834* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	{
		// if (!m_IsPointerOverUI)
		bool L_0 = __this->___m_IsPointerOverUI_12;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// HideMenu();
		ARSampleMenuManager_HideMenu_mF7B36C1B86A31F383280EB20754E9176D2204493(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARSampleMenuManager::DeleteFocusedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSampleMenuManager_DeleteFocusedObject_m667D1CB386D6C76BC4D808BA66AA22FCD519C172 (ARSampleMenuManager_t430D746985FAFB3C872592524116CC71BEAC8834* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRInteractable_t31CD4FF4D45899471D81D43D605D9C6118BF50CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var currentFocusedObject = m_InteractionGroup.focusInteractable;
		XRInteractionGroup_tEC6931CE543AB5A60188714198755B9B7AEBD92A* L_0 = __this->___m_InteractionGroup_11;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = XRInteractionGroup_get_focusInteractable_mE4584257FC15989E262BCC7A4552DE358B362B38_inline(L_0, NULL);
		V_0 = L_1;
		// if (currentFocusedObject != null)
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// Destroy(currentFocusedObject.transform.gameObject);
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = InterfaceFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(6 /* UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.IXRInteractable::get_transform() */, IXRInteractable_t31CD4FF4D45899471D81D43D605D9C6118BF50CA_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_5, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARSampleMenuManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSampleMenuManager__ctor_mCF5291AA83BBB23C1BD7D998D987713111DF9F38 (ARSampleMenuManager_t430D746985FAFB3C872592524116CC71BEAC8834* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARContactSpawnTrigger::get_objectSpawner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* ARContactSpawnTrigger_get_objectSpawner_m6AC7160A44A1C2971D04AD5AEED786B6BAA666B9 (ARContactSpawnTrigger_tD8F640BDF4DDE156DDC4531321BC98B245945267* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ObjectSpawner;
		ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* L_0 = __this->___m_ObjectSpawner_4;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARContactSpawnTrigger::set_objectSpawner(UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARContactSpawnTrigger_set_objectSpawner_mB46CAEF3ACFAD22781BB3C4EA579A43F226C741B (ARContactSpawnTrigger_tD8F640BDF4DDE156DDC4531321BC98B245945267* __this, ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ObjectSpawner = value;
		ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* L_0 = ___value0;
		__this->___m_ObjectSpawner_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ObjectSpawner_4), (void*)L_0);
		return;
	}
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARContactSpawnTrigger::get_requireHorizontalUpSurface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARContactSpawnTrigger_get_requireHorizontalUpSurface_m9EE11B8D8C61179F363CDDA494749D2C3A4A25CB (ARContactSpawnTrigger_tD8F640BDF4DDE156DDC4531321BC98B245945267* __this, const RuntimeMethod* method) 
{
	{
		// get => m_RequireHorizontalUpSurface;
		bool L_0 = __this->___m_RequireHorizontalUpSurface_5;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARContactSpawnTrigger::set_requireHorizontalUpSurface(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARContactSpawnTrigger_set_requireHorizontalUpSurface_mABB28337501D6F7431B42BF45E3E1B3158636F92 (ARContactSpawnTrigger_tD8F640BDF4DDE156DDC4531321BC98B245945267* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_RequireHorizontalUpSurface = value;
		bool L_0 = ___value0;
		__this->___m_RequireHorizontalUpSurface_5 = L_0;
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARContactSpawnTrigger::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARContactSpawnTrigger_Start_mBCEEE25BEA0A2E30A2BB26916C651E37004D75A7 (ARContactSpawnTrigger_tD8F640BDF4DDE156DDC4531321BC98B245945267* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111_m79A5932A96729E5A7255BE91D9EDF1D8FF2AF2F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_ObjectSpawner == null)
		ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* L_0 = __this->___m_ObjectSpawner_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// m_ObjectSpawner = FindObjectOfType<ObjectSpawner>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* L_2;
		L_2 = Object_FindObjectOfType_TisObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111_m79A5932A96729E5A7255BE91D9EDF1D8FF2AF2F4(Object_FindObjectOfType_TisObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111_m79A5932A96729E5A7255BE91D9EDF1D8FF2AF2F4_RuntimeMethod_var);
		__this->___m_ObjectSpawner_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ObjectSpawner_4), (void*)L_2);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARContactSpawnTrigger::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARContactSpawnTrigger_OnTriggerEnter_mCBB5A482AC1A67A34DD44EA86EFF45BD6674BB08 (ARContactSpawnTrigger_tD8F640BDF4DDE156DDC4531321BC98B245945267* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (!TryGetSpawnSurfaceData(other, out var surfacePosition, out var surfaceNormal))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		bool L_1;
		L_1 = ARContactSpawnTrigger_TryGetSpawnSurfaceData_mC4FFEBA61C40C358542A37173B802B37B77138FD(__this, L_0, (&V_0), (&V_1), NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// var infinitePlane = new Plane(surfaceNormal, surfacePosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		Plane__ctor_m2BFB65EBFF51123791878684ECC375B99FAD10A2((&V_2), L_2, L_3, NULL);
		// var contactPoint = infinitePlane.ClosestPointOnPlane(transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Plane_ClosestPointOnPlane_m5350637BF436E1B5039D8AC09E7AADA126E85A84((&V_2), L_5, NULL);
		V_3 = L_6;
		// m_ObjectSpawner.TrySpawnObject(contactPoint, surfaceNormal);
		ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* L_7 = __this->___m_ObjectSpawner_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_1;
		NullCheck(L_7);
		bool L_10;
		L_10 = ObjectSpawner_TrySpawnObject_mBE0345EF7F3D3EF69F20321A4190214DB09D65B1(L_7, L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARContactSpawnTrigger::TryGetSpawnSurfaceData(UnityEngine.Collider,UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARContactSpawnTrigger_TryGetSpawnSurfaceData_mC4FFEBA61C40C358542A37173B802B37B77138FD (ARContactSpawnTrigger_tD8F640BDF4DDE156DDC4531321BC98B245945267* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___objectCollider0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___surfacePosition1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___surfaceNormal2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_m8005DAC7F65600404981B996A714B5C7D29A359F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* V_0 = NULL;
	{
		// surfacePosition = default;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___surfacePosition1;
		il2cpp_codegen_initobj(L_0, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// surfaceNormal = default;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = ___surfaceNormal2;
		il2cpp_codegen_initobj(L_1, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// var arPlane = objectCollider.GetComponent<ARPlane>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_2 = ___objectCollider0;
		NullCheck(L_2);
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_3;
		L_3 = Component_GetComponent_TisARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_m8005DAC7F65600404981B996A714B5C7D29A359F(L_2, Component_GetComponent_TisARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_m8005DAC7F65600404981B996A714B5C7D29A359F_RuntimeMethod_var);
		V_0 = L_3;
		// if (arPlane == null)
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0020:
	{
		// if (m_RequireHorizontalUpSurface && arPlane.alignment != PlaneAlignment.HorizontalUp)
		bool L_6 = __this->___m_RequireHorizontalUpSurface_5;
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = ARPlane_get_alignment_mBEF1BCDE0A964ADAE4E5F477BD4C961CA8849EC1(L_7, NULL);
		if ((((int32_t)L_8) == ((int32_t)((int32_t)100))))
		{
			goto IL_0034;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0034:
	{
		// surfaceNormal = arPlane.normal;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = ___surfaceNormal2;
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_10 = V_0;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = ARPlane_get_normal_m12A4F62B15333D04011C0DBD6377FA1E9B3C60B7(L_10, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_9 = L_11;
		// surfacePosition = arPlane.center;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_12 = ___surfacePosition1;
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_13 = V_0;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = ARPlane_get_center_mB33D672F5673C29616BC46AC56AF1276D5A627CC(L_13, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_12 = L_14;
		// return true;
		return (bool)1;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARContactSpawnTrigger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARContactSpawnTrigger__ctor_mD25FB3EFCF4C042E3972AA861634824006FFFF15 (ARContactSpawnTrigger_tD8F640BDF4DDE156DDC4531321BC98B245945267* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARFeatheredPlaneMeshVisualizer::get_featheringWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ARFeatheredPlaneMeshVisualizer_get_featheringWidth_m2E50FB2F2394BF511A66CB70C282F3D31177921F (ARFeatheredPlaneMeshVisualizer_t6CF5956C7D39A69C97F4B67E6CA75AAAD09C8C48* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_FeatheringWidth; }
		float L_0 = __this->___m_FeatheringWidth_4;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARFeatheredPlaneMeshVisualizer::set_featheringWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_set_featheringWidth_mB294FAE8680A88A097AF8F2F37162A8E153F3DA6 (ARFeatheredPlaneMeshVisualizer_t6CF5956C7D39A69C97F4B67E6CA75AAAD09C8C48* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_FeatheringWidth = value; }
		float L_0 = ___value0;
		__this->___m_FeatheringWidth_4 = L_0;
		// set { m_FeatheringWidth = value; }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARFeatheredPlaneMeshVisualizer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_Awake_m513CB21DC3F7043BF3AE4F233B734624F63A89FC (ARFeatheredPlaneMeshVisualizer_t6CF5956C7D39A69C97F4B67E6CA75AAAD09C8C48* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F_m41229EDC62D1149A73F81E7B0BE27B4C1C293A01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_m8005DAC7F65600404981B996A714B5C7D29A359F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_PlaneMeshVisualizer = GetComponent<ARPlaneMeshVisualizer>();
		ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* L_0;
		L_0 = Component_GetComponent_TisARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F_m41229EDC62D1149A73F81E7B0BE27B4C1C293A01(__this, Component_GetComponent_TisARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F_m41229EDC62D1149A73F81E7B0BE27B4C1C293A01_RuntimeMethod_var);
		__this->___m_PlaneMeshVisualizer_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PlaneMeshVisualizer_7), (void*)L_0);
		// m_FeatheredPlaneMaterial = GetComponent<MeshRenderer>().material;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_1;
		L_1 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(__this, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_1, NULL);
		__this->___m_FeatheredPlaneMaterial_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FeatheredPlaneMaterial_9), (void*)L_2);
		// m_Plane = GetComponent<ARPlane>();
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_3;
		L_3 = Component_GetComponent_TisARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_m8005DAC7F65600404981B996A714B5C7D29A359F(__this, Component_GetComponent_TisARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_m8005DAC7F65600404981B996A714B5C7D29A359F_RuntimeMethod_var);
		__this->___m_Plane_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Plane_8), (void*)L_3);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARFeatheredPlaneMeshVisualizer::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_OnEnable_m9644563ED43A8AC4FF453C1C4FBCAB0979CBC96E (ARFeatheredPlaneMeshVisualizer_t6CF5956C7D39A69C97F4B67E6CA75AAAD09C8C48* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_m59B0E1533509EBCF5427D3BA2D879612C59F9EF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Plane.boundaryChanged += ARPlane_boundaryUpdated;
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_0 = __this->___m_Plane_8;
		Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* L_1 = (Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074*)il2cpp_codegen_object_new(Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m83B9B49A5CEF71BC8798C9C8B7989333626CF3E1(L_1, __this, (intptr_t)((void*)ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_m59B0E1533509EBCF5427D3BA2D879612C59F9EF0_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		ARPlane_add_boundaryChanged_m6A9CA2ADF4742C004EF7BCFD48A7C820320616AA(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARFeatheredPlaneMeshVisualizer::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_OnDisable_m9D96C071D077108E394C3700CFE4CBD0D79EFC73 (ARFeatheredPlaneMeshVisualizer_t6CF5956C7D39A69C97F4B67E6CA75AAAD09C8C48* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_m59B0E1533509EBCF5427D3BA2D879612C59F9EF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Plane.boundaryChanged -= ARPlane_boundaryUpdated;
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_0 = __this->___m_Plane_8;
		Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* L_1 = (Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074*)il2cpp_codegen_object_new(Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m83B9B49A5CEF71BC8798C9C8B7989333626CF3E1(L_1, __this, (intptr_t)((void*)ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_m59B0E1533509EBCF5427D3BA2D879612C59F9EF0_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		ARPlane_remove_boundaryChanged_m6F71EEF2CD3C71AF069C5FE6CD993906BD8A9A10(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARFeatheredPlaneMeshVisualizer::ARPlane_boundaryUpdated(UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_m59B0E1533509EBCF5427D3BA2D879612C59F9EF0 (ARFeatheredPlaneMeshVisualizer_t6CF5956C7D39A69C97F4B67E6CA75AAAD09C8C48* __this, ARPlaneBoundaryChangedEventArgs_tE59EDE94575C8947AD3F1F8DA1370D0A426A5FFC ___eventArgs0, const RuntimeMethod* method) 
{
	{
		// GenerateBoundaryUVs(m_PlaneMeshVisualizer.mesh);
		ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* L_0 = __this->___m_PlaneMeshVisualizer_7;
		NullCheck(L_0);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_1;
		L_1 = ARPlaneMeshVisualizer_get_mesh_m6C1A730CECE8AE0A0549ED615AB3B3D66E4A0FD8_inline(L_0, NULL);
		ARFeatheredPlaneMeshVisualizer_GenerateBoundaryUVs_mE7D48832D82B1F125A77C96A42E90DF1BC227796(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARFeatheredPlaneMeshVisualizer::GenerateBoundaryUVs(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_GenerateBoundaryUVs_mE7D48832D82B1F125A77C96A42E90DF1BC227796 (ARFeatheredPlaneMeshVisualizer_t6CF5956C7D39A69C97F4B67E6CA75AAAD09C8C48* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARFeatheredPlaneMeshVisualizer_t6CF5956C7D39A69C97F4B67E6CA75AAAD09C8C48_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral131018280018B48DB9FF86A96C7535E6FA339C24);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	{
		// int vertexCount = mesh.vertexCount;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = ___mesh0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Mesh_get_vertexCount_mB7BE0340AAF272933068D830C8E711FC8978E12C(L_0, NULL);
		V_0 = L_1;
		// s_FeatheringUVs.Clear();
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t6CF5956C7D39A69C97F4B67E6CA75AAAD09C8C48_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_2 = ((ARFeatheredPlaneMeshVisualizer_t6CF5956C7D39A69C97F4B67E6CA75AAAD09C8C48_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t6CF5956C7D39A69C97F4B67E6CA75AAAD09C8C48_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		NullCheck(L_2);
		List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_inline(L_2, List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var);
		// if (s_FeatheringUVs.Capacity < vertexCount) { s_FeatheringUVs.Capacity = vertexCount; }
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_3 = ((ARFeatheredPlaneMeshVisualizer_t6CF5956C7D39A69C97F4B67E6CA75AAAD09C8C48_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t6CF5956C7D39A69C97F4B67E6CA75AAAD09C8C48_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6(L_3, List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6_RuntimeMethod_var);
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0029;
		}
	}
	{
		// if (s_FeatheringUVs.Capacity < vertexCount) { s_FeatheringUVs.Capacity = vertexCount; }
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t6CF5956C7D39A69C97F4B67E6CA75AAAD09C8C48_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_6 = ((ARFeatheredPlaneMeshVisualizer_t6CF5956C7D39A69C97F4B67E6CA75AAAD09C8C48_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t6CF5956C7D39A69C97F4B67E6CA75AAAD09C8C48_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE(L_6, L_7, List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE_RuntimeMethod_var);
	}

IL_0029:
	{
		// mesh.GetVertices(s_Vertices);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_8 = ___mesh0;
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t6CF5956C7D39A69C97F4B67E6CA75AAAD09C8C48_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_9 = ((ARFeatheredPlaneMeshVisualizer_t6CF5956C7D39A69C97F4B67E6CA75AAAD09C8C48_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t6CF5956C7D39A69C97F4B67E6CA75AAAD09C8C48_il2cpp_TypeInfo_var))->___s_Vertices_6;
		NullCheck(L_8);
		Mesh_GetVertices_m5BF8777074E383AD8C4B9974D27E4AB52963D92E(L_8, L_9, NULL);
		// Vector3 centerInPlaneSpace = s_Vertices[s_Vertices.Count - 1];
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_10 = ((ARFeatheredPlaneMeshVisualizer_t6CF5956C7D39A69C97F4B67E6CA75AAAD09C8C48_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t6CF5956C7D39A69C97F4B67E6CA75AAAD09C8C48_il2cpp_TypeInfo_var))->___s_Vertices_6;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_11 = ((ARFeatheredPlaneMeshVisualizer_t6CF5956C7D39A69C97F4B67E6CA75AAAD09C8C48_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t6CF5956C7D39A69C97F4B67E6CA75AAAD09C8C48_il2cpp_TypeInfo_var))->___s_Vertices_6;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_11, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_10, ((int32_t)il2cpp_codegen_subtract(L_12, 1)), List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		V_1 = L_13;
		// Vector3 uv = new Vector3(0, 0, 0);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_2), (0.0f), (0.0f), (0.0f), NULL);
		// float shortestUVMapping = float.MaxValue;
		V_3 = ((std::numeric_limits<float>::max)());
		// for (int i = 0; i < vertexCount - 1; i++)
		V_4 = 0;
		goto IL_00b5;
	}

IL_006c:
	{
		// float vertexDist = Vector3.Distance(s_Vertices[i], centerInPlaneSpace);
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t6CF5956C7D39A69C97F4B67E6CA75AAAD09C8C48_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_14 = ((ARFeatheredPlaneMeshVisualizer_t6CF5956C7D39A69C97F4B67E6CA75AAAD09C8C48_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t6CF5956C7D39A69C97F4B67E6CA75AAAD09C8C48_il2cpp_TypeInfo_var))->___s_Vertices_6;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_14, L_15, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_1;
		float L_18;
		L_18 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_16, L_17, NULL);
		// float uvMapping = vertexDist / Mathf.Max(vertexDist - featheringWidth, 0.001f);
		float L_19 = L_18;
		float L_20;
		L_20 = ARFeatheredPlaneMeshVisualizer_get_featheringWidth_m2E50FB2F2394BF511A66CB70C282F3D31177921F_inline(__this, NULL);
		float L_21;
		L_21 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)il2cpp_codegen_subtract(L_19, L_20)), (0.00100000005f), NULL);
		V_5 = ((float)(L_19/L_21));
		// uv.x = uvMapping;
		float L_22 = V_5;
		(&V_2)->___x_2 = L_22;
		// if (shortestUVMapping > uvMapping) { shortestUVMapping = uvMapping; }
		float L_23 = V_3;
		float L_24 = V_5;
		if ((!(((float)L_23) > ((float)L_24))))
		{
			goto IL_00a4;
		}
	}
	{
		// if (shortestUVMapping > uvMapping) { shortestUVMapping = uvMapping; }
		float L_25 = V_5;
		V_3 = L_25;
	}

IL_00a4:
	{
		// s_FeatheringUVs.Add(uv);
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t6CF5956C7D39A69C97F4B67E6CA75AAAD09C8C48_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_26 = ((ARFeatheredPlaneMeshVisualizer_t6CF5956C7D39A69C97F4B67E6CA75AAAD09C8C48_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t6CF5956C7D39A69C97F4B67E6CA75AAAD09C8C48_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_2;
		NullCheck(L_26);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_26, L_27, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// for (int i = 0; i < vertexCount - 1; i++)
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00b5:
	{
		// for (int i = 0; i < vertexCount - 1; i++)
		int32_t L_29 = V_4;
		int32_t L_30 = V_0;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_30, 1)))))
		{
			goto IL_006c;
		}
	}
	{
		// m_FeatheredPlaneMaterial.SetFloat("_ShortestUVMapping", shortestUVMapping);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_31 = __this->___m_FeatheredPlaneMaterial_9;
		float L_32 = V_3;
		NullCheck(L_31);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_31, _stringLiteral131018280018B48DB9FF86A96C7535E6FA339C24, L_32, NULL);
		// uv.Set(0, 0, 0);
		Vector3_Set_m1C7E543216734FB513F9CEBA44C50E6FC2AFD49D_inline((&V_2), (0.0f), (0.0f), (0.0f), NULL);
		// s_FeatheringUVs.Add(uv);
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t6CF5956C7D39A69C97F4B67E6CA75AAAD09C8C48_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_33 = ((ARFeatheredPlaneMeshVisualizer_t6CF5956C7D39A69C97F4B67E6CA75AAAD09C8C48_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t6CF5956C7D39A69C97F4B67E6CA75AAAD09C8C48_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_2;
		NullCheck(L_33);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_33, L_34, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// mesh.SetUVs(1, s_FeatheringUVs);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_35 = ___mesh0;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_36 = ((ARFeatheredPlaneMeshVisualizer_t6CF5956C7D39A69C97F4B67E6CA75AAAD09C8C48_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t6CF5956C7D39A69C97F4B67E6CA75AAAD09C8C48_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		NullCheck(L_35);
		Mesh_SetUVs_mFEE20B5977AA358DAFA31CF621BBC4B0247789B2(L_35, 1, L_36, NULL);
		// mesh.UploadMeshData(false);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_37 = ___mesh0;
		NullCheck(L_37);
		Mesh_UploadMeshData_mE4C94F263DAA8CAC1641FE137E1CE7D3F09396EB(L_37, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARFeatheredPlaneMeshVisualizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer__ctor_m5EE8A073C29653AB417E9BEE0BA22DA31F59860E (ARFeatheredPlaneMeshVisualizer_t6CF5956C7D39A69C97F4B67E6CA75AAAD09C8C48* __this, const RuntimeMethod* method) 
{
	{
		// float m_FeatheringWidth = 0.2f;
		__this->___m_FeatheringWidth_4 = (0.200000003f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARFeatheredPlaneMeshVisualizer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer__cctor_m36A77AD8F0303E3F6C470EBFC5979DCF27742061 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARFeatheredPlaneMeshVisualizer_t6CF5956C7D39A69C97F4B67E6CA75AAAD09C8C48_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static List<Vector3> s_FeatheringUVs = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_0, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		((ARFeatheredPlaneMeshVisualizer_t6CF5956C7D39A69C97F4B67E6CA75AAAD09C8C48_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t6CF5956C7D39A69C97F4B67E6CA75AAAD09C8C48_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ARFeatheredPlaneMeshVisualizer_t6CF5956C7D39A69C97F4B67E6CA75AAAD09C8C48_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t6CF5956C7D39A69C97F4B67E6CA75AAAD09C8C48_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5), (void*)L_0);
		// static List<Vector3> s_Vertices = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_1 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_1, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		((ARFeatheredPlaneMeshVisualizer_t6CF5956C7D39A69C97F4B67E6CA75AAAD09C8C48_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t6CF5956C7D39A69C97F4B67E6CA75AAAD09C8C48_il2cpp_TypeInfo_var))->___s_Vertices_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ARFeatheredPlaneMeshVisualizer_t6CF5956C7D39A69C97F4B67E6CA75AAAD09C8C48_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t6CF5956C7D39A69C97F4B67E6CA75AAAD09C8C48_il2cpp_TypeInfo_var))->___s_Vertices_6), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Object UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARInteractorSpawnTrigger::get_arInteractorObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ARInteractorSpawnTrigger_get_arInteractorObject_mD47B76EF04BE878BF719FCB741BF737C34739902 (ARInteractorSpawnTrigger_t4A1290908BA12C9084EF6DBB71684676CD21A8FA* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ARInteractorObject;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = __this->___m_ARInteractorObject_4;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARInteractorSpawnTrigger::set_arInteractorObject(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARInteractorSpawnTrigger_set_arInteractorObject_mFE0047FA2E8B61418EE8C2D1C14971BE33F49732 (ARInteractorSpawnTrigger_t4A1290908BA12C9084EF6DBB71684676CD21A8FA* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ARInteractorObject = value;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ___value0;
		__this->___m_ARInteractorObject_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ARInteractorObject_4), (void*)L_0);
		return;
	}
}
// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARInteractorSpawnTrigger::get_objectSpawner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* ARInteractorSpawnTrigger_get_objectSpawner_m5801B221F4A39AE420000C9557918DF05F445E7B (ARInteractorSpawnTrigger_t4A1290908BA12C9084EF6DBB71684676CD21A8FA* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ObjectSpawner;
		ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* L_0 = __this->___m_ObjectSpawner_5;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARInteractorSpawnTrigger::set_objectSpawner(UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARInteractorSpawnTrigger_set_objectSpawner_m1E7BD71416422DD1C3CB46959914A27D817CAA2D (ARInteractorSpawnTrigger_t4A1290908BA12C9084EF6DBB71684676CD21A8FA* __this, ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ObjectSpawner = value;
		ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* L_0 = ___value0;
		__this->___m_ObjectSpawner_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ObjectSpawner_5), (void*)L_0);
		return;
	}
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARInteractorSpawnTrigger::get_requireHorizontalUpSurface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARInteractorSpawnTrigger_get_requireHorizontalUpSurface_mF09C97FB685D290E45620298A261CAAC4AC1D248 (ARInteractorSpawnTrigger_t4A1290908BA12C9084EF6DBB71684676CD21A8FA* __this, const RuntimeMethod* method) 
{
	{
		// get => m_RequireHorizontalUpSurface;
		bool L_0 = __this->___m_RequireHorizontalUpSurface_6;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARInteractorSpawnTrigger::set_requireHorizontalUpSurface(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARInteractorSpawnTrigger_set_requireHorizontalUpSurface_mCDB97A9958A715203BD18BE5E499327339EDB178 (ARInteractorSpawnTrigger_t4A1290908BA12C9084EF6DBB71684676CD21A8FA* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_RequireHorizontalUpSurface = value;
		bool L_0 = ___value0;
		__this->___m_RequireHorizontalUpSurface_6 = L_0;
		return;
	}
}
// UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARInteractorSpawnTrigger/SpawnTriggerType UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARInteractorSpawnTrigger::get_spawnTriggerType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARInteractorSpawnTrigger_get_spawnTriggerType_m33DA41AE09E11080778CE8728CED2D82FA96AA8C (ARInteractorSpawnTrigger_t4A1290908BA12C9084EF6DBB71684676CD21A8FA* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SpawnTriggerType;
		int32_t L_0 = __this->___m_SpawnTriggerType_7;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARInteractorSpawnTrigger::set_spawnTriggerType(UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARInteractorSpawnTrigger/SpawnTriggerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARInteractorSpawnTrigger_set_spawnTriggerType_m14DDCFD2F74F5E0315BCF7FECCBAFB9774F96AF7 (ARInteractorSpawnTrigger_t4A1290908BA12C9084EF6DBB71684676CD21A8FA* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_SpawnTriggerType = value;
		int32_t L_0 = ___value0;
		__this->___m_SpawnTriggerType_7 = L_0;
		return;
	}
}
// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARInteractorSpawnTrigger::get_spawnAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ARInteractorSpawnTrigger_get_spawnAction_m00A79F8C0CF8CBA3CE0E158CA412F12D93262783 (ARInteractorSpawnTrigger_t4A1290908BA12C9084EF6DBB71684676CD21A8FA* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SpawnAction;
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_0 = __this->___m_SpawnAction_8;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARInteractorSpawnTrigger::set_spawnAction(UnityEngine.InputSystem.InputActionProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARInteractorSpawnTrigger_set_spawnAction_mA50DA3B1FA7CA1E3D181D00BAE35EFFA4535FDF5 (ARInteractorSpawnTrigger_t4A1290908BA12C9084EF6DBB71684676CD21A8FA* __this, InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___value0, const RuntimeMethod* method) 
{
	{
		// if (Application.isPlaying)
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// m_SpawnAction.DisableDirectAction();
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_1 = __this->___m_SpawnAction_8;
		InputActionPropertyExtensions_DisableDirectAction_m976F69C07BC1AF691C6D3A1E03BBD4EA0D265932(L_1, NULL);
	}

IL_0012:
	{
		// m_SpawnAction = value;
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_2 = ___value0;
		__this->___m_SpawnAction_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___m_SpawnAction_8))->___m_Action_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___m_SpawnAction_8))->___m_Reference_2), (void*)NULL);
		#endif
		// if (Application.isPlaying && isActiveAndEnabled)
		bool L_3;
		L_3 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		bool L_4;
		L_4 = Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A(__this, NULL);
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		// m_SpawnAction.EnableDirectAction();
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_5 = __this->___m_SpawnAction_8;
		InputActionPropertyExtensions_EnableDirectAction_m4F6A0B5DD5EFACC0B84BFCBD5FA15491DBE9DA26(L_5, NULL);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARInteractorSpawnTrigger::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARInteractorSpawnTrigger_Start_m2E882D7460D1D37C94A524F78210C528C9A59CC2 (ARInteractorSpawnTrigger_t4A1290908BA12C9084EF6DBB71684676CD21A8FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARInteractor_t3663AA3A1C10770AF461D6960A65A91579E4AF04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111_m79A5932A96729E5A7255BE91D9EDF1D8FF2AF2F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBBE344808550097351DB4FADA926BA003A2358C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_ObjectSpawner == null)
		ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* L_0 = __this->___m_ObjectSpawner_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// m_ObjectSpawner = FindObjectOfType<ObjectSpawner>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* L_2;
		L_2 = Object_FindObjectOfType_TisObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111_m79A5932A96729E5A7255BE91D9EDF1D8FF2AF2F4(Object_FindObjectOfType_TisObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111_m79A5932A96729E5A7255BE91D9EDF1D8FF2AF2F4_RuntimeMethod_var);
		__this->___m_ObjectSpawner_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ObjectSpawner_5), (void*)L_2);
	}

IL_0019:
	{
		// m_ARInteractor = m_ARInteractorObject as IARInteractor;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_3 = __this->___m_ARInteractorObject_4;
		__this->___m_ARInteractor_9 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IARInteractor_t3663AA3A1C10770AF461D6960A65A91579E4AF04_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ARInteractor_9), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IARInteractor_t3663AA3A1C10770AF461D6960A65A91579E4AF04_il2cpp_TypeInfo_var)));
		// m_ARInteractorAsControllerInteractor = m_ARInteractorObject as XRBaseControllerInteractor;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_4 = __this->___m_ARInteractorObject_4;
		__this->___m_ARInteractorAsControllerInteractor_10 = ((XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E*)IsInstClass((RuntimeObject*)L_4, XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ARInteractorAsControllerInteractor_10), (void*)((XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E*)IsInstClass((RuntimeObject*)L_4, XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E_il2cpp_TypeInfo_var)));
		// if (m_SpawnTriggerType == SpawnTriggerType.SelectAttempt && m_ARInteractorAsControllerInteractor == null)
		int32_t L_5 = __this->___m_SpawnTriggerType_7;
		if (L_5)
		{
			goto IL_0063;
		}
	}
	{
		XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E* L_6 = __this->___m_ARInteractorAsControllerInteractor_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0063;
		}
	}
	{
		// Debug.LogError("Can only use SelectAttempt spawn trigger type with XRBaseControllerInteractor.", this);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m94F967AB31244EACE68C3BE1DD85B69ED3334C0E(_stringLiteralCBBE344808550097351DB4FADA926BA003A2358C, __this, NULL);
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARInteractorSpawnTrigger::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARInteractorSpawnTrigger_OnEnable_mC6C2DA04DE89F69C5B84DADACBCEB6E0CAD149AC (ARInteractorSpawnTrigger_t4A1290908BA12C9084EF6DBB71684676CD21A8FA* __this, const RuntimeMethod* method) 
{
	{
		// m_SpawnAction.EnableDirectAction();
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_0 = __this->___m_SpawnAction_8;
		InputActionPropertyExtensions_EnableDirectAction_m4F6A0B5DD5EFACC0B84BFCBD5FA15491DBE9DA26(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARInteractorSpawnTrigger::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARInteractorSpawnTrigger_OnDisable_m5DC89AC2C0A9CA125BFB2E1183F67425F50CFEA2 (ARInteractorSpawnTrigger_t4A1290908BA12C9084EF6DBB71684676CD21A8FA* __this, const RuntimeMethod* method) 
{
	{
		// m_SpawnAction.DisableDirectAction();
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_0 = __this->___m_SpawnAction_8;
		InputActionPropertyExtensions_DisableDirectAction_m976F69C07BC1AF691C6D3A1E03BBD4EA0D265932(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARInteractorSpawnTrigger::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARInteractorSpawnTrigger_Update_m124C7423B6CDFBA0B18E82369B96377FB7C660DA (ARInteractorSpawnTrigger_t4A1290908BA12C9084EF6DBB71684676CD21A8FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IARInteractor_t3663AA3A1C10770AF461D6960A65A91579E4AF04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 V_1;
	memset((&V_1), 0, sizeof(V_1));
	XRControllerState_tC34C40CB942A51408D8799940A87A6AD87218B50* V_2 = NULL;
	int32_t V_3 = 0;
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* V_4 = NULL;
	int32_t G_B11_0 = 0;
	{
		// var attemptSpawn = false;
		V_0 = (bool)0;
		// switch (m_SpawnTriggerType)
		int32_t L_0 = __this->___m_SpawnTriggerType_7;
		V_3 = L_0;
		int32_t L_1 = V_3;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = V_3;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0099;
		}
	}
	{
		goto IL_00ad;
	}

IL_0018:
	{
		// var currentControllerState = m_ARInteractorAsControllerInteractor.xrController.currentControllerState;
		XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E* L_3 = __this->___m_ARInteractorAsControllerInteractor_10;
		NullCheck(L_3);
		XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* L_4;
		L_4 = XRBaseControllerInteractor_get_xrController_m3BBC15462D296ED35A6F2E87D290B86BF9216650_inline(L_3, NULL);
		NullCheck(L_4);
		XRControllerState_tC34C40CB942A51408D8799940A87A6AD87218B50* L_5;
		L_5 = XRBaseController_get_currentControllerState_mA9E97CEA72CB7A87F1A5D78A6F214A4879F43F6F(L_4, NULL);
		V_2 = L_5;
		// if (currentControllerState.selectInteractionState.activatedThisFrame)
		XRControllerState_tC34C40CB942A51408D8799940A87A6AD87218B50* L_6 = V_2;
		NullCheck(L_6);
		InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB* L_7 = (&L_6->___selectInteractionState_5);
		bool L_8;
		L_8 = InteractionState_get_activatedThisFrame_m512E1A559B40E19753A0D9F666B3BB44C8BCC6DA_inline(L_7, NULL);
		if (!L_8)
		{
			goto IL_0049;
		}
	}
	{
		// m_EverHadSelection = m_ARInteractorAsControllerInteractor.hasSelection;
		XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E* L_9 = __this->___m_ARInteractorAsControllerInteractor_10;
		NullCheck(L_9);
		bool L_10;
		L_10 = XRBaseInteractor_get_hasSelection_mDC47E8BD0F4498E27BD041B52008C36AD09583B1(L_9, NULL);
		__this->___m_EverHadSelection_11 = L_10;
		goto IL_00ad;
	}

IL_0049:
	{
		// else if (currentControllerState.selectInteractionState.active)
		XRControllerState_tC34C40CB942A51408D8799940A87A6AD87218B50* L_11 = V_2;
		NullCheck(L_11);
		InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB* L_12 = (&L_11->___selectInteractionState_5);
		bool L_13;
		L_13 = InteractionState_get_active_m1E069A7D42F19F587B2F384A8EFB9A3D6EDE8E31_inline(L_12, NULL);
		if (!L_13)
		{
			goto IL_0070;
		}
	}
	{
		// m_EverHadSelection |= m_ARInteractorAsControllerInteractor.hasSelection;
		bool L_14 = __this->___m_EverHadSelection_11;
		XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E* L_15 = __this->___m_ARInteractorAsControllerInteractor_10;
		NullCheck(L_15);
		bool L_16;
		L_16 = XRBaseInteractor_get_hasSelection_mDC47E8BD0F4498E27BD041B52008C36AD09583B1(L_15, NULL);
		__this->___m_EverHadSelection_11 = (bool)((int32_t)((int32_t)L_14|(int32_t)L_16));
		goto IL_00ad;
	}

IL_0070:
	{
		// else if (currentControllerState.selectInteractionState.deactivatedThisFrame)
		XRControllerState_tC34C40CB942A51408D8799940A87A6AD87218B50* L_17 = V_2;
		NullCheck(L_17);
		InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB* L_18 = (&L_17->___selectInteractionState_5);
		bool L_19;
		L_19 = InteractionState_get_deactivatedThisFrame_m9C1D440D21737F44E68D853F0934B0102A87470F_inline(L_18, NULL);
		if (!L_19)
		{
			goto IL_00ad;
		}
	}
	{
		// attemptSpawn = !m_ARInteractorAsControllerInteractor.hasSelection && !m_EverHadSelection;
		XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E* L_20 = __this->___m_ARInteractorAsControllerInteractor_10;
		NullCheck(L_20);
		bool L_21;
		L_21 = XRBaseInteractor_get_hasSelection_mDC47E8BD0F4498E27BD041B52008C36AD09583B1(L_20, NULL);
		if (L_21)
		{
			goto IL_0095;
		}
	}
	{
		bool L_22 = __this->___m_EverHadSelection_11;
		G_B11_0 = ((((int32_t)L_22) == ((int32_t)0))? 1 : 0);
		goto IL_0096;
	}

IL_0095:
	{
		G_B11_0 = 0;
	}

IL_0096:
	{
		V_0 = (bool)G_B11_0;
		// break;
		goto IL_00ad;
	}

IL_0099:
	{
		// if (m_SpawnAction.action.WasPerformedThisFrame())
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD* L_23 = (&__this->___m_SpawnAction_8);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_24;
		L_24 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47(L_23, NULL);
		NullCheck(L_24);
		bool L_25;
		L_25 = InputAction_WasPerformedThisFrame_m6EB7F845E109BB397BA5DB84FE80CB28F399D62E(L_24, NULL);
		if (!L_25)
		{
			goto IL_00ad;
		}
	}
	{
		// attemptSpawn = true;
		V_0 = (bool)1;
	}

IL_00ad:
	{
		// if (attemptSpawn && m_ARInteractor.TryGetCurrentARRaycastHit(out var arRaycastHit))
		bool L_26 = V_0;
		if (!L_26)
		{
			goto IL_010b;
		}
	}
	{
		RuntimeObject* L_27 = __this->___m_ARInteractor_9;
		NullCheck(L_27);
		bool L_28;
		L_28 = InterfaceFuncInvoker1< bool, ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* >::Invoke(0 /* System.Boolean UnityEngine.XR.Interaction.Toolkit.IARInteractor::TryGetCurrentARRaycastHit(UnityEngine.XR.ARFoundation.ARRaycastHit&) */, IARInteractor_t3663AA3A1C10770AF461D6960A65A91579E4AF04_il2cpp_TypeInfo_var, L_27, (&V_1));
		if (!L_28)
		{
			goto IL_010b;
		}
	}
	{
		// var arPlane = arRaycastHit.trackable as ARPlane;
		ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* L_29;
		L_29 = ARRaycastHit_get_trackable_mF8D64EB03AFF2E1D5FC9B88255D2A84130B43D09_inline((&V_1), NULL);
		V_4 = ((ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0*)IsInstSealed((RuntimeObject*)L_29, ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_il2cpp_TypeInfo_var));
		// if (arPlane == null)
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_30 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_30, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_31)
		{
			goto IL_00d8;
		}
	}
	{
		// return;
		return;
	}

IL_00d8:
	{
		// if (m_RequireHorizontalUpSurface && arPlane.alignment != PlaneAlignment.HorizontalUp)
		bool L_32 = __this->___m_RequireHorizontalUpSurface_6;
		if (!L_32)
		{
			goto IL_00ec;
		}
	}
	{
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_33 = V_4;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = ARPlane_get_alignment_mBEF1BCDE0A964ADAE4E5F477BD4C961CA8849EC1(L_33, NULL);
		if ((((int32_t)L_34) == ((int32_t)((int32_t)100))))
		{
			goto IL_00ec;
		}
	}
	{
		// return;
		return;
	}

IL_00ec:
	{
		// m_ObjectSpawner.TrySpawnObject(arRaycastHit.pose.position, arPlane.normal);
		ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* L_35 = __this->___m_ObjectSpawner_5;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_36;
		L_36 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_38 = V_4;
		NullCheck(L_38);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = ARPlane_get_normal_m12A4F62B15333D04011C0DBD6377FA1E9B3C60B7(L_38, NULL);
		NullCheck(L_35);
		bool L_40;
		L_40 = ObjectSpawner_TrySpawnObject_mBE0345EF7F3D3EF69F20321A4190214DB09D65B1(L_35, L_37, L_39, NULL);
	}

IL_010b:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.ARStarterAssets.ARInteractorSpawnTrigger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARInteractorSpawnTrigger__ctor_m9C8FBBEB12B516D8BCECB494BE5407EB49D64937 (ARInteractorSpawnTrigger_t4A1290908BA12C9084EF6DBB71684676CD21A8FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InputActionProperty m_SpawnAction = new(new InputAction(type: InputActionType.Button));
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*)il2cpp_codegen_object_new(InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		InputAction__ctor_mD042AD3CC86AEDEB5FB1F8CD9E834FE35F9060B9(L_0, (String_t*)NULL, 1, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, NULL);
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_1;
		memset((&L_1), 0, sizeof(L_1));
		InputActionProperty__ctor_m0E922A8B1C135221416D4ADB0B28FE1BCA80209A((&L_1), L_0, /*hidden argument*/NULL);
		__this->___m_SpawnAction_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___m_SpawnAction_8))->___m_Action_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___m_SpawnAction_8))->___m_Reference_2), (void*)NULL);
		#endif
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD XRScreenSpaceController_get_dragCurrentPositionAction_m623F46DA0FF55294919EC17BB198D6D000936FBB_inline (XRScreenSpaceController_t046F18C2FE01EB347832DB82D42C84131771FF17* __this, const RuntimeMethod* method) 
{
	{
		// get => m_DragCurrentPositionAction;
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_0 = __this->___m_DragCurrentPositionAction_27;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD XRScreenSpaceController_get_tapStartPositionAction_m15334FD6AFCAB3C891A677DC157A7EC88AC5C38E_inline (XRScreenSpaceController_t046F18C2FE01EB347832DB82D42C84131771FF17* __this, const RuntimeMethod* method) 
{
	{
		// get => m_TapStartPositionAction;
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_0 = __this->___m_TapStartPositionAction_26;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRInteractionGroup_get_focusInteractable_mE4584257FC15989E262BCC7A4552DE358B362B38_inline (XRInteractionGroup_tEC6931CE543AB5A60188714198755B9B7AEBD92A* __this, const RuntimeMethod* method) 
{
	{
		// public IXRFocusInteractable focusInteractable { get; private set; }
		RuntimeObject* L_0 = __this->___U3CfocusInteractableU3Ek__BackingField_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ObjectSpawner_get_objectPrefabs_mC013B08B69C29F13A750E8715FAB01E8681320CF_inline (ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ObjectPrefabs;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___m_ObjectPrefabs_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjectSpawner_set_spawnOptionIndex_m5984E7B1712BB73A2E982FE4487FCA033A922711_inline (ObjectSpawner_t5ACB5F84845F9E874424BADB585AB17DD4644111* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_SpawnOptionIndex = value;
		int32_t L_0 = ___value0;
		__this->___m_SpawnOptionIndex_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ARPlaneMeshVisualizer_get_mesh_m6C1A730CECE8AE0A0549ED615AB3B3D66E4A0FD8_inline (ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* __this, const RuntimeMethod* method) 
{
	{
		// public Mesh mesh { get; private set; }
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = __this->___U3CmeshU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ARFeatheredPlaneMeshVisualizer_get_featheringWidth_m2E50FB2F2394BF511A66CB70C282F3D31177921F_inline (ARFeatheredPlaneMeshVisualizer_t6CF5956C7D39A69C97F4B67E6CA75AAAD09C8C48* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_FeatheringWidth; }
		float L_0 = __this->___m_FeatheringWidth_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Set_m1C7E543216734FB513F9CEBA44C50E6FC2AFD49D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___newX0, float ___newY1, float ___newZ2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___newX0;
		__this->___x_2 = L_0;
		float L_1 = ___newY1;
		__this->___y_3 = L_1;
		float L_2 = ___newZ2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* XRBaseControllerInteractor_get_xrController_m3BBC15462D296ED35A6F2E87D290B86BF9216650_inline (XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Controller;
		XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* L_0 = __this->___m_Controller_98;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InteractionState_get_activatedThisFrame_m512E1A559B40E19753A0D9F666B3BB44C8BCC6DA_inline (InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ActivatedThisFrame;
		bool L_0 = __this->___m_ActivatedThisFrame_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InteractionState_get_active_m1E069A7D42F19F587B2F384A8EFB9A3D6EDE8E31_inline (InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Active;
		bool L_0 = __this->___m_Active_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InteractionState_get_deactivatedThisFrame_m9C1D440D21737F44E68D853F0934B0102A87470F_inline (InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB* __this, const RuntimeMethod* method) 
{
	{
		// get => m_DeactivatedThisFrame;
		bool L_0 = __this->___m_DeactivatedThisFrame_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ARRaycastHit_get_trackable_mF8D64EB03AFF2E1D5FC9B88255D2A84130B43D09_inline (ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* __this, const RuntimeMethod* method) 
{
	{
		// public ARTrackable trackable { get; }
		ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* L_0 = __this->___U3CtrackableU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) 
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = V_0;
		int32_t L_7 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_8);
		return;
	}

IL_0034:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___item0;
		((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
