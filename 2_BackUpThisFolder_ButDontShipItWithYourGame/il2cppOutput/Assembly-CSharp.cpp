#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<UnityEngine.XR.MeshGenerationResult>
struct Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8;
// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Boolean>
struct Dictionary_2_t57B517077AAE444D29577C0761ECF606105926AE;
// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>
struct Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.MeshId,UnityEngine.GameObject>
struct Dictionary_2_t03505FE02BAD9618F6A47DE9EE5E22F38BBF93C6;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.MeshId,System.Object>
struct Dictionary_2_t2053158D0376C8BF1E4837AFD63E6DB5E46CB680;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Camera>
struct IEqualityComparer_1_t57A43DC72C9BCCA9EDCF71364B5BF21D7EB6497C;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.XR.MeshId>
struct IEqualityComparer_1_t491CBF36A24B05E9D27E005C32F9DFAB28BCA898;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Camera,System.Boolean>
struct KeyCollection_t46A8720E1EC547EC544198996B561A2AD521C848;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Camera,UnityEngine.Camera>
struct KeyCollection_t6E32A963438F3AC8547A9E0382822CA9611B610C;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.MeshId,UnityEngine.GameObject>
struct KeyCollection_tD743756E200E147525BB39994E95094C2FDEB6D3;
// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>
struct List_1_tEE09D0BD215A518344AF2985829C519B609B7B17;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.XR.XRMeshSubsystem>
struct List_1_tE26BFC6B67208BD0D9CA0FB072FE6D07927222D4;
// System.Collections.Generic.List`1<UnityEngine.XR.XRMeshSubsystemDescriptor>
struct List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Camera,System.Boolean>
struct ValueCollection_t890C69CB933215CAB5EC92C49D01503B4552D109;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Camera,UnityEngine.Camera>
struct ValueCollection_t29DC799B81F505FC280E6436034F564A98D5AACD;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.XR.MeshId,UnityEngine.GameObject>
struct ValueCollection_tD7FDC7E1F7001B13BD70D9B31C1D99F9FD1ECF0E;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.Camera,System.Boolean>[]
struct EntryU5BU5D_tF791CB8B74F9042AEC7DF31DF502BE8C1AE6A6A3;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.Camera,UnityEngine.Camera>[]
struct EntryU5BU5D_t64B3235E82FADC92455D2C258206267CF0C30731;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.XR.MeshId,UnityEngine.GameObject>[]
struct EntryU5BU5D_t87673139DC638A1E588B2490FC8475405D96900F;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// UnityEngine.XR.MeshInfo[]
struct MeshInfoU5BU5D_t66EC9A8E4264CBD53E136BF96628DEC22D660030;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.XR.OpenXR.Features.OpenXRFeature[]
struct OpenXRFeatureU5BU5D_t1E8B328877C0D98F92ADE93D6F8C6536F92C3F3F;
// UnityEngine.RenderTexture[]
struct RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.XR.XRMeshSubsystem[]
struct XRMeshSubsystemU5BU5D_t53BBB317E9E4FD5903A2E0B8A1B8FC15182B1295;
// UnityEngine.XR.XRMeshSubsystemDescriptor[]
struct XRMeshSubsystemDescriptorU5BU5D_t3B992422B03C712E6A939E14D9CF3F3799D62E72;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// BlurEffect
struct BlurEffect_t1A2D66B358F74F5BC28CF99F5F0028613AE27FA3;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// ColorCorrectionEffect
struct ColorCorrectionEffect_t5C2697033953266A3C614713593F5D0B8A8784C6;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// ContrastStretchEffect
struct ContrastStretchEffect_t0803E595E6F50A97670E42507936C98C9AD15CDC;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Displace
struct Displace_tD42FF28A123509D1C01B7D2175EAF447F16B31DE;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.XR.OpenXR.Samples.MeshingFeature.FallingSphere
struct FallingSphere_tE12F80B78F3B25C609125CF5384A42AD3F5EF9EA;
// UnityEngine.FlareLayer
struct FlareLayer_t3C59D7C6F5A65AC1734D0CC1A92B464657936ABE;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GerstnerDisplace
struct GerstnerDisplace_tA8C9FAAD1008E373ED082D8C5C5663CC5B5FB4D2;
// GlowEffect
struct GlowEffect_t54087E6A2C4CE3596E972E6368A66FBDFDCE16E9;
// GrayscaleEffect
struct GrayscaleEffect_t42D1E0CC458CE044D547218045905368F22E442E;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E;
// ImageEffectBase
struct ImageEffectBase_tFB5837BB6BB7BCDF01CD89A4BA2B10341AAC355E;
// ImageEffects
struct ImageEffects_tEBF304591B325AACF94D57ABC55143D9278F2FC3;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3;
// UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature
struct InterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F;
// UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptMessageHandler
struct InterceptMessageHandler_t1DF3F1A3719A60512C414F1E247D810ED8599FE4;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshCollider
struct MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455;
// MeshContainer
struct MeshContainer_t1D43C0A7153BE5DCB216034E4E8F2F72187B3453;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingBehaviour
struct MeshingBehaviour_t109955F72D30C3D1F02C61F77289972F36947DE2;
// UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingTeapotFeature
struct MeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MotionBlur
struct MotionBlur_t7A1D334084EFC1584C1976626CC7B2CF1EC3B853;
// MouseLook
struct MouseLook_t947FC47A9845723307BA11051D0530C21C4F0CD4;
// NoiseEffect
struct NoiseEffect_t4DCC3F1E477F5740C67F42CFE317AB6992FF4911;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.XR.OpenXR.Features.OpenXRFeature
struct OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143;
// UnityEngine.XR.OpenXR.OpenXRSettings
struct OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55;
// PlanarReflection
struct PlanarReflection_t01C9F7773DB42C71EABA687BD37C7C8BD0679249;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// SSAOEffect
struct SSAOEffect_t6698F5B4525C7F42A2C7FD36595130191FA0B7F4;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// ScrollingUVs
struct ScrollingUVs_t7284B49E896F7E1F23E74E657B7565AEFA501B63;
// SepiaToneEffect
struct SepiaToneEffect_tB98B02A63CEC2EF062998DBB6E0016A095A7D40C;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// UnityEngine.Skybox
struct Skybox_tB3C6FDB5DCB4633B155B7A80045542B7C3388441;
// SpecularLighting
struct SpecularLighting_t1C9EAF60B3F3C2E9021D4ACC63C9480D57AB70F7;
// System.String
struct String_t;
// UnityEngine.TextMesh
struct TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// TwirlEffect
struct TwirlEffect_t205743FDB0ABF6E8C3FA38C10346462029E8C204;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// VortexEffect
struct VortexEffect_t3C69D767E5390AB44AA1216D5F6AC85A760F5E78;
// Water
struct Water_tA5654A18C7C4C258C0BB43725C80C8AD5163C433;
// WaterBase
struct WaterBase_t8D07B5BBBD1C82666F71EDF26C12BF03B39A79EA;
// WaterTile
struct WaterTile_t0CF14271C08BB6B4D5081C4B4BBCE359F081EE65;
// UnityEngine.XR.XRMeshSubsystem
struct XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature/OnMessageDelegate
struct OnMessageDelegate_tF1346CB5CF6BF1F9B3CEDB817F23CF0E2A68D5A9;
// UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature/ReceiveMessageDelegate
struct ReceiveMessageDelegate_tFF45138D21684C2ADF9D6603D1048CA02845970B;
// UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingBehaviour/<>c
struct U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BlurEffect_t1A2D66B358F74F5BC28CF99F5F0028613AE27FA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t03505FE02BAD9618F6A47DE9EE5E22F38BBF93C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t57B517077AAE444D29577C0761ECF606105926AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE26BFC6B67208BD0D9CA0FB072FE6D07927222D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tEE09D0BD215A518344AF2985829C519B609B7B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshGenerationStatus_t1F91400BEB3E9E6B4DC12A43C85006812BD28EDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReceiveMessageDelegate_tFF45138D21684C2ADF9D6603D1048CA02845970B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Skybox_tB3C6FDB5DCB4633B155B7A80045542B7C3388441_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaterBase_t8D07B5BBBD1C82666F71EDF26C12BF03B39A79EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Water_tA5654A18C7C4C258C0BB43725C80C8AD5163C433_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral09648194F4DAEE1925FA3A2FFCDA65FB619B10EC;
IL2CPP_EXTERN_C String_t* _stringLiteral0B3515F254725B790872641998BD62ECB0819EA7;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral1CCBC596DB1B94C94A9284599019AC779586C8EB;
IL2CPP_EXTERN_C String_t* _stringLiteral22A85FEA16A40CFC01613750838E0906C9727807;
IL2CPP_EXTERN_C String_t* _stringLiteral231CACC883018E95B1E6DF7B0EEE86C17170F15C;
IL2CPP_EXTERN_C String_t* _stringLiteral2D6742768888FC128CDBD9DDD8531E7CA8A03C7A;
IL2CPP_EXTERN_C String_t* _stringLiteral2E95A42E4D201338C7B575F7A000B10917104E6D;
IL2CPP_EXTERN_C String_t* _stringLiteral31003880CBAF84EF30B5E85A7DF016C5DE3EC47B;
IL2CPP_EXTERN_C String_t* _stringLiteral45ABB9CCE315792527F1FB93BD11632791565DBD;
IL2CPP_EXTERN_C String_t* _stringLiteral46580D65357E6BC22728934BD6BC047227EFE0E6;
IL2CPP_EXTERN_C String_t* _stringLiteral4B81399C6C72C116CB60D03A84F2AAFEC72EA05B;
IL2CPP_EXTERN_C String_t* _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21;
IL2CPP_EXTERN_C String_t* _stringLiteral4D4DC92AF6B7EBC3730400A034A822ABED60EB00;
IL2CPP_EXTERN_C String_t* _stringLiteral4DDF2C5EB3B511F16328BFA5E2CCA22E5F941526;
IL2CPP_EXTERN_C String_t* _stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E;
IL2CPP_EXTERN_C String_t* _stringLiteral5826A90C2A023CEF000FAA3A3456FA3BC3A1BF80;
IL2CPP_EXTERN_C String_t* _stringLiteral5925AC9D610C2A3BBD99E25273E8BE1C93996202;
IL2CPP_EXTERN_C String_t* _stringLiteral59CBBECC76604B5A4F56CF4DBD545D276503BC9B;
IL2CPP_EXTERN_C String_t* _stringLiteral5EEB80B7E08DAD91F8825B40594AEAED2CD94C50;
IL2CPP_EXTERN_C String_t* _stringLiteral5F2EE87779038CC92BFBB1DF34C03DEF305FB801;
IL2CPP_EXTERN_C String_t* _stringLiteral6238431605E3EDF93423004446032CC82A241F2C;
IL2CPP_EXTERN_C String_t* _stringLiteral65BE1CEB6016B0853B26755D17F2E7A84077B094;
IL2CPP_EXTERN_C String_t* _stringLiteral6694A5DE87718A7301C9D332796F1D8284057656;
IL2CPP_EXTERN_C String_t* _stringLiteral6A4A75F8AA5E0F61ACA8A64BF8C1612267A769EE;
IL2CPP_EXTERN_C String_t* _stringLiteral71E2151BF75F822D32529B598E65CB2CF534C8BD;
IL2CPP_EXTERN_C String_t* _stringLiteral770313CDE00B176E52B747924B8BC993FD29B4FA;
IL2CPP_EXTERN_C String_t* _stringLiteral78F66AE37BE6E59ACD48A247E54B845C440C126B;
IL2CPP_EXTERN_C String_t* _stringLiteral798DA884BE88130097B9E5268B9DA22F8E576E95;
IL2CPP_EXTERN_C String_t* _stringLiteral83D3CB22CFCAF6C46B4A2D040B6BAD092671021A;
IL2CPP_EXTERN_C String_t* _stringLiteral867D47DB5A791E2DC5656A715F62E8E6A13FEF38;
IL2CPP_EXTERN_C String_t* _stringLiteral88BC903474F3EEC4A94B28FB209B0CB7F7426FCF;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral8AE383EC55F111EB5943A0289A769711626983A8;
IL2CPP_EXTERN_C String_t* _stringLiteral8CE33800B899A10909A01B30E9E15694DCDDF90C;
IL2CPP_EXTERN_C String_t* _stringLiteral8EC053E608B28709E3A286E66E2B010B32383382;
IL2CPP_EXTERN_C String_t* _stringLiteral96886DED2ECF1EA2B574F8C4F68D1873E78AFB44;
IL2CPP_EXTERN_C String_t* _stringLiteral98C756BD55BDDC280B6C032C2E49B6D45D887F8C;
IL2CPP_EXTERN_C String_t* _stringLiteral9BF9FDA83C54B3E4D921C2ABBCF673E2E2E37FBA;
IL2CPP_EXTERN_C String_t* _stringLiteralA3E776B0A49C1C913D60A78C71AEA3EF1070C228;
IL2CPP_EXTERN_C String_t* _stringLiteralA71CB72F1F8336BCCB7AB1FD3AC7AB1180B5010D;
IL2CPP_EXTERN_C String_t* _stringLiteralA8CCA272FE14112D756F93769EECED88FA5AC79A;
IL2CPP_EXTERN_C String_t* _stringLiteralACA83AF7A62BB74E1867497F20E27DDA4AA09286;
IL2CPP_EXTERN_C String_t* _stringLiteralAD8876816F840CDD275978547DCA00605F5521FA;
IL2CPP_EXTERN_C String_t* _stringLiteralB1692839853852513A7A25A35F75CD821A35339C;
IL2CPP_EXTERN_C String_t* _stringLiteralB23C3717573626FB4C3C7DF5C19EDE7689837214;
IL2CPP_EXTERN_C String_t* _stringLiteralC5B72789EFB9E0555C84C47E04FC5E67DCBB9A44;
IL2CPP_EXTERN_C String_t* _stringLiteralCA358E33682D63809BC819D06A5C119F65140337;
IL2CPP_EXTERN_C String_t* _stringLiteralCCEE50B20FFC3D5C5F3E75F2DB477FED04071681;
IL2CPP_EXTERN_C String_t* _stringLiteralD7185F3BCA17ABA6AA2CF6A9C5404AB293CFFC48;
IL2CPP_EXTERN_C String_t* _stringLiteralD8C699F08EF91DEFEBE9FD4314609FE0B62067C9;
IL2CPP_EXTERN_C String_t* _stringLiteralDB1D70662348A463C6FBE0BBDDCE84C00893D8D0;
IL2CPP_EXTERN_C String_t* _stringLiteralDC3ED90F173A7E046F311B685B910BC908BB7AE0;
IL2CPP_EXTERN_C String_t* _stringLiteralDDBFD1DFE8755B66ED7213250192F581C393B4A2;
IL2CPP_EXTERN_C String_t* _stringLiteralE0573D2759A5B22BC958DEF1F9BC81C0DA713C77;
IL2CPP_EXTERN_C String_t* _stringLiteralE30BDB66B244803E7FD5808BE4D10CBB43C3D57F;
IL2CPP_EXTERN_C String_t* _stringLiteralEAD18F553E14FBD4BD1D57B89FFE0F7680479FE6;
IL2CPP_EXTERN_C String_t* _stringLiteralF33CDB2C1E618C34248975FB6EB8FC1FC6256C81;
IL2CPP_EXTERN_C String_t* _stringLiteralF422850993212057809CBD984B2F3DAEC17A02ED;
IL2CPP_EXTERN_C String_t* _stringLiteralF6964931913C0285B81AE3611DBB55AEF6ADC09A;
IL2CPP_EXTERN_C String_t* _stringLiteralF873D6748545B7516CD56A7A617453AEC82E7C8D;
IL2CPP_EXTERN_C String_t* _stringLiteralFA1920FD6D98B583E1DDE48CBD6322EFF94B2A2C;
IL2CPP_EXTERN_C String_t* _stringLiteralFB7478C21D272917F984D2563D604F75AD87D92C;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlanarReflection_t01C9F7773DB42C71EABA687BD37C7C8BD0679249_m4F065364D8269D0A09C1512BE3F834AF1E924E73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisWaterBase_t8D07B5BBBD1C82666F71EDF26C12BF03B39A79EA_mC0A9738284951B51C70B8E45F26A719901436DF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m5A0C77623E27D33EF51E8874C1FC4740C6EC748E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m0985B9C4515ABFC16DCD73938C31FD14F388CBB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m99F3AA70A9133B80B7116E3B6ADA49E91BF124AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mF851A106660DB5B20BF9F137E8523AFEF8582D18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m7BEABDF6190A27125E278461686B950DBC2E13FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m3ACCE6031F6FF6C54F88DE9EF8AD788143E6C016_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m170AED7C79718F1017B33E251480A89CEAEB35D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mD5700C6F114DD67B63664D9FD62690E29520FEB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m8073AFCB144A96589548ACD600418E381CDD0505_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCC86EBF40667A343EA2CBB31F715245A4A6417E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mFF35FF8199520A91C28C7C4A6F912CADEFE83909_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mE7FE4DCD7D1D6FED31F331F5913A71852404CF07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m4A55A1B492681E3944838CD2008DB0DC4CE6C777_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mD8C30AF913A8F62839C214C596CA1AFCA100AFD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mE5074004B30CDC63968F7CBED61C3CAF2138B910_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m01B983AEF89C8F17DEFD740A0E013C0CA4AC81C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4E0CD273C9B2F20DCD03E0A70B95F65B38EC1209_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mAB2B6FFD31DB8BF5C1516AEDD3901373D9CD412C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mECD1F7865FB8107F52675796DFB52D59D7B5E44D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m36BD30099AE5596DD87AFF4F979E44119A7B8C19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mC0CE60FBC4FAA79C6D5B26DD275B4DA0DF7265E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisFlareLayer_t3C59D7C6F5A65AC1734D0CC1A92B464657936ABE_m419A7510064DE509FCA259992B80C3C44547C22E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_m21E4C15ED89B2D1A80F393D96CF4464B16E9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterceptCreateSessionFeature_OnMessage_mDC10AA02BB5ED0AA93C96BAEA118F3923E2E4354_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mBB1AED0F4C858A50D942F5E3E6829B3C3A249F43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m468FAA4C99E6FF3C1756D6BD18FA8C2992355333_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m277DBA8B46097B1BA355F0215F73E0DA16803756_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2D504F27EFCAFC96E2CC2541C7A144D920F76A77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA2DD2929DEFD0FB15C436C1FEC952D5B092CBA23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mC7DA166E8D82026036A1F31B4B32E0C1549A62FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mEC986C80443975BD0614D2D8580012A9C0B634B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCE536F8736F04AC3C46EED6FD5FA02F5D22A84C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenXRFeature_CreateSubsystem_TisXRMeshSubsystemDescriptor_tD9814661B8661C69D5A0DBB76C9AF61778B9CEC1_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_mAB175555B5E53A082F353048FD7E6ABF6846F607_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenXRFeature_DestroySubsystem_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m90715606D59F037609DDB43AEF21D087F3C25EBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenXRFeature_StartSubsystem_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m0C067F6B64FF1332C06FCC302EB30FA6BC88F29C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenXRFeature_StopSubsystem_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m94A9611521BB67BAACE92079BEB86CB5D8E64B86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenXRSettings_GetFeature_TisInterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F_mCA36190361158CB585814D7DC7E9DB5567FB73AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenXRSettings_GetFeature_TisMeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2_mCB0851553933D9B0FE7ED440CF6F5761B9120FBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_GetInstances_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m44A912E10E9B8D0466155F3C9CDB3A378D1C41C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CUpdateU3Eb__7_0_mD2B7D1DD8BF091248BC6B4734E36263EFBDC15FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Skybox_tB3C6FDB5DCB4633B155B7A80045542B7C3388441_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* WaterBase_t8D07B5BBBD1C82666F71EDF26C12BF03B39A79EA_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
struct RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Boolean>
struct Dictionary_2_t57B517077AAE444D29577C0761ECF606105926AE  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tF791CB8B74F9042AEC7DF31DF502BE8C1AE6A6A3* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t46A8720E1EC547EC544198996B561A2AD521C848* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t890C69CB933215CAB5EC92C49D01503B4552D109* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>
struct Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t64B3235E82FADC92455D2C258206267CF0C30731* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t6E32A963438F3AC8547A9E0382822CA9611B610C* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t29DC799B81F505FC280E6436034F564A98D5AACD* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<UnityEngine.XR.MeshId,UnityEngine.GameObject>
struct Dictionary_2_t03505FE02BAD9618F6A47DE9EE5E22F38BBF93C6  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t87673139DC638A1E588B2490FC8475405D96900F* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tD743756E200E147525BB39994E95094C2FDEB6D3* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tD7FDC7E1F7001B13BD70D9B31C1D99F9FD1ECF0E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>
struct List_1_tEE09D0BD215A518344AF2985829C519B609B7B17  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MeshInfoU5BU5D_t66EC9A8E4264CBD53E136BF96628DEC22D660030* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tEE09D0BD215A518344AF2985829C519B609B7B17_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MeshInfoU5BU5D_t66EC9A8E4264CBD53E136BF96628DEC22D660030* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<UnityEngine.XR.XRMeshSubsystem>
struct List_1_tE26BFC6B67208BD0D9CA0FB072FE6D07927222D4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRMeshSubsystemU5BU5D_t53BBB317E9E4FD5903A2E0B8A1B8FC15182B1295* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tE26BFC6B67208BD0D9CA0FB072FE6D07927222D4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRMeshSubsystemU5BU5D_t53BBB317E9E4FD5903A2E0B8A1B8FC15182B1295* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.XRMeshSubsystemDescriptor>
struct List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRMeshSubsystemDescriptorU5BU5D_t3B992422B03C712E6A939E14D9CF3F3799D62E72* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRMeshSubsystemDescriptorU5BU5D_t3B992422B03C712E6A939E14D9CF3F3799D62E72* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// ImageEffects
struct ImageEffects_tEBF304591B325AACF94D57ABC55143D9278F2FC3  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// MeshContainer
struct MeshContainer_t1D43C0A7153BE5DCB216034E4E8F2F72187B3453  : public RuntimeObject
{
	// UnityEngine.Mesh MeshContainer::mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_0;
	// UnityEngine.Vector3[] MeshContainer::vertices
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___vertices_1;
	// UnityEngine.Vector3[] MeshContainer::normals
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___normals_2;
};

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

// UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingBehaviour/<>c
struct U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B  : public RuntimeObject
{
};

struct U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B_StaticFields
{
	// UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingBehaviour/<>c UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingBehaviour/<>c::<>9
	U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B* ___U3CU3E9_0;
	// System.Action`1<UnityEngine.XR.MeshGenerationResult> UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingBehaviour/<>c::<>9__7_0
	Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8* ___U3CU3E9__7_0_1;
};

// System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>
struct KeyValuePair_2_t81A4309EC9B7D914620BE9321F587F84394E24CB 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
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

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
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

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.XR.MeshId
struct MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC 
{
	// System.UInt64 UnityEngine.XR.MeshId::m_SubId1
	uint64_t ___m_SubId1_1;
	// System.UInt64 UnityEngine.XR.MeshId::m_SubId2
	uint64_t ___m_SubId2_2;
};

struct MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC_StaticFields
{
	// UnityEngine.XR.MeshId UnityEngine.XR.MeshId::s_InvalidId
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___s_InvalidId_0;
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

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Camera,UnityEngine.Camera>
struct Enumerator_t178259FEF5B67143AC6F4012394B98979FF5D29B 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t81A4309EC9B7D914620BE9321F587F84394E24CB ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
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

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3  : public RuntimeObject
{
	// System.IntPtr UnityEngine.IntegratedSubsystem::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.ISubsystemDescriptor UnityEngine.IntegratedSubsystem::m_SubsystemDescriptor
	RuntimeObject* ___m_SubsystemDescriptor_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};

// UnityEngine.XR.MeshGenerationResult
struct MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C 
{
	// UnityEngine.XR.MeshId UnityEngine.XR.MeshGenerationResult::<MeshId>k__BackingField
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___U3CMeshIdU3Ek__BackingField_0;
	// UnityEngine.Mesh UnityEngine.XR.MeshGenerationResult::<Mesh>k__BackingField
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___U3CMeshU3Ek__BackingField_1;
	// UnityEngine.MeshCollider UnityEngine.XR.MeshGenerationResult::<MeshCollider>k__BackingField
	MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* ___U3CMeshColliderU3Ek__BackingField_2;
	// UnityEngine.XR.MeshGenerationStatus UnityEngine.XR.MeshGenerationResult::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_3;
	// UnityEngine.XR.MeshVertexAttributes UnityEngine.XR.MeshGenerationResult::<Attributes>k__BackingField
	int32_t ___U3CAttributesU3Ek__BackingField_4;
	// System.UInt64 UnityEngine.XR.MeshGenerationResult::<Timestamp>k__BackingField
	uint64_t ___U3CTimestampU3Ek__BackingField_5;
	// UnityEngine.Vector3 UnityEngine.XR.MeshGenerationResult::<Position>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPositionU3Ek__BackingField_6;
	// UnityEngine.Quaternion UnityEngine.XR.MeshGenerationResult::<Rotation>k__BackingField
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CRotationU3Ek__BackingField_7;
	// UnityEngine.Vector3 UnityEngine.XR.MeshGenerationResult::<Scale>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CScaleU3Ek__BackingField_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.MeshGenerationResult
struct MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C_marshaled_pinvoke
{
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___U3CMeshIdU3Ek__BackingField_0;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___U3CMeshU3Ek__BackingField_1;
	MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* ___U3CMeshColliderU3Ek__BackingField_2;
	int32_t ___U3CStatusU3Ek__BackingField_3;
	int32_t ___U3CAttributesU3Ek__BackingField_4;
	uint64_t ___U3CTimestampU3Ek__BackingField_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPositionU3Ek__BackingField_6;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CRotationU3Ek__BackingField_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CScaleU3Ek__BackingField_8;
};
// Native definition for COM marshalling of UnityEngine.XR.MeshGenerationResult
struct MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C_marshaled_com
{
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___U3CMeshIdU3Ek__BackingField_0;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___U3CMeshU3Ek__BackingField_1;
	MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* ___U3CMeshColliderU3Ek__BackingField_2;
	int32_t ___U3CStatusU3Ek__BackingField_3;
	int32_t ___U3CAttributesU3Ek__BackingField_4;
	uint64_t ___U3CTimestampU3Ek__BackingField_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPositionU3Ek__BackingField_6;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CRotationU3Ek__BackingField_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CScaleU3Ek__BackingField_8;
};

// UnityEngine.XR.MeshInfo
struct MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA 
{
	// UnityEngine.XR.MeshId UnityEngine.XR.MeshInfo::<MeshId>k__BackingField
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___U3CMeshIdU3Ek__BackingField_0;
	// UnityEngine.XR.MeshChangeState UnityEngine.XR.MeshInfo::<ChangeState>k__BackingField
	int32_t ___U3CChangeStateU3Ek__BackingField_1;
	// System.Int32 UnityEngine.XR.MeshInfo::<PriorityHint>k__BackingField
	int32_t ___U3CPriorityHintU3Ek__BackingField_2;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MeshInfo>
struct Enumerator_tEC6D4B278440969CB479B2E8E2B65B2681CA6CE3 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA ____current_3;
};

// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRMeshSubsystemDescriptor>
struct IntegratedSubsystem_1_t3AB3A9BAB10A4D1420E63EEA50D40FEE65F41C03  : public IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Action`1<UnityEngine.XR.MeshGenerationResult>
struct Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.XR.OpenXR.Features.OpenXRFeature
struct OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::m_enabled
	bool ___m_enabled_4;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::<failedInitialization>k__BackingField
	bool ___U3CfailedInitializationU3Ek__BackingField_5;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::nameUi
	String_t* ___nameUi_7;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::version
	String_t* ___version_8;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::featureIdInternal
	String_t* ___featureIdInternal_9;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::openxrExtensionStrings
	String_t* ___openxrExtensionStrings_10;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::company
	String_t* ___company_11;
	// System.Int32 UnityEngine.XR.OpenXR.Features.OpenXRFeature::priority
	int32_t ___priority_12;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::required
	bool ___required_13;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::internalFieldsUpdated
	bool ___internalFieldsUpdated_14;
};

struct OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143_StaticFields
{
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::<requiredFeatureFailed>k__BackingField
	bool ___U3CrequiredFeatureFailedU3Ek__BackingField_6;
};

// UnityEngine.XR.OpenXR.OpenXRSettings
struct OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.XR.OpenXR.Features.OpenXRFeature[] UnityEngine.XR.OpenXR.OpenXRSettings::features
	OpenXRFeatureU5BU5D_t1E8B328877C0D98F92ADE93D6F8C6536F92C3F3F* ___features_4;
	// UnityEngine.XR.OpenXR.OpenXRSettings/RenderMode UnityEngine.XR.OpenXR.OpenXRSettings::m_renderMode
	int32_t ___m_renderMode_5;
	// UnityEngine.XR.OpenXR.OpenXRSettings/DepthSubmissionMode UnityEngine.XR.OpenXR.OpenXRSettings::m_depthSubmissionMode
	int32_t ___m_depthSubmissionMode_6;
	// System.Boolean UnityEngine.XR.OpenXR.OpenXRSettings::m_optimizeBufferDiscards
	bool ___m_optimizeBufferDiscards_7;
	// System.Boolean UnityEngine.XR.OpenXR.OpenXRSettings::m_symmetricProjection
	bool ___m_symmetricProjection_8;
};

struct OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55_StaticFields
{
	// UnityEngine.XR.OpenXR.OpenXRSettings UnityEngine.XR.OpenXR.OpenXRSettings::s_RuntimeInstance
	OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55* ___s_RuntimeInstance_10;
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.TextMesh
struct TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.XR.XRMeshSubsystem
struct XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2  : public IntegratedSubsystem_1_t3AB3A9BAB10A4D1420E63EEA50D40FEE65F41C03
{
};

// UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature/OnMessageDelegate
struct OnMessageDelegate_tF1346CB5CF6BF1F9B3CEDB817F23CF0E2A68D5A9  : public MulticastDelegate_t
{
};

// UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature/ReceiveMessageDelegate
struct ReceiveMessageDelegate_tFF45138D21684C2ADF9D6603D1048CA02845970B  : public MulticastDelegate_t
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.FlareLayer
struct FlareLayer_t3C59D7C6F5A65AC1734D0CC1A92B464657936ABE  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature
struct InterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F  : public OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143
{
	// System.String UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature::message
	String_t* ___message_17;
	// System.String UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature::<receivedMessage>k__BackingField
	String_t* ___U3CreceivedMessageU3Ek__BackingField_18;
};

// UnityEngine.MeshCollider
struct MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingTeapotFeature
struct MeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2  : public OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143
{
};

struct MeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.XRMeshSubsystemDescriptor> UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingTeapotFeature::s_MeshDescriptors
	List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22* ___s_MeshDescriptors_17;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Skybox
struct Skybox_tB3C6FDB5DCB4633B155B7A80045542B7C3388441  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// BlurEffect
struct BlurEffect_t1A2D66B358F74F5BC28CF99F5F0028613AE27FA3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 BlurEffect::iterations
	int32_t ___iterations_4;
	// System.Single BlurEffect::blurSpread
	float ___blurSpread_5;
	// UnityEngine.Shader BlurEffect::blurShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___blurShader_6;
};

struct BlurEffect_t1A2D66B358F74F5BC28CF99F5F0028613AE27FA3_StaticFields
{
	// UnityEngine.Material BlurEffect::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_7;
};

// ContrastStretchEffect
struct ContrastStretchEffect_t0803E595E6F50A97670E42507936C98C9AD15CDC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single ContrastStretchEffect::adaptationSpeed
	float ___adaptationSpeed_4;
	// System.Single ContrastStretchEffect::limitMinimum
	float ___limitMinimum_5;
	// System.Single ContrastStretchEffect::limitMaximum
	float ___limitMaximum_6;
	// UnityEngine.RenderTexture[] ContrastStretchEffect::adaptRenderTex
	RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* ___adaptRenderTex_7;
	// System.Int32 ContrastStretchEffect::curAdaptIndex
	int32_t ___curAdaptIndex_8;
	// UnityEngine.Shader ContrastStretchEffect::shaderLum
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shaderLum_9;
	// UnityEngine.Material ContrastStretchEffect::m_materialLum
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_materialLum_10;
	// UnityEngine.Shader ContrastStretchEffect::shaderReduce
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shaderReduce_11;
	// UnityEngine.Material ContrastStretchEffect::m_materialReduce
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_materialReduce_12;
	// UnityEngine.Shader ContrastStretchEffect::shaderAdapt
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shaderAdapt_13;
	// UnityEngine.Material ContrastStretchEffect::m_materialAdapt
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_materialAdapt_14;
	// UnityEngine.Shader ContrastStretchEffect::shaderApply
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shaderApply_15;
	// UnityEngine.Material ContrastStretchEffect::m_materialApply
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_materialApply_16;
};

// Displace
struct Displace_tD42FF28A123509D1C01B7D2175EAF447F16B31DE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.XR.OpenXR.Samples.MeshingFeature.FallingSphere
struct FallingSphere_tE12F80B78F3B25C609125CF5384A42AD3F5EF9EA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 UnityEngine.XR.OpenXR.Samples.MeshingFeature.FallingSphere::starting
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___starting_4;
	// UnityEngine.Rigidbody UnityEngine.XR.OpenXR.Samples.MeshingFeature.FallingSphere::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_5;
};

// GlowEffect
struct GlowEffect_t54087E6A2C4CE3596E972E6368A66FBDFDCE16E9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single GlowEffect::glowIntensity
	float ___glowIntensity_4;
	// System.Int32 GlowEffect::blurIterations
	int32_t ___blurIterations_5;
	// System.Single GlowEffect::blurSpread
	float ___blurSpread_6;
	// UnityEngine.Color GlowEffect::glowTint
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___glowTint_7;
	// UnityEngine.Shader GlowEffect::compositeShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___compositeShader_8;
	// UnityEngine.Material GlowEffect::m_CompositeMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_CompositeMaterial_9;
	// UnityEngine.Shader GlowEffect::blurShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___blurShader_10;
	// UnityEngine.Material GlowEffect::m_BlurMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_BlurMaterial_11;
	// UnityEngine.Shader GlowEffect::downsampleShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___downsampleShader_12;
	// UnityEngine.Material GlowEffect::m_DownsampleMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_DownsampleMaterial_13;
};

// ImageEffectBase
struct ImageEffectBase_tFB5837BB6BB7BCDF01CD89A4BA2B10341AAC355E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Shader ImageEffectBase::shader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader_4;
	// UnityEngine.Material ImageEffectBase::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_5;
};

// UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptMessageHandler
struct InterceptMessageHandler_t1DF3F1A3719A60512C414F1E247D810ED8599FE4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.TextMesh UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptMessageHandler::textMesh
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___textMesh_4;
};

// UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingBehaviour
struct MeshingBehaviour_t109955F72D30C3D1F02C61F77289972F36947DE2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingBehaviour::emptyMeshPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___emptyMeshPrefab_4;
	// UnityEngine.TextMesh UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingBehaviour::textMesh
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___textMesh_5;
	// UnityEngine.Transform UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingBehaviour::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_6;
	// UnityEngine.XR.XRMeshSubsystem UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingBehaviour::s_MeshSubsystem
	XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* ___s_MeshSubsystem_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo> UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingBehaviour::s_MeshInfos
	List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* ___s_MeshInfos_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.MeshId,UnityEngine.GameObject> UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingBehaviour::m_MeshIdToGo
	Dictionary_2_t03505FE02BAD9618F6A47DE9EE5E22F38BBF93C6* ___m_MeshIdToGo_9;
};

// MouseLook
struct MouseLook_t947FC47A9845723307BA11051D0530C21C4F0CD4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// MouseLook/RotationAxes MouseLook::axes
	int32_t ___axes_4;
	// System.Single MouseLook::sensitivityX
	float ___sensitivityX_5;
	// System.Single MouseLook::sensitivityY
	float ___sensitivityY_6;
	// System.Single MouseLook::minimumX
	float ___minimumX_7;
	// System.Single MouseLook::maximumX
	float ___maximumX_8;
	// System.Single MouseLook::minimumY
	float ___minimumY_9;
	// System.Single MouseLook::maximumY
	float ___maximumY_10;
	// System.Single MouseLook::rotationY
	float ___rotationY_11;
};

// NoiseEffect
struct NoiseEffect_t4DCC3F1E477F5740C67F42CFE317AB6992FF4911  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean NoiseEffect::monochrome
	bool ___monochrome_4;
	// System.Boolean NoiseEffect::rgbFallback
	bool ___rgbFallback_5;
	// System.Single NoiseEffect::grainIntensityMin
	float ___grainIntensityMin_6;
	// System.Single NoiseEffect::grainIntensityMax
	float ___grainIntensityMax_7;
	// System.Single NoiseEffect::grainSize
	float ___grainSize_8;
	// System.Single NoiseEffect::scratchIntensityMin
	float ___scratchIntensityMin_9;
	// System.Single NoiseEffect::scratchIntensityMax
	float ___scratchIntensityMax_10;
	// System.Single NoiseEffect::scratchFPS
	float ___scratchFPS_11;
	// System.Single NoiseEffect::scratchJitter
	float ___scratchJitter_12;
	// UnityEngine.Texture NoiseEffect::grainTexture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___grainTexture_13;
	// UnityEngine.Texture NoiseEffect::scratchTexture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___scratchTexture_14;
	// UnityEngine.Shader NoiseEffect::shaderRGB
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shaderRGB_15;
	// UnityEngine.Shader NoiseEffect::shaderYUV
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shaderYUV_16;
	// UnityEngine.Material NoiseEffect::m_MaterialRGB
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaterialRGB_17;
	// UnityEngine.Material NoiseEffect::m_MaterialYUV
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaterialYUV_18;
	// System.Single NoiseEffect::scratchTimeLeft
	float ___scratchTimeLeft_19;
	// System.Single NoiseEffect::scratchX
	float ___scratchX_20;
	// System.Single NoiseEffect::scratchY
	float ___scratchY_21;
};

// PlanarReflection
struct PlanarReflection_t01C9F7773DB42C71EABA687BD37C7C8BD0679249  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.LayerMask PlanarReflection::reflectionMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___reflectionMask_4;
	// System.Boolean PlanarReflection::reflectSkybox
	bool ___reflectSkybox_5;
	// UnityEngine.Color PlanarReflection::clearColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___clearColor_6;
	// System.String PlanarReflection::reflectionSampler
	String_t* ___reflectionSampler_7;
	// System.Single PlanarReflection::clipPlaneOffset
	float ___clipPlaneOffset_8;
	// UnityEngine.Vector3 PlanarReflection::oldpos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oldpos_9;
	// UnityEngine.Camera PlanarReflection::reflectionCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___reflectionCamera_10;
	// UnityEngine.Material PlanarReflection::sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___sharedMaterial_11;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Boolean> PlanarReflection::helperCameras
	Dictionary_2_t57B517077AAE444D29577C0761ECF606105926AE* ___helperCameras_12;
};

// SSAOEffect
struct SSAOEffect_t6698F5B4525C7F42A2C7FD36595130191FA0B7F4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single SSAOEffect::m_Radius
	float ___m_Radius_4;
	// SSAOEffect/SSAOSamples SSAOEffect::m_SampleCount
	int32_t ___m_SampleCount_5;
	// System.Single SSAOEffect::m_OcclusionIntensity
	float ___m_OcclusionIntensity_6;
	// System.Int32 SSAOEffect::m_Blur
	int32_t ___m_Blur_7;
	// System.Int32 SSAOEffect::m_Downsampling
	int32_t ___m_Downsampling_8;
	// System.Single SSAOEffect::m_OcclusionAttenuation
	float ___m_OcclusionAttenuation_9;
	// System.Single SSAOEffect::m_MinZ
	float ___m_MinZ_10;
	// UnityEngine.Shader SSAOEffect::m_SSAOShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___m_SSAOShader_11;
	// UnityEngine.Material SSAOEffect::m_SSAOMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_SSAOMaterial_12;
	// UnityEngine.Texture2D SSAOEffect::m_RandomTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_RandomTexture_13;
	// System.Boolean SSAOEffect::m_Supported
	bool ___m_Supported_14;
};

// ScrollingUVs
struct ScrollingUVs_t7284B49E896F7E1F23E74E657B7565AEFA501B63  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 ScrollingUVs::materialIndex
	int32_t ___materialIndex_4;
	// UnityEngine.Vector2 ScrollingUVs::uvAnimationRate
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uvAnimationRate_5;
	// System.String ScrollingUVs::textureName
	String_t* ___textureName_6;
	// System.Boolean ScrollingUVs::ScrollBump
	bool ___ScrollBump_7;
	// System.String ScrollingUVs::bumpName
	String_t* ___bumpName_8;
	// UnityEngine.Vector2 ScrollingUVs::uvOffset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uvOffset_9;
};

// SpecularLighting
struct SpecularLighting_t1C9EAF60B3F3C2E9021D4ACC63C9480D57AB70F7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform SpecularLighting::specularLight
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___specularLight_4;
	// WaterBase SpecularLighting::waterBase
	WaterBase_t8D07B5BBBD1C82666F71EDF26C12BF03B39A79EA* ___waterBase_5;
};

// Water
struct Water_tA5654A18C7C4C258C0BB43725C80C8AD5163C433  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Water/WaterMode Water::m_WaterMode
	int32_t ___m_WaterMode_4;
	// System.Boolean Water::m_DisablePixelLights
	bool ___m_DisablePixelLights_5;
	// System.Int32 Water::m_TextureSize
	int32_t ___m_TextureSize_6;
	// System.Single Water::m_ClipPlaneOffset
	float ___m_ClipPlaneOffset_7;
	// UnityEngine.LayerMask Water::m_ReflectLayers
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_ReflectLayers_8;
	// UnityEngine.LayerMask Water::m_RefractLayers
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_RefractLayers_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera> Water::m_ReflectionCameras
	Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192* ___m_ReflectionCameras_10;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera> Water::m_RefractionCameras
	Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192* ___m_RefractionCameras_11;
	// UnityEngine.RenderTexture Water::m_ReflectionTexture
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_ReflectionTexture_12;
	// UnityEngine.RenderTexture Water::m_RefractionTexture
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RefractionTexture_13;
	// Water/WaterMode Water::m_HardwareWaterSupport
	int32_t ___m_HardwareWaterSupport_14;
	// System.Int32 Water::m_OldReflectionTextureSize
	int32_t ___m_OldReflectionTextureSize_15;
	// System.Int32 Water::m_OldRefractionTextureSize
	int32_t ___m_OldRefractionTextureSize_16;
};

struct Water_tA5654A18C7C4C258C0BB43725C80C8AD5163C433_StaticFields
{
	// System.Boolean Water::s_InsideWater
	bool ___s_InsideWater_17;
};

// WaterBase
struct WaterBase_t8D07B5BBBD1C82666F71EDF26C12BF03B39A79EA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material WaterBase::sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___sharedMaterial_4;
	// WaterQuality WaterBase::waterQuality
	int32_t ___waterQuality_5;
	// System.Boolean WaterBase::edgeBlend
	bool ___edgeBlend_6;
};

// WaterTile
struct WaterTile_t0CF14271C08BB6B4D5081C4B4BBCE359F081EE65  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PlanarReflection WaterTile::reflection
	PlanarReflection_t01C9F7773DB42C71EABA687BD37C7C8BD0679249* ___reflection_4;
	// WaterBase WaterTile::waterBase
	WaterBase_t8D07B5BBBD1C82666F71EDF26C12BF03B39A79EA* ___waterBase_5;
};

// ColorCorrectionEffect
struct ColorCorrectionEffect_t5C2697033953266A3C614713593F5D0B8A8784C6  : public ImageEffectBase_tFB5837BB6BB7BCDF01CD89A4BA2B10341AAC355E
{
	// UnityEngine.Texture ColorCorrectionEffect::textureRamp
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___textureRamp_6;
};

// GerstnerDisplace
struct GerstnerDisplace_tA8C9FAAD1008E373ED082D8C5C5663CC5B5FB4D2  : public Displace_tD42FF28A123509D1C01B7D2175EAF447F16B31DE
{
};

// GrayscaleEffect
struct GrayscaleEffect_t42D1E0CC458CE044D547218045905368F22E442E  : public ImageEffectBase_tFB5837BB6BB7BCDF01CD89A4BA2B10341AAC355E
{
	// UnityEngine.Texture GrayscaleEffect::textureRamp
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___textureRamp_6;
	// System.Single GrayscaleEffect::rampOffset
	float ___rampOffset_7;
};

// MotionBlur
struct MotionBlur_t7A1D334084EFC1584C1976626CC7B2CF1EC3B853  : public ImageEffectBase_tFB5837BB6BB7BCDF01CD89A4BA2B10341AAC355E
{
	// System.Single MotionBlur::blurAmount
	float ___blurAmount_6;
	// System.Boolean MotionBlur::extraBlur
	bool ___extraBlur_7;
	// UnityEngine.RenderTexture MotionBlur::accumTexture
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___accumTexture_8;
};

// SepiaToneEffect
struct SepiaToneEffect_tB98B02A63CEC2EF062998DBB6E0016A095A7D40C  : public ImageEffectBase_tFB5837BB6BB7BCDF01CD89A4BA2B10341AAC355E
{
};

// TwirlEffect
struct TwirlEffect_t205743FDB0ABF6E8C3FA38C10346462029E8C204  : public ImageEffectBase_tFB5837BB6BB7BCDF01CD89A4BA2B10341AAC355E
{
	// UnityEngine.Vector2 TwirlEffect::radius
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radius_6;
	// System.Single TwirlEffect::angle
	float ___angle_7;
	// UnityEngine.Vector2 TwirlEffect::center
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___center_8;
};

// VortexEffect
struct VortexEffect_t3C69D767E5390AB44AA1216D5F6AC85A760F5E78  : public ImageEffectBase_tFB5837BB6BB7BCDF01CD89A4BA2B10341AAC355E
{
	// UnityEngine.Vector2 VortexEffect::radius
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radius_6;
	// System.Single VortexEffect::angle
	float ___angle_7;
	// UnityEngine.Vector2 VortexEffect::center
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___center_8;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D  : public RuntimeArray
{
	ALIGN_FIELD (8) Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* m_Items[1];

	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.RenderTexture[]
struct RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6  : public RuntimeArray
{
	ALIGN_FIELD (8) RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* m_Items[1];

	inline RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m0D0F99974D7435C4E08FE9A9A632C9E5430F8454_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mBEDE43E001DFC228FF4DA06FBCA7CC215C8E7C73_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m06DE41B832D936F9A7884C491F10EC651D0EA065_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeObject* ___key0, bool ___value1, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_get_Item_mB8DAA0FB328D474EEE65CAF7F132DD9569BBC3A8_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mF1A7BA3C1568A00A32A43BCD889038FE080F77BF_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeObject* ___key0, bool ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mE0E8184DB358BEB3549E33D6EEA31FF45B89D99F_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, const RuntimeMethod* method) ;
// TFeature UnityEngine.XR.OpenXR.OpenXRSettings::GetFeature<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OpenXRSettings_GetFeature_TisRuntimeObject_m02D495FEA638A31EB52305C2E1721CB19B84DEAC_gshared (OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemManager::GetInstances<System.Object>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_GetInstances_TisRuntimeObject_mCBA01F889BE624767358AB5494CD2D7F1B2FB064_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___subsystems0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEC6D4B278440969CB479B2E8E2B65B2681CA6CE3 List_1_GetEnumerator_m468FAA4C99E6FF3C1756D6BD18FA8C2992355333_gshared (List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MeshInfo>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m01B983AEF89C8F17DEFD740A0E013C0CA4AC81C7_gshared (Enumerator_tEC6D4B278440969CB479B2E8E2B65B2681CA6CE3* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MeshInfo>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA Enumerator_get_Current_mC0CE60FBC4FAA79C6D5B26DD275B4DA0DF7265E6_gshared_inline (Enumerator_tEC6D4B278440969CB479B2E8E2B65B2681CA6CE3* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.MeshId,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m4E9F83459786172E9EBE2F35A3170A4BD5790547_gshared (Dictionary_2_t2053158D0376C8BF1E4837AFD63E6DB5E46CB680* __this, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_mDC5AD8BD13FE50E98B67B956C048367F4E8C6F94_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, bool ___worldPositionStays2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.MeshId,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mD714535AEFB8553A332B9223C69B8D0CDDAD2C68_gshared (Dictionary_2_t2053158D0376C8BF1E4837AFD63E6DB5E46CB680* __this, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.MeshGenerationResult>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m62D287B08FD32117DDF0FA2BB669D66F788BF382_gshared (Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.MeshId,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m240E78E45F4721C5A2AEB3B43F5550FAFDAAC7BE_gshared (Dictionary_2_t2053158D0376C8BF1E4837AFD63E6DB5E46CB680* __this, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MeshInfo>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mAB2B6FFD31DB8BF5C1516AEDD3901373D9CD412C_gshared (Enumerator_tEC6D4B278440969CB479B2E8E2B65B2681CA6CE3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mA2DD2929DEFD0FB15C436C1FEC952D5B092CBA23_gshared (List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.MeshId,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1E7D15D7285A8DAE5BCEF02B8592BCDDF8A73030_gshared (Dictionary_2_t2053158D0376C8BF1E4837AFD63E6DB5E46CB680* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRFeature::CreateSubsystem<System.Object,System.Object>(System.Collections.Generic.List`1<TDescriptor>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRFeature_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m8962B65060EE47BA2A88FE24CDED2724A6F3C51B_gshared (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___descriptors0, String_t* ___id1, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRFeature::StartSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRFeature_StartSubsystem_TisRuntimeObject_mD1B1CCB13C8EF031254DBE592A148C7A744F3724_gshared (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRFeature::StopSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRFeature_StopSubsystem_TisRuntimeObject_m1728B76D0581F2DB06F23933C72937B0824A7A73_gshared (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRFeature::DestroySubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRFeature_DestroySubsystem_TisRuntimeObject_m34F0E133C03B7EF23B5C1CA652929AF7753CD427_gshared (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143* __this, const RuntimeMethod* method) ;

// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Renderer::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Material[] UnityEngine.Renderer::get_materials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* Renderer_get_materials_m43D33328432700524EAEAB093C67AE5689976118 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetTextureOffset(System.String,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTextureOffset_m40F3FCE32535625DDF26C0C073D37968117FBFE1 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_freezeRotation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_freezeRotation_m6D049F82E9133020C31EEFB35A179A56364325DC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SystemInfo::get_supportsImageEffects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_get_supportsImageEffects_mA97A693C45A91780EE8E9F2802D6ED58841D52F0 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Material BlurEffect::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* BlurEffect_get_material_m5658B78F7B7146829E2D21E8FCDE355446169646 (BlurEffect_t1A2D66B358F74F5BC28CF99F5F0028613AE27FA3* __this, const RuntimeMethod* method) ;
// UnityEngine.Shader UnityEngine.Material::get_shader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Shader::get_isSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5 (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::BlitMultiTap(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_BlitMultiTap_mA3E9614E120DC002F18C066404DD39FD4FDF0A22 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat2, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___offsets3, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* RenderTexture_GetTemporary_m5B16E03FC6142149BDC336285A5C18D5152CA2C3 (int32_t ___width0, int32_t ___height1, int32_t ___depthBuffer2, const RuntimeMethod* method) ;
// System.Void BlurEffect::DownSample4x(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlurEffect_DownSample4x_m76CFF1A9AEF6FD3AB81BEEF8EA572BBC74F7C325 (BlurEffect_t1A2D66B358F74F5BC28CF99F5F0028613AE27FA3* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, const RuntimeMethod* method) ;
// System.Void BlurEffect::FourTapCone(UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlurEffect_FourTapCone_m87F5538210BF1C7D65D21C1FCD5720DA775264E5 (BlurEffect_t1A2D66B358F74F5BC28CF99F5F0028613AE27FA3* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, int32_t ___iteration2, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___temp0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, const RuntimeMethod* method) ;
// UnityEngine.Material ImageEffectBase::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ImageEffectBase_get_material_mA782BFD19466071E286A9A98047EEA49D7DB5ABA (ImageEffectBase_tFB5837BB6BB7BCDF01CD89A4BA2B10341AAC355E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat2, const RuntimeMethod* method) ;
// System.Void ImageEffectBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageEffectBase__ctor_m3D573416110EA614F77813109438B074A4B7D603 (ImageEffectBase_tFB5837BB6BB7BCDF01CD89A4BA2B10341AAC355E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture__ctor_m45EACC89DDF408948889586516B3CA7AA8B73BFA (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* RenderTexture_GetTemporary_m82379FD4C767A36F0677CAF4E68319EAE16ADF7F (int32_t ___width0, int32_t ___height1, const RuntimeMethod* method) ;
// UnityEngine.Material ContrastStretchEffect::get_materialLum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ContrastStretchEffect_get_materialLum_mBA064F7FC516A75EB5319DF7522B88D567EF6043 (ContrastStretchEffect_t0803E595E6F50A97670E42507936C98C9AD15CDC* __this, const RuntimeMethod* method) ;
// UnityEngine.Material ContrastStretchEffect::get_materialReduce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ContrastStretchEffect_get_materialReduce_mD1A50EF91D76F001BEBECBEE84EF09FC790AF77F (ContrastStretchEffect_t0803E595E6F50A97670E42507936C98C9AD15CDC* __this, const RuntimeMethod* method) ;
// System.Void ContrastStretchEffect::CalculateAdaptation(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContrastStretchEffect_CalculateAdaptation_mC1EAD9E208D1793F28553C443A4429426B43C88E (ContrastStretchEffect_t0803E595E6F50A97670E42507936C98C9AD15CDC* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___curTexture0, const RuntimeMethod* method) ;
// UnityEngine.Material ContrastStretchEffect::get_materialApply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ContrastStretchEffect_get_materialApply_m48D0E43BFFF3407CD188AFA0B0106C6BF9557A88 (ContrastStretchEffect_t0803E595E6F50A97670E42507936C98C9AD15CDC* __this, const RuntimeMethod* method) ;
// UnityEngine.Material ContrastStretchEffect::get_materialAdapt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ContrastStretchEffect_get_materialAdapt_m4CFDCA88F3F1929928149F35CB1F9CC8D4BEBFDF (ContrastStretchEffect_t0803E595E6F50A97670E42507936C98C9AD15CDC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetVector(System.String,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::SetRenderTarget(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_SetRenderTarget_m995C0F14B97C5BF46CCF2E7EF410C1CC05C46409 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___rt0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::Clear(System.Boolean,System.Boolean,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Clear_mA172E771FC32B516DB826F537832307C3A16BE09 (bool ___clearDepth0, bool ___clearColor1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.Material GlowEffect::get_blurMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GlowEffect_get_blurMaterial_m319A5B8FB8D7816DDADB73531D9E4473311BEBFA (GlowEffect_t54087E6A2C4CE3596E972E6368A66FBDFDCE16E9* __this, const RuntimeMethod* method) ;
// UnityEngine.Material GlowEffect::get_compositeMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GlowEffect_get_compositeMaterial_mE639F752517B8D8D999C8C138D30071F3A0AE412 (GlowEffect_t54087E6A2C4CE3596E972E6368A66FBDFDCE16E9* __this, const RuntimeMethod* method) ;
// UnityEngine.Material GlowEffect::get_downsampleMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GlowEffect_get_downsampleMaterial_mDCDB3CA28BDCBA053474085B837F59C951C3AAA6 (GlowEffect_t54087E6A2C4CE3596E972E6368A66FBDFDCE16E9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) ;
// System.Void GlowEffect::DownSample4x(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlowEffect_DownSample4x_mE08D3C5703AE3CD9DFD6EBD75482E8EFB9FFE506 (GlowEffect_t54087E6A2C4CE3596E972E6368A66FBDFDCE16E9* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void GlowEffect::FourTapCone(UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlowEffect_FourTapCone_m4900338821E8D776C577FB380F1474DE8CFB4ABC (GlowEffect_t54087E6A2C4CE3596E972E6368A66FBDFDCE16E9* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, int32_t ___iteration2, const RuntimeMethod* method) ;
// System.Void GlowEffect::BlitGlow(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlowEffect_BlitGlow_mB7C6379A46815F058FF822002E19B64470384933 (GlowEffect_t54087E6A2C4CE3596E972E6368A66FBDFDCE16E9* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Texture::get_texelSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Texture_get_texelSize_m05CA60DE53EF7CD5D2CBFA68B69B764E4D463359 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___s2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetMatrix(System.String,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetMatrix_m1F4E20583C898A1C1DBA256868E1F98C539F13FB (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value1, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SystemInfo::get_supportsRenderTextures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_get_supportsRenderTextures_mAA77A17E5351772E7FE0E5A295448BA64131F105 (const RuntimeMethod* method) ;
// System.Void ImageEffectBase::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageEffectBase_Start_m0AF61658C63ABC64E649C81C3732A409C2BE09B1 (ImageEffectBase_tFB5837BB6BB7BCDF01CD89A4BA2B10341AAC355E* __this, const RuntimeMethod* method) ;
// System.Void ImageEffectBase::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageEffectBase_OnDisable_m72F795D05E7055EFD7A4EFCE6E095CDEB506CB73 (ImageEffectBase_tFB5837BB6BB7BCDF01CD89A4BA2B10341AAC355E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::MarkRestoreExpected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_MarkRestoreExpected_m185BFFD02FE7149590A252527B18F25A7D4AD830 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
// System.Void NoiseEffect::SanitizeParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseEffect_SanitizeParameters_m622801A76F2F8D9DFDFEC06F3F314FF55BAB2247 (NoiseEffect_t4DCC3F1E477F5740C67F42CFE317AB6992FF4911* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B (const RuntimeMethod* method) ;
// UnityEngine.Material NoiseEffect::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* NoiseEffect_get_material_m11A348D5D2429624E6E46645BA12A3BE3FAA2EBD (NoiseEffect_t4DCC3F1E477F5740C67F42CFE317AB6992FF4911* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Void SSAOEffect::DestroyMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SSAOEffect_DestroyMaterial_m84C5C3C1414ACB7C83BD45DFB302C0436F7A9841 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SystemInfo::SupportsRenderTextureFormat(UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_SupportsRenderTextureFormat_mCCC3C69578A2C5B7367F73999E6938C315A98201 (int32_t ___format0, const RuntimeMethod* method) ;
// System.Void SSAOEffect::CreateMaterials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SSAOEffect_CreateMaterials_m67E4705B1F71FDADC876782050F8414ED869182B (SSAOEffect_t6698F5B4525C7F42A2C7FD36595130191FA0B7F4* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Material::get_passCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Material_get_passCount_m7BA071AFFA34DC3E49B56A16CB8B098566BDE765 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.DepthTextureMode UnityEngine.Camera::get_depthTextureMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_depthTextureMode_m998CDEBC055FE2A910F3B650585ADE3E2BB141EE (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_depthTextureMode(UnityEngine.DepthTextureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_depthTextureMode_mE722389E4DF8B3DF7F6100DB142E4DBAF698F6BF (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Material SSAOEffect::CreateMaterial(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* SSAOEffect_CreateMaterial_m03D672D04A57423470264EB9F4056810B5724C3A (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_fieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_farClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_aspect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat2, int32_t ___pass3, const RuntimeMethod* method) ;
// System.Void ImageEffects::RenderDistortion(UnityEngine.Material,UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Single,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageEffects_RenderDistortion_mF894CE1D06BBEAFDBA35CFA6F7954DC1E279CEF7 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source1, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination2, float ___angle3, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___center4, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radius5, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_current_m25217A02CB09E3BD50E3E0327879E870AD58C6C3 (const RuntimeMethod* method) ;
// Water/WaterMode Water::FindHardwareWaterSupport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Water_FindHardwareWaterSupport_mE0C42627301719B2B7041DFAAC1551AFEE881FA2 (Water_tA5654A18C7C4C258C0BB43725C80C8AD5163C433* __this, const RuntimeMethod* method) ;
// Water/WaterMode Water::GetWaterMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Water_GetWaterMode_m14BC01C8794BBCA5EBA09EAAD716B6827D8ABB8C (Water_tA5654A18C7C4C258C0BB43725C80C8AD5163C433* __this, const RuntimeMethod* method) ;
// System.Void Water::CreateWaterObjects(UnityEngine.Camera,UnityEngine.Camera&,UnityEngine.Camera&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Water_CreateWaterObjects_m683F944C064B7BDA24E5B2C542A1467843749E52 (Water_tA5654A18C7C4C258C0BB43725C80C8AD5163C433* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___currentCamera0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184** ___reflectionCamera1, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184** ___refractionCamera2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.QualitySettings::get_pixelLightCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QualitySettings_get_pixelLightCount_mBB36ED5F47B5841CEF44032058DC4A9815D3F339 (const RuntimeMethod* method) ;
// System.Void UnityEngine.QualitySettings::set_pixelLightCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QualitySettings_set_pixelLightCount_mD49EDE3F96CB8D12A0CFD00F8A13179B204762E3 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Water::UpdateCameraModes(UnityEngine.Camera,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Water_UpdateCameraModes_m5984794A87DEF87CB6D9E7D91576043E9538C2DE (Water_tA5654A18C7C4C258C0BB43725C80C8AD5163C433* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___src0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___dest1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_zero_m5D5F0475AD231C2C6BE5A9C80E11E24013B1B827 (const RuntimeMethod* method) ;
// System.Void Water::CalculateReflectionMatrix(UnityEngine.Matrix4x4&,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Water_CalculateReflectionMatrix_mBB9A733EFCF764937D43A4675665DAFAE3E83219 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___reflectionMat0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___plane1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix4x4_MultiplyPoint_m20E910B65693559BFDE99382472D8DD02C862E7E (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_worldToCameraMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Camera_get_worldToCameraMatrix_m48E324BD76706A316A1701EFC6A3DEC7DFB2FF40 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___lhs0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_worldToCameraMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_worldToCameraMatrix_mC199F02E435CE7261F7EECD1FD78A33EA96ABC0D (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector4 Water::CameraSpacePlane(UnityEngine.Camera,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Water_CameraSpacePlane_m62B2094A8FFC1269B00EA58CBB70698BD1AF0EDD (Water_tA5654A18C7C4C258C0BB43725C80C8AD5163C433* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal2, float ___sideSign3, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_projectionMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Camera_get_projectionMatrix_m9B943EFDD6418528A055321E14F75F1511DD9B4A (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void Water::CalculateObliqueMatrix(UnityEngine.Matrix4x4&,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Water_CalculateObliqueMatrix_mE63F5D558BE88CD4CBEBAB1F6639FDDA31C6F994 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___projection0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___clipPlane1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_projectionMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_projectionMatrix_m351820E6903139402FFFF40221B32D0C52B5A094 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_get_value_m70CBE32210A1F0FD4ECB850285DA90ED57B87974 (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_cullingMask(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_cullingMask_m14F426710530BA8FA53AEC02F79C418AA558CB32 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_targetTexture_mE6C740F21A72DA47FB5B1D31D208710738A836C4 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::SetRevertBackfacing(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_SetRevertBackfacing_mA99C540DE453C9F95BCCB6DCE98B7A42765F0410 (bool ___revertBackFaces0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::Render()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_Render_m6089001EB6710DA9A21C87185D65922F13A24509 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Shader::EnableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shader_EnableKeyword_m2449D6D86962FA7F5D1ED2B165EF63B019CBCCF1 (String_t* ___keyword0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Shader::DisableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shader_DisableKeyword_m20FCB3643CD53D86E46DA431DA971E59D49DAF88 (String_t* ___keyword0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::GetEnumerator()
inline Enumerator_t178259FEF5B67143AC6F4012394B98979FF5D29B Dictionary_2_GetEnumerator_m7BEABDF6190A27125E278461686B950DBC2E13FC (Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t178259FEF5B67143AC6F4012394B98979FF5D29B (*) (Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Camera,UnityEngine.Camera>::Dispose()
inline void Enumerator_Dispose_m4E0CD273C9B2F20DCD03E0A70B95F65B38EC1209 (Enumerator_t178259FEF5B67143AC6F4012394B98979FF5D29B* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t178259FEF5B67143AC6F4012394B98979FF5D29B*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Camera,UnityEngine.Camera>::get_Current()
inline KeyValuePair_2_t81A4309EC9B7D914620BE9321F587F84394E24CB Enumerator_get_Current_m36BD30099AE5596DD87AFF4F979E44119A7B8C19_inline (Enumerator_t178259FEF5B67143AC6F4012394B98979FF5D29B* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t81A4309EC9B7D914620BE9321F587F84394E24CB (*) (Enumerator_t178259FEF5B67143AC6F4012394B98979FF5D29B*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>::get_Value()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* KeyValuePair_2_get_Value_mBB1AED0F4C858A50D942F5E3E6829B3C3A249F43_inline (KeyValuePair_2_t81A4309EC9B7D914620BE9321F587F84394E24CB* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (KeyValuePair_2_t81A4309EC9B7D914620BE9321F587F84394E24CB*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Camera,UnityEngine.Camera>::MoveNext()
inline bool Enumerator_MoveNext_mECD1F7865FB8107F52675796DFB52D59D7B5E44D (Enumerator_t178259FEF5B67143AC6F4012394B98979FF5D29B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t178259FEF5B67143AC6F4012394B98979FF5D29B*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::Clear()
inline void Dictionary_2_Clear_m0985B9C4515ABFC16DCD73938C31FD14F388CBB7 (Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192*, const RuntimeMethod*))Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared)(__this, method);
}
// UnityEngine.Vector4 UnityEngine.Material::GetVector(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Material_GetVector_mA2011D4DA2CC58003AE90DBF0802CF5EE31B014D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Material::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Material_GetFloat_m2A77F10E6AA13EA3FA56166EFEA897115A14FA5A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_timeSinceLevelLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeSinceLevelLoad_m65C386103A91B172781032CA1A6FFDEC8CFBA921 (const RuntimeMethod* method) ;
// System.Double System.Math::IEEERemainder(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_IEEERemainder_m557E1471141E51EE8F8994980447E9DDE1919592 (double ___x0, double ___y1, const RuntimeMethod* method) ;
// UnityEngine.Bounds UnityEngine.Renderer::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// UnityEngine.CameraClearFlags UnityEngine.Camera::get_clearFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_clearFlags_mA74F538C124B391EF03C46A50CA7FF7B505B7602 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_clearFlags_m66541D9CC43CBAA5FE7364A50D43CA5569FD4D93 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Camera::get_backgroundColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Camera_get_backgroundColor_m1577A81D1E6A91D7934CECB8A284AA2D4704D96F (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_backgroundColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_backgroundColor_m036FD8C316A93A0B168ACC89AFF16D396B872138 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// UnityEngine.Component UnityEngine.Component::GetComponent(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* Component_GetComponent_m4352437B839B9601EB007CAC1007C8E1FB8A427D (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Type_t* ___type0, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Skybox::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Skybox_get_material_m8575E583E00DC4B2CC8C129FB1F5501A6557B781 (Skybox_tB3C6FDB5DCB4633B155B7A80045542B7C3388441* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Skybox::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Skybox_set_material_m18B5BCD0F5988399466D9EF88FA995A03204CBFA (Skybox_tB3C6FDB5DCB4633B155B7A80045542B7C3388441* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_farClipPlane(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_farClipPlane_m84EF39B09573168734613481FD979BFF31C60139 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_nearClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_nearClipPlane(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_nearClipPlane_m78482B5E4E0CE4C195D9CE0332AA75B2D9CCDDF6 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Camera::get_orthographic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Camera_get_orthographic_m904DEFC76C54DA4E30C20A62A86D5D87B7D4DD8F (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_orthographic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_orthographic_m64915C0840A68E526830A69F1C40257206185020 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_aspect(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_aspect_m537F21B48FDD5C060DFF9D87F34F4FB2B0F9BEB6 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_orthographicSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_orthographicSize_m76DD021032ACB3DDBD052B75EC66DCE3A7295A5C (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Object::GetInstanceID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_isPowerOfTwo(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_isPowerOfTwo_mC484FC101ACE1B1BAFF21FA71F633A39765987A4 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m170AED7C79718F1017B33E251480A89CEAEB35D3 (Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___key0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192*, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m721D643351E55308EA4F5F41B67D5446D11C61F0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___components1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<UnityEngine.FlareLayer>()
inline FlareLayer_t3C59D7C6F5A65AC1734D0CC1A92B464657936ABE* GameObject_AddComponent_TisFlareLayer_t3C59D7C6F5A65AC1734D0CC1A92B464657936ABE_m419A7510064DE509FCA259992B80C3C44547C22E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  FlareLayer_t3C59D7C6F5A65AC1734D0CC1A92B464657936ABE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mD8C30AF913A8F62839C214C596CA1AFCA100AFD1 (Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___key0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192*, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.String UnityEngine.Material::GetTag(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Material_GetTag_m0B37070270E231B88808DB1B3F9EF4C1851627D4 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___tag0, bool ___searchFallbacks1, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix4x4_MultiplyVector_mFD12F86A473E90BBB0002149ABA3917B2A518937 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_inverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_inverse_m4F4A881CD789281EA90EB68CFD39F36C8A81E6BD (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, const RuntimeMethod* method) ;
// System.Single Water::sgn(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Water_sgn_mE05339E033240E6A15DB10114FC26778C56EECC4 (float ___a0, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Matrix4x4_op_Multiply_m319DF5B7DD9C9499EB8A5682FA63B1AAF0EE87A4 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___vector1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector4::Dot(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_Dot_m40A3B2E258E53E4847583474E40AC29F68AF8BA3_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Multiply(UnityEngine.Vector4,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Multiply_m02FE150FD7366546FC19A36B6928512376BF64E8_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Matrix4x4_get_Item_m771C2EE3A3BFFBAC9F2AD07FFCAAF6146C1BE92A (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix4x4_set_Item_m47C4DDBFAE6578D6008AEF433777D4B2FACB62B0 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___index0, float ___value1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector4::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222 (int32_t ___intVal0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::.ctor()
inline void Dictionary_2__ctor_mCC86EBF40667A343EA2CBB31F715245A4A6417E0 (Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void Displace::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Displace_OnEnable_mEC28F406471F00F28E835B8013BE2EB47D31D0D9 (Displace_tD42FF28A123509D1C01B7D2175EAF447F16B31DE* __this, const RuntimeMethod* method) ;
// System.Void Displace::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Displace_OnDisable_m05B3533D4DB3FF318FB47B615B1FC3E0CC884CBE (Displace_tD42FF28A123509D1C01B7D2175EAF447F16B31DE* __this, const RuntimeMethod* method) ;
// System.Void Displace::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Displace__ctor_mB9FFBD9F00557B9D6DC0E4D6BB90543E16F2AA8D (Displace_tD42FF28A123509D1C01B7D2175EAF447F16B31DE* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_normals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Mesh_get_normals_m2B6B159B799E6E235EA651FCAB2E18EE5B18ED62 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_normals(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_normals_m85D73193C49211BE9FA135FF72D5749B16A4760B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* GameObject_GetComponent_m99E12753EA84947521DC711CA33F452B5E65B474 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, Type_t* ___type0, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* GameObject_AddComponent_mDF246771EC34613FA6AF0C98D443368FB43E9F36 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, Type_t* ___componentType0, const RuntimeMethod* method) ;
// System.Void PlanarReflection::SetStandardCameraParameter(UnityEngine.Camera,UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflection_SetStandardCameraParameter_m27AD2543516D6C715E00C0DD8601C56870D992D4 (PlanarReflection_t01C9F7773DB42C71EABA687BD37C7C8BD0679249* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam0, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask1, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* Camera_get_targetTexture_mC856D7FF8351476068D04E245E4F08F5C56A55BD (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture PlanarReflection::CreateTextureFor(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* PlanarReflection_CreateTextureFor_m5CAB5328AADABD73C6CF2E5604E0782B2E4A83EB (PlanarReflection_t01C9F7773DB42C71EABA687BD37C7C8BD0679249* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139 (String_t* ___layerName0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Camera::get_pixelWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_pixelWidth_m55AC8AD744FC0179865C2E630C68F9AD0799065D (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___f0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Camera::get_pixelHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_pixelHeight_m00881B5A440B0018D5A8F837694027050B500F59 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Boolean>::.ctor()
inline void Dictionary_2__ctor_m8073AFCB144A96589548ACD600418E381CDD0505 (Dictionary_2_t57B517077AAE444D29577C0761ECF606105926AE* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t57B517077AAE444D29577C0761ECF606105926AE*, const RuntimeMethod*))Dictionary_2__ctor_m0D0F99974D7435C4E08FE9A9A632C9E5430F8454_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Boolean>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mF851A106660DB5B20BF9F137E8523AFEF8582D18 (Dictionary_2_t57B517077AAE444D29577C0761ECF606105926AE* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t57B517077AAE444D29577C0761ECF606105926AE*, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*, const RuntimeMethod*))Dictionary_2_ContainsKey_mBEDE43E001DFC228FF4DA06FBCA7CC215C8E7C73_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Boolean>::Add(TKey,TValue)
inline void Dictionary_2_Add_m5A0C77623E27D33EF51E8874C1FC4740C6EC748E (Dictionary_2_t57B517077AAE444D29577C0761ECF606105926AE* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___key0, bool ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t57B517077AAE444D29577C0761ECF606105926AE*, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*, bool, const RuntimeMethod*))Dictionary_2_Add_m06DE41B832D936F9A7884C491F10EC651D0EA065_gshared)(__this, ___key0, ___value1, method);
}
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Boolean>::get_Item(TKey)
inline bool Dictionary_2_get_Item_mE7FE4DCD7D1D6FED31F331F5913A71852404CF07 (Dictionary_2_t57B517077AAE444D29577C0761ECF606105926AE* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t57B517077AAE444D29577C0761ECF606105926AE*, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*, const RuntimeMethod*))Dictionary_2_get_Item_mB8DAA0FB328D474EEE65CAF7F132DD9569BBC3A8_gshared)(__this, ___key0, method);
}
// UnityEngine.Camera PlanarReflection::CreateReflectionCameraFor(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* PlanarReflection_CreateReflectionCameraFor_m03D132C67254E036B77E053EB5E3A5A30D0722BB (PlanarReflection_t01C9F7773DB42C71EABA687BD37C7C8BD0679249* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam0, const RuntimeMethod* method) ;
// System.Void PlanarReflection::RenderReflectionFor(UnityEngine.Camera,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflection_RenderReflectionFor_m34771F975824C9FD4060AC15D659C9CE06BF8E58 (PlanarReflection_t01C9F7773DB42C71EABA687BD37C7C8BD0679249* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___reflectCamera1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Boolean>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mE5074004B30CDC63968F7CBED61C3CAF2138B910 (Dictionary_2_t57B517077AAE444D29577C0761ECF606105926AE* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___key0, bool ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t57B517077AAE444D29577C0761ECF606105926AE*, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*, bool, const RuntimeMethod*))Dictionary_2_set_Item_mF1A7BA3C1568A00A32A43BCD889038FE080F77BF_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Boolean>::Clear()
inline void Dictionary_2_Clear_m99F3AA70A9133B80B7116E3B6ADA49E91BF124AE (Dictionary_2_t57B517077AAE444D29577C0761ECF606105926AE* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t57B517077AAE444D29577C0761ECF606105926AE*, const RuntimeMethod*))Dictionary_2_Clear_mE0E8184DB358BEB3549E33D6EEA31FF45B89D99F_gshared)(__this, method);
}
// System.Void PlanarReflection::RenderHelpCameras(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflection_RenderHelpCameras_m8CC0B3C9437472EF32CAB52927F74E7EA5B0C0AB (PlanarReflection_t01C9F7773DB42C71EABA687BD37C7C8BD0679249* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___currentCam0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Material::HasProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void PlanarReflection::SaneCameraSettings(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflection_SaneCameraSettings_mC6D6FB58E52785713FA5F5D010727F07C1979947 (PlanarReflection_t01C9F7773DB42C71EABA687BD37C7C8BD0679249* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___helperCam0, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 PlanarReflection::CalculateReflectionMatrix(UnityEngine.Matrix4x4,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 PlanarReflection_CalculateReflectionMatrix_m907715C4A71E736650B99C54A45FC0B37D24929B (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___reflectionMat0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___plane1, const RuntimeMethod* method) ;
// UnityEngine.Vector4 PlanarReflection::CameraSpacePlane(UnityEngine.Camera,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 PlanarReflection_CameraSpacePlane_m2E8F14E5BCD369AED1CA8C582C5B815ED6C679B8 (PlanarReflection_t01C9F7773DB42C71EABA687BD37C7C8BD0679249* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal2, float ___sideSign3, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 PlanarReflection::CalculateObliqueMatrix(UnityEngine.Matrix4x4,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 PlanarReflection_CalculateObliqueMatrix_mDF6487A9A932273FF242C2171170623BBF35638E (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___projection0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___clipPlane1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_renderingPath(UnityEngine.RenderingPath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_renderingPath_m5BD8E4230DE3DD68F722AED5D85271E2A2B026B3 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Single PlanarReflection::sgn(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlanarReflection_sgn_mAE55EB4B4F56DB0E5F76502E837565444C64E37E (float ___a0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_grey()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_grey_m1CE6BEDA3EF8569E939F77A4B0231D9839864F92_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Shader::set_maximumLOD(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shader_set_maximumLOD_mC07203B1137E60D0E80E8BB991A37435220D4CE8 (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// System.Void WaterBase::UpdateShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterBase_UpdateShader_m3E93ABEBE2386040D1A538DBD54B6F0E3DD16BE1 (WaterBase_t8D07B5BBBD1C82666F71EDF26C12BF03B39A79EA* __this, const RuntimeMethod* method) ;
// System.Void WaterTile::AcquireComponents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterTile_AcquireComponents_m63504ABEFA8974C6FCF60A00BD45E0CA45A1183A (WaterTile_t0CF14271C08BB6B4D5081C4B4BBCE359F081EE65* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<PlanarReflection>()
inline PlanarReflection_t01C9F7773DB42C71EABA687BD37C7C8BD0679249* Component_GetComponent_TisPlanarReflection_t01C9F7773DB42C71EABA687BD37C7C8BD0679249_m4F065364D8269D0A09C1512BE3F834AF1E924E73 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  PlanarReflection_t01C9F7773DB42C71EABA687BD37C7C8BD0679249* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<WaterBase>()
inline WaterBase_t8D07B5BBBD1C82666F71EDF26C12BF03B39A79EA* Component_GetComponent_TisWaterBase_t8D07B5BBBD1C82666F71EDF26C12BF03B39A79EA_mC0A9738284951B51C70B8E45F26A719901436DF3 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  WaterBase_t8D07B5BBBD1C82666F71EDF26C12BF03B39A79EA* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void PlanarReflection::WaterTileBeingRendered(UnityEngine.Transform,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflection_WaterTileBeingRendered_m93AD050506974E9D6F39BBA70CF230C61AE03380 (PlanarReflection_t01C9F7773DB42C71EABA687BD37C7C8BD0679249* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___tr0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___currentCam1, const RuntimeMethod* method) ;
// System.Void WaterBase::WaterTileBeingRendered(UnityEngine.Transform,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterBase_WaterTileBeingRendered_m7C7B9D47E9214CA4808FBAE30EFD1A628B6F6D5A (WaterBase_t8D07B5BBBD1C82666F71EDF26C12BF03B39A79EA* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___tr0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___currentCam1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_angularVelocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_angularVelocity_m23266B4E52BF0D2E65CC984AC73CC40B8D4A27E0 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::MovePosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_MovePosition_mB2CD29ABC8F59AC338C0A3A5A6B75C38FDA92CA9 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.XR.OpenXR.OpenXRSettings UnityEngine.XR.OpenXR.OpenXRSettings::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55* OpenXRSettings_get_Instance_m0F645DB8A0ECC1325AD730F18479BCDCB92D1920 (const RuntimeMethod* method) ;
// TFeature UnityEngine.XR.OpenXR.OpenXRSettings::GetFeature<UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingTeapotFeature>()
inline MeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2* OpenXRSettings_GetFeature_TisMeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2_mCB0851553933D9B0FE7ED440CF6F5761B9120FBD (OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55* __this, const RuntimeMethod* method)
{
	return ((  MeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2* (*) (OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55*, const RuntimeMethod*))OpenXRSettings_GetFeature_TisRuntimeObject_m02D495FEA638A31EB52305C2E1721CB19B84DEAC_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenXRFeature_get_enabled_m958523A02F396C1623F2C7D7292B2E96A26270CD (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRMeshSubsystem>::.ctor()
inline void List_1__ctor_m2D504F27EFCAFC96E2CC2541C7A144D920F76A77 (List_1_tE26BFC6B67208BD0D9CA0FB072FE6D07927222D4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE26BFC6B67208BD0D9CA0FB072FE6D07927222D4*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.SubsystemManager::GetInstances<UnityEngine.XR.XRMeshSubsystem>(System.Collections.Generic.List`1<T>)
inline void SubsystemManager_GetInstances_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m44A912E10E9B8D0466155F3C9CDB3A378D1C41C3 (List_1_tE26BFC6B67208BD0D9CA0FB072FE6D07927222D4* ___subsystems0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE26BFC6B67208BD0D9CA0FB072FE6D07927222D4*, const RuntimeMethod*))SubsystemManager_GetInstances_TisRuntimeObject_mCBA01F889BE624767358AB5494CD2D7F1B2FB064_gshared)(___subsystems0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.XRMeshSubsystem>::get_Count()
inline int32_t List_1_get_Count_mC7DA166E8D82026036A1F31B4B32E0C1549A62FD_inline (List_1_tE26BFC6B67208BD0D9CA0FB072FE6D07927222D4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE26BFC6B67208BD0D9CA0FB072FE6D07927222D4*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.XR.XRMeshSubsystem>::get_Item(System.Int32)
inline XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* List_1_get_Item_mEC986C80443975BD0614D2D8580012A9C0B634B3 (List_1_tE26BFC6B67208BD0D9CA0FB072FE6D07927222D4* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* (*) (List_1_tE26BFC6B67208BD0D9CA0FB072FE6D07927222D4*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextMesh::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E (TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.IntegratedSubsystem::get_running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntegratedSubsystem_get_running_m18AA0D7AD1CB593DC9EE5F3DC79643717509D6E8 (IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.XRMeshSubsystem::TryGetMeshInfos(System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRMeshSubsystem_TryGetMeshInfos_m05F584066A873F286C16B99A929C4B3B9AB58FD2 (XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* __this, List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* ___meshInfosOut0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::GetEnumerator()
inline Enumerator_tEC6D4B278440969CB479B2E8E2B65B2681CA6CE3 List_1_GetEnumerator_m468FAA4C99E6FF3C1756D6BD18FA8C2992355333 (List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tEC6D4B278440969CB479B2E8E2B65B2681CA6CE3 (*) (List_1_tEE09D0BD215A518344AF2985829C519B609B7B17*, const RuntimeMethod*))List_1_GetEnumerator_m468FAA4C99E6FF3C1756D6BD18FA8C2992355333_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MeshInfo>::Dispose()
inline void Enumerator_Dispose_m01B983AEF89C8F17DEFD740A0E013C0CA4AC81C7 (Enumerator_tEC6D4B278440969CB479B2E8E2B65B2681CA6CE3* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tEC6D4B278440969CB479B2E8E2B65B2681CA6CE3*, const RuntimeMethod*))Enumerator_Dispose_m01B983AEF89C8F17DEFD740A0E013C0CA4AC81C7_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MeshInfo>::get_Current()
inline MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA Enumerator_get_Current_mC0CE60FBC4FAA79C6D5B26DD275B4DA0DF7265E6_inline (Enumerator_tEC6D4B278440969CB479B2E8E2B65B2681CA6CE3* __this, const RuntimeMethod* method)
{
	return ((  MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA (*) (Enumerator_tEC6D4B278440969CB479B2E8E2B65B2681CA6CE3*, const RuntimeMethod*))Enumerator_get_Current_mC0CE60FBC4FAA79C6D5B26DD275B4DA0DF7265E6_gshared_inline)(__this, method);
}
// UnityEngine.XR.MeshChangeState UnityEngine.XR.MeshInfo::get_ChangeState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MeshInfo_get_ChangeState_mF366492B8EF4A9FC8F677E01A6BA4C6C75D3BF68_inline (MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.MeshId UnityEngine.XR.MeshInfo::get_MeshId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC MeshInfo_get_MeshId_m96D69F5BA60A596D7C9FAAF0931940452E3D8846_inline (MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.MeshId,UnityEngine.GameObject>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mD5700C6F114DD67B63664D9FD62690E29520FEB4 (Dictionary_2_t03505FE02BAD9618F6A47DE9EE5E22F38BBF93C6* __this, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___key0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t03505FE02BAD9618F6A47DE9EE5E22F38BBF93C6*, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F**, const RuntimeMethod*))Dictionary_2_TryGetValue_m4E9F83459786172E9EBE2F35A3170A4BD5790547_gshared)(__this, ___key0, ___value1, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform,System.Boolean)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCE536F8736F04AC3C46EED6FD5FA02F5D22A84C6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, bool ___worldPositionStays2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, bool, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mDC5AD8BD13FE50E98B67B956C048367F4E8C6F94_gshared)(___original0, ___parent1, ___worldPositionStays2, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.MeshId,UnityEngine.GameObject>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m4A55A1B492681E3944838CD2008DB0DC4CE6C777 (Dictionary_2_t03505FE02BAD9618F6A47DE9EE5E22F38BBF93C6* __this, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___key0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t03505FE02BAD9618F6A47DE9EE5E22F38BBF93C6*, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Dictionary_2_set_Item_mD714535AEFB8553A332B9223C69B8D0CDDAD2C68_gshared)(__this, ___key0, ___value1, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Mesh UnityEngine.MeshFilter::get_mesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MeshFilter_get_mesh_m13172D7EF6682861971817D0A47EE2BE49FBCB1C (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshCollider>()
inline MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* GameObject_GetComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_m21E4C15ED89B2D1A80F393D96CF4464B16E9F1F9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void System.Action`1<UnityEngine.XR.MeshGenerationResult>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m62D287B08FD32117DDF0FA2BB669D66F788BF382 (Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m62D287B08FD32117DDF0FA2BB669D66F788BF382_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.XRMeshSubsystem::GenerateMeshAsync(UnityEngine.XR.MeshId,UnityEngine.Mesh,UnityEngine.MeshCollider,UnityEngine.XR.MeshVertexAttributes,System.Action`1<UnityEngine.XR.MeshGenerationResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystem_GenerateMeshAsync_m3DEA3C294695FD7C54D1186FF7DCE84A4BA1CFB7 (XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* __this, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___meshId0, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh1, MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* ___meshCollider2, int32_t ___attributes3, Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8* ___onMeshGenerationComplete4, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.MeshId,UnityEngine.GameObject>::Remove(TKey)
inline bool Dictionary_2_Remove_m3ACCE6031F6FF6C54F88DE9EF8AD788143E6C016 (Dictionary_2_t03505FE02BAD9618F6A47DE9EE5E22F38BBF93C6* __this, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t03505FE02BAD9618F6A47DE9EE5E22F38BBF93C6*, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC, const RuntimeMethod*))Dictionary_2_Remove_m240E78E45F4721C5A2AEB3B43F5550FAFDAAC7BE_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.MeshInfo>::MoveNext()
inline bool Enumerator_MoveNext_mAB2B6FFD31DB8BF5C1516AEDD3901373D9CD412C (Enumerator_tEC6D4B278440969CB479B2E8E2B65B2681CA6CE3* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tEC6D4B278440969CB479B2E8E2B65B2681CA6CE3*, const RuntimeMethod*))Enumerator_MoveNext_mAB2B6FFD31DB8BF5C1516AEDD3901373D9CD412C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::.ctor()
inline void List_1__ctor_mA2DD2929DEFD0FB15C436C1FEC952D5B092CBA23 (List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEE09D0BD215A518344AF2985829C519B609B7B17*, const RuntimeMethod*))List_1__ctor_mA2DD2929DEFD0FB15C436C1FEC952D5B092CBA23_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.MeshId,UnityEngine.GameObject>::.ctor()
inline void Dictionary_2__ctor_mFF35FF8199520A91C28C7C4A6F912CADEFE83909 (Dictionary_2_t03505FE02BAD9618F6A47DE9EE5E22F38BBF93C6* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t03505FE02BAD9618F6A47DE9EE5E22F38BBF93C6*, const RuntimeMethod*))Dictionary_2__ctor_m1E7D15D7285A8DAE5BCEF02B8592BCDDF8A73030_gshared)(__this, method);
}
// System.Void UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingBehaviour/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m726994FB513CD5C23A758B095B7F2050D7A88F00 (U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.MeshGenerationStatus UnityEngine.XR.MeshGenerationResult::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MeshGenerationResult_get_Status_m392754927B1E28DB2E6078A212F8FCC013AC10C0_inline (MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRFeature::CreateSubsystem<UnityEngine.XR.XRMeshSubsystemDescriptor,UnityEngine.XR.XRMeshSubsystem>(System.Collections.Generic.List`1<TDescriptor>,System.String)
inline void OpenXRFeature_CreateSubsystem_TisXRMeshSubsystemDescriptor_tD9814661B8661C69D5A0DBB76C9AF61778B9CEC1_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_mAB175555B5E53A082F353048FD7E6ABF6846F607 (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143* __this, List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22* ___descriptors0, String_t* ___id1, const RuntimeMethod* method)
{
	((  void (*) (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143*, List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22*, String_t*, const RuntimeMethod*))OpenXRFeature_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m8962B65060EE47BA2A88FE24CDED2724A6F3C51B_gshared)(__this, ___descriptors0, ___id1, method);
}
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRFeature::StartSubsystem<UnityEngine.XR.XRMeshSubsystem>()
inline void OpenXRFeature_StartSubsystem_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m0C067F6B64FF1332C06FCC302EB30FA6BC88F29C (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143* __this, const RuntimeMethod* method)
{
	((  void (*) (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143*, const RuntimeMethod*))OpenXRFeature_StartSubsystem_TisRuntimeObject_mD1B1CCB13C8EF031254DBE592A148C7A744F3724_gshared)(__this, method);
}
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRFeature::StopSubsystem<UnityEngine.XR.XRMeshSubsystem>()
inline void OpenXRFeature_StopSubsystem_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m94A9611521BB67BAACE92079BEB86CB5D8E64B86 (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143* __this, const RuntimeMethod* method)
{
	((  void (*) (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143*, const RuntimeMethod*))OpenXRFeature_StopSubsystem_TisRuntimeObject_m1728B76D0581F2DB06F23933C72937B0824A7A73_gshared)(__this, method);
}
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRFeature::DestroySubsystem<UnityEngine.XR.XRMeshSubsystem>()
inline void OpenXRFeature_DestroySubsystem_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m90715606D59F037609DDB43AEF21D087F3C25EBB (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143* __this, const RuntimeMethod* method)
{
	((  void (*) (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143*, const RuntimeMethod*))OpenXRFeature_DestroySubsystem_TisRuntimeObject_m34F0E133C03B7EF23B5C1CA652929AF7753CD427_gshared)(__this, method);
}
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRFeature::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRFeature__ctor_m120460E34ECC22ED2DB96797A6DCB5C870E78852 (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRMeshSubsystemDescriptor>::.ctor()
inline void List_1__ctor_m277DBA8B46097B1BA355F0215F73E0DA16803756 (List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature::OnMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterceptCreateSessionFeature_OnMessage_mDC10AA02BB5ED0AA93C96BAEA118F3923E2E4354 (String_t* ___message0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature::intercept_xrCreateSession_xrGetInstanceProcAddr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t InterceptCreateSessionFeature_intercept_xrCreateSession_xrGetInstanceProcAddr_mB3560C7616943DE21C2260F2F9D28BAC2846F3D1 (intptr_t ___func0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature/ReceiveMessageDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiveMessageDelegate__ctor_m152A9C050292D523407A94CA7A708C9C89C00E06 (ReceiveMessageDelegate_tFF45138D21684C2ADF9D6603D1048CA02845970B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature::Internal_SetCallback(UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature/ReceiveMessageDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterceptCreateSessionFeature_Internal_SetCallback_m43E93F76F34966289CB788334D87FEB66850C491 (ReceiveMessageDelegate_tFF45138D21684C2ADF9D6603D1048CA02845970B* ___callback0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature::Internal_SetMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterceptCreateSessionFeature_Internal_SetMessage_m7B17D2CD0BB04E55B3A9CB05DCFC2182A8436E10 (String_t* ___printString0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// TFeature UnityEngine.XR.OpenXR.OpenXRSettings::GetFeature<UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature>()
inline InterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F* OpenXRSettings_GetFeature_TisInterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F_mCA36190361158CB585814D7DC7E9DB5567FB73AB (OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55* __this, const RuntimeMethod* method)
{
	return ((  InterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F* (*) (OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55*, const RuntimeMethod*))OpenXRSettings_GetFeature_TisRuntimeObject_m02D495FEA638A31EB52305C2E1721CB19B84DEAC_gshared)(__this, method);
}
// System.Void UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature::set_receivedMessage(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InterceptCreateSessionFeature_set_receivedMessage_m06924CA717DBCA3DCFCCC136AF8F1C86CE98756D_inline (InterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature::get_receivedMessage()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InterceptCreateSessionFeature_get_receivedMessage_m3783793E40B12DC8AE9770D6DBB7F981D36C92D6_inline (InterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.TextMesh::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_color_mF08F30C3CD797C16289225B567724B9F07DC641E (TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425 (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_InterceptFeaturePlugin_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL script_intercept_xrCreateSession_xrGetInstanceProcAddr(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_InterceptFeaturePlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL script_set_message(char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_InterceptFeaturePlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL script_set_callback(Il2CppMethodPointer);
#endif
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
// System.Void ScrollingUVs::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollingUVs_LateUpdate_m20F0D7499B21815EFFC14482D138966E0B8BABE2 (ScrollingUVs_t7284B49E896F7E1F23E74E657B7565AEFA501B63* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// uvOffset += ( uvAnimationRate * Time.deltaTime );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___uvOffset_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = __this->___uvAnimationRate_5;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_1, L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_0, L_3, NULL);
		__this->___uvOffset_9 = L_4;
		// if( GetComponent<Renderer>().enabled )
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_5;
		L_5 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_5);
		bool L_6;
		L_6 = Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54(L_5, NULL);
		if (!L_6)
		{
			goto IL_007c;
		}
	}
	{
		// GetComponent<Renderer>().materials[ materialIndex ].SetTextureOffset( textureName, uvOffset );
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_7;
		L_7 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_7);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_8;
		L_8 = Renderer_get_materials_m43D33328432700524EAEAB093C67AE5689976118(L_7, NULL);
		int32_t L_9 = __this->___materialIndex_4;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		String_t* L_12 = __this->___textureName_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = __this->___uvOffset_9;
		NullCheck(L_11);
		Material_SetTextureOffset_m40F3FCE32535625DDF26C0C073D37968117FBFE1(L_11, L_12, L_13, NULL);
		// if(ScrollBump)
		bool L_14 = __this->___ScrollBump_7;
		if (!L_14)
		{
			goto IL_007c;
		}
	}
	{
		// GetComponent<Renderer>().materials[ materialIndex ].SetTextureOffset( bumpName, uvOffset );
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_15;
		L_15 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_15);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_16;
		L_16 = Renderer_get_materials_m43D33328432700524EAEAB093C67AE5689976118(L_15, NULL);
		int32_t L_17 = __this->___materialIndex_4;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		String_t* L_20 = __this->___bumpName_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = __this->___uvOffset_9;
		NullCheck(L_19);
		Material_SetTextureOffset_m40F3FCE32535625DDF26C0C073D37968117FBFE1(L_19, L_20, L_21, NULL);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void ScrollingUVs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollingUVs__ctor_m1E784AF2F669535A024C6B63D53E3413468940D1 (ScrollingUVs_t7284B49E896F7E1F23E74E657B7565AEFA501B63* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BF9FDA83C54B3E4D921C2ABBCF673E2E2E37FBA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Vector2 uvAnimationRate = new Vector2( 1.0f, 0.0f );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_0), (1.0f), (0.0f), /*hidden argument*/NULL);
		__this->___uvAnimationRate_5 = L_0;
		// public string textureName = "_MainTex";
		__this->___textureName_6 = _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___textureName_6), (void*)_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		// public bool ScrollBump = true;
		__this->___ScrollBump_7 = (bool)1;
		// public string bumpName = "_BumpMap";
		__this->___bumpName_8 = _stringLiteral9BF9FDA83C54B3E4D921C2ABBCF673E2E2E37FBA;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bumpName_8), (void*)_stringLiteral9BF9FDA83C54B3E4D921C2ABBCF673E2E2E37FBA);
		// Vector2 uvOffset = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___uvOffset_9 = L_1;
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
// System.Void MouseLook::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_Update_m18C0A114A78C19B888A9F74CA1FE5A837DF9E42A (MouseLook_t947FC47A9845723307BA11051D0530C21C4F0CD4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (axes == RotationAxes.MouseXAndY)
		int32_t L_0 = __this->___axes_4;
		if (L_0)
		{
			goto IL_0084;
		}
	}
	{
		// float rotationX = transform.localEulerAngles.y + Input.GetAxis("Mouse X") * sensitivityX;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_1, NULL);
		float L_3 = L_2.___y_3;
		float L_4;
		L_4 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		float L_5 = __this->___sensitivityX_5;
		V_0 = ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(L_4, L_5))));
		// rotationY += Input.GetAxis("Mouse Y") * sensitivityY;
		float L_6 = __this->___rotationY_11;
		float L_7;
		L_7 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		float L_8 = __this->___sensitivityY_6;
		__this->___rotationY_11 = ((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply(L_7, L_8))));
		// rotationY = Mathf.Clamp (rotationY, minimumY, maximumY);
		float L_9 = __this->___rotationY_11;
		float L_10 = __this->___minimumY_9;
		float L_11 = __this->___maximumY_10;
		float L_12;
		L_12 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_9, L_10, L_11, NULL);
		__this->___rotationY_11 = L_12;
		// transform.localEulerAngles = new Vector3(-rotationY, rotationX, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_14 = __this->___rotationY_11;
		float L_15 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_16), ((-L_14)), L_15, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_13, L_16, NULL);
		return;
	}

IL_0084:
	{
		// else if (axes == RotationAxes.MouseX)
		int32_t L_17 = __this->___axes_4;
		if ((!(((uint32_t)L_17) == ((uint32_t)1))))
		{
			goto IL_00b4;
		}
	}
	{
		// transform.Rotate(0, Input.GetAxis("Mouse X") * sensitivityX, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_19;
		L_19 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		float L_20 = __this->___sensitivityX_5;
		NullCheck(L_18);
		Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2(L_18, (0.0f), ((float)il2cpp_codegen_multiply(L_19, L_20)), (0.0f), NULL);
		return;
	}

IL_00b4:
	{
		// rotationY += Input.GetAxis("Mouse Y") * sensitivityY;
		float L_21 = __this->___rotationY_11;
		float L_22;
		L_22 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		float L_23 = __this->___sensitivityY_6;
		__this->___rotationY_11 = ((float)il2cpp_codegen_add(L_21, ((float)il2cpp_codegen_multiply(L_22, L_23))));
		// rotationY = Mathf.Clamp (rotationY, minimumY, maximumY);
		float L_24 = __this->___rotationY_11;
		float L_25 = __this->___minimumY_9;
		float L_26 = __this->___maximumY_10;
		float L_27;
		L_27 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_24, L_25, L_26, NULL);
		__this->___rotationY_11 = L_27;
		// transform.localEulerAngles = new Vector3(-rotationY, transform.localEulerAngles.y, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_29 = __this->___rotationY_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_30, NULL);
		float L_32 = L_31.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_33), ((-L_29)), L_32, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_28);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_28, L_33, NULL);
		// }
		return;
	}
}
// System.Void MouseLook::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_Start_m08FD16A47A96624540CD1B8EBA5FFAA1FD75E686 (MouseLook_t947FC47A9845723307BA11051D0530C21C4F0CD4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GetComponent<Rigidbody>())
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// GetComponent<Rigidbody>().freezeRotation = true;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2;
		L_2 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		NullCheck(L_2);
		Rigidbody_set_freezeRotation_m6D049F82E9133020C31EEFB35A179A56364325DC(L_2, (bool)1, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void MouseLook::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook__ctor_m4C8A79A3CB8D46D3E22E3AB1F645D41ED589312B (MouseLook_t947FC47A9845723307BA11051D0530C21C4F0CD4* __this, const RuntimeMethod* method) 
{
	{
		// public float sensitivityX = 15F;
		__this->___sensitivityX_5 = (15.0f);
		// public float sensitivityY = 15F;
		__this->___sensitivityY_6 = (15.0f);
		// public float minimumX = -360F;
		__this->___minimumX_7 = (-360.0f);
		// public float maximumX = 360F;
		__this->___maximumX_8 = (360.0f);
		// public float minimumY = -60F;
		__this->___minimumY_9 = (-60.0f);
		// public float maximumY = 60F;
		__this->___maximumY_10 = (60.0f);
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
// UnityEngine.Material BlurEffect::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* BlurEffect_get_material_m5658B78F7B7146829E2D21E8FCDE355446169646 (BlurEffect_t1A2D66B358F74F5BC28CF99F5F0028613AE27FA3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlurEffect_t1A2D66B358F74F5BC28CF99F5F0028613AE27FA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Material == null) {
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ((BlurEffect_t1A2D66B358F74F5BC28CF99F5F0028613AE27FA3_StaticFields*)il2cpp_codegen_static_fields_for(BlurEffect_t1A2D66B358F74F5BC28CF99F5F0028613AE27FA3_il2cpp_TypeInfo_var))->___m_Material_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// m_Material = new Material(blurShader);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2 = __this->___blurShader_6;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_3, L_2, NULL);
		((BlurEffect_t1A2D66B358F74F5BC28CF99F5F0028613AE27FA3_StaticFields*)il2cpp_codegen_static_fields_for(BlurEffect_t1A2D66B358F74F5BC28CF99F5F0028613AE27FA3_il2cpp_TypeInfo_var))->___m_Material_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((BlurEffect_t1A2D66B358F74F5BC28CF99F5F0028613AE27FA3_StaticFields*)il2cpp_codegen_static_fields_for(BlurEffect_t1A2D66B358F74F5BC28CF99F5F0028613AE27FA3_il2cpp_TypeInfo_var))->___m_Material_7), (void*)L_3);
		// m_Material.hideFlags = HideFlags.DontSave;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = ((BlurEffect_t1A2D66B358F74F5BC28CF99F5F0028613AE27FA3_StaticFields*)il2cpp_codegen_static_fields_for(BlurEffect_t1A2D66B358F74F5BC28CF99F5F0028613AE27FA3_il2cpp_TypeInfo_var))->___m_Material_7;
		NullCheck(L_4);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_4, ((int32_t)52), NULL);
	}

IL_0029:
	{
		// return m_Material;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = ((BlurEffect_t1A2D66B358F74F5BC28CF99F5F0028613AE27FA3_StaticFields*)il2cpp_codegen_static_fields_for(BlurEffect_t1A2D66B358F74F5BC28CF99F5F0028613AE27FA3_il2cpp_TypeInfo_var))->___m_Material_7;
		return L_5;
	}
}
// System.Void BlurEffect::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlurEffect_OnDisable_mB6F52259DF8B52A7A5E8541C00A1DC94DB95940C (BlurEffect_t1A2D66B358F74F5BC28CF99F5F0028613AE27FA3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlurEffect_t1A2D66B358F74F5BC28CF99F5F0028613AE27FA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( m_Material ) {
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ((BlurEffect_t1A2D66B358F74F5BC28CF99F5F0028613AE27FA3_StaticFields*)il2cpp_codegen_static_fields_for(BlurEffect_t1A2D66B358F74F5BC28CF99F5F0028613AE27FA3_il2cpp_TypeInfo_var))->___m_Material_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// DestroyImmediate( m_Material );
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = ((BlurEffect_t1A2D66B358F74F5BC28CF99F5F0028613AE27FA3_StaticFields*)il2cpp_codegen_static_fields_for(BlurEffect_t1A2D66B358F74F5BC28CF99F5F0028613AE27FA3_il2cpp_TypeInfo_var))->___m_Material_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_2, NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void BlurEffect::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlurEffect_Start_m13D87845135BD2415B8DF04F2878961428DB6B01 (BlurEffect_t1A2D66B358F74F5BC28CF99F5F0028613AE27FA3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!SystemInfo.supportsImageEffects) {
		bool L_0;
		L_0 = SystemInfo_get_supportsImageEffects_mA97A693C45A91780EE8E9F2802D6ED58841D52F0(NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_000f:
	{
		// if (!blurShader || !material.shader.isSupported) {
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_1 = __this->___blurShader_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = BlurEffect_get_material_m5658B78F7B7146829E2D21E8FCDE355446169646(__this, NULL);
		NullCheck(L_3);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4;
		L_4 = Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983(L_3, NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5(L_4, NULL);
		if (L_5)
		{
			goto IL_0036;
		}
	}

IL_002e:
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void BlurEffect::FourTapCone(UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlurEffect_FourTapCone_m87F5538210BF1C7D65D21C1FCD5720DA775264E5 (BlurEffect_t1A2D66B358F74F5BC28CF99F5F0028613AE27FA3* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, int32_t ___iteration2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float off = 0.5f + iteration*blurSpread;
		int32_t L_0 = ___iteration2;
		float L_1 = __this->___blurSpread_5;
		V_0 = ((float)il2cpp_codegen_add((0.5f), ((float)il2cpp_codegen_multiply(((float)L_0), L_1))));
		// Graphics.BlitMultiTap (source, dest, material,
		//     new Vector2(-off, -off),
		//     new Vector2(-off,  off),
		//     new Vector2( off,  off),
		//     new Vector2( off, -off)
		// );
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = ___dest1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4;
		L_4 = BlurEffect_get_material_m5658B78F7B7146829E2D21E8FCDE355446169646(__this, NULL);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_5 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)4);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_6 = L_5;
		float L_7 = V_0;
		float L_8 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_9), ((-L_7)), ((-L_8)), /*hidden argument*/NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_9);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_10 = L_6;
		float L_11 = V_0;
		float L_12 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_13), ((-L_11)), L_12, /*hidden argument*/NULL);
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_13);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_14 = L_10;
		float L_15 = V_0;
		float L_16 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_17), L_15, L_16, /*hidden argument*/NULL);
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_17);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_18 = L_14;
		float L_19 = V_0;
		float L_20 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_21), L_19, ((-L_20)), /*hidden argument*/NULL);
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_21);
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_BlitMultiTap_mA3E9614E120DC002F18C066404DD39FD4FDF0A22(L_2, L_3, L_4, L_18, NULL);
		// }
		return;
	}
}
// System.Void BlurEffect::DownSample4x(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlurEffect_DownSample4x_m76CFF1A9AEF6FD3AB81BEEF8EA572BBC74F7C325 (BlurEffect_t1A2D66B358F74F5BC28CF99F5F0028613AE27FA3* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float off = 1.0f;
		V_0 = (1.0f);
		// Graphics.BlitMultiTap (source, dest, material,
		//     new Vector2(-off, -off),
		//     new Vector2(-off,  off),
		//     new Vector2( off,  off),
		//     new Vector2( off, -off)
		// );
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1 = ___dest1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = BlurEffect_get_material_m5658B78F7B7146829E2D21E8FCDE355446169646(__this, NULL);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_3 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)4);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_4 = L_3;
		float L_5 = V_0;
		float L_6 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_7), ((-L_5)), ((-L_6)), /*hidden argument*/NULL);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_7);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_8 = L_4;
		float L_9 = V_0;
		float L_10 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_11), ((-L_9)), L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_11);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_12 = L_8;
		float L_13 = V_0;
		float L_14 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_15), L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_15);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_16 = L_12;
		float L_17 = V_0;
		float L_18 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_19), L_17, ((-L_18)), /*hidden argument*/NULL);
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_19);
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_BlitMultiTap_mA3E9614E120DC002F18C066404DD39FD4FDF0A22(L_0, L_1, L_2, L_16, NULL);
		// }
		return;
	}
}
// System.Void BlurEffect::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlurEffect_OnRenderImage_mE2B69E440F9D5946129E28E0F284BD79339E93B8 (BlurEffect_t1A2D66B358F74F5BC28CF99F5F0028613AE27FA3* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_2 = NULL;
	int32_t V_3 = 0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_4 = NULL;
	{
		// int rtW = source.width/4;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = ___source0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		V_0 = ((int32_t)(L_1/4));
		// int rtH = source.height/4;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___source0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		V_1 = ((int32_t)(L_3/4));
		// RenderTexture buffer = RenderTexture.GetTemporary(rtW, rtH, 0);
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6;
		L_6 = RenderTexture_GetTemporary_m5B16E03FC6142149BDC336285A5C18D5152CA2C3(L_4, L_5, 0, NULL);
		V_2 = L_6;
		// DownSample4x (source, buffer);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_7 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_8 = V_2;
		BlurEffect_DownSample4x_m76CFF1A9AEF6FD3AB81BEEF8EA572BBC74F7C325(__this, L_7, L_8, NULL);
		// for(int i = 0; i < iterations; i++)
		V_3 = 0;
		goto IL_0048;
	}

IL_0027:
	{
		// RenderTexture buffer2 = RenderTexture.GetTemporary(rtW, rtH, 0);
		int32_t L_9 = V_0;
		int32_t L_10 = V_1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_11;
		L_11 = RenderTexture_GetTemporary_m5B16E03FC6142149BDC336285A5C18D5152CA2C3(L_9, L_10, 0, NULL);
		V_4 = L_11;
		// FourTapCone (buffer, buffer2, i);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_12 = V_2;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_13 = V_4;
		int32_t L_14 = V_3;
		BlurEffect_FourTapCone_m87F5538210BF1C7D65D21C1FCD5720DA775264E5(__this, L_12, L_13, L_14, NULL);
		// RenderTexture.ReleaseTemporary(buffer);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_15 = V_2;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_15, NULL);
		// buffer = buffer2;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_16 = V_4;
		V_2 = L_16;
		// for(int i = 0; i < iterations; i++)
		int32_t L_17 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0048:
	{
		// for(int i = 0; i < iterations; i++)
		int32_t L_18 = V_3;
		int32_t L_19 = __this->___iterations_4;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0027;
		}
	}
	{
		// Graphics.Blit(buffer, destination);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_20 = V_2;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_21 = ___destination1;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_20, L_21, NULL);
		// RenderTexture.ReleaseTemporary(buffer);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_22 = V_2;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_22, NULL);
		// }
		return;
	}
}
// System.Void BlurEffect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlurEffect__ctor_m5D94293ED407309E275F1B626F2A8B6307FB3F71 (BlurEffect_t1A2D66B358F74F5BC28CF99F5F0028613AE27FA3* __this, const RuntimeMethod* method) 
{
	{
		// public int iterations = 3;
		__this->___iterations_4 = 3;
		// public float blurSpread = 0.6f;
		__this->___blurSpread_5 = (0.600000024f);
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
// System.Void ColorCorrectionEffect::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorCorrectionEffect_OnRenderImage_mDFA503D0C1CD04E3DBD56FF4F7D06E2FB3368805 (ColorCorrectionEffect_t5C2697033953266A3C614713593F5D0B8A8784C6* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB1D70662348A463C6FBE0BBDDCE84C00893D8D0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// material.SetTexture ("_RampTex", textureRamp);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0;
		L_0 = ImageEffectBase_get_material_mA782BFD19466071E286A9A98047EEA49D7DB5ABA(__this, NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_1 = __this->___textureRamp_6;
		NullCheck(L_0);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_0, _stringLiteralDB1D70662348A463C6FBE0BBDDCE84C00893D8D0, L_1, NULL);
		// Graphics.Blit (source, destination, material);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4;
		L_4 = ImageEffectBase_get_material_mA782BFD19466071E286A9A98047EEA49D7DB5ABA(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F(L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void ColorCorrectionEffect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorCorrectionEffect__ctor_m08F744ABC81EA4CBFF24D9A0DB903B0E347DB5C8 (ColorCorrectionEffect_t5C2697033953266A3C614713593F5D0B8A8784C6* __this, const RuntimeMethod* method) 
{
	{
		ImageEffectBase__ctor_m3D573416110EA614F77813109438B074A4B7D603(__this, NULL);
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
// UnityEngine.Material ContrastStretchEffect::get_materialLum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ContrastStretchEffect_get_materialLum_mBA064F7FC516A75EB5319DF7522B88D567EF6043 (ContrastStretchEffect_t0803E595E6F50A97670E42507936C98C9AD15CDC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( m_materialLum == null ) {
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___m_materialLum_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		// m_materialLum = new Material(shaderLum);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2 = __this->___shaderLum_9;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_3, L_2, NULL);
		__this->___m_materialLum_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_materialLum_10), (void*)L_3);
		// m_materialLum.hideFlags = HideFlags.HideAndDontSave;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___m_materialLum_10;
		NullCheck(L_4);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_4, ((int32_t)61), NULL);
	}

IL_002c:
	{
		// return m_materialLum;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___m_materialLum_10;
		return L_5;
	}
}
// UnityEngine.Material ContrastStretchEffect::get_materialReduce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ContrastStretchEffect_get_materialReduce_mD1A50EF91D76F001BEBECBEE84EF09FC790AF77F (ContrastStretchEffect_t0803E595E6F50A97670E42507936C98C9AD15CDC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( m_materialReduce == null ) {
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___m_materialReduce_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		// m_materialReduce = new Material(shaderReduce);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2 = __this->___shaderReduce_11;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_3, L_2, NULL);
		__this->___m_materialReduce_12 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_materialReduce_12), (void*)L_3);
		// m_materialReduce.hideFlags = HideFlags.HideAndDontSave;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___m_materialReduce_12;
		NullCheck(L_4);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_4, ((int32_t)61), NULL);
	}

IL_002c:
	{
		// return m_materialReduce;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___m_materialReduce_12;
		return L_5;
	}
}
// UnityEngine.Material ContrastStretchEffect::get_materialAdapt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ContrastStretchEffect_get_materialAdapt_m4CFDCA88F3F1929928149F35CB1F9CC8D4BEBFDF (ContrastStretchEffect_t0803E595E6F50A97670E42507936C98C9AD15CDC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( m_materialAdapt == null ) {
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___m_materialAdapt_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		// m_materialAdapt = new Material(shaderAdapt);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2 = __this->___shaderAdapt_13;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_3, L_2, NULL);
		__this->___m_materialAdapt_14 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_materialAdapt_14), (void*)L_3);
		// m_materialAdapt.hideFlags = HideFlags.HideAndDontSave;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___m_materialAdapt_14;
		NullCheck(L_4);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_4, ((int32_t)61), NULL);
	}

IL_002c:
	{
		// return m_materialAdapt;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___m_materialAdapt_14;
		return L_5;
	}
}
// UnityEngine.Material ContrastStretchEffect::get_materialApply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ContrastStretchEffect_get_materialApply_m48D0E43BFFF3407CD188AFA0B0106C6BF9557A88 (ContrastStretchEffect_t0803E595E6F50A97670E42507936C98C9AD15CDC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( m_materialApply == null ) {
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___m_materialApply_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		// m_materialApply = new Material(shaderApply);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2 = __this->___shaderApply_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_3, L_2, NULL);
		__this->___m_materialApply_16 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_materialApply_16), (void*)L_3);
		// m_materialApply.hideFlags = HideFlags.HideAndDontSave;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___m_materialApply_16;
		NullCheck(L_4);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_4, ((int32_t)61), NULL);
	}

IL_002c:
	{
		// return m_materialApply;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___m_materialApply_16;
		return L_5;
	}
}
// System.Void ContrastStretchEffect::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContrastStretchEffect_Start_mFCD01923C4934A6B98485F278AF83348AEB0CD83 (ContrastStretchEffect_t0803E595E6F50A97670E42507936C98C9AD15CDC* __this, const RuntimeMethod* method) 
{
	{
		// if (!SystemInfo.supportsImageEffects) {
		bool L_0;
		L_0 = SystemInfo_get_supportsImageEffects_mA97A693C45A91780EE8E9F2802D6ED58841D52F0(NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_000f:
	{
		// if (!shaderAdapt.isSupported || !shaderApply.isSupported || !shaderLum.isSupported || !shaderReduce.isSupported) {
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_1 = __this->___shaderAdapt_13;
		NullCheck(L_1);
		bool L_2;
		L_2 = Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5(L_1, NULL);
		if (!L_2)
		{
			goto IL_0043;
		}
	}
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3 = __this->___shaderApply_15;
		NullCheck(L_3);
		bool L_4;
		L_4 = Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5(L_3, NULL);
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_5 = __this->___shaderLum_9;
		NullCheck(L_5);
		bool L_6;
		L_6 = Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5(L_5, NULL);
		if (!L_6)
		{
			goto IL_0043;
		}
	}
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7 = __this->___shaderReduce_11;
		NullCheck(L_7);
		bool L_8;
		L_8 = Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5(L_7, NULL);
		if (L_8)
		{
			goto IL_004b;
		}
	}

IL_0043:
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void ContrastStretchEffect::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContrastStretchEffect_OnEnable_mC83C8E9B221DA6566923A3A939036A8CA049F387 (ContrastStretchEffect_t0803E595E6F50A97670E42507936C98C9AD15CDC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for( int i = 0; i < 2; ++i )
		V_0 = 0;
		goto IL_0036;
	}

IL_0004:
	{
		// if( !adaptRenderTex[i] ) {
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_0 = __this->___adaptRenderTex_7;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (L_4)
		{
			goto IL_0032;
		}
	}
	{
		// adaptRenderTex[i] = new RenderTexture(1, 1, 0);
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_5 = __this->___adaptRenderTex_7;
		int32_t L_6 = V_0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_7 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)il2cpp_codegen_object_new(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		RenderTexture__ctor_m45EACC89DDF408948889586516B3CA7AA8B73BFA(L_7, 1, 1, 0, NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)L_7);
		// adaptRenderTex[i].hideFlags = HideFlags.HideAndDontSave;
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_8 = __this->___adaptRenderTex_7;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_11, ((int32_t)61), NULL);
	}

IL_0032:
	{
		// for( int i = 0; i < 2; ++i )
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0036:
	{
		// for( int i = 0; i < 2; ++i )
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) < ((int32_t)2)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ContrastStretchEffect::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContrastStretchEffect_OnDisable_m38C0B00988B86CC8ACDC67D2CF12F9BAA4F3519E (ContrastStretchEffect_t0803E595E6F50A97670E42507936C98C9AD15CDC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for( int i = 0; i < 2; ++i )
		V_0 = 0;
		goto IL_001e;
	}

IL_0004:
	{
		// DestroyImmediate( adaptRenderTex[i] );
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_0 = __this->___adaptRenderTex_7;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_3, NULL);
		// adaptRenderTex[i] = null;
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_4 = __this->___adaptRenderTex_7;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, NULL);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL);
		// for( int i = 0; i < 2; ++i )
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001e:
	{
		// for( int i = 0; i < 2; ++i )
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) < ((int32_t)2)))
		{
			goto IL_0004;
		}
	}
	{
		// if( m_materialLum )
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = __this->___m_materialLum_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}
	{
		// DestroyImmediate( m_materialLum );
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = __this->___m_materialLum_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_10, NULL);
	}

IL_003a:
	{
		// if( m_materialReduce )
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = __this->___m_materialReduce_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_11, NULL);
		if (!L_12)
		{
			goto IL_0052;
		}
	}
	{
		// DestroyImmediate( m_materialReduce );
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___m_materialReduce_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_13, NULL);
	}

IL_0052:
	{
		// if( m_materialAdapt )
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14 = __this->___m_materialAdapt_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_14, NULL);
		if (!L_15)
		{
			goto IL_006a;
		}
	}
	{
		// DestroyImmediate( m_materialAdapt );
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_16 = __this->___m_materialAdapt_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_16, NULL);
	}

IL_006a:
	{
		// if( m_materialApply )
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___m_materialApply_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_17, NULL);
		if (!L_18)
		{
			goto IL_0082;
		}
	}
	{
		// DestroyImmediate( m_materialApply );
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___m_materialApply_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_19, NULL);
	}

IL_0082:
	{
		// }
		return;
	}
}
// System.Void ContrastStretchEffect::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContrastStretchEffect_OnRenderImage_m6577C41FE6FC925A8FED536955BD9673512EEB89 (ContrastStretchEffect_t0803E595E6F50A97670E42507936C98C9AD15CDC* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CE33800B899A10909A01B30E9E15694DCDDF90C);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_3 = NULL;
	{
		// RenderTexture rtTempSrc = RenderTexture.GetTemporary(source.width/TEMP_RATIO, source.height/TEMP_RATIO);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = ___source0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___source0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4;
		L_4 = RenderTexture_GetTemporary_m82379FD4C767A36F0677CAF4E68319EAE16ADF7F(((int32_t)(L_1/1)), ((int32_t)(L_3/1)), NULL);
		V_0 = L_4;
		// Graphics.Blit (source, rtTempSrc, materialLum);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7;
		L_7 = ContrastStretchEffect_get_materialLum_mBA064F7FC516A75EB5319DF7522B88D567EF6043(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F(L_5, L_6, L_7, NULL);
		goto IL_0060;
	}

IL_0025:
	{
		// int destW = rtTempSrc.width / REDUCE_RATIO;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_8);
		V_1 = ((int32_t)(L_9/2));
		// if( destW < FINAL_SIZE ) destW = FINAL_SIZE;
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) >= ((int32_t)1)))
		{
			goto IL_0034;
		}
	}
	{
		// if( destW < FINAL_SIZE ) destW = FINAL_SIZE;
		V_1 = 1;
	}

IL_0034:
	{
		// int destH = rtTempSrc.height / REDUCE_RATIO;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_11);
		V_2 = ((int32_t)(L_12/2));
		// if( destH < FINAL_SIZE ) destH = FINAL_SIZE;
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) >= ((int32_t)1)))
		{
			goto IL_0043;
		}
	}
	{
		// if( destH < FINAL_SIZE ) destH = FINAL_SIZE;
		V_2 = 1;
	}

IL_0043:
	{
		// RenderTexture rtTempDst = RenderTexture.GetTemporary(destW,destH);
		int32_t L_14 = V_1;
		int32_t L_15 = V_2;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_16;
		L_16 = RenderTexture_GetTemporary_m82379FD4C767A36F0677CAF4E68319EAE16ADF7F(L_14, L_15, NULL);
		V_3 = L_16;
		// Graphics.Blit (rtTempSrc, rtTempDst, materialReduce);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_17 = V_0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_18 = V_3;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19;
		L_19 = ContrastStretchEffect_get_materialReduce_mD1A50EF91D76F001BEBECBEE84EF09FC790AF77F(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F(L_17, L_18, L_19, NULL);
		// RenderTexture.ReleaseTemporary( rtTempSrc );
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_20 = V_0;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_20, NULL);
		// rtTempSrc = rtTempDst;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_21 = V_3;
		V_0 = L_21;
	}

IL_0060:
	{
		// while( rtTempSrc.width > FINAL_SIZE || rtTempSrc.height > FINAL_SIZE )
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_22);
		if ((((int32_t)L_23) > ((int32_t)1)))
		{
			goto IL_0025;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_24 = V_0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_24);
		if ((((int32_t)L_25) > ((int32_t)1)))
		{
			goto IL_0025;
		}
	}
	{
		// CalculateAdaptation( rtTempSrc );
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_26 = V_0;
		ContrastStretchEffect_CalculateAdaptation_mC1EAD9E208D1793F28553C443A4429426B43C88E(__this, L_26, NULL);
		// materialApply.SetTexture("_AdaptTex", adaptRenderTex[curAdaptIndex] );
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27;
		L_27 = ContrastStretchEffect_get_materialApply_m48D0E43BFFF3407CD188AFA0B0106C6BF9557A88(__this, NULL);
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_28 = __this->___adaptRenderTex_7;
		int32_t L_29 = __this->___curAdaptIndex_8;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_27);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_27, _stringLiteral8CE33800B899A10909A01B30E9E15694DCDDF90C, L_31, NULL);
		// Graphics.Blit (source, destination, materialApply);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_32 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_33 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_34;
		L_34 = ContrastStretchEffect_get_materialApply_m48D0E43BFFF3407CD188AFA0B0106C6BF9557A88(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F(L_32, L_33, L_34, NULL);
		// RenderTexture.ReleaseTemporary( rtTempSrc );
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_35 = V_0;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_35, NULL);
		// }
		return;
	}
}
// System.Void ContrastStretchEffect::CalculateAdaptation(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContrastStretchEffect_CalculateAdaptation_mC1EAD9E208D1793F28553C443A4429426B43C88E (ContrastStretchEffect_t0803E595E6F50A97670E42507936C98C9AD15CDC* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___curTexture0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CCBC596DB1B94C94A9284599019AC779586C8EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96886DED2ECF1EA2B574F8C4F68D1873E78AFB44);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		// int prevAdaptIndex = curAdaptIndex;
		int32_t L_0 = __this->___curAdaptIndex_8;
		V_0 = L_0;
		// curAdaptIndex = (curAdaptIndex+1) % 2;
		int32_t L_1 = __this->___curAdaptIndex_8;
		__this->___curAdaptIndex_8 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_1, 1))%2));
		// float adaptLerp = 1.0f - Mathf.Pow( 1.0f - adaptationSpeed, 30.0f * Time.deltaTime );
		float L_2 = __this->___adaptationSpeed_4;
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_4;
		L_4 = powf(((float)il2cpp_codegen_subtract((1.0f), L_2)), ((float)il2cpp_codegen_multiply((30.0f), L_3)));
		V_1 = ((float)il2cpp_codegen_subtract((1.0f), L_4));
		// adaptLerp = Mathf.Clamp( adaptLerp, kMinAdaptLerp, 1 );
		float L_5 = V_1;
		float L_6;
		L_6 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_5, (0.00999999978f), (1.0f), NULL);
		V_1 = L_6;
		// materialAdapt.SetTexture("_CurTex", curTexture );
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7;
		L_7 = ContrastStretchEffect_get_materialAdapt_m4CFDCA88F3F1929928149F35CB1F9CC8D4BEBFDF(__this, NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_8 = ___curTexture0;
		NullCheck(L_7);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_7, _stringLiteral1CCBC596DB1B94C94A9284599019AC779586C8EB, L_8, NULL);
		// materialAdapt.SetVector("_AdaptParams", new Vector4(
		//     adaptLerp,
		//     limitMinimum,
		//     limitMaximum,
		//     0.0f
		// ));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = ContrastStretchEffect_get_materialAdapt_m4CFDCA88F3F1929928149F35CB1F9CC8D4BEBFDF(__this, NULL);
		float L_10 = V_1;
		float L_11 = __this->___limitMinimum_5;
		float L_12 = __this->___limitMaximum_6;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_13), L_10, L_11, L_12, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_9, _stringLiteral96886DED2ECF1EA2B574F8C4F68D1873E78AFB44, L_13, NULL);
		// Graphics.SetRenderTarget(adaptRenderTex[curAdaptIndex]);
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_14 = __this->___adaptRenderTex_7;
		int32_t L_15 = __this->___curAdaptIndex_8;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_SetRenderTarget_m995C0F14B97C5BF46CCF2E7EF410C1CC05C46409(L_17, NULL);
		// GL.Clear(false, true, Color.black);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18;
		L_18 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		GL_Clear_mA172E771FC32B516DB826F537832307C3A16BE09((bool)0, (bool)1, L_18, NULL);
		// Graphics.Blit (
		//     adaptRenderTex[prevAdaptIndex],
		//     adaptRenderTex[curAdaptIndex],
		//     materialAdapt);
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_19 = __this->___adaptRenderTex_7;
		int32_t L_20 = V_0;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_23 = __this->___adaptRenderTex_7;
		int32_t L_24 = __this->___curAdaptIndex_8;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27;
		L_27 = ContrastStretchEffect_get_materialAdapt_m4CFDCA88F3F1929928149F35CB1F9CC8D4BEBFDF(__this, NULL);
		Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F(L_22, L_26, L_27, NULL);
		// }
		return;
	}
}
// System.Void ContrastStretchEffect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContrastStretchEffect__ctor_mF1DF386D388857DF88D5C4CA27468370BCB499B1 (ContrastStretchEffect_t0803E595E6F50A97670E42507936C98C9AD15CDC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float adaptationSpeed = 0.02f;
		__this->___adaptationSpeed_4 = (0.0199999996f);
		// public float limitMinimum = 0.2f;
		__this->___limitMinimum_5 = (0.200000003f);
		// public float limitMaximum = 0.6f;
		__this->___limitMaximum_6 = (0.600000024f);
		// private RenderTexture[] adaptRenderTex = new RenderTexture[2];
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_0 = (RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6*)(RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6*)SZArrayNew(RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___adaptRenderTex_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adaptRenderTex_7), (void*)L_0);
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
// UnityEngine.Material GlowEffect::get_compositeMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GlowEffect_get_compositeMaterial_mE639F752517B8D8D999C8C138D30071F3A0AE412 (GlowEffect_t54087E6A2C4CE3596E972E6368A66FBDFDCE16E9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_CompositeMaterial == null) {
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___m_CompositeMaterial_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		// m_CompositeMaterial = new Material(compositeShader);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2 = __this->___compositeShader_8;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_3, L_2, NULL);
		__this->___m_CompositeMaterial_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CompositeMaterial_9), (void*)L_3);
		// m_CompositeMaterial.hideFlags = HideFlags.HideAndDontSave;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___m_CompositeMaterial_9;
		NullCheck(L_4);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_4, ((int32_t)61), NULL);
	}

IL_002c:
	{
		// return m_CompositeMaterial;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___m_CompositeMaterial_9;
		return L_5;
	}
}
// UnityEngine.Material GlowEffect::get_blurMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GlowEffect_get_blurMaterial_m319A5B8FB8D7816DDADB73531D9E4473311BEBFA (GlowEffect_t54087E6A2C4CE3596E972E6368A66FBDFDCE16E9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_BlurMaterial == null) {
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___m_BlurMaterial_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		// m_BlurMaterial = new Material(blurShader);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2 = __this->___blurShader_10;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_3, L_2, NULL);
		__this->___m_BlurMaterial_11 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_BlurMaterial_11), (void*)L_3);
		// m_BlurMaterial.hideFlags = HideFlags.HideAndDontSave;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___m_BlurMaterial_11;
		NullCheck(L_4);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_4, ((int32_t)61), NULL);
	}

IL_002c:
	{
		// return m_BlurMaterial;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___m_BlurMaterial_11;
		return L_5;
	}
}
// UnityEngine.Material GlowEffect::get_downsampleMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GlowEffect_get_downsampleMaterial_mDCDB3CA28BDCBA053474085B837F59C951C3AAA6 (GlowEffect_t54087E6A2C4CE3596E972E6368A66FBDFDCE16E9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_DownsampleMaterial == null) {
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___m_DownsampleMaterial_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		// m_DownsampleMaterial = new Material( downsampleShader );
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2 = __this->___downsampleShader_12;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_3, L_2, NULL);
		__this->___m_DownsampleMaterial_13 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DownsampleMaterial_13), (void*)L_3);
		// m_DownsampleMaterial.hideFlags = HideFlags.HideAndDontSave;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___m_DownsampleMaterial_13;
		NullCheck(L_4);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_4, ((int32_t)61), NULL);
	}

IL_002c:
	{
		// return m_DownsampleMaterial;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___m_DownsampleMaterial_13;
		return L_5;
	}
}
// System.Void GlowEffect::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlowEffect_OnDisable_m5CC59D0F054BC6B1E920E67F645D09CE1538D34C (GlowEffect_t54087E6A2C4CE3596E972E6368A66FBDFDCE16E9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( m_CompositeMaterial ) {
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___m_CompositeMaterial_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// DestroyImmediate( m_CompositeMaterial );
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___m_CompositeMaterial_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_2, NULL);
	}

IL_0018:
	{
		// if( m_BlurMaterial ) {
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->___m_BlurMaterial_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		// DestroyImmediate( m_BlurMaterial );
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___m_BlurMaterial_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_5, NULL);
	}

IL_0030:
	{
		// if( m_DownsampleMaterial )
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = __this->___m_DownsampleMaterial_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_6, NULL);
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		// DestroyImmediate( m_DownsampleMaterial );
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = __this->___m_DownsampleMaterial_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_8, NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void GlowEffect::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlowEffect_Start_mE93B04D976FCAE27E6C991EAA14C223228CF6B76 (GlowEffect_t54087E6A2C4CE3596E972E6368A66FBDFDCE16E9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EC053E608B28709E3A286E66E2B010B32383382);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!SystemInfo.supportsImageEffects)
		bool L_0;
		L_0 = SystemInfo_get_supportsImageEffects_mA97A693C45A91780EE8E9F2802D6ED58841D52F0(NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_000f:
	{
		// if( downsampleShader == null )
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_1 = __this->___downsampleShader_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		// Debug.Log ("No downsample shader assigned! Disabling glow.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral8EC053E608B28709E3A286E66E2B010B32383382, NULL);
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		return;
	}

IL_002f:
	{
		// if( !blurMaterial.shader.isSupported )
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = GlowEffect_get_blurMaterial_m319A5B8FB8D7816DDADB73531D9E4473311BEBFA(__this, NULL);
		NullCheck(L_3);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4;
		L_4 = Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983(L_3, NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5(L_4, NULL);
		if (L_5)
		{
			goto IL_0048;
		}
	}
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
	}

IL_0048:
	{
		// if( !compositeMaterial.shader.isSupported )
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = GlowEffect_get_compositeMaterial_mE639F752517B8D8D999C8C138D30071F3A0AE412(__this, NULL);
		NullCheck(L_6);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983(L_6, NULL);
		NullCheck(L_7);
		bool L_8;
		L_8 = Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5(L_7, NULL);
		if (L_8)
		{
			goto IL_0061;
		}
	}
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
	}

IL_0061:
	{
		// if( !downsampleMaterial.shader.isSupported )
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = GlowEffect_get_downsampleMaterial_mDCDB3CA28BDCBA053474085B837F59C951C3AAA6(__this, NULL);
		NullCheck(L_9);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_10;
		L_10 = Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983(L_9, NULL);
		NullCheck(L_10);
		bool L_11;
		L_11 = Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5(L_10, NULL);
		if (L_11)
		{
			goto IL_007a;
		}
	}
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
	}

IL_007a:
	{
		// }
		return;
	}
}
// System.Void GlowEffect::FourTapCone(UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlowEffect_FourTapCone_m4900338821E8D776C577FB380F1474DE8CFB4ABC (GlowEffect_t54087E6A2C4CE3596E972E6368A66FBDFDCE16E9* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, int32_t ___iteration2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float off = 0.5f + iteration*blurSpread;
		int32_t L_0 = ___iteration2;
		float L_1 = __this->___blurSpread_6;
		V_0 = ((float)il2cpp_codegen_add((0.5f), ((float)il2cpp_codegen_multiply(((float)L_0), L_1))));
		// Graphics.BlitMultiTap (source, dest, blurMaterial,
		//     new Vector2( off, off),
		//     new Vector2(-off, off),
		//     new Vector2( off,-off),
		//     new Vector2(-off,-off)
		// );
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = ___dest1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4;
		L_4 = GlowEffect_get_blurMaterial_m319A5B8FB8D7816DDADB73531D9E4473311BEBFA(__this, NULL);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_5 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)4);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_6 = L_5;
		float L_7 = V_0;
		float L_8 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_9), L_7, L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_9);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_10 = L_6;
		float L_11 = V_0;
		float L_12 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_13), ((-L_11)), L_12, /*hidden argument*/NULL);
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_13);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_14 = L_10;
		float L_15 = V_0;
		float L_16 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_17), L_15, ((-L_16)), /*hidden argument*/NULL);
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_17);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_18 = L_14;
		float L_19 = V_0;
		float L_20 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_21), ((-L_19)), ((-L_20)), /*hidden argument*/NULL);
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_21);
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_BlitMultiTap_mA3E9614E120DC002F18C066404DD39FD4FDF0A22(L_2, L_3, L_4, L_18, NULL);
		// }
		return;
	}
}
// System.Void GlowEffect::DownSample4x(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlowEffect_DownSample4x_mE08D3C5703AE3CD9DFD6EBD75482E8EFB9FFE506 (GlowEffect_t54087E6A2C4CE3596E972E6368A66FBDFDCE16E9* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// downsampleMaterial.color = new Color( glowTint.r, glowTint.g, glowTint.b, glowTint.a/4.0f );
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0;
		L_0 = GlowEffect_get_downsampleMaterial_mDCDB3CA28BDCBA053474085B837F59C951C3AAA6(__this, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_1 = (&__this->___glowTint_7);
		float L_2 = L_1->___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_3 = (&__this->___glowTint_7);
		float L_4 = L_3->___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_5 = (&__this->___glowTint_7);
		float L_6 = L_5->___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_7 = (&__this->___glowTint_7);
		float L_8 = L_7->___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		memset((&L_9), 0, sizeof(L_9));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_9), L_2, L_4, L_6, ((float)(L_8/(4.0f))), /*hidden argument*/NULL);
		NullCheck(L_0);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_0, L_9, NULL);
		// Graphics.Blit (source, dest, downsampleMaterial);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_10 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_11 = ___dest1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12;
		L_12 = GlowEffect_get_downsampleMaterial_mDCDB3CA28BDCBA053474085B837F59C951C3AAA6(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F(L_10, L_11, L_12, NULL);
		// }
		return;
	}
}
// System.Void GlowEffect::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlowEffect_OnRenderImage_m8CA1022D87F672220EF3ACBBAA2C40F1D263CCB0 (GlowEffect_t54087E6A2C4CE3596E972E6368A66FBDFDCE16E9* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_2 = NULL;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_5 = NULL;
	{
		// glowIntensity = Mathf.Clamp( glowIntensity, 0.0f, 10.0f );
		float L_0 = __this->___glowIntensity_4;
		float L_1;
		L_1 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_0, (0.0f), (10.0f), NULL);
		__this->___glowIntensity_4 = L_1;
		// blurIterations = Mathf.Clamp( blurIterations, 0, 30 );
		int32_t L_2 = __this->___blurIterations_5;
		int32_t L_3;
		L_3 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_2, 0, ((int32_t)30), NULL);
		__this->___blurIterations_5 = L_3;
		// blurSpread = Mathf.Clamp( blurSpread, 0.5f, 1.0f );
		float L_4 = __this->___blurSpread_6;
		float L_5;
		L_5 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_4, (0.5f), (1.0f), NULL);
		__this->___blurSpread_6 = L_5;
		// int rtW = source.width/4;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6 = ___source0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_6);
		V_0 = ((int32_t)(L_7/4));
		// int rtH = source.height/4;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_8 = ___source0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_8);
		V_1 = ((int32_t)(L_9/4));
		// RenderTexture buffer = RenderTexture.GetTemporary(rtW, rtH, 0);
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_12;
		L_12 = RenderTexture_GetTemporary_m5B16E03FC6142149BDC336285A5C18D5152CA2C3(L_10, L_11, 0, NULL);
		V_2 = L_12;
		// DownSample4x (source, buffer);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_13 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_14 = V_2;
		GlowEffect_DownSample4x_mE08D3C5703AE3CD9DFD6EBD75482E8EFB9FFE506(__this, L_13, L_14, NULL);
		// float extraBlurBoost = Mathf.Clamp01( (glowIntensity - 1.0f) / 4.0f );
		float L_15 = __this->___glowIntensity_4;
		float L_16;
		L_16 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)(((float)il2cpp_codegen_subtract(L_15, (1.0f)))/(4.0f))), NULL);
		V_3 = L_16;
		// blurMaterial.color = new Color( 1F, 1F, 1F, 0.25f + extraBlurBoost );
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17;
		L_17 = GlowEffect_get_blurMaterial_m319A5B8FB8D7816DDADB73531D9E4473311BEBFA(__this, NULL);
		float L_18 = V_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19;
		memset((&L_19), 0, sizeof(L_19));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_19), (1.0f), (1.0f), (1.0f), ((float)il2cpp_codegen_add((0.25f), L_18)), /*hidden argument*/NULL);
		NullCheck(L_17);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_17, L_19, NULL);
		// for(int i = 0; i < blurIterations; i++)
		V_4 = 0;
		goto IL_00d4;
	}

IL_00b0:
	{
		// RenderTexture buffer2 = RenderTexture.GetTemporary(rtW, rtH, 0);
		int32_t L_20 = V_0;
		int32_t L_21 = V_1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_22;
		L_22 = RenderTexture_GetTemporary_m5B16E03FC6142149BDC336285A5C18D5152CA2C3(L_20, L_21, 0, NULL);
		V_5 = L_22;
		// FourTapCone (buffer, buffer2, i);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_23 = V_2;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_24 = V_5;
		int32_t L_25 = V_4;
		GlowEffect_FourTapCone_m4900338821E8D776C577FB380F1474DE8CFB4ABC(__this, L_23, L_24, L_25, NULL);
		// RenderTexture.ReleaseTemporary(buffer);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_26 = V_2;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_26, NULL);
		// buffer = buffer2;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_27 = V_5;
		V_2 = L_27;
		// for(int i = 0; i < blurIterations; i++)
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00d4:
	{
		// for(int i = 0; i < blurIterations; i++)
		int32_t L_29 = V_4;
		int32_t L_30 = __this->___blurIterations_5;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_00b0;
		}
	}
	{
		// Graphics.Blit(source,destination);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_31 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_32 = ___destination1;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_31, L_32, NULL);
		// BlitGlow(buffer, destination);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_33 = V_2;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_34 = ___destination1;
		GlowEffect_BlitGlow_mB7C6379A46815F058FF822002E19B64470384933(__this, L_33, L_34, NULL);
		// RenderTexture.ReleaseTemporary(buffer);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_35 = V_2;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_35, NULL);
		// }
		return;
	}
}
// System.Void GlowEffect::BlitGlow(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlowEffect_BlitGlow_mB7C6379A46815F058FF822002E19B64470384933 (GlowEffect_t54087E6A2C4CE3596E972E6368A66FBDFDCE16E9* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// compositeMaterial.color = new Color(1F, 1F, 1F, Mathf.Clamp01(glowIntensity));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0;
		L_0 = GlowEffect_get_compositeMaterial_mE639F752517B8D8D999C8C138D30071F3A0AE412(__this, NULL);
		float L_1 = __this->___glowIntensity_4;
		float L_2;
		L_2 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_1, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		memset((&L_3), 0, sizeof(L_3));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_3), (1.0f), (1.0f), (1.0f), L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_0, L_3, NULL);
		// Graphics.Blit (source, dest, compositeMaterial);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = ___dest1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = GlowEffect_get_compositeMaterial_mE639F752517B8D8D999C8C138D30071F3A0AE412(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F(L_4, L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void GlowEffect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlowEffect__ctor_m1B8A1C2471BB1449A2F731903DD9051D0061C10E (GlowEffect_t54087E6A2C4CE3596E972E6368A66FBDFDCE16E9* __this, const RuntimeMethod* method) 
{
	{
		// public float glowIntensity = 1.5f;
		__this->___glowIntensity_4 = (1.5f);
		// public int blurIterations = 3;
		__this->___blurIterations_5 = 3;
		// public float blurSpread = 0.7f;
		__this->___blurSpread_6 = (0.699999988f);
		// public Color glowTint = new Color(1,1,1,0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		__this->___glowTint_7 = L_0;
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
// System.Void GrayscaleEffect::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrayscaleEffect_OnRenderImage_mDC2B267C23A53C91E3DEA816F8EB06CD3171684C (GrayscaleEffect_t42D1E0CC458CE044D547218045905368F22E442E* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D6742768888FC128CDBD9DDD8531E7CA8A03C7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB1D70662348A463C6FBE0BBDDCE84C00893D8D0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// material.SetTexture("_RampTex", textureRamp);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0;
		L_0 = ImageEffectBase_get_material_mA782BFD19466071E286A9A98047EEA49D7DB5ABA(__this, NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_1 = __this->___textureRamp_6;
		NullCheck(L_0);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_0, _stringLiteralDB1D70662348A463C6FBE0BBDDCE84C00893D8D0, L_1, NULL);
		// material.SetFloat("_RampOffset", rampOffset);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = ImageEffectBase_get_material_mA782BFD19466071E286A9A98047EEA49D7DB5ABA(__this, NULL);
		float L_3 = __this->___rampOffset_7;
		NullCheck(L_2);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_2, _stringLiteral2D6742768888FC128CDBD9DDD8531E7CA8A03C7A, L_3, NULL);
		// Graphics.Blit (source, destination, material);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = ImageEffectBase_get_material_mA782BFD19466071E286A9A98047EEA49D7DB5ABA(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F(L_4, L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void GrayscaleEffect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrayscaleEffect__ctor_m20CC0166CD32A801356EEAA69BC5EC88279A270C (GrayscaleEffect_t42D1E0CC458CE044D547218045905368F22E442E* __this, const RuntimeMethod* method) 
{
	{
		ImageEffectBase__ctor_m3D573416110EA614F77813109438B074A4B7D603(__this, NULL);
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
// System.Void ImageEffectBase::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageEffectBase_Start_m0AF61658C63ABC64E649C81C3732A409C2BE09B1 (ImageEffectBase_tFB5837BB6BB7BCDF01CD89A4BA2B10341AAC355E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!SystemInfo.supportsImageEffects) {
		bool L_0;
		L_0 = SystemInfo_get_supportsImageEffects_mA97A693C45A91780EE8E9F2802D6ED58841D52F0(NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_000f:
	{
		// if (!shader || !shader.isSupported)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_1 = __this->___shader_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3 = __this->___shader_4;
		NullCheck(L_3);
		bool L_4;
		L_4 = Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5(L_3, NULL);
		if (L_4)
		{
			goto IL_0030;
		}
	}

IL_0029:
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// UnityEngine.Material ImageEffectBase::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ImageEffectBase_get_material_mA782BFD19466071E286A9A98047EEA49D7DB5ABA (ImageEffectBase_tFB5837BB6BB7BCDF01CD89A4BA2B10341AAC355E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Material == null) {
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___m_Material_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		// m_Material = new Material (shader);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2 = __this->___shader_4;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_3, L_2, NULL);
		__this->___m_Material_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Material_5), (void*)L_3);
		// m_Material.hideFlags = HideFlags.HideAndDontSave;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___m_Material_5;
		NullCheck(L_4);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_4, ((int32_t)61), NULL);
	}

IL_002c:
	{
		// return m_Material;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___m_Material_5;
		return L_5;
	}
}
// System.Void ImageEffectBase::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageEffectBase_OnDisable_m72F795D05E7055EFD7A4EFCE6E095CDEB506CB73 (ImageEffectBase_tFB5837BB6BB7BCDF01CD89A4BA2B10341AAC355E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( m_Material ) {
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___m_Material_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// DestroyImmediate( m_Material );
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___m_Material_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_2, NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void ImageEffectBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageEffectBase__ctor_m3D573416110EA614F77813109438B074A4B7D603 (ImageEffectBase_tFB5837BB6BB7BCDF01CD89A4BA2B10341AAC355E* __this, const RuntimeMethod* method) 
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
// System.Void ImageEffects::RenderDistortion(UnityEngine.Material,UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Single,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageEffects_RenderDistortion_mF894CE1D06BBEAFDBA35CFA6F7954DC1E279CEF7 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source1, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination2, float ___angle3, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___center4, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radius5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralACA83AF7A62BB74E1867497F20E27DDA4AA09286);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDBFD1DFE8755B66ED7213250192F581C393B4A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE30BDB66B244803E7FD5808BE4D10CBB43C3D57F);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// bool invertY = source.texelSize.y < 0.0f;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = ___source1;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Texture_get_texelSize_m05CA60DE53EF7CD5D2CBFA68B69B764E4D463359(L_0, NULL);
		float L_2 = L_1.___y_1;
		// if (invertY)
		if (!((((float)L_2) < ((float)(0.0f)))? 1 : 0))
		{
			goto IL_002c;
		}
	}
	{
		// center.y = 1.0f - center.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___center4;
		float L_4 = L_3.___y_1;
		(&___center4)->___y_1 = ((float)il2cpp_codegen_subtract((1.0f), L_4));
		// angle = -angle;
		float L_5 = ___angle3;
		___angle3 = ((-L_5));
	}

IL_002c:
	{
		// Matrix4x4 rotationMatrix = Matrix4x4.TRS(Vector3.zero, Quaternion.Euler(0, 0, angle), Vector3.one);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		float L_7 = ___angle3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_10;
		L_10 = Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3(L_6, L_8, L_9, NULL);
		V_0 = L_10;
		// material.SetMatrix("_RotationMatrix", rotationMatrix);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = ___material0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12 = V_0;
		NullCheck(L_11);
		Material_SetMatrix_m1F4E20583C898A1C1DBA256868E1F98C539F13FB(L_11, _stringLiteralDDBFD1DFE8755B66ED7213250192F581C393B4A2, L_12, NULL);
		// material.SetVector("_CenterRadius", new Vector4(center.x, center.y, radius.x, radius.y));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = ___material0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = ___center4;
		float L_15 = L_14.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = ___center4;
		float L_17 = L_16.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = ___radius5;
		float L_19 = L_18.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = ___radius5;
		float L_21 = L_20.___y_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_22), L_15, L_17, L_19, L_21, /*hidden argument*/NULL);
		NullCheck(L_13);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_13, _stringLiteralE30BDB66B244803E7FD5808BE4D10CBB43C3D57F, L_22, NULL);
		// material.SetFloat("_Angle", angle * Mathf.Deg2Rad);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = ___material0;
		float L_24 = ___angle3;
		NullCheck(L_23);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_23, _stringLiteralACA83AF7A62BB74E1867497F20E27DDA4AA09286, ((float)il2cpp_codegen_multiply(L_24, (0.0174532924f))), NULL);
		// Graphics.Blit(source, destination, material);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_25 = ___source1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_26 = ___destination2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = ___material0;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F(L_25, L_26, L_27, NULL);
		// }
		return;
	}
}
// System.Void ImageEffects::Blit(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageEffects_Blit_mF4629546E2BCF7973AB2713F77D1055A0F55D516 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Graphics.Blit(source, dest);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1 = ___dest1;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ImageEffects::BlitWithMaterial(UnityEngine.Material,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageEffects_BlitWithMaterial_mEDF794E50B13CE363FA8E6E040BF6791A5A9B642 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source1, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Graphics.Blit(source, dest, material);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = ___source1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1 = ___dest2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = ___material0;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void ImageEffects::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageEffects__ctor_mA6D224C706EF8F72239375631A8EBFE702F4F206 (ImageEffects_tEBF304591B325AACF94D57ABC55143D9278F2FC3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void MotionBlur::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotionBlur_Start_m371322B9C6C25C7F26DE80C7076AE808AF8CD38C (MotionBlur_t7A1D334084EFC1584C1976626CC7B2CF1EC3B853* __this, const RuntimeMethod* method) 
{
	{
		// if(!SystemInfo.supportsRenderTextures)
		bool L_0;
		L_0 = SystemInfo_get_supportsRenderTextures_mAA77A17E5351772E7FE0E5A295448BA64131F105(NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_000f:
	{
		// base.Start();
		ImageEffectBase_Start_m0AF61658C63ABC64E649C81C3732A409C2BE09B1(__this, NULL);
		// }
		return;
	}
}
// System.Void MotionBlur::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotionBlur_OnDisable_mC3D4E26831AF28C1A8499B6A15FED2B79D9B4D91 (MotionBlur_t7A1D334084EFC1584C1976626CC7B2CF1EC3B853* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnDisable();
		ImageEffectBase_OnDisable_m72F795D05E7055EFD7A4EFCE6E095CDEB506CB73(__this, NULL);
		// DestroyImmediate(accumTexture);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = __this->___accumTexture_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_0, NULL);
		// }
		return;
	}
}
// System.Void MotionBlur::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotionBlur_OnRenderImage_mF89A9BBA72E7EC0A581CD128350694F7BF0B2EB9 (MotionBlur_t7A1D334084EFC1584C1976626CC7B2CF1EC3B853* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral231CACC883018E95B1E6DF7B0EEE86C17170F15C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_0 = NULL;
	{
		// if (accumTexture == null || accumTexture.width != source.width || accumTexture.height != source.height)
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = __this->___accumTexture_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0034;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = __this->___accumTexture_8;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4 = ___source0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_4);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6 = __this->___accumTexture_8;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_6);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_8 = ___source0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_8);
		if ((((int32_t)L_7) == ((int32_t)L_9)))
		{
			goto IL_0070;
		}
	}

IL_0034:
	{
		// DestroyImmediate(accumTexture);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_10 = __this->___accumTexture_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_10, NULL);
		// accumTexture = new RenderTexture(source.width, source.height, 0);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_11 = ___source0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_11);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_13 = ___source0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_13);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_15 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)il2cpp_codegen_object_new(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		RenderTexture__ctor_m45EACC89DDF408948889586516B3CA7AA8B73BFA(L_15, L_12, L_14, 0, NULL);
		__this->___accumTexture_8 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___accumTexture_8), (void*)L_15);
		// accumTexture.hideFlags = HideFlags.HideAndDontSave;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_16 = __this->___accumTexture_8;
		NullCheck(L_16);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_16, ((int32_t)61), NULL);
		// Graphics.Blit( source, accumTexture );
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_17 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_18 = __this->___accumTexture_8;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_17, L_18, NULL);
	}

IL_0070:
	{
		// if (extraBlur)
		bool L_19 = __this->___extraBlur_7;
		if (!L_19)
		{
			goto IL_00b8;
		}
	}
	{
		// RenderTexture blurbuffer = RenderTexture.GetTemporary(source.width/4, source.height/4, 0);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_20 = ___source0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_20);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_22 = ___source0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_22);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_24;
		L_24 = RenderTexture_GetTemporary_m5B16E03FC6142149BDC336285A5C18D5152CA2C3(((int32_t)(L_21/4)), ((int32_t)(L_23/4)), 0, NULL);
		V_0 = L_24;
		// accumTexture.MarkRestoreExpected();
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_25 = __this->___accumTexture_8;
		NullCheck(L_25);
		RenderTexture_MarkRestoreExpected_m185BFFD02FE7149590A252527B18F25A7D4AD830(L_25, NULL);
		// Graphics.Blit(accumTexture, blurbuffer);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_26 = __this->___accumTexture_8;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_27 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_26, L_27, NULL);
		// Graphics.Blit(blurbuffer,accumTexture);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_28 = V_0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_29 = __this->___accumTexture_8;
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_28, L_29, NULL);
		// RenderTexture.ReleaseTemporary(blurbuffer);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_30 = V_0;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_30, NULL);
	}

IL_00b8:
	{
		// blurAmount = Mathf.Clamp( blurAmount, 0.0f, 0.92f );
		float L_31 = __this->___blurAmount_6;
		float L_32;
		L_32 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_31, (0.0f), (0.920000017f), NULL);
		__this->___blurAmount_6 = L_32;
		// material.SetTexture("_MainTex", accumTexture);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_33;
		L_33 = ImageEffectBase_get_material_mA782BFD19466071E286A9A98047EEA49D7DB5ABA(__this, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_34 = __this->___accumTexture_8;
		NullCheck(L_33);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_33, _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, L_34, NULL);
		// material.SetFloat("_AccumOrig", 1.0F-blurAmount);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35;
		L_35 = ImageEffectBase_get_material_mA782BFD19466071E286A9A98047EEA49D7DB5ABA(__this, NULL);
		float L_36 = __this->___blurAmount_6;
		NullCheck(L_35);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_35, _stringLiteral231CACC883018E95B1E6DF7B0EEE86C17170F15C, ((float)il2cpp_codegen_subtract((1.0f), L_36)), NULL);
		// accumTexture.MarkRestoreExpected();
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_37 = __this->___accumTexture_8;
		NullCheck(L_37);
		RenderTexture_MarkRestoreExpected_m185BFFD02FE7149590A252527B18F25A7D4AD830(L_37, NULL);
		// Graphics.Blit (source, accumTexture, material);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_38 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_39 = __this->___accumTexture_8;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_40;
		L_40 = ImageEffectBase_get_material_mA782BFD19466071E286A9A98047EEA49D7DB5ABA(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F(L_38, L_39, L_40, NULL);
		// Graphics.Blit (accumTexture, destination);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_41 = __this->___accumTexture_8;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_42 = ___destination1;
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_41, L_42, NULL);
		// }
		return;
	}
}
// System.Void MotionBlur::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotionBlur__ctor_m5318AA33917EE73AA0C2E3BC8511CB77FC6E1B9E (MotionBlur_t7A1D334084EFC1584C1976626CC7B2CF1EC3B853* __this, const RuntimeMethod* method) 
{
	{
		// public float blurAmount = 0.8f;
		__this->___blurAmount_6 = (0.800000012f);
		ImageEffectBase__ctor_m3D573416110EA614F77813109438B074A4B7D603(__this, NULL);
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
// System.Void NoiseEffect::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseEffect_Start_m1C2CE4C2FACB2506DE7183FBFF8B7577EFAE60F0 (NoiseEffect_t4DCC3F1E477F5740C67F42CFE317AB6992FF4911* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA1920FD6D98B583E1DDE48CBD6322EFF94B2A2C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!SystemInfo.supportsImageEffects) {
		bool L_0;
		L_0 = SystemInfo_get_supportsImageEffects_mA97A693C45A91780EE8E9F2802D6ED58841D52F0(NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_000f:
	{
		// if( shaderRGB == null || shaderYUV == null )
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_1 = __this->___shaderRGB_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3 = __this->___shaderYUV_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_003d;
		}
	}

IL_002b:
	{
		// Debug.Log( "Noise shaders are not set up! Disabling noise effect." );
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralFA1920FD6D98B583E1DDE48CBD6322EFF94B2A2C, NULL);
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		return;
	}

IL_003d:
	{
		// if( !shaderRGB.isSupported ) // disable effect if RGB shader is not supported
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_5 = __this->___shaderRGB_15;
		NullCheck(L_5);
		bool L_6;
		L_6 = Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5(L_5, NULL);
		if (L_6)
		{
			goto IL_0052;
		}
	}
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		return;
	}

IL_0052:
	{
		// else if( !shaderYUV.isSupported ) // fallback to RGB if YUV is not supported
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7 = __this->___shaderYUV_16;
		NullCheck(L_7);
		bool L_8;
		L_8 = Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5(L_7, NULL);
		if (L_8)
		{
			goto IL_0066;
		}
	}
	{
		// rgbFallback = true;
		__this->___rgbFallback_5 = (bool)1;
	}

IL_0066:
	{
		// }
		return;
	}
}
// UnityEngine.Material NoiseEffect::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* NoiseEffect_get_material_m11A348D5D2429624E6E46645BA12A3BE3FAA2EBD (NoiseEffect_t4DCC3F1E477F5740C67F42CFE317AB6992FF4911* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( m_MaterialRGB == null ) {
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___m_MaterialRGB_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		// m_MaterialRGB = new Material( shaderRGB );
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2 = __this->___shaderRGB_15;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_3, L_2, NULL);
		__this->___m_MaterialRGB_17 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_MaterialRGB_17), (void*)L_3);
		// m_MaterialRGB.hideFlags = HideFlags.HideAndDontSave;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___m_MaterialRGB_17;
		NullCheck(L_4);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_4, ((int32_t)61), NULL);
	}

IL_002c:
	{
		// if( m_MaterialYUV == null && !rgbFallback ) {
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___m_MaterialYUV_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0060;
		}
	}
	{
		bool L_7 = __this->___rgbFallback_5;
		if (L_7)
		{
			goto IL_0060;
		}
	}
	{
		// m_MaterialYUV = new Material( shaderYUV );
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_8 = __this->___shaderYUV_16;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_9, L_8, NULL);
		__this->___m_MaterialYUV_18 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_MaterialYUV_18), (void*)L_9);
		// m_MaterialYUV.hideFlags = HideFlags.HideAndDontSave;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = __this->___m_MaterialYUV_18;
		NullCheck(L_10);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_10, ((int32_t)61), NULL);
	}

IL_0060:
	{
		// return (!rgbFallback && !monochrome) ? m_MaterialYUV : m_MaterialRGB;
		bool L_11 = __this->___rgbFallback_5;
		if (L_11)
		{
			goto IL_0070;
		}
	}
	{
		bool L_12 = __this->___monochrome_4;
		if (!L_12)
		{
			goto IL_0077;
		}
	}

IL_0070:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___m_MaterialRGB_17;
		return L_13;
	}

IL_0077:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14 = __this->___m_MaterialYUV_18;
		return L_14;
	}
}
// System.Void NoiseEffect::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseEffect_OnDisable_mE24F8E721691C954339818ECF9925044F6FF972E (NoiseEffect_t4DCC3F1E477F5740C67F42CFE317AB6992FF4911* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( m_MaterialRGB )
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___m_MaterialRGB_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// DestroyImmediate( m_MaterialRGB );
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___m_MaterialRGB_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_2, NULL);
	}

IL_0018:
	{
		// if( m_MaterialYUV )
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->___m_MaterialYUV_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		// DestroyImmediate( m_MaterialYUV );
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___m_MaterialYUV_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_5, NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void NoiseEffect::SanitizeParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseEffect_SanitizeParameters_m622801A76F2F8D9DFDFEC06F3F314FF55BAB2247 (NoiseEffect_t4DCC3F1E477F5740C67F42CFE317AB6992FF4911* __this, const RuntimeMethod* method) 
{
	{
		// grainIntensityMin = Mathf.Clamp( grainIntensityMin, 0.0f, 5.0f );
		float L_0 = __this->___grainIntensityMin_6;
		float L_1;
		L_1 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_0, (0.0f), (5.0f), NULL);
		__this->___grainIntensityMin_6 = L_1;
		// grainIntensityMax = Mathf.Clamp( grainIntensityMax, 0.0f, 5.0f );
		float L_2 = __this->___grainIntensityMax_7;
		float L_3;
		L_3 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_2, (0.0f), (5.0f), NULL);
		__this->___grainIntensityMax_7 = L_3;
		// scratchIntensityMin = Mathf.Clamp( scratchIntensityMin, 0.0f, 5.0f );
		float L_4 = __this->___scratchIntensityMin_9;
		float L_5;
		L_5 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_4, (0.0f), (5.0f), NULL);
		__this->___scratchIntensityMin_9 = L_5;
		// scratchIntensityMax = Mathf.Clamp( scratchIntensityMax, 0.0f, 5.0f );
		float L_6 = __this->___scratchIntensityMax_10;
		float L_7;
		L_7 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_6, (0.0f), (5.0f), NULL);
		__this->___scratchIntensityMax_10 = L_7;
		// scratchFPS = Mathf.Clamp( scratchFPS, 1, 30 );
		float L_8 = __this->___scratchFPS_11;
		float L_9;
		L_9 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_8, (1.0f), (30.0f), NULL);
		__this->___scratchFPS_11 = L_9;
		// scratchJitter = Mathf.Clamp( scratchJitter, 0.0f, 1.0f );
		float L_10 = __this->___scratchJitter_12;
		float L_11;
		L_11 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_10, (0.0f), (1.0f), NULL);
		__this->___scratchJitter_12 = L_11;
		// grainSize = Mathf.Clamp( grainSize, 0.1f, 50.0f );
		float L_12 = __this->___grainSize_8;
		float L_13;
		L_13 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_12, (0.100000001f), (50.0f), NULL);
		__this->___grainSize_8 = L_13;
		// }
		return;
	}
}
// System.Void NoiseEffect::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseEffect_OnRenderImage_mBD2AD97800D5697184628060795C7ECBAD737F72 (NoiseEffect_t4DCC3F1E477F5740C67F42CFE317AB6992FF4911* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DDF2C5EB3B511F16328BFA5E2CCA22E5F941526);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD8876816F840CDD275978547DCA00605F5521FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA358E33682D63809BC819D06A5C119F65140337);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8C699F08EF91DEFEBE9FD4314609FE0B62067C9);
		s_Il2CppMethodInitialized = true;
	}
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_0 = NULL;
	float V_1 = 0.0f;
	{
		// SanitizeParameters();
		NoiseEffect_SanitizeParameters_m622801A76F2F8D9DFDFEC06F3F314FF55BAB2247(__this, NULL);
		// if( scratchTimeLeft <= 0.0f )
		float L_0 = __this->___scratchTimeLeft_19;
		if ((!(((float)L_0) <= ((float)(0.0f)))))
		{
			goto IL_0041;
		}
	}
	{
		// scratchTimeLeft = Random.value * 2 / scratchFPS; // we have sanitized it earlier, won't be zero
		float L_1;
		L_1 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		float L_2 = __this->___scratchFPS_11;
		__this->___scratchTimeLeft_19 = ((float)(((float)il2cpp_codegen_multiply(L_1, (2.0f)))/L_2));
		// scratchX = Random.value;
		float L_3;
		L_3 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		__this->___scratchX_20 = L_3;
		// scratchY = Random.value;
		float L_4;
		L_4 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		__this->___scratchY_21 = L_4;
	}

IL_0041:
	{
		// scratchTimeLeft -= Time.deltaTime;
		float L_5 = __this->___scratchTimeLeft_19;
		float L_6;
		L_6 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___scratchTimeLeft_19 = ((float)il2cpp_codegen_subtract(L_5, L_6));
		// Material mat = material;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7;
		L_7 = NoiseEffect_get_material_m11A348D5D2429624E6E46645BA12A3BE3FAA2EBD(__this, NULL);
		V_0 = L_7;
		// mat.SetTexture("_GrainTex", grainTexture);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = V_0;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_9 = __this->___grainTexture_13;
		NullCheck(L_8);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_8, _stringLiteralAD8876816F840CDD275978547DCA00605F5521FA, L_9, NULL);
		// mat.SetTexture("_ScratchTex", scratchTexture);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = V_0;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_11 = __this->___scratchTexture_14;
		NullCheck(L_10);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_10, _stringLiteralCA358E33682D63809BC819D06A5C119F65140337, L_11, NULL);
		// float grainScale = 1.0f / grainSize; // we have sanitized it earlier, won't be zero
		float L_12 = __this->___grainSize_8;
		V_1 = ((float)((1.0f)/L_12));
		// mat.SetVector("_GrainOffsetScale", new Vector4(
		//     Random.value,
		//     Random.value,
		//     (float)Screen.width / (float)grainTexture.width * grainScale,
		//     (float)Screen.height / (float)grainTexture.height * grainScale
		// ));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = V_0;
		float L_14;
		L_14 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		float L_15;
		L_15 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		int32_t L_16;
		L_16 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_17 = __this->___grainTexture_13;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_17);
		float L_19 = V_1;
		int32_t L_20;
		L_20 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_21 = __this->___grainTexture_13;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_21);
		float L_23 = V_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_24), L_14, L_15, ((float)il2cpp_codegen_multiply(((float)(((float)L_16)/((float)L_18))), L_19)), ((float)il2cpp_codegen_multiply(((float)(((float)L_20)/((float)L_22))), L_23)), /*hidden argument*/NULL);
		NullCheck(L_13);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_13, _stringLiteral4DDF2C5EB3B511F16328BFA5E2CCA22E5F941526, L_24, NULL);
		// mat.SetVector("_ScratchOffsetScale", new Vector4(
		//     scratchX + Random.value*scratchJitter,
		//     scratchY + Random.value*scratchJitter,
		//     (float)Screen.width / (float) scratchTexture.width,
		//     (float)Screen.height / (float) scratchTexture.height
		// ));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = V_0;
		float L_26 = __this->___scratchX_20;
		float L_27;
		L_27 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		float L_28 = __this->___scratchJitter_12;
		float L_29 = __this->___scratchY_21;
		float L_30;
		L_30 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		float L_31 = __this->___scratchJitter_12;
		int32_t L_32;
		L_32 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_33 = __this->___scratchTexture_14;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_33);
		int32_t L_35;
		L_35 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_36 = __this->___scratchTexture_14;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_36);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_38;
		memset((&L_38), 0, sizeof(L_38));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_38), ((float)il2cpp_codegen_add(L_26, ((float)il2cpp_codegen_multiply(L_27, L_28)))), ((float)il2cpp_codegen_add(L_29, ((float)il2cpp_codegen_multiply(L_30, L_31)))), ((float)(((float)L_32)/((float)L_34))), ((float)(((float)L_35)/((float)L_37))), /*hidden argument*/NULL);
		NullCheck(L_25);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_25, _stringLiteralD8C699F08EF91DEFEBE9FD4314609FE0B62067C9, L_38, NULL);
		// mat.SetVector("_Intensity", new Vector4(
		//     Random.Range(grainIntensityMin, grainIntensityMax),
		//     Random.Range(scratchIntensityMin, scratchIntensityMax),
		//     0, 0 ));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_39 = V_0;
		float L_40 = __this->___grainIntensityMin_6;
		float L_41 = __this->___grainIntensityMax_7;
		float L_42;
		L_42 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_40, L_41, NULL);
		float L_43 = __this->___scratchIntensityMin_9;
		float L_44 = __this->___scratchIntensityMax_10;
		float L_45;
		L_45 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_43, L_44, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_46;
		memset((&L_46), 0, sizeof(L_46));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_46), L_42, L_45, (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_39);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_39, _stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E, L_46, NULL);
		// Graphics.Blit (source, destination, mat);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_47 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_48 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_49 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F(L_47, L_48, L_49, NULL);
		// }
		return;
	}
}
// System.Void NoiseEffect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoiseEffect__ctor_m79F035D259BD3C206E0A97D416903F156C5C3F5D (NoiseEffect_t4DCC3F1E477F5740C67F42CFE317AB6992FF4911* __this, const RuntimeMethod* method) 
{
	{
		// public bool monochrome = true;
		__this->___monochrome_4 = (bool)1;
		// public float grainIntensityMin = 0.1f;
		__this->___grainIntensityMin_6 = (0.100000001f);
		// public float grainIntensityMax = 0.2f;
		__this->___grainIntensityMax_7 = (0.200000003f);
		// public float grainSize = 2.0f;
		__this->___grainSize_8 = (2.0f);
		// public float scratchIntensityMin = 0.05f;
		__this->___scratchIntensityMin_9 = (0.0500000007f);
		// public float scratchIntensityMax = 0.25f;
		__this->___scratchIntensityMax_10 = (0.25f);
		// public float scratchFPS = 10.0f;
		__this->___scratchFPS_11 = (10.0f);
		// public float scratchJitter = 0.01f;
		__this->___scratchJitter_12 = (0.00999999978f);
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
// System.Void SepiaToneEffect::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SepiaToneEffect_OnRenderImage_m0A101C3237E002624FBF501A22B8C95CA4B46C2B (SepiaToneEffect_tB98B02A63CEC2EF062998DBB6E0016A095A7D40C* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Graphics.Blit (source, destination, material);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = ImageEffectBase_get_material_mA782BFD19466071E286A9A98047EEA49D7DB5ABA(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void SepiaToneEffect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SepiaToneEffect__ctor_m7A8B976C52BD3C0138D3D88BBE7A55F3D2245168 (SepiaToneEffect_tB98B02A63CEC2EF062998DBB6E0016A095A7D40C* __this, const RuntimeMethod* method) 
{
	{
		ImageEffectBase__ctor_m3D573416110EA614F77813109438B074A4B7D603(__this, NULL);
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
// UnityEngine.Material SSAOEffect::CreateMaterial(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* SSAOEffect_CreateMaterial_m03D672D04A57423470264EB9F4056810B5724C3A (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!shader)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_0 = ___shader0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return null;
		return (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}

IL_000a:
	{
		// Material m = new Material (shader);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2 = ___shader0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_3, L_2, NULL);
		// m.hideFlags = HideFlags.HideAndDontSave;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = L_3;
		NullCheck(L_4);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_4, ((int32_t)61), NULL);
		// return m;
		return L_4;
	}
}
// System.Void SSAOEffect::DestroyMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SSAOEffect_DestroyMaterial_m84C5C3C1414ACB7C83BD45DFB302C0436F7A9841 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mat)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___mat0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// DestroyImmediate (mat);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = ___mat0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_2, NULL);
		// mat = null;
		___mat0 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Void SSAOEffect::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SSAOEffect_OnDisable_mDEA59CC3F2D3C31181D55B897529BFAF119EC37B (SSAOEffect_t6698F5B4525C7F42A2C7FD36595130191FA0B7F4* __this, const RuntimeMethod* method) 
{
	{
		// DestroyMaterial (m_SSAOMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___m_SSAOMaterial_12;
		SSAOEffect_DestroyMaterial_m84C5C3C1414ACB7C83BD45DFB302C0436F7A9841(L_0, NULL);
		// }
		return;
	}
}
// System.Void SSAOEffect::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SSAOEffect_Start_mF72E2EC3774AB92CC95C19DD7CC16C1778DDDC33 (SSAOEffect_t6698F5B4525C7F42A2C7FD36595130191FA0B7F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!SystemInfo.supportsImageEffects || !SystemInfo.SupportsRenderTextureFormat (RenderTextureFormat.Depth))
		bool L_0;
		L_0 = SystemInfo_get_supportsImageEffects_mA97A693C45A91780EE8E9F2802D6ED58841D52F0(NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		bool L_1;
		L_1 = SystemInfo_SupportsRenderTextureFormat_mCCC3C69578A2C5B7367F73999E6938C315A98201(1, NULL);
		if (L_1)
		{
			goto IL_001e;
		}
	}

IL_000f:
	{
		// m_Supported = false;
		__this->___m_Supported_14 = (bool)0;
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_001e:
	{
		// CreateMaterials ();
		SSAOEffect_CreateMaterials_m67E4705B1F71FDADC876782050F8414ED869182B(__this, NULL);
		// if (!m_SSAOMaterial || m_SSAOMaterial.passCount != 5)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___m_SSAOMaterial_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___m_SSAOMaterial_12;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Material_get_passCount_m7BA071AFFA34DC3E49B56A16CB8B098566BDE765(L_4, NULL);
		if ((((int32_t)L_5) == ((int32_t)5)))
		{
			goto IL_004e;
		}
	}

IL_003f:
	{
		// m_Supported = false;
		__this->___m_Supported_14 = (bool)0;
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_004e:
	{
		// m_Supported = true;
		__this->___m_Supported_14 = (bool)1;
		// }
		return;
	}
}
// System.Void SSAOEffect::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SSAOEffect_OnEnable_m6143953F251283E0B28A4EAEC8C7D96E9A314355 (SSAOEffect_t6698F5B4525C7F42A2C7FD36595130191FA0B7F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<Camera>().depthTextureMode |= DepthTextureMode.DepthNormals;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Camera_get_depthTextureMode_m998CDEBC055FE2A910F3B650585ADE3E2BB141EE(L_1, NULL);
		NullCheck(L_1);
		Camera_set_depthTextureMode_mE722389E4DF8B3DF7F6100DB142E4DBAF698F6BF(L_1, ((int32_t)((int32_t)L_2|2)), NULL);
		// }
		return;
	}
}
// System.Void SSAOEffect::CreateMaterials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SSAOEffect_CreateMaterials_m67E4705B1F71FDADC876782050F8414ED869182B (SSAOEffect_t6698F5B4525C7F42A2C7FD36595130191FA0B7F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5826A90C2A023CEF000FAA3A3456FA3BC3A1BF80);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_SSAOMaterial && m_SSAOShader.isSupported)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___m_SSAOMaterial_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_0041;
		}
	}
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2 = __this->___m_SSAOShader_11;
		NullCheck(L_2);
		bool L_3;
		L_3 = Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5(L_2, NULL);
		if (!L_3)
		{
			goto IL_0041;
		}
	}
	{
		// m_SSAOMaterial = CreateMaterial (m_SSAOShader);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = __this->___m_SSAOShader_11;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5;
		L_5 = SSAOEffect_CreateMaterial_m03D672D04A57423470264EB9F4056810B5724C3A(L_4, NULL);
		__this->___m_SSAOMaterial_12 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SSAOMaterial_12), (void*)L_5);
		// m_SSAOMaterial.SetTexture ("_RandomTexture", m_RandomTexture);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = __this->___m_SSAOMaterial_12;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = __this->___m_RandomTexture_13;
		NullCheck(L_6);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_6, _stringLiteral5826A90C2A023CEF000FAA3A3456FA3BC3A1BF80, L_7, NULL);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void SSAOEffect::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SSAOEffect_OnRenderImage_mC78135FF492DF14046A40463CE43C47745AB99AA (SSAOEffect_t6698F5B4525C7F42A2C7FD36595130191FA0B7F4* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6238431605E3EDF93423004446032CC82A241F2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83D3CB22CFCAF6C46B4A2D040B6BAD092671021A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6964931913C0285B81AE3611DBB55AEF6ADC09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF873D6748545B7516CD56A7A617453AEC82E7C8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB7478C21D272917F984D2563D604F75AD87D92C);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_6 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_7 = NULL;
	int32_t G_B8_0 = 0;
	int32_t G_B7_0 = 0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	{
		// if (!m_Supported || !m_SSAOShader.isSupported) {
		bool L_0 = __this->___m_Supported_14;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_1 = __this->___m_SSAOShader_11;
		NullCheck(L_1);
		bool L_2;
		L_2 = Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5(L_1, NULL);
		if (L_2)
		{
			goto IL_001d;
		}
	}

IL_0015:
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_001d:
	{
		// CreateMaterials ();
		SSAOEffect_CreateMaterials_m67E4705B1F71FDADC876782050F8414ED869182B(__this, NULL);
		// m_Downsampling = Mathf.Clamp (m_Downsampling, 1, 6);
		int32_t L_3 = __this->___m_Downsampling_8;
		int32_t L_4;
		L_4 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_3, 1, 6, NULL);
		__this->___m_Downsampling_8 = L_4;
		// m_Radius = Mathf.Clamp (m_Radius, 0.05f, 1.0f);
		float L_5 = __this->___m_Radius_4;
		float L_6;
		L_6 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_5, (0.0500000007f), (1.0f), NULL);
		__this->___m_Radius_4 = L_6;
		// m_MinZ = Mathf.Clamp (m_MinZ, 0.00001f, 0.5f);
		float L_7 = __this->___m_MinZ_10;
		float L_8;
		L_8 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_7, (9.99999975E-06f), (0.5f), NULL);
		__this->___m_MinZ_10 = L_8;
		// m_OcclusionIntensity = Mathf.Clamp (m_OcclusionIntensity, 0.5f, 4.0f);
		float L_9 = __this->___m_OcclusionIntensity_6;
		float L_10;
		L_10 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_9, (0.5f), (4.0f), NULL);
		__this->___m_OcclusionIntensity_6 = L_10;
		// m_OcclusionAttenuation = Mathf.Clamp (m_OcclusionAttenuation, 0.2f, 2.0f);
		float L_11 = __this->___m_OcclusionAttenuation_9;
		float L_12;
		L_12 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_11, (0.200000003f), (2.0f), NULL);
		__this->___m_OcclusionAttenuation_9 = L_12;
		// m_Blur = Mathf.Clamp (m_Blur, 0, 4);
		int32_t L_13 = __this->___m_Blur_7;
		int32_t L_14;
		L_14 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_13, 0, 4, NULL);
		__this->___m_Blur_7 = L_14;
		// RenderTexture rtAO = RenderTexture.GetTemporary (source.width / m_Downsampling, source.height / m_Downsampling, 0);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_15 = ___source0;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_15);
		int32_t L_17 = __this->___m_Downsampling_8;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_18 = ___source0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_18);
		int32_t L_20 = __this->___m_Downsampling_8;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_21;
		L_21 = RenderTexture_GetTemporary_m5B16E03FC6142149BDC336285A5C18D5152CA2C3(((int32_t)(L_16/L_17)), ((int32_t)(L_19/L_20)), 0, NULL);
		V_0 = L_21;
		// float fovY = GetComponent<Camera>().fieldOfView;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_22;
		L_22 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		NullCheck(L_22);
		float L_23;
		L_23 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_22, NULL);
		// float far = GetComponent<Camera>().farClipPlane;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_24;
		L_24 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		NullCheck(L_24);
		float L_25;
		L_25 = Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD(L_24, NULL);
		V_1 = L_25;
		// float y = Mathf.Tan (fovY * Mathf.Deg2Rad * 0.5f) * far;
		float L_26;
		L_26 = tanf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_23, (0.0174532924f))), (0.5f))));
		float L_27 = V_1;
		V_2 = ((float)il2cpp_codegen_multiply(L_26, L_27));
		// float x = y * GetComponent<Camera>().aspect;
		float L_28 = V_2;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_29;
		L_29 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		NullCheck(L_29);
		float L_30;
		L_30 = Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D(L_29, NULL);
		V_3 = ((float)il2cpp_codegen_multiply(L_28, L_30));
		// m_SSAOMaterial.SetVector ("_FarCorner", new Vector3(x,y,far));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_31 = __this->___m_SSAOMaterial_12;
		float L_32 = V_3;
		float L_33 = V_2;
		float L_34 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		memset((&L_35), 0, sizeof(L_35));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_35), L_32, L_33, L_34, /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_36;
		L_36 = Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline(L_35, NULL);
		NullCheck(L_31);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_31, _stringLiteral6238431605E3EDF93423004446032CC82A241F2C, L_36, NULL);
		// if (m_RandomTexture) {
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_37 = __this->___m_RandomTexture_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_37, NULL);
		if (!L_38)
		{
			goto IL_0155;
		}
	}
	{
		// noiseWidth = m_RandomTexture.width;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_39 = __this->___m_RandomTexture_13;
		NullCheck(L_39);
		int32_t L_40;
		L_40 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_39);
		V_4 = L_40;
		// noiseHeight = m_RandomTexture.height;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_41 = __this->___m_RandomTexture_13;
		NullCheck(L_41);
		int32_t L_42;
		L_42 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_41);
		V_5 = L_42;
		goto IL_015b;
	}

IL_0155:
	{
		// noiseWidth = 1; noiseHeight = 1;
		V_4 = 1;
		// noiseWidth = 1; noiseHeight = 1;
		V_5 = 1;
	}

IL_015b:
	{
		// m_SSAOMaterial.SetVector ("_NoiseScale", new Vector3 ((float)rtAO.width / noiseWidth, (float)rtAO.height / noiseHeight, 0.0f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_43 = __this->___m_SSAOMaterial_12;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_44 = V_0;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_44);
		int32_t L_46 = V_4;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_47 = V_0;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_47);
		int32_t L_49 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		memset((&L_50), 0, sizeof(L_50));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_50), ((float)(((float)L_45)/((float)L_46))), ((float)(((float)L_48)/((float)L_49))), (0.0f), /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_51;
		L_51 = Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline(L_50, NULL);
		NullCheck(L_43);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_43, _stringLiteral83D3CB22CFCAF6C46B4A2D040B6BAD092671021A, L_51, NULL);
		// m_SSAOMaterial.SetVector ("_Params", new Vector4(
		//     m_Radius,
		//     m_MinZ,
		//     1.0f / m_OcclusionAttenuation,
		//     m_OcclusionIntensity));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_52 = __this->___m_SSAOMaterial_12;
		float L_53 = __this->___m_Radius_4;
		float L_54 = __this->___m_MinZ_10;
		float L_55 = __this->___m_OcclusionAttenuation_9;
		float L_56 = __this->___m_OcclusionIntensity_6;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_57;
		memset((&L_57), 0, sizeof(L_57));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_57), L_53, L_54, ((float)((1.0f)/L_55)), L_56, /*hidden argument*/NULL);
		NullCheck(L_52);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_52, _stringLiteralF873D6748545B7516CD56A7A617453AEC82E7C8D, L_57, NULL);
		// bool doBlur = m_Blur > 0;
		int32_t L_58 = __this->___m_Blur_7;
		// Graphics.Blit (doBlur ? null : source, rtAO, m_SSAOMaterial, (int)m_SampleCount);
		int32_t L_59 = ((((int32_t)L_58) > ((int32_t)0))? 1 : 0);
		G_B7_0 = L_59;
		if (L_59)
		{
			G_B8_0 = L_59;
			goto IL_01d2;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_60 = ___source0;
		G_B9_0 = L_60;
		G_B9_1 = G_B7_0;
		goto IL_01d3;
	}

IL_01d2:
	{
		G_B9_0 = ((RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)(NULL));
		G_B9_1 = G_B8_0;
	}

IL_01d3:
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_61 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_62 = __this->___m_SSAOMaterial_12;
		int32_t L_63 = __this->___m_SampleCount_5;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(G_B9_0, L_61, L_62, L_63, NULL);
		// if (doBlur)
		if (!G_B9_1)
		{
			goto IL_02c9;
		}
	}
	{
		// RenderTexture rtBlurX = RenderTexture.GetTemporary (source.width, source.height, 0);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_64 = ___source0;
		NullCheck(L_64);
		int32_t L_65;
		L_65 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_64);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_66 = ___source0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_66);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_68;
		L_68 = RenderTexture_GetTemporary_m5B16E03FC6142149BDC336285A5C18D5152CA2C3(L_65, L_67, 0, NULL);
		V_6 = L_68;
		// m_SSAOMaterial.SetVector ("_TexelOffsetScale",
		//     new Vector4 ((float)m_Blur / source.width, 0,0,0));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_69 = __this->___m_SSAOMaterial_12;
		int32_t L_70 = __this->___m_Blur_7;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_71 = ___source0;
		NullCheck(L_71);
		int32_t L_72;
		L_72 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_71);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_73;
		memset((&L_73), 0, sizeof(L_73));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_73), ((float)(((float)L_70)/((float)L_72))), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_69);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_69, _stringLiteralF6964931913C0285B81AE3611DBB55AEF6ADC09A, L_73, NULL);
		// m_SSAOMaterial.SetTexture ("_SSAO", rtAO);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_74 = __this->___m_SSAOMaterial_12;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_75 = V_0;
		NullCheck(L_74);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_74, _stringLiteralFB7478C21D272917F984D2563D604F75AD87D92C, L_75, NULL);
		// Graphics.Blit (null, rtBlurX, m_SSAOMaterial, 3);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_76 = V_6;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_77 = __this->___m_SSAOMaterial_12;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL, L_76, L_77, 3, NULL);
		// RenderTexture.ReleaseTemporary (rtAO); // original rtAO not needed anymore
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_78 = V_0;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_78, NULL);
		// RenderTexture rtBlurY = RenderTexture.GetTemporary (source.width, source.height, 0);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_79 = ___source0;
		NullCheck(L_79);
		int32_t L_80;
		L_80 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_79);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_81 = ___source0;
		NullCheck(L_81);
		int32_t L_82;
		L_82 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_81);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_83;
		L_83 = RenderTexture_GetTemporary_m5B16E03FC6142149BDC336285A5C18D5152CA2C3(L_80, L_82, 0, NULL);
		V_7 = L_83;
		// m_SSAOMaterial.SetVector ("_TexelOffsetScale",
		//     new Vector4 (0, (float)m_Blur/source.height, 0,0));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_84 = __this->___m_SSAOMaterial_12;
		int32_t L_85 = __this->___m_Blur_7;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_86 = ___source0;
		NullCheck(L_86);
		int32_t L_87;
		L_87 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_86);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_88), (0.0f), ((float)(((float)L_85)/((float)L_87))), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_84);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_84, _stringLiteralF6964931913C0285B81AE3611DBB55AEF6ADC09A, L_88, NULL);
		// m_SSAOMaterial.SetTexture ("_SSAO", rtBlurX);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_89 = __this->___m_SSAOMaterial_12;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_90 = V_6;
		NullCheck(L_89);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_89, _stringLiteralFB7478C21D272917F984D2563D604F75AD87D92C, L_90, NULL);
		// Graphics.Blit (source, rtBlurY, m_SSAOMaterial, 3);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_91 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_92 = V_7;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_93 = __this->___m_SSAOMaterial_12;
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_91, L_92, L_93, 3, NULL);
		// RenderTexture.ReleaseTemporary (rtBlurX); // blurX RT not needed anymore
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_94 = V_6;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_94, NULL);
		// rtAO = rtBlurY; // AO is the blurred one now
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_95 = V_7;
		V_0 = L_95;
	}

IL_02c9:
	{
		// m_SSAOMaterial.SetTexture ("_SSAO", rtAO);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_96 = __this->___m_SSAOMaterial_12;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_97 = V_0;
		NullCheck(L_96);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_96, _stringLiteralFB7478C21D272917F984D2563D604F75AD87D92C, L_97, NULL);
		// Graphics.Blit (source, destination, m_SSAOMaterial, 4);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_98 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_99 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_100 = __this->___m_SSAOMaterial_12;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779(L_98, L_99, L_100, 4, NULL);
		// RenderTexture.ReleaseTemporary (rtAO);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_101 = V_0;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_101, NULL);
		// }
		return;
	}
}
// System.Void SSAOEffect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SSAOEffect__ctor_m5B40D9F456E64EBD04B62EDE8F288F57F0EDEEBB (SSAOEffect_t6698F5B4525C7F42A2C7FD36595130191FA0B7F4* __this, const RuntimeMethod* method) 
{
	{
		// public float m_Radius = 0.4f;
		__this->___m_Radius_4 = (0.400000006f);
		// public SSAOSamples m_SampleCount = SSAOSamples.Medium;
		__this->___m_SampleCount_5 = 1;
		// public float m_OcclusionIntensity = 1.5f;
		__this->___m_OcclusionIntensity_6 = (1.5f);
		// public int m_Blur = 2;
		__this->___m_Blur_7 = 2;
		// public int m_Downsampling = 2;
		__this->___m_Downsampling_8 = 2;
		// public float m_OcclusionAttenuation = 1.0f;
		__this->___m_OcclusionAttenuation_9 = (1.0f);
		// public float m_MinZ = 0.01f;
		__this->___m_MinZ_10 = (0.00999999978f);
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
// System.Void TwirlEffect::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwirlEffect_OnRenderImage_mA5B239327EF52C24D321D1BA36194042711385D6 (TwirlEffect_t205743FDB0ABF6E8C3FA38C10346462029E8C204* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination1, const RuntimeMethod* method) 
{
	{
		// ImageEffects.RenderDistortion (material, source, destination, angle, center, radius);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0;
		L_0 = ImageEffectBase_get_material_mA782BFD19466071E286A9A98047EEA49D7DB5ABA(__this, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___destination1;
		float L_3 = __this->___angle_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = __this->___center_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = __this->___radius_6;
		ImageEffects_RenderDistortion_mF894CE1D06BBEAFDBA35CFA6F7954DC1E279CEF7(L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void TwirlEffect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwirlEffect__ctor_m7025791CF016464EA74674761A80850AAD1D27BF (TwirlEffect_t205743FDB0ABF6E8C3FA38C10346462029E8C204* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2  radius = new Vector2(0.3F,0.3F);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_0), (0.300000012f), (0.300000012f), /*hidden argument*/NULL);
		__this->___radius_6 = L_0;
		// public float    angle = 50;
		__this->___angle_7 = (50.0f);
		// public Vector2  center = new Vector2 (0.5F, 0.5F);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_1), (0.5f), (0.5f), /*hidden argument*/NULL);
		__this->___center_8 = L_1;
		ImageEffectBase__ctor_m3D573416110EA614F77813109438B074A4B7D603(__this, NULL);
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
// System.Void VortexEffect::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VortexEffect_OnRenderImage_m6DD8B88AE90CCD25436EEA0534CFB9C0A194DCDC (VortexEffect_t3C69D767E5390AB44AA1216D5F6AC85A760F5E78* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination1, const RuntimeMethod* method) 
{
	{
		// ImageEffects.RenderDistortion (material, source, destination, angle, center, radius);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0;
		L_0 = ImageEffectBase_get_material_mA782BFD19466071E286A9A98047EEA49D7DB5ABA(__this, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___destination1;
		float L_3 = __this->___angle_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = __this->___center_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = __this->___radius_6;
		ImageEffects_RenderDistortion_mF894CE1D06BBEAFDBA35CFA6F7954DC1E279CEF7(L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void VortexEffect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VortexEffect__ctor_m4A95965B6034AB4DA70897186256EC8BBD1E8F65 (VortexEffect_t3C69D767E5390AB44AA1216D5F6AC85A760F5E78* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2  radius = new Vector2(0.4F,0.4F);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_0), (0.400000006f), (0.400000006f), /*hidden argument*/NULL);
		__this->___radius_6 = L_0;
		// public float    angle = 50;
		__this->___angle_7 = (50.0f);
		// public Vector2  center = new Vector2(0.5F, 0.5F);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_1), (0.5f), (0.5f), /*hidden argument*/NULL);
		__this->___center_8 = L_1;
		ImageEffectBase__ctor_m3D573416110EA614F77813109438B074A4B7D603(__this, NULL);
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
// System.Void Water::OnWillRenderObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Water_OnWillRenderObject_m8F91873A3F34E79E95A3A97E79CEBBBC446CEAD9 (Water_tA5654A18C7C4C258C0BB43725C80C8AD5163C433* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Water_tA5654A18C7C4C258C0BB43725C80C8AD5163C433_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E95A42E4D201338C7B575F7A000B10917104E6D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EEB80B7E08DAD91F8825B40594AEAED2CD94C50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral770313CDE00B176E52B747924B8BC993FD29B4FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BC903474F3EEC4A94B28FB209B0CB7F7426FCF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAD18F553E14FBD4BD1D57B89FFE0F7680479FE6);
		s_Il2CppMethodInitialized = true;
	}
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_0 = NULL;
	int32_t V_1 = 0;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_2 = NULL;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_3 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	float V_7 = 0.0f;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_13;
	memset((&V_13), 0, sizeof(V_13));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_14;
	memset((&V_14), 0, sizeof(V_14));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_15;
	memset((&V_15), 0, sizeof(V_15));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_16;
	memset((&V_16), 0, sizeof(V_16));
	{
		// if( !enabled || !GetComponent<Renderer>() || !GetComponent<Renderer>().sharedMaterial || !GetComponent<Renderer>().enabled )
		bool L_0;
		L_0 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(__this, NULL);
		if (!L_0)
		{
			goto IL_0034;
		}
	}
	{
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_1;
		L_1 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3;
		L_3 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_3);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4;
		L_4 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_4, NULL);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_6;
		L_6 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_6);
		bool L_7;
		L_7 = Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54(L_6, NULL);
		if (L_7)
		{
			goto IL_0035;
		}
	}

IL_0034:
	{
		// return;
		return;
	}

IL_0035:
	{
		// Camera cam = Camera.current;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8;
		L_8 = Camera_get_current_m25217A02CB09E3BD50E3E0327879E870AD58C6C3(NULL);
		V_0 = L_8;
		// if( !cam )
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_9 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_9, NULL);
		if (L_10)
		{
			goto IL_0044;
		}
	}
	{
		// return;
		return;
	}

IL_0044:
	{
		// if( s_InsideWater )
		bool L_11 = ((Water_tA5654A18C7C4C258C0BB43725C80C8AD5163C433_StaticFields*)il2cpp_codegen_static_fields_for(Water_tA5654A18C7C4C258C0BB43725C80C8AD5163C433_il2cpp_TypeInfo_var))->___s_InsideWater_17;
		if (!L_11)
		{
			goto IL_004c;
		}
	}
	{
		// return;
		return;
	}

IL_004c:
	{
		// s_InsideWater = true;
		((Water_tA5654A18C7C4C258C0BB43725C80C8AD5163C433_StaticFields*)il2cpp_codegen_static_fields_for(Water_tA5654A18C7C4C258C0BB43725C80C8AD5163C433_il2cpp_TypeInfo_var))->___s_InsideWater_17 = (bool)1;
		// m_HardwareWaterSupport = FindHardwareWaterSupport();
		int32_t L_12;
		L_12 = Water_FindHardwareWaterSupport_mE0C42627301719B2B7041DFAAC1551AFEE881FA2(__this, NULL);
		__this->___m_HardwareWaterSupport_14 = L_12;
		// WaterMode mode = GetWaterMode();
		int32_t L_13;
		L_13 = Water_GetWaterMode_m14BC01C8794BBCA5EBA09EAAD716B6827D8ABB8C(__this, NULL);
		V_1 = L_13;
		// CreateWaterObjects( cam, out reflectionCamera, out refractionCamera );
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_14 = V_0;
		Water_CreateWaterObjects_m683F944C064B7BDA24E5B2C542A1467843749E52(__this, L_14, (&V_2), (&V_3), NULL);
		// Vector3 pos = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		V_4 = L_16;
		// Vector3 normal = transform.up;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_17, NULL);
		V_5 = L_18;
		// int oldPixelLightCount = QualitySettings.pixelLightCount;
		int32_t L_19;
		L_19 = QualitySettings_get_pixelLightCount_mBB36ED5F47B5841CEF44032058DC4A9815D3F339(NULL);
		V_6 = L_19;
		// if( m_DisablePixelLights )
		bool L_20 = __this->___m_DisablePixelLights_5;
		if (!L_20)
		{
			goto IL_009f;
		}
	}
	{
		// QualitySettings.pixelLightCount = 0;
		QualitySettings_set_pixelLightCount_mD49EDE3F96CB8D12A0CFD00F8A13179B204762E3(0, NULL);
	}

IL_009f:
	{
		// UpdateCameraModes( cam, reflectionCamera );
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_21 = V_0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_22 = V_2;
		Water_UpdateCameraModes_m5984794A87DEF87CB6D9E7D91576043E9538C2DE(__this, L_21, L_22, NULL);
		// UpdateCameraModes( cam, refractionCamera );
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_23 = V_0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_24 = V_3;
		Water_UpdateCameraModes_m5984794A87DEF87CB6D9E7D91576043E9538C2DE(__this, L_23, L_24, NULL);
		// if( mode >= WaterMode.Reflective )
		int32_t L_25 = V_1;
		if ((((int32_t)L_25) < ((int32_t)1)))
		{
			goto IL_01e7;
		}
	}
	{
		// float d = -Vector3.Dot (normal, pos) - m_ClipPlaneOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_4;
		float L_28;
		L_28 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_26, L_27, NULL);
		float L_29 = __this->___m_ClipPlaneOffset_7;
		V_7 = ((float)il2cpp_codegen_subtract(((-L_28)), L_29));
		// Vector4 reflectionPlane = new Vector4 (normal.x, normal.y, normal.z, d);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_5;
		float L_31 = L_30.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_5;
		float L_33 = L_32.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_5;
		float L_35 = L_34.___z_4;
		float L_36 = V_7;
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&V_8), L_31, L_33, L_35, L_36, NULL);
		// Matrix4x4 reflection = Matrix4x4.zero;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_37;
		L_37 = Matrix4x4_get_zero_m5D5F0475AD231C2C6BE5A9C80E11E24013B1B827(NULL);
		V_9 = L_37;
		// CalculateReflectionMatrix (ref reflection, reflectionPlane);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_38 = V_8;
		Water_CalculateReflectionMatrix_mBB9A733EFCF764937D43A4675665DAFAE3E83219((&V_9), L_38, NULL);
		// Vector3 oldpos = cam.transform.position;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_39 = V_0;
		NullCheck(L_39);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_39, NULL);
		NullCheck(L_40);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_40, NULL);
		V_10 = L_41;
		// Vector3 newpos = reflection.MultiplyPoint( oldpos );
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Matrix4x4_MultiplyPoint_m20E910B65693559BFDE99382472D8DD02C862E7E((&V_9), L_42, NULL);
		V_11 = L_43;
		// reflectionCamera.worldToCameraMatrix = cam.worldToCameraMatrix * reflection;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_44 = V_2;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_45 = V_0;
		NullCheck(L_45);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_46;
		L_46 = Camera_get_worldToCameraMatrix_m48E324BD76706A316A1701EFC6A3DEC7DFB2FF40(L_45, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_47 = V_9;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_48;
		L_48 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(L_46, L_47, NULL);
		NullCheck(L_44);
		Camera_set_worldToCameraMatrix_mC199F02E435CE7261F7EECD1FD78A33EA96ABC0D(L_44, L_48, NULL);
		// Vector4 clipPlane = CameraSpacePlane( reflectionCamera, pos, normal, 1.0f );
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_49 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = V_5;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_52;
		L_52 = Water_CameraSpacePlane_m62B2094A8FFC1269B00EA58CBB70698BD1AF0EDD(__this, L_49, L_50, L_51, (1.0f), NULL);
		V_12 = L_52;
		// Matrix4x4 projection = cam.projectionMatrix;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_53 = V_0;
		NullCheck(L_53);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_54;
		L_54 = Camera_get_projectionMatrix_m9B943EFDD6418528A055321E14F75F1511DD9B4A(L_53, NULL);
		V_13 = L_54;
		// CalculateObliqueMatrix (ref projection, clipPlane);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_55 = V_12;
		Water_CalculateObliqueMatrix_mE63F5D558BE88CD4CBEBAB1F6639FDDA31C6F994((&V_13), L_55, NULL);
		// reflectionCamera.projectionMatrix = projection;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_56 = V_2;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_57 = V_13;
		NullCheck(L_56);
		Camera_set_projectionMatrix_m351820E6903139402FFFF40221B32D0C52B5A094(L_56, L_57, NULL);
		// reflectionCamera.cullingMask = ~(1<<4) & m_ReflectLayers.value; // never render water layer
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_58 = V_2;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* L_59 = (&__this->___m_ReflectLayers_8);
		int32_t L_60;
		L_60 = LayerMask_get_value_m70CBE32210A1F0FD4ECB850285DA90ED57B87974(L_59, NULL);
		NullCheck(L_58);
		Camera_set_cullingMask_m14F426710530BA8FA53AEC02F79C418AA558CB32(L_58, ((int32_t)(((int32_t)-17)&L_60)), NULL);
		// reflectionCamera.targetTexture = m_ReflectionTexture;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_61 = V_2;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_62 = __this->___m_ReflectionTexture_12;
		NullCheck(L_61);
		Camera_set_targetTexture_mE6C740F21A72DA47FB5B1D31D208710738A836C4(L_61, L_62, NULL);
		// GL.SetRevertBackfacing (true);
		GL_SetRevertBackfacing_mA99C540DE453C9F95BCCB6DCE98B7A42765F0410((bool)1, NULL);
		// reflectionCamera.transform.position = newpos;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_63 = V_2;
		NullCheck(L_63);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_64;
		L_64 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_63, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65 = V_11;
		NullCheck(L_64);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_64, L_65, NULL);
		// Vector3 euler = cam.transform.eulerAngles;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_66 = V_0;
		NullCheck(L_66);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_67;
		L_67 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_66, NULL);
		NullCheck(L_67);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		L_68 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_67, NULL);
		V_14 = L_68;
		// reflectionCamera.transform.eulerAngles = new Vector3(-euler.x, euler.y, euler.z);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_69 = V_2;
		NullCheck(L_69);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_70;
		L_70 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_69, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71 = V_14;
		float L_72 = L_71.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73 = V_14;
		float L_74 = L_73.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75 = V_14;
		float L_76 = L_75.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77;
		memset((&L_77), 0, sizeof(L_77));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_77), ((-L_72)), L_74, L_76, /*hidden argument*/NULL);
		NullCheck(L_70);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_70, L_77, NULL);
		// reflectionCamera.Render();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_78 = V_2;
		NullCheck(L_78);
		Camera_Render_m6089001EB6710DA9A21C87185D65922F13A24509(L_78, NULL);
		// reflectionCamera.transform.position = oldpos;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_79 = V_2;
		NullCheck(L_79);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_80;
		L_80 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_79, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81 = V_10;
		NullCheck(L_80);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_80, L_81, NULL);
		// GL.SetRevertBackfacing (false);
		GL_SetRevertBackfacing_mA99C540DE453C9F95BCCB6DCE98B7A42765F0410((bool)0, NULL);
		// GetComponent<Renderer>().sharedMaterial.SetTexture( "_ReflectionTex", m_ReflectionTexture );
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_82;
		L_82 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_82);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_83;
		L_83 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_82, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_84 = __this->___m_ReflectionTexture_12;
		NullCheck(L_83);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_83, _stringLiteral88BC903474F3EEC4A94B28FB209B0CB7F7426FCF, L_84, NULL);
	}

IL_01e7:
	{
		// if( mode >= WaterMode.Refractive )
		int32_t L_85 = V_1;
		if ((((int32_t)L_85) < ((int32_t)2)))
		{
			goto IL_0292;
		}
	}
	{
		// refractionCamera.worldToCameraMatrix = cam.worldToCameraMatrix;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_86 = V_3;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_87 = V_0;
		NullCheck(L_87);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_88;
		L_88 = Camera_get_worldToCameraMatrix_m48E324BD76706A316A1701EFC6A3DEC7DFB2FF40(L_87, NULL);
		NullCheck(L_86);
		Camera_set_worldToCameraMatrix_mC199F02E435CE7261F7EECD1FD78A33EA96ABC0D(L_86, L_88, NULL);
		// Vector4 clipPlane = CameraSpacePlane( refractionCamera, pos, normal, -1.0f );
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_89 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91 = V_5;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_92;
		L_92 = Water_CameraSpacePlane_m62B2094A8FFC1269B00EA58CBB70698BD1AF0EDD(__this, L_89, L_90, L_91, (-1.0f), NULL);
		V_15 = L_92;
		// Matrix4x4 projection = cam.projectionMatrix;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_93 = V_0;
		NullCheck(L_93);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_94;
		L_94 = Camera_get_projectionMatrix_m9B943EFDD6418528A055321E14F75F1511DD9B4A(L_93, NULL);
		V_16 = L_94;
		// CalculateObliqueMatrix (ref projection, clipPlane);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_95 = V_15;
		Water_CalculateObliqueMatrix_mE63F5D558BE88CD4CBEBAB1F6639FDDA31C6F994((&V_16), L_95, NULL);
		// refractionCamera.projectionMatrix = projection;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_96 = V_3;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_97 = V_16;
		NullCheck(L_96);
		Camera_set_projectionMatrix_m351820E6903139402FFFF40221B32D0C52B5A094(L_96, L_97, NULL);
		// refractionCamera.cullingMask = ~(1<<4) & m_RefractLayers.value; // never render water layer
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_98 = V_3;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* L_99 = (&__this->___m_RefractLayers_9);
		int32_t L_100;
		L_100 = LayerMask_get_value_m70CBE32210A1F0FD4ECB850285DA90ED57B87974(L_99, NULL);
		NullCheck(L_98);
		Camera_set_cullingMask_m14F426710530BA8FA53AEC02F79C418AA558CB32(L_98, ((int32_t)(((int32_t)-17)&L_100)), NULL);
		// refractionCamera.targetTexture = m_RefractionTexture;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_101 = V_3;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_102 = __this->___m_RefractionTexture_13;
		NullCheck(L_101);
		Camera_set_targetTexture_mE6C740F21A72DA47FB5B1D31D208710738A836C4(L_101, L_102, NULL);
		// refractionCamera.transform.position = cam.transform.position;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_103 = V_3;
		NullCheck(L_103);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_104;
		L_104 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_103, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_105 = V_0;
		NullCheck(L_105);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_106;
		L_106 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_105, NULL);
		NullCheck(L_106);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107;
		L_107 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_106, NULL);
		NullCheck(L_104);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_104, L_107, NULL);
		// refractionCamera.transform.rotation = cam.transform.rotation;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_108 = V_3;
		NullCheck(L_108);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_109;
		L_109 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_108, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_110 = V_0;
		NullCheck(L_110);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_111;
		L_111 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_110, NULL);
		NullCheck(L_111);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_112;
		L_112 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_111, NULL);
		NullCheck(L_109);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_109, L_112, NULL);
		// refractionCamera.Render();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_113 = V_3;
		NullCheck(L_113);
		Camera_Render_m6089001EB6710DA9A21C87185D65922F13A24509(L_113, NULL);
		// GetComponent<Renderer>().sharedMaterial.SetTexture( "_RefractionTex", m_RefractionTexture );
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_114;
		L_114 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_114);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_115;
		L_115 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_114, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_116 = __this->___m_RefractionTexture_13;
		NullCheck(L_115);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_115, _stringLiteral5EEB80B7E08DAD91F8825B40594AEAED2CD94C50, L_116, NULL);
	}

IL_0292:
	{
		// if( m_DisablePixelLights )
		bool L_117 = __this->___m_DisablePixelLights_5;
		if (!L_117)
		{
			goto IL_02a1;
		}
	}
	{
		// QualitySettings.pixelLightCount = oldPixelLightCount;
		int32_t L_118 = V_6;
		QualitySettings_set_pixelLightCount_mD49EDE3F96CB8D12A0CFD00F8A13179B204762E3(L_118, NULL);
	}

IL_02a1:
	{
		int32_t L_119 = V_1;
		switch (L_119)
		{
			case 0:
			{
				goto IL_02b5;
			}
			case 1:
			{
				goto IL_02d5;
			}
			case 2:
			{
				goto IL_02f5;
			}
		}
	}
	{
		goto IL_0313;
	}

IL_02b5:
	{
		// Shader.EnableKeyword( "WATER_SIMPLE" );
		Shader_EnableKeyword_m2449D6D86962FA7F5D1ED2B165EF63B019CBCCF1(_stringLiteralEAD18F553E14FBD4BD1D57B89FFE0F7680479FE6, NULL);
		// Shader.DisableKeyword( "WATER_REFLECTIVE" );
		Shader_DisableKeyword_m20FCB3643CD53D86E46DA431DA971E59D49DAF88(_stringLiteral2E95A42E4D201338C7B575F7A000B10917104E6D, NULL);
		// Shader.DisableKeyword( "WATER_REFRACTIVE" );
		Shader_DisableKeyword_m20FCB3643CD53D86E46DA431DA971E59D49DAF88(_stringLiteral770313CDE00B176E52B747924B8BC993FD29B4FA, NULL);
		// break;
		goto IL_0313;
	}

IL_02d5:
	{
		// Shader.DisableKeyword( "WATER_SIMPLE" );
		Shader_DisableKeyword_m20FCB3643CD53D86E46DA431DA971E59D49DAF88(_stringLiteralEAD18F553E14FBD4BD1D57B89FFE0F7680479FE6, NULL);
		// Shader.EnableKeyword( "WATER_REFLECTIVE" );
		Shader_EnableKeyword_m2449D6D86962FA7F5D1ED2B165EF63B019CBCCF1(_stringLiteral2E95A42E4D201338C7B575F7A000B10917104E6D, NULL);
		// Shader.DisableKeyword( "WATER_REFRACTIVE" );
		Shader_DisableKeyword_m20FCB3643CD53D86E46DA431DA971E59D49DAF88(_stringLiteral770313CDE00B176E52B747924B8BC993FD29B4FA, NULL);
		// break;
		goto IL_0313;
	}

IL_02f5:
	{
		// Shader.DisableKeyword( "WATER_SIMPLE" );
		Shader_DisableKeyword_m20FCB3643CD53D86E46DA431DA971E59D49DAF88(_stringLiteralEAD18F553E14FBD4BD1D57B89FFE0F7680479FE6, NULL);
		// Shader.DisableKeyword( "WATER_REFLECTIVE" );
		Shader_DisableKeyword_m20FCB3643CD53D86E46DA431DA971E59D49DAF88(_stringLiteral2E95A42E4D201338C7B575F7A000B10917104E6D, NULL);
		// Shader.EnableKeyword( "WATER_REFRACTIVE" );
		Shader_EnableKeyword_m2449D6D86962FA7F5D1ED2B165EF63B019CBCCF1(_stringLiteral770313CDE00B176E52B747924B8BC993FD29B4FA, NULL);
	}

IL_0313:
	{
		// s_InsideWater = false;
		((Water_tA5654A18C7C4C258C0BB43725C80C8AD5163C433_StaticFields*)il2cpp_codegen_static_fields_for(Water_tA5654A18C7C4C258C0BB43725C80C8AD5163C433_il2cpp_TypeInfo_var))->___s_InsideWater_17 = (bool)0;
		// }
		return;
	}
}
// System.Void Water::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Water_OnDisable_m30684424B78391EE18DA7B9EE9E3033C8E241836 (Water_tA5654A18C7C4C258C0BB43725C80C8AD5163C433* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m0985B9C4515ABFC16DCD73938C31FD14F388CBB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m7BEABDF6190A27125E278461686B950DBC2E13FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4E0CD273C9B2F20DCD03E0A70B95F65B38EC1209_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mECD1F7865FB8107F52675796DFB52D59D7B5E44D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m36BD30099AE5596DD87AFF4F979E44119A7B8C19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mBB1AED0F4C858A50D942F5E3E6829B3C3A249F43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t178259FEF5B67143AC6F4012394B98979FF5D29B V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t81A4309EC9B7D914620BE9321F587F84394E24CB V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_t81A4309EC9B7D914620BE9321F587F84394E24CB V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if( m_ReflectionTexture ) {
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = __this->___m_ReflectionTexture_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// DestroyImmediate( m_ReflectionTexture );
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = __this->___m_ReflectionTexture_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_2, NULL);
		// m_ReflectionTexture = null;
		__this->___m_ReflectionTexture_12 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ReflectionTexture_12), (void*)(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL);
	}

IL_001f:
	{
		// if( m_RefractionTexture ) {
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = __this->___m_RefractionTexture_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		// DestroyImmediate( m_RefractionTexture );
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = __this->___m_RefractionTexture_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_5, NULL);
		// m_RefractionTexture = null;
		__this->___m_RefractionTexture_13 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RefractionTexture_13), (void*)(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL);
	}

IL_003e:
	{
		// foreach (KeyValuePair<Camera, Camera> kvp in m_ReflectionCameras)
		Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192* L_6 = __this->___m_ReflectionCameras_10;
		NullCheck(L_6);
		Enumerator_t178259FEF5B67143AC6F4012394B98979FF5D29B L_7;
		L_7 = Dictionary_2_GetEnumerator_m7BEABDF6190A27125E278461686B950DBC2E13FC(L_6, Dictionary_2_GetEnumerator_m7BEABDF6190A27125E278461686B950DBC2E13FC_RuntimeMethod_var);
		V_0 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0070:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4E0CD273C9B2F20DCD03E0A70B95F65B38EC1209((&V_0), Enumerator_Dispose_m4E0CD273C9B2F20DCD03E0A70B95F65B38EC1209_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0065_1;
			}

IL_004c_1:
			{
				// foreach (KeyValuePair<Camera, Camera> kvp in m_ReflectionCameras)
				KeyValuePair_2_t81A4309EC9B7D914620BE9321F587F84394E24CB L_8;
				L_8 = Enumerator_get_Current_m36BD30099AE5596DD87AFF4F979E44119A7B8C19_inline((&V_0), Enumerator_get_Current_m36BD30099AE5596DD87AFF4F979E44119A7B8C19_RuntimeMethod_var);
				V_1 = L_8;
				// DestroyImmediate( (kvp.Value).gameObject );
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_9;
				L_9 = KeyValuePair_2_get_Value_mBB1AED0F4C858A50D942F5E3E6829B3C3A249F43_inline((&V_1), KeyValuePair_2_get_Value_mBB1AED0F4C858A50D942F5E3E6829B3C3A249F43_RuntimeMethod_var);
				NullCheck(L_9);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
				L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_10, NULL);
			}

IL_0065_1:
			{
				// foreach (KeyValuePair<Camera, Camera> kvp in m_ReflectionCameras)
				bool L_11;
				L_11 = Enumerator_MoveNext_mECD1F7865FB8107F52675796DFB52D59D7B5E44D((&V_0), Enumerator_MoveNext_mECD1F7865FB8107F52675796DFB52D59D7B5E44D_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_004c_1;
				}
			}
			{
				goto IL_007e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007e:
	{
		// m_ReflectionCameras.Clear();
		Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192* L_12 = __this->___m_ReflectionCameras_10;
		NullCheck(L_12);
		Dictionary_2_Clear_m0985B9C4515ABFC16DCD73938C31FD14F388CBB7(L_12, Dictionary_2_Clear_m0985B9C4515ABFC16DCD73938C31FD14F388CBB7_RuntimeMethod_var);
		// foreach (KeyValuePair<Camera, Camera> kvp in m_RefractionCameras)
		Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192* L_13 = __this->___m_RefractionCameras_11;
		NullCheck(L_13);
		Enumerator_t178259FEF5B67143AC6F4012394B98979FF5D29B L_14;
		L_14 = Dictionary_2_GetEnumerator_m7BEABDF6190A27125E278461686B950DBC2E13FC(L_13, Dictionary_2_GetEnumerator_m7BEABDF6190A27125E278461686B950DBC2E13FC_RuntimeMethod_var);
		V_0 = L_14;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00bb:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4E0CD273C9B2F20DCD03E0A70B95F65B38EC1209((&V_0), Enumerator_Dispose_m4E0CD273C9B2F20DCD03E0A70B95F65B38EC1209_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00b0_1;
			}

IL_0097_1:
			{
				// foreach (KeyValuePair<Camera, Camera> kvp in m_RefractionCameras)
				KeyValuePair_2_t81A4309EC9B7D914620BE9321F587F84394E24CB L_15;
				L_15 = Enumerator_get_Current_m36BD30099AE5596DD87AFF4F979E44119A7B8C19_inline((&V_0), Enumerator_get_Current_m36BD30099AE5596DD87AFF4F979E44119A7B8C19_RuntimeMethod_var);
				V_2 = L_15;
				// DestroyImmediate( (kvp.Value).gameObject );
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_16;
				L_16 = KeyValuePair_2_get_Value_mBB1AED0F4C858A50D942F5E3E6829B3C3A249F43_inline((&V_2), KeyValuePair_2_get_Value_mBB1AED0F4C858A50D942F5E3E6829B3C3A249F43_RuntimeMethod_var);
				NullCheck(L_16);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
				L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_16, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_17, NULL);
			}

IL_00b0_1:
			{
				// foreach (KeyValuePair<Camera, Camera> kvp in m_RefractionCameras)
				bool L_18;
				L_18 = Enumerator_MoveNext_mECD1F7865FB8107F52675796DFB52D59D7B5E44D((&V_0), Enumerator_MoveNext_mECD1F7865FB8107F52675796DFB52D59D7B5E44D_RuntimeMethod_var);
				if (L_18)
				{
					goto IL_0097_1;
				}
			}
			{
				goto IL_00c9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c9:
	{
		// m_RefractionCameras.Clear();
		Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192* L_19 = __this->___m_RefractionCameras_11;
		NullCheck(L_19);
		Dictionary_2_Clear_m0985B9C4515ABFC16DCD73938C31FD14F388CBB7(L_19, Dictionary_2_Clear_m0985B9C4515ABFC16DCD73938C31FD14F388CBB7_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Water::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Water_Update_mA8EA951D9C32DDAF41746FC99101B485EE092E3F (Water_tA5654A18C7C4C258C0BB43725C80C8AD5163C433* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09648194F4DAEE1925FA3A2FFCDA65FB619B10EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31003880CBAF84EF30B5E85A7DF016C5DE3EC47B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65BE1CEB6016B0853B26755D17F2E7A84077B094);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78F66AE37BE6E59ACD48A247E54B845C440C126B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AE383EC55F111EB5943A0289A769711626983A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCEE50B20FFC3D5C5F3E75F2DB477FED04071681);
		s_Il2CppMethodInitialized = true;
	}
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_0 = NULL;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_3;
	memset((&V_3), 0, sizeof(V_3));
	double V_4 = 0.0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_9;
	memset((&V_9), 0, sizeof(V_9));
	{
		// if( !GetComponent<Renderer>() )
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0;
		L_0 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
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
		// Material mat = GetComponent<Renderer>().sharedMaterial;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_2;
		L_2 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_2);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_2, NULL);
		V_0 = L_3;
		// if( !mat )
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_4, NULL);
		if (L_5)
		{
			goto IL_0023;
		}
	}
	{
		// return;
		return;
	}

IL_0023:
	{
		// Vector4 waveSpeed = mat.GetVector( "WaveSpeed" );
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = V_0;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7;
		L_7 = Material_GetVector_mA2011D4DA2CC58003AE90DBF0802CF5EE31B014D(L_6, _stringLiteral09648194F4DAEE1925FA3A2FFCDA65FB619B10EC, NULL);
		V_1 = L_7;
		// float waveScale = mat.GetFloat( "_WaveScale" );
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = V_0;
		NullCheck(L_8);
		float L_9;
		L_9 = Material_GetFloat_m2A77F10E6AA13EA3FA56166EFEA897115A14FA5A(L_8, _stringLiteral31003880CBAF84EF30B5E85A7DF016C5DE3EC47B, NULL);
		V_2 = L_9;
		// Vector4 waveScale4 = new Vector4(waveScale, waveScale, waveScale * 0.4f, waveScale * 0.45f);
		float L_10 = V_2;
		float L_11 = V_2;
		float L_12 = V_2;
		float L_13 = V_2;
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&V_3), L_10, L_11, ((float)il2cpp_codegen_multiply(L_12, (0.400000006f))), ((float)il2cpp_codegen_multiply(L_13, (0.449999988f))), NULL);
		// double t = Time.timeSinceLevelLoad / 20.0;
		float L_14;
		L_14 = Time_get_timeSinceLevelLoad_m65C386103A91B172781032CA1A6FFDEC8CFBA921(NULL);
		V_4 = ((double)(((double)L_14)/(20.0)));
		// Vector4 offsetClamped = new Vector4(
		//     (float)System.Math.IEEERemainder(waveSpeed.x * waveScale4.x * t, 1.0),
		//     (float)System.Math.IEEERemainder(waveSpeed.y * waveScale4.y * t, 1.0),
		//     (float)System.Math.IEEERemainder(waveSpeed.z * waveScale4.z * t, 1.0),
		//     (float)System.Math.IEEERemainder(waveSpeed.w * waveScale4.w * t, 1.0)
		// );
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_15 = V_1;
		float L_16 = L_15.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_17 = V_3;
		float L_18 = L_17.___x_1;
		double L_19 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_20;
		L_20 = Math_IEEERemainder_m557E1471141E51EE8F8994980447E9DDE1919592(((double)il2cpp_codegen_multiply(((double)((float)il2cpp_codegen_multiply(L_16, L_18))), L_19)), (1.0), NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_21 = V_1;
		float L_22 = L_21.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_23 = V_3;
		float L_24 = L_23.___y_2;
		double L_25 = V_4;
		double L_26;
		L_26 = Math_IEEERemainder_m557E1471141E51EE8F8994980447E9DDE1919592(((double)il2cpp_codegen_multiply(((double)((float)il2cpp_codegen_multiply(L_22, L_24))), L_25)), (1.0), NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_27 = V_1;
		float L_28 = L_27.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_29 = V_3;
		float L_30 = L_29.___z_3;
		double L_31 = V_4;
		double L_32;
		L_32 = Math_IEEERemainder_m557E1471141E51EE8F8994980447E9DDE1919592(((double)il2cpp_codegen_multiply(((double)((float)il2cpp_codegen_multiply(L_28, L_30))), L_31)), (1.0), NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_33 = V_1;
		float L_34 = L_33.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_35 = V_3;
		float L_36 = L_35.___w_4;
		double L_37 = V_4;
		double L_38;
		L_38 = Math_IEEERemainder_m557E1471141E51EE8F8994980447E9DDE1919592(((double)il2cpp_codegen_multiply(((double)((float)il2cpp_codegen_multiply(L_34, L_36))), L_37)), (1.0), NULL);
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&V_5), ((float)L_20), ((float)L_26), ((float)L_32), ((float)L_38), NULL);
		// mat.SetVector( "_WaveOffset", offsetClamped );
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_39 = V_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_40 = V_5;
		NullCheck(L_39);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_39, _stringLiteral78F66AE37BE6E59ACD48A247E54B845C440C126B, L_40, NULL);
		// mat.SetVector( "_WaveScale4", waveScale4 );
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_41 = V_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_42 = V_3;
		NullCheck(L_41);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_41, _stringLiteral65BE1CEB6016B0853B26755D17F2E7A84077B094, L_42, NULL);
		// Vector3 waterSize = GetComponent<Renderer>().bounds.size;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_43;
		L_43 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_43);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_44;
		L_44 = Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C(L_43, NULL);
		V_9 = L_44;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_9), NULL);
		V_6 = L_45;
		// Vector3 scale = new Vector3( waterSize.x*waveScale4.x, waterSize.z*waveScale4.y, 1 );
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = V_6;
		float L_47 = L_46.___x_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_48 = V_3;
		float L_49 = L_48.___x_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = V_6;
		float L_51 = L_50.___z_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_52 = V_3;
		float L_53 = L_52.___y_2;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_7), ((float)il2cpp_codegen_multiply(L_47, L_49)), ((float)il2cpp_codegen_multiply(L_51, L_53)), (1.0f), NULL);
		// Matrix4x4 scrollMatrix = Matrix4x4.TRS( new Vector3(offsetClamped.x,offsetClamped.y,0), Quaternion.identity, scale );
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_54 = V_5;
		float L_55 = L_54.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_56 = V_5;
		float L_57 = L_56.___y_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), L_55, L_57, (0.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_59;
		L_59 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60 = V_7;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_61;
		L_61 = Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3(L_58, L_59, L_60, NULL);
		V_8 = L_61;
		// mat.SetMatrix( "_WaveMatrix", scrollMatrix );
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_62 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_63 = V_8;
		NullCheck(L_62);
		Material_SetMatrix_m1F4E20583C898A1C1DBA256868E1F98C539F13FB(L_62, _stringLiteral8AE383EC55F111EB5943A0289A769711626983A8, L_63, NULL);
		// scale = new Vector3( waterSize.x*waveScale4.z, waterSize.z*waveScale4.w, 1 );
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64 = V_6;
		float L_65 = L_64.___x_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_66 = V_3;
		float L_67 = L_66.___z_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68 = V_6;
		float L_69 = L_68.___z_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_70 = V_3;
		float L_71 = L_70.___w_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_7), ((float)il2cpp_codegen_multiply(L_65, L_67)), ((float)il2cpp_codegen_multiply(L_69, L_71)), (1.0f), NULL);
		// scrollMatrix = Matrix4x4.TRS( new Vector3(offsetClamped.z,offsetClamped.w,0), Quaternion.identity, scale );
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_72 = V_5;
		float L_73 = L_72.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_74 = V_5;
		float L_75 = L_74.___w_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76;
		memset((&L_76), 0, sizeof(L_76));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_76), L_73, L_75, (0.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_77;
		L_77 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78 = V_7;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_79;
		L_79 = Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3(L_76, L_77, L_78, NULL);
		V_8 = L_79;
		// mat.SetMatrix( "_WaveMatrix2", scrollMatrix );
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_80 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_81 = V_8;
		NullCheck(L_80);
		Material_SetMatrix_m1F4E20583C898A1C1DBA256868E1F98C539F13FB(L_80, _stringLiteralCCEE50B20FFC3D5C5F3E75F2DB477FED04071681, L_81, NULL);
		// }
		return;
	}
}
// System.Void Water::UpdateCameraModes(UnityEngine.Camera,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Water_UpdateCameraModes_m5984794A87DEF87CB6D9E7D91576043E9538C2DE (Water_tA5654A18C7C4C258C0BB43725C80C8AD5163C433* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___src0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___dest1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Skybox_tB3C6FDB5DCB4633B155B7A80045542B7C3388441_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Skybox_tB3C6FDB5DCB4633B155B7A80045542B7C3388441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Skybox_tB3C6FDB5DCB4633B155B7A80045542B7C3388441* V_0 = NULL;
	Skybox_tB3C6FDB5DCB4633B155B7A80045542B7C3388441* V_1 = NULL;
	{
		// if( dest == null )
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___dest1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// dest.clearFlags = src.clearFlags;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = ___dest1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = ___src0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Camera_get_clearFlags_mA74F538C124B391EF03C46A50CA7FF7B505B7602(L_3, NULL);
		NullCheck(L_2);
		Camera_set_clearFlags_m66541D9CC43CBAA5FE7364A50D43CA5569FD4D93(L_2, L_4, NULL);
		// dest.backgroundColor = src.backgroundColor;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = ___dest1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = ___src0;
		NullCheck(L_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = Camera_get_backgroundColor_m1577A81D1E6A91D7934CECB8A284AA2D4704D96F(L_6, NULL);
		NullCheck(L_5);
		Camera_set_backgroundColor_m036FD8C316A93A0B168ACC89AFF16D396B872138(L_5, L_7, NULL);
		// if( src.clearFlags == CameraClearFlags.Skybox )
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8 = ___src0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Camera_get_clearFlags_mA74F538C124B391EF03C46A50CA7FF7B505B7602(L_8, NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_0088;
		}
	}
	{
		// Skybox sky = src.GetComponent(typeof(Skybox)) as Skybox;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_10 = ___src0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (Skybox_tB3C6FDB5DCB4633B155B7A80045542B7C3388441_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck(L_10);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_13;
		L_13 = Component_GetComponent_m4352437B839B9601EB007CAC1007C8E1FB8A427D(L_10, L_12, NULL);
		V_0 = ((Skybox_tB3C6FDB5DCB4633B155B7A80045542B7C3388441*)IsInstSealed((RuntimeObject*)L_13, Skybox_tB3C6FDB5DCB4633B155B7A80045542B7C3388441_il2cpp_TypeInfo_var));
		// Skybox mysky = dest.GetComponent(typeof(Skybox)) as Skybox;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_14 = ___dest1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (Skybox_tB3C6FDB5DCB4633B155B7A80045542B7C3388441_0_0_0_var) };
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_17;
		L_17 = Component_GetComponent_m4352437B839B9601EB007CAC1007C8E1FB8A427D(L_14, L_16, NULL);
		V_1 = ((Skybox_tB3C6FDB5DCB4633B155B7A80045542B7C3388441*)IsInstSealed((RuntimeObject*)L_17, Skybox_tB3C6FDB5DCB4633B155B7A80045542B7C3388441_il2cpp_TypeInfo_var));
		// if( !sky || !sky.material )
		Skybox_tB3C6FDB5DCB4633B155B7A80045542B7C3388441* L_18 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_18, NULL);
		if (!L_19)
		{
			goto IL_006c;
		}
	}
	{
		Skybox_tB3C6FDB5DCB4633B155B7A80045542B7C3388441* L_20 = V_0;
		NullCheck(L_20);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21;
		L_21 = Skybox_get_material_m8575E583E00DC4B2CC8C129FB1F5501A6557B781(L_20, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_21, NULL);
		if (L_22)
		{
			goto IL_0075;
		}
	}

IL_006c:
	{
		// mysky.enabled = false;
		Skybox_tB3C6FDB5DCB4633B155B7A80045542B7C3388441* L_23 = V_1;
		NullCheck(L_23);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_23, (bool)0, NULL);
		goto IL_0088;
	}

IL_0075:
	{
		// mysky.enabled = true;
		Skybox_tB3C6FDB5DCB4633B155B7A80045542B7C3388441* L_24 = V_1;
		NullCheck(L_24);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_24, (bool)1, NULL);
		// mysky.material = sky.material;
		Skybox_tB3C6FDB5DCB4633B155B7A80045542B7C3388441* L_25 = V_1;
		Skybox_tB3C6FDB5DCB4633B155B7A80045542B7C3388441* L_26 = V_0;
		NullCheck(L_26);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27;
		L_27 = Skybox_get_material_m8575E583E00DC4B2CC8C129FB1F5501A6557B781(L_26, NULL);
		NullCheck(L_25);
		Skybox_set_material_m18B5BCD0F5988399466D9EF88FA995A03204CBFA(L_25, L_27, NULL);
	}

IL_0088:
	{
		// dest.farClipPlane = src.farClipPlane;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_28 = ___dest1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_29 = ___src0;
		NullCheck(L_29);
		float L_30;
		L_30 = Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD(L_29, NULL);
		NullCheck(L_28);
		Camera_set_farClipPlane_m84EF39B09573168734613481FD979BFF31C60139(L_28, L_30, NULL);
		// dest.nearClipPlane = src.nearClipPlane;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_31 = ___dest1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_32 = ___src0;
		NullCheck(L_32);
		float L_33;
		L_33 = Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013(L_32, NULL);
		NullCheck(L_31);
		Camera_set_nearClipPlane_m78482B5E4E0CE4C195D9CE0332AA75B2D9CCDDF6(L_31, L_33, NULL);
		// dest.orthographic = src.orthographic;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_34 = ___dest1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_35 = ___src0;
		NullCheck(L_35);
		bool L_36;
		L_36 = Camera_get_orthographic_m904DEFC76C54DA4E30C20A62A86D5D87B7D4DD8F(L_35, NULL);
		NullCheck(L_34);
		Camera_set_orthographic_m64915C0840A68E526830A69F1C40257206185020(L_34, L_36, NULL);
		// dest.fieldOfView = src.fieldOfView;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_37 = ___dest1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_38 = ___src0;
		NullCheck(L_38);
		float L_39;
		L_39 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_38, NULL);
		NullCheck(L_37);
		Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777(L_37, L_39, NULL);
		// dest.aspect = src.aspect;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_40 = ___dest1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_41 = ___src0;
		NullCheck(L_41);
		float L_42;
		L_42 = Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D(L_41, NULL);
		NullCheck(L_40);
		Camera_set_aspect_m537F21B48FDD5C060DFF9D87F34F4FB2B0F9BEB6(L_40, L_42, NULL);
		// dest.orthographicSize = src.orthographicSize;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_43 = ___dest1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_44 = ___src0;
		NullCheck(L_44);
		float L_45;
		L_45 = Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8(L_44, NULL);
		NullCheck(L_43);
		Camera_set_orthographicSize_m76DD021032ACB3DDBD052B75EC66DCE3A7295A5C(L_43, L_45, NULL);
		// }
		return;
	}
}
// System.Void Water::CreateWaterObjects(UnityEngine.Camera,UnityEngine.Camera&,UnityEngine.Camera&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Water_CreateWaterObjects_m683F944C064B7BDA24E5B2C542A1467843749E52 (Water_tA5654A18C7C4C258C0BB43725C80C8AD5163C433* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___currentCamera0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184** ___reflectionCamera1, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184** ___refractionCamera2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m170AED7C79718F1017B33E251480A89CEAEB35D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mD8C30AF913A8F62839C214C596CA1AFCA100AFD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisFlareLayer_t3C59D7C6F5A65AC1734D0CC1A92B464657936ABE_m419A7510064DE509FCA259992B80C3C44547C22E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Skybox_tB3C6FDB5DCB4633B155B7A80045542B7C3388441_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B3515F254725B790872641998BD62ECB0819EA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22A85FEA16A40CFC01613750838E0906C9727807);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5925AC9D610C2A3BBD99E25273E8BE1C93996202);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral798DA884BE88130097B9E5268B9DA22F8E576E95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF422850993212057809CBD984B2F3DAEC17A02ED);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	{
		// WaterMode mode = GetWaterMode();
		int32_t L_0;
		L_0 = Water_GetWaterMode_m14BC01C8794BBCA5EBA09EAAD716B6827D8ABB8C(__this, NULL);
		V_0 = L_0;
		// reflectionCamera = null;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184** L_1 = ___reflectionCamera1;
		*((RuntimeObject**)L_1) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_1, (void*)(RuntimeObject*)NULL);
		// refractionCamera = null;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184** L_2 = ___refractionCamera2;
		*((RuntimeObject**)L_2) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_2, (void*)(RuntimeObject*)NULL);
		// if( mode >= WaterMode.Reflective )
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)1)))
		{
			goto IL_0174;
		}
	}
	{
		// if( !m_ReflectionTexture || m_OldReflectionTextureSize != m_TextureSize )
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4 = __this->___m_ReflectionTexture_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_4, NULL);
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_6 = __this->___m_OldReflectionTextureSize_15;
		int32_t L_7 = __this->___m_TextureSize_6;
		if ((((int32_t)L_6) == ((int32_t)L_7)))
		{
			goto IL_00a8;
		}
	}

IL_002f:
	{
		// if( m_ReflectionTexture )
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_8 = __this->___m_ReflectionTexture_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_8, NULL);
		if (!L_9)
		{
			goto IL_0047;
		}
	}
	{
		// DestroyImmediate( m_ReflectionTexture );
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_10 = __this->___m_ReflectionTexture_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_10, NULL);
	}

IL_0047:
	{
		// m_ReflectionTexture = new RenderTexture( m_TextureSize, m_TextureSize, 16 );
		int32_t L_11 = __this->___m_TextureSize_6;
		int32_t L_12 = __this->___m_TextureSize_6;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_13 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)il2cpp_codegen_object_new(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		RenderTexture__ctor_m45EACC89DDF408948889586516B3CA7AA8B73BFA(L_13, L_11, L_12, ((int32_t)16), NULL);
		__this->___m_ReflectionTexture_12 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ReflectionTexture_12), (void*)L_13);
		// m_ReflectionTexture.name = "__WaterReflection" + GetInstanceID();
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_14 = __this->___m_ReflectionTexture_12;
		int32_t L_15;
		L_15 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(__this, NULL);
		V_1 = L_15;
		String_t* L_16;
		L_16 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_17;
		L_17 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral5925AC9D610C2A3BBD99E25273E8BE1C93996202, L_16, NULL);
		NullCheck(L_14);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_14, L_17, NULL);
		// m_ReflectionTexture.isPowerOfTwo = true;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_18 = __this->___m_ReflectionTexture_12;
		NullCheck(L_18);
		RenderTexture_set_isPowerOfTwo_mC484FC101ACE1B1BAFF21FA71F633A39765987A4(L_18, (bool)1, NULL);
		// m_ReflectionTexture.hideFlags = HideFlags.DontSave;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_19 = __this->___m_ReflectionTexture_12;
		NullCheck(L_19);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_19, ((int32_t)52), NULL);
		// m_OldReflectionTextureSize = m_TextureSize;
		int32_t L_20 = __this->___m_TextureSize_6;
		__this->___m_OldReflectionTextureSize_15 = L_20;
	}

IL_00a8:
	{
		// m_ReflectionCameras.TryGetValue(currentCamera, out reflectionCamera);
		Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192* L_21 = __this->___m_ReflectionCameras_10;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_22 = ___currentCamera0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184** L_23 = ___reflectionCamera1;
		NullCheck(L_21);
		bool L_24;
		L_24 = Dictionary_2_TryGetValue_m170AED7C79718F1017B33E251480A89CEAEB35D3(L_21, L_22, L_23, Dictionary_2_TryGetValue_m170AED7C79718F1017B33E251480A89CEAEB35D3_RuntimeMethod_var);
		// if (!reflectionCamera) // catch both not-in-dictionary and in-dictionary-but-deleted-GO
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184** L_25 = ___reflectionCamera1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_26 = *((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184**)L_25);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_26, NULL);
		if (L_27)
		{
			goto IL_0174;
		}
	}
	{
		// GameObject go = new GameObject( "Water Refl Camera id" + GetInstanceID() + " for " + currentCamera.GetInstanceID(), typeof(Camera), typeof(Skybox) );
		int32_t L_28;
		L_28 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(__this, NULL);
		V_1 = L_28;
		String_t* L_29;
		L_29 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_30 = ___currentCamera0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_30, NULL);
		V_1 = L_31;
		String_t* L_32;
		L_32 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_33;
		L_33 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral0B3515F254725B790872641998BD62ECB0819EA7, L_29, _stringLiteralF422850993212057809CBD984B2F3DAEC17A02ED, L_32, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_34 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_35 = L_34;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_36 = { reinterpret_cast<intptr_t> (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_37;
		L_37 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_36, NULL);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_37);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_37);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_38 = L_35;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_39 = { reinterpret_cast<intptr_t> (Skybox_tB3C6FDB5DCB4633B155B7A80045542B7C3388441_0_0_0_var) };
		Type_t* L_40;
		L_40 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_39, NULL);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_40);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_40);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		GameObject__ctor_m721D643351E55308EA4F5F41B67D5446D11C61F0(L_41, L_33, L_38, NULL);
		V_2 = L_41;
		// reflectionCamera = go.GetComponent<Camera>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184** L_42 = ___reflectionCamera1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43 = V_2;
		NullCheck(L_43);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_44;
		L_44 = GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6(L_43, GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var);
		*((RuntimeObject**)L_42) = (RuntimeObject*)L_44;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_42, (void*)(RuntimeObject*)L_44);
		// reflectionCamera.enabled = false;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184** L_45 = ___reflectionCamera1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_46 = *((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184**)L_45);
		NullCheck(L_46);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_46, (bool)0, NULL);
		// reflectionCamera.transform.position = transform.position;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184** L_47 = ___reflectionCamera1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_48 = *((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184**)L_47);
		NullCheck(L_48);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49;
		L_49 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_48, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_50;
		L_50 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_50);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_50, NULL);
		NullCheck(L_49);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_49, L_51, NULL);
		// reflectionCamera.transform.rotation = transform.rotation;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184** L_52 = ___reflectionCamera1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_53 = *((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184**)L_52);
		NullCheck(L_53);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_54;
		L_54 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_53, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55;
		L_55 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_55);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56;
		L_56 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_55, NULL);
		NullCheck(L_54);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_54, L_56, NULL);
		// reflectionCamera.gameObject.AddComponent<FlareLayer>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184** L_57 = ___reflectionCamera1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_58 = *((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184**)L_57);
		NullCheck(L_58);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_59;
		L_59 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_58, NULL);
		NullCheck(L_59);
		FlareLayer_t3C59D7C6F5A65AC1734D0CC1A92B464657936ABE* L_60;
		L_60 = GameObject_AddComponent_TisFlareLayer_t3C59D7C6F5A65AC1734D0CC1A92B464657936ABE_m419A7510064DE509FCA259992B80C3C44547C22E(L_59, GameObject_AddComponent_TisFlareLayer_t3C59D7C6F5A65AC1734D0CC1A92B464657936ABE_m419A7510064DE509FCA259992B80C3C44547C22E_RuntimeMethod_var);
		// go.hideFlags = HideFlags.HideAndDontSave;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_61 = V_2;
		NullCheck(L_61);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_61, ((int32_t)61), NULL);
		// m_ReflectionCameras[currentCamera] = reflectionCamera;
		Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192* L_62 = __this->___m_ReflectionCameras_10;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_63 = ___currentCamera0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184** L_64 = ___reflectionCamera1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_65 = *((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184**)L_64);
		NullCheck(L_62);
		Dictionary_2_set_Item_mD8C30AF913A8F62839C214C596CA1AFCA100AFD1(L_62, L_63, L_65, Dictionary_2_set_Item_mD8C30AF913A8F62839C214C596CA1AFCA100AFD1_RuntimeMethod_var);
	}

IL_0174:
	{
		// if( mode >= WaterMode.Refractive )
		int32_t L_66 = V_0;
		if ((((int32_t)L_66) < ((int32_t)2)))
		{
			goto IL_02db;
		}
	}
	{
		// if( !m_RefractionTexture || m_OldRefractionTextureSize != m_TextureSize )
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_67 = __this->___m_RefractionTexture_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_68;
		L_68 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_67, NULL);
		if (!L_68)
		{
			goto IL_0196;
		}
	}
	{
		int32_t L_69 = __this->___m_OldRefractionTextureSize_16;
		int32_t L_70 = __this->___m_TextureSize_6;
		if ((((int32_t)L_69) == ((int32_t)L_70)))
		{
			goto IL_020f;
		}
	}

IL_0196:
	{
		// if( m_RefractionTexture )
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_71 = __this->___m_RefractionTexture_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_72;
		L_72 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_71, NULL);
		if (!L_72)
		{
			goto IL_01ae;
		}
	}
	{
		// DestroyImmediate( m_RefractionTexture );
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_73 = __this->___m_RefractionTexture_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_73, NULL);
	}

IL_01ae:
	{
		// m_RefractionTexture = new RenderTexture( m_TextureSize, m_TextureSize, 16 );
		int32_t L_74 = __this->___m_TextureSize_6;
		int32_t L_75 = __this->___m_TextureSize_6;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_76 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)il2cpp_codegen_object_new(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		NullCheck(L_76);
		RenderTexture__ctor_m45EACC89DDF408948889586516B3CA7AA8B73BFA(L_76, L_74, L_75, ((int32_t)16), NULL);
		__this->___m_RefractionTexture_13 = L_76;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RefractionTexture_13), (void*)L_76);
		// m_RefractionTexture.name = "__WaterRefraction" + GetInstanceID();
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_77 = __this->___m_RefractionTexture_13;
		int32_t L_78;
		L_78 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(__this, NULL);
		V_1 = L_78;
		String_t* L_79;
		L_79 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_80;
		L_80 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral22A85FEA16A40CFC01613750838E0906C9727807, L_79, NULL);
		NullCheck(L_77);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_77, L_80, NULL);
		// m_RefractionTexture.isPowerOfTwo = true;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_81 = __this->___m_RefractionTexture_13;
		NullCheck(L_81);
		RenderTexture_set_isPowerOfTwo_mC484FC101ACE1B1BAFF21FA71F633A39765987A4(L_81, (bool)1, NULL);
		// m_RefractionTexture.hideFlags = HideFlags.DontSave;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_82 = __this->___m_RefractionTexture_13;
		NullCheck(L_82);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_82, ((int32_t)52), NULL);
		// m_OldRefractionTextureSize = m_TextureSize;
		int32_t L_83 = __this->___m_TextureSize_6;
		__this->___m_OldRefractionTextureSize_16 = L_83;
	}

IL_020f:
	{
		// m_RefractionCameras.TryGetValue(currentCamera, out refractionCamera);
		Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192* L_84 = __this->___m_RefractionCameras_11;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_85 = ___currentCamera0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184** L_86 = ___refractionCamera2;
		NullCheck(L_84);
		bool L_87;
		L_87 = Dictionary_2_TryGetValue_m170AED7C79718F1017B33E251480A89CEAEB35D3(L_84, L_85, L_86, Dictionary_2_TryGetValue_m170AED7C79718F1017B33E251480A89CEAEB35D3_RuntimeMethod_var);
		// if (!refractionCamera) // catch both not-in-dictionary and in-dictionary-but-deleted-GO
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184** L_88 = ___refractionCamera2;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_89 = *((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184**)L_88);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_90;
		L_90 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_89, NULL);
		if (L_90)
		{
			goto IL_02db;
		}
	}
	{
		// GameObject go = new GameObject( "Water Refr Camera id" + GetInstanceID() + " for " + currentCamera.GetInstanceID(), typeof(Camera), typeof(Skybox) );
		int32_t L_91;
		L_91 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(__this, NULL);
		V_1 = L_91;
		String_t* L_92;
		L_92 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_93 = ___currentCamera0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_93, NULL);
		V_1 = L_94;
		String_t* L_95;
		L_95 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_96;
		L_96 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral798DA884BE88130097B9E5268B9DA22F8E576E95, L_92, _stringLiteralF422850993212057809CBD984B2F3DAEC17A02ED, L_95, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_97 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_98 = L_97;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_99 = { reinterpret_cast<intptr_t> (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_100;
		L_100 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_99, NULL);
		NullCheck(L_98);
		ArrayElementTypeCheck (L_98, L_100);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_100);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_101 = L_98;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_102 = { reinterpret_cast<intptr_t> (Skybox_tB3C6FDB5DCB4633B155B7A80045542B7C3388441_0_0_0_var) };
		Type_t* L_103;
		L_103 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_102, NULL);
		NullCheck(L_101);
		ArrayElementTypeCheck (L_101, L_103);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_103);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_104 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_104);
		GameObject__ctor_m721D643351E55308EA4F5F41B67D5446D11C61F0(L_104, L_96, L_101, NULL);
		V_3 = L_104;
		// refractionCamera = go.GetComponent<Camera>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184** L_105 = ___refractionCamera2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_106 = V_3;
		NullCheck(L_106);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_107;
		L_107 = GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6(L_106, GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var);
		*((RuntimeObject**)L_105) = (RuntimeObject*)L_107;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_105, (void*)(RuntimeObject*)L_107);
		// refractionCamera.enabled = false;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184** L_108 = ___refractionCamera2;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_109 = *((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184**)L_108);
		NullCheck(L_109);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_109, (bool)0, NULL);
		// refractionCamera.transform.position = transform.position;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184** L_110 = ___refractionCamera2;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_111 = *((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184**)L_110);
		NullCheck(L_111);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_112;
		L_112 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_111, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_113;
		L_113 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_113);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114;
		L_114 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_113, NULL);
		NullCheck(L_112);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_112, L_114, NULL);
		// refractionCamera.transform.rotation = transform.rotation;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184** L_115 = ___refractionCamera2;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_116 = *((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184**)L_115);
		NullCheck(L_116);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_117;
		L_117 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_116, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_118;
		L_118 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_118);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_119;
		L_119 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_118, NULL);
		NullCheck(L_117);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_117, L_119, NULL);
		// refractionCamera.gameObject.AddComponent<FlareLayer>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184** L_120 = ___refractionCamera2;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_121 = *((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184**)L_120);
		NullCheck(L_121);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_122;
		L_122 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_121, NULL);
		NullCheck(L_122);
		FlareLayer_t3C59D7C6F5A65AC1734D0CC1A92B464657936ABE* L_123;
		L_123 = GameObject_AddComponent_TisFlareLayer_t3C59D7C6F5A65AC1734D0CC1A92B464657936ABE_m419A7510064DE509FCA259992B80C3C44547C22E(L_122, GameObject_AddComponent_TisFlareLayer_t3C59D7C6F5A65AC1734D0CC1A92B464657936ABE_m419A7510064DE509FCA259992B80C3C44547C22E_RuntimeMethod_var);
		// go.hideFlags = HideFlags.HideAndDontSave;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_124 = V_3;
		NullCheck(L_124);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_124, ((int32_t)61), NULL);
		// m_RefractionCameras[currentCamera] = refractionCamera;
		Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192* L_125 = __this->___m_RefractionCameras_11;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_126 = ___currentCamera0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184** L_127 = ___refractionCamera2;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_128 = *((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184**)L_127);
		NullCheck(L_125);
		Dictionary_2_set_Item_mD8C30AF913A8F62839C214C596CA1AFCA100AFD1(L_125, L_126, L_128, Dictionary_2_set_Item_mD8C30AF913A8F62839C214C596CA1AFCA100AFD1_RuntimeMethod_var);
	}

IL_02db:
	{
		// }
		return;
	}
}
// Water/WaterMode Water::GetWaterMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Water_GetWaterMode_m14BC01C8794BBCA5EBA09EAAD716B6827D8ABB8C (Water_tA5654A18C7C4C258C0BB43725C80C8AD5163C433* __this, const RuntimeMethod* method) 
{
	{
		// if( m_HardwareWaterSupport < m_WaterMode )
		int32_t L_0 = __this->___m_HardwareWaterSupport_14;
		int32_t L_1 = __this->___m_WaterMode_4;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0015;
		}
	}
	{
		// return m_HardwareWaterSupport;
		int32_t L_2 = __this->___m_HardwareWaterSupport_14;
		return L_2;
	}

IL_0015:
	{
		// return m_WaterMode;
		int32_t L_3 = __this->___m_WaterMode_4;
		return L_3;
	}
}
// Water/WaterMode Water::FindHardwareWaterSupport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Water_FindHardwareWaterSupport_mE0C42627301719B2B7041DFAAC1551AFEE881FA2 (Water_tA5654A18C7C4C258C0BB43725C80C8AD5163C433* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B81399C6C72C116CB60D03A84F2AAFEC72EA05B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D4DC92AF6B7EBC3730400A034A822ABED60EB00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC3ED90F173A7E046F311B685B910BC908BB7AE0);
		s_Il2CppMethodInitialized = true;
	}
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// if( !SystemInfo.supportsRenderTextures || !GetComponent<Renderer>() )
		bool L_0;
		L_0 = SystemInfo_get_supportsRenderTextures_mAA77A17E5351772E7FE0E5A295448BA64131F105(NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_1;
		L_1 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (L_2)
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		// return WaterMode.Simple;
		return (int32_t)(0);
	}

IL_0016:
	{
		// Material mat = GetComponent<Renderer>().sharedMaterial;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3;
		L_3 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_3);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4;
		L_4 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_3, NULL);
		V_0 = L_4;
		// if( !mat )
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_5, NULL);
		if (L_6)
		{
			goto IL_002c;
		}
	}
	{
		// return WaterMode.Simple;
		return (int32_t)(0);
	}

IL_002c:
	{
		// string mode = mat.GetTag("WATERMODE", false);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = Material_GetTag_m0B37070270E231B88808DB1B3F9EF4C1851627D4(L_7, _stringLiteral4B81399C6C72C116CB60D03A84F2AAFEC72EA05B, (bool)0, NULL);
		V_1 = L_8;
		// if( mode == "Refractive" )
		String_t* L_9 = V_1;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteralDC3ED90F173A7E046F311B685B910BC908BB7AE0, NULL);
		if (!L_10)
		{
			goto IL_0048;
		}
	}
	{
		// return WaterMode.Refractive;
		return (int32_t)(2);
	}

IL_0048:
	{
		// if( mode == "Reflective" )
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral4D4DC92AF6B7EBC3730400A034A822ABED60EB00, NULL);
		if (!L_12)
		{
			goto IL_0057;
		}
	}
	{
		// return WaterMode.Reflective;
		return (int32_t)(1);
	}

IL_0057:
	{
		// return WaterMode.Simple;
		return (int32_t)(0);
	}
}
// System.Single Water::sgn(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Water_sgn_mE05339E033240E6A15DB10114FC26778C56EECC4 (float ___a0, const RuntimeMethod* method) 
{
	{
		// if (a > 0.0f) return 1.0f;
		float L_0 = ___a0;
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_000e;
		}
	}
	{
		// if (a > 0.0f) return 1.0f;
		return (1.0f);
	}

IL_000e:
	{
		// if (a < 0.0f) return -1.0f;
		float L_1 = ___a0;
		if ((!(((float)L_1) < ((float)(0.0f)))))
		{
			goto IL_001c;
		}
	}
	{
		// if (a < 0.0f) return -1.0f;
		return (-1.0f);
	}

IL_001c:
	{
		// return 0.0f;
		return (0.0f);
	}
}
// UnityEngine.Vector4 Water::CameraSpacePlane(UnityEngine.Camera,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Water_CameraSpacePlane_m62B2094A8FFC1269B00EA58CBB70698BD1AF0EDD (Water_tA5654A18C7C4C258C0BB43725C80C8AD5163C433* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal2, float ___sideSign3, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// Vector3 offsetPos = pos + normal * m_ClipPlaneOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___pos1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___normal2;
		float L_2 = __this->___m_ClipPlaneOffset_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_0, L_3, NULL);
		V_0 = L_4;
		// Matrix4x4 m = cam.worldToCameraMatrix;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = ___cam0;
		NullCheck(L_5);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6;
		L_6 = Camera_get_worldToCameraMatrix_m48E324BD76706A316A1701EFC6A3DEC7DFB2FF40(L_5, NULL);
		V_1 = L_6;
		// Vector3 cpos = m.MultiplyPoint( offsetPos );
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Matrix4x4_MultiplyPoint_m20E910B65693559BFDE99382472D8DD02C862E7E((&V_1), L_7, NULL);
		V_2 = L_8;
		// Vector3 cnormal = m.MultiplyVector( normal ).normalized * sideSign;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___normal2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Matrix4x4_MultiplyVector_mFD12F86A473E90BBB0002149ABA3917B2A518937((&V_1), L_9, NULL);
		V_4 = L_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_4), NULL);
		float L_12 = ___sideSign3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_11, L_12, NULL);
		V_3 = L_13;
		// return new Vector4( cnormal.x, cnormal.y, cnormal.z, -Vector3.Dot(cpos,cnormal) );
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_3;
		float L_15 = L_14.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_3;
		float L_17 = L_16.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_3;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_3;
		float L_22;
		L_22 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_20, L_21, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_23), L_15, L_17, L_19, ((-L_22)), /*hidden argument*/NULL);
		return L_23;
	}
}
// System.Void Water::CalculateObliqueMatrix(UnityEngine.Matrix4x4&,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Water_CalculateObliqueMatrix_mE63F5D558BE88CD4CBEBAB1F6639FDDA31C6F994 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___projection0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___clipPlane1, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector4 q = projection.inverse * new Vector4(
		//     sgn(clipPlane.x),
		//     sgn(clipPlane.y),
		//     1.0f,
		//     1.0f
		// );
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_0 = ___projection0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1;
		L_1 = Matrix4x4_get_inverse_m4F4A881CD789281EA90EB68CFD39F36C8A81E6BD(L_0, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___clipPlane1;
		float L_3 = L_2.___x_1;
		float L_4;
		L_4 = Water_sgn_mE05339E033240E6A15DB10114FC26778C56EECC4(L_3, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5 = ___clipPlane1;
		float L_6 = L_5.___y_2;
		float L_7;
		L_7 = Water_sgn_mE05339E033240E6A15DB10114FC26778C56EECC4(L_6, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_8), L_4, L_7, (1.0f), (1.0f), /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9;
		L_9 = Matrix4x4_op_Multiply_m319DF5B7DD9C9499EB8A5682FA63B1AAF0EE87A4(L_1, L_8, NULL);
		V_0 = L_9;
		// Vector4 c = clipPlane * (2.0F / (Vector4.Dot (clipPlane, q)));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___clipPlane1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11 = ___clipPlane1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = V_0;
		float L_13;
		L_13 = Vector4_Dot_m40A3B2E258E53E4847583474E40AC29F68AF8BA3_inline(L_11, L_12, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14;
		L_14 = Vector4_op_Multiply_m02FE150FD7366546FC19A36B6928512376BF64E8_inline(L_10, ((float)((2.0f)/L_13)), NULL);
		V_1 = L_14;
		// projection[2] = c.x - projection[3];
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_15 = ___projection0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_16 = V_1;
		float L_17 = L_16.___x_1;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_18 = ___projection0;
		float L_19;
		L_19 = Matrix4x4_get_Item_m771C2EE3A3BFFBAC9F2AD07FFCAAF6146C1BE92A(L_18, 3, NULL);
		Matrix4x4_set_Item_m47C4DDBFAE6578D6008AEF433777D4B2FACB62B0(L_15, 2, ((float)il2cpp_codegen_subtract(L_17, L_19)), NULL);
		// projection[6] = c.y - projection[7];
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_20 = ___projection0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_21 = V_1;
		float L_22 = L_21.___y_2;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_23 = ___projection0;
		float L_24;
		L_24 = Matrix4x4_get_Item_m771C2EE3A3BFFBAC9F2AD07FFCAAF6146C1BE92A(L_23, 7, NULL);
		Matrix4x4_set_Item_m47C4DDBFAE6578D6008AEF433777D4B2FACB62B0(L_20, 6, ((float)il2cpp_codegen_subtract(L_22, L_24)), NULL);
		// projection[10] = c.z - projection[11];
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_25 = ___projection0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_26 = V_1;
		float L_27 = L_26.___z_3;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_28 = ___projection0;
		float L_29;
		L_29 = Matrix4x4_get_Item_m771C2EE3A3BFFBAC9F2AD07FFCAAF6146C1BE92A(L_28, ((int32_t)11), NULL);
		Matrix4x4_set_Item_m47C4DDBFAE6578D6008AEF433777D4B2FACB62B0(L_25, ((int32_t)10), ((float)il2cpp_codegen_subtract(L_27, L_29)), NULL);
		// projection[14] = c.w - projection[15];
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_30 = ___projection0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_31 = V_1;
		float L_32 = L_31.___w_4;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_33 = ___projection0;
		float L_34;
		L_34 = Matrix4x4_get_Item_m771C2EE3A3BFFBAC9F2AD07FFCAAF6146C1BE92A(L_33, ((int32_t)15), NULL);
		Matrix4x4_set_Item_m47C4DDBFAE6578D6008AEF433777D4B2FACB62B0(L_30, ((int32_t)14), ((float)il2cpp_codegen_subtract(L_32, L_34)), NULL);
		// }
		return;
	}
}
// System.Void Water::CalculateReflectionMatrix(UnityEngine.Matrix4x4&,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Water_CalculateReflectionMatrix_mBB9A733EFCF764937D43A4675665DAFAE3E83219 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___reflectionMat0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___plane1, const RuntimeMethod* method) 
{
	{
		// reflectionMat.m00 = (1F - 2F*plane[0]*plane[0]);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_0 = ___reflectionMat0;
		float L_1;
		L_1 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 0, NULL);
		float L_2;
		L_2 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 0, NULL);
		L_0->___m00_0 = ((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((2.0f), L_1)), L_2))));
		// reflectionMat.m01 = (   - 2F*plane[0]*plane[1]);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_3 = ___reflectionMat0;
		float L_4;
		L_4 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 0, NULL);
		float L_5;
		L_5 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 1, NULL);
		L_3->___m01_4 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((-2.0f), L_4)), L_5));
		// reflectionMat.m02 = (   - 2F*plane[0]*plane[2]);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_6 = ___reflectionMat0;
		float L_7;
		L_7 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 0, NULL);
		float L_8;
		L_8 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 2, NULL);
		L_6->___m02_8 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((-2.0f), L_7)), L_8));
		// reflectionMat.m03 = (   - 2F*plane[3]*plane[0]);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_9 = ___reflectionMat0;
		float L_10;
		L_10 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 3, NULL);
		float L_11;
		L_11 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 0, NULL);
		L_9->___m03_12 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((-2.0f), L_10)), L_11));
		// reflectionMat.m10 = (   - 2F*plane[1]*plane[0]);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_12 = ___reflectionMat0;
		float L_13;
		L_13 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 1, NULL);
		float L_14;
		L_14 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 0, NULL);
		L_12->___m10_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((-2.0f), L_13)), L_14));
		// reflectionMat.m11 = (1F - 2F*plane[1]*plane[1]);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_15 = ___reflectionMat0;
		float L_16;
		L_16 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 1, NULL);
		float L_17;
		L_17 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 1, NULL);
		L_15->___m11_5 = ((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((2.0f), L_16)), L_17))));
		// reflectionMat.m12 = (   - 2F*plane[1]*plane[2]);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_18 = ___reflectionMat0;
		float L_19;
		L_19 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 1, NULL);
		float L_20;
		L_20 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 2, NULL);
		L_18->___m12_9 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((-2.0f), L_19)), L_20));
		// reflectionMat.m13 = (   - 2F*plane[3]*plane[1]);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_21 = ___reflectionMat0;
		float L_22;
		L_22 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 3, NULL);
		float L_23;
		L_23 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 1, NULL);
		L_21->___m13_13 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((-2.0f), L_22)), L_23));
		// reflectionMat.m20 = (   - 2F*plane[2]*plane[0]);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_24 = ___reflectionMat0;
		float L_25;
		L_25 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 2, NULL);
		float L_26;
		L_26 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 0, NULL);
		L_24->___m20_2 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((-2.0f), L_25)), L_26));
		// reflectionMat.m21 = (   - 2F*plane[2]*plane[1]);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_27 = ___reflectionMat0;
		float L_28;
		L_28 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 2, NULL);
		float L_29;
		L_29 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 1, NULL);
		L_27->___m21_6 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((-2.0f), L_28)), L_29));
		// reflectionMat.m22 = (1F - 2F*plane[2]*plane[2]);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_30 = ___reflectionMat0;
		float L_31;
		L_31 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 2, NULL);
		float L_32;
		L_32 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 2, NULL);
		L_30->___m22_10 = ((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((2.0f), L_31)), L_32))));
		// reflectionMat.m23 = (   - 2F*plane[3]*plane[2]);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_33 = ___reflectionMat0;
		float L_34;
		L_34 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 3, NULL);
		float L_35;
		L_35 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 2, NULL);
		L_33->___m23_14 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((-2.0f), L_34)), L_35));
		// reflectionMat.m30 = 0F;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_36 = ___reflectionMat0;
		L_36->___m30_3 = (0.0f);
		// reflectionMat.m31 = 0F;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_37 = ___reflectionMat0;
		L_37->___m31_7 = (0.0f);
		// reflectionMat.m32 = 0F;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_38 = ___reflectionMat0;
		L_38->___m32_11 = (0.0f);
		// reflectionMat.m33 = 1F;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_39 = ___reflectionMat0;
		L_39->___m33_15 = (1.0f);
		// }
		return;
	}
}
// System.Void Water::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Water__ctor_m39BD6E49B74929BAB39A81C4A4A7DDFFC5C8146F (Water_tA5654A18C7C4C258C0BB43725C80C8AD5163C433* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mCC86EBF40667A343EA2CBB31F715245A4A6417E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WaterMode m_WaterMode = WaterMode.Refractive;
		__this->___m_WaterMode_4 = 2;
		// public bool m_DisablePixelLights = true;
		__this->___m_DisablePixelLights_5 = (bool)1;
		// public int m_TextureSize = 256;
		__this->___m_TextureSize_6 = ((int32_t)256);
		// public float m_ClipPlaneOffset = 0.07f;
		__this->___m_ClipPlaneOffset_7 = (0.0700000003f);
		// public LayerMask m_ReflectLayers = -1;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0;
		L_0 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222((-1), NULL);
		__this->___m_ReflectLayers_8 = L_0;
		// public LayerMask m_RefractLayers = -1;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_1;
		L_1 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222((-1), NULL);
		__this->___m_RefractLayers_9 = L_1;
		// private Dictionary<Camera, Camera> m_ReflectionCameras = new Dictionary<Camera, Camera>(); // Camera -> Camera table
		Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192* L_2 = (Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192*)il2cpp_codegen_object_new(Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_mCC86EBF40667A343EA2CBB31F715245A4A6417E0(L_2, Dictionary_2__ctor_mCC86EBF40667A343EA2CBB31F715245A4A6417E0_RuntimeMethod_var);
		__this->___m_ReflectionCameras_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ReflectionCameras_10), (void*)L_2);
		// private Dictionary<Camera, Camera> m_RefractionCameras = new Dictionary<Camera, Camera>(); // Camera -> Camera table
		Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192* L_3 = (Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192*)il2cpp_codegen_object_new(Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Dictionary_2__ctor_mCC86EBF40667A343EA2CBB31F715245A4A6417E0(L_3, Dictionary_2__ctor_mCC86EBF40667A343EA2CBB31F715245A4A6417E0_RuntimeMethod_var);
		__this->___m_RefractionCameras_11 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RefractionCameras_11), (void*)L_3);
		// private WaterMode m_HardwareWaterSupport = WaterMode.Refractive;
		__this->___m_HardwareWaterSupport_14 = 2;
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
// System.Void Displace::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Displace_Awake_mF2D29448F1C1821A29EAB49BF2587F9AB4B4E6FF (Displace_tD42FF28A123509D1C01B7D2175EAF447F16B31DE* __this, const RuntimeMethod* method) 
{
	{
		// if (enabled)
		bool L_0;
		L_0 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(__this, NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// OnEnable();
		Displace_OnEnable_mEC28F406471F00F28E835B8013BE2EB47D31D0D9(__this, NULL);
		return;
	}

IL_000f:
	{
		// OnDisable();
		Displace_OnDisable_m05B3533D4DB3FF318FB47B615B1FC3E0CC884CBE(__this, NULL);
		// }
		return;
	}
}
// System.Void Displace::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Displace_OnEnable_mEC28F406471F00F28E835B8013BE2EB47D31D0D9 (Displace_tD42FF28A123509D1C01B7D2175EAF447F16B31DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59CBBECC76604B5A4F56CF4DBD545D276503BC9B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA71CB72F1F8336BCCB7AB1FD3AC7AB1180B5010D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Shader.EnableKeyword("WATER_VERTEX_DISPLACEMENT_ON");
		Shader_EnableKeyword_m2449D6D86962FA7F5D1ED2B165EF63B019CBCCF1(_stringLiteralA71CB72F1F8336BCCB7AB1FD3AC7AB1180B5010D, NULL);
		// Shader.DisableKeyword("WATER_VERTEX_DISPLACEMENT_OFF");
		Shader_DisableKeyword_m20FCB3643CD53D86E46DA431DA971E59D49DAF88(_stringLiteral59CBBECC76604B5A4F56CF4DBD545D276503BC9B, NULL);
		// }
		return;
	}
}
// System.Void Displace::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Displace_OnDisable_m05B3533D4DB3FF318FB47B615B1FC3E0CC884CBE (Displace_tD42FF28A123509D1C01B7D2175EAF447F16B31DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59CBBECC76604B5A4F56CF4DBD545D276503BC9B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA71CB72F1F8336BCCB7AB1FD3AC7AB1180B5010D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Shader.EnableKeyword("WATER_VERTEX_DISPLACEMENT_OFF");
		Shader_EnableKeyword_m2449D6D86962FA7F5D1ED2B165EF63B019CBCCF1(_stringLiteral59CBBECC76604B5A4F56CF4DBD545D276503BC9B, NULL);
		// Shader.DisableKeyword("WATER_VERTEX_DISPLACEMENT_ON");
		Shader_DisableKeyword_m20FCB3643CD53D86E46DA431DA971E59D49DAF88(_stringLiteralA71CB72F1F8336BCCB7AB1FD3AC7AB1180B5010D, NULL);
		// }
		return;
	}
}
// System.Void Displace::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Displace__ctor_mB9FFBD9F00557B9D6DC0E4D6BB90543E16F2AA8D (Displace_tD42FF28A123509D1C01B7D2175EAF447F16B31DE* __this, const RuntimeMethod* method) 
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
// System.Void GerstnerDisplace::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GerstnerDisplace__ctor_mFA23F12D19F884701007306FD21E935E4D390A0D (GerstnerDisplace_tA8C9FAAD1008E373ED082D8C5C5663CC5B5FB4D2* __this, const RuntimeMethod* method) 
{
	{
		Displace__ctor_mB9FFBD9F00557B9D6DC0E4D6BB90543E16F2AA8D(__this, NULL);
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
// System.Void MeshContainer::.ctor(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshContainer__ctor_m4072D9CC30550324DD39B0BA0835BCA84EF2ED2B (MeshContainer_t1D43C0A7153BE5DCB216034E4E8F2F72187B3453* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m0, const RuntimeMethod* method) 
{
	{
		// public MeshContainer(Mesh m) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// mesh = m;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = ___m0;
		__this->___mesh_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mesh_0), (void*)L_0);
		// vertices = m.vertices;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_1 = ___m0;
		NullCheck(L_1);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2;
		L_2 = Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9(L_1, NULL);
		__this->___vertices_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___vertices_1), (void*)L_2);
		// normals = m.normals;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_3 = ___m0;
		NullCheck(L_3);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4;
		L_4 = Mesh_get_normals_m2B6B159B799E6E235EA651FCAB2E18EE5B18ED62(L_3, NULL);
		__this->___normals_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___normals_2), (void*)L_4);
		// }
		return;
	}
}
// System.Void MeshContainer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshContainer_Update_m79EC2245202C434537D3E80A95C837CF93E1139A (MeshContainer_t1D43C0A7153BE5DCB216034E4E8F2F72187B3453* __this, const RuntimeMethod* method) 
{
	{
		// mesh.vertices = vertices;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = __this->___mesh_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = __this->___vertices_1;
		NullCheck(L_0);
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_0, L_1, NULL);
		// mesh.normals = normals;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_2 = __this->___mesh_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = __this->___normals_2;
		NullCheck(L_2);
		Mesh_set_normals_m85D73193C49211BE9FA135FF72D5749B16A4760B(L_2, L_3, NULL);
		// }
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
// System.Void PlanarReflection::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflection_Start_m5FD872637481606B6C24DB19DD963F808E7063A7 (PlanarReflection_t01C9F7773DB42C71EABA687BD37C7C8BD0679249* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaterBase_t8D07B5BBBD1C82666F71EDF26C12BF03B39A79EA_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaterBase_t8D07B5BBBD1C82666F71EDF26C12BF03B39A79EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sharedMaterial = ((WaterBase)gameObject.GetComponent(typeof(WaterBase))).sharedMaterial;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (WaterBase_t8D07B5BBBD1C82666F71EDF26C12BF03B39A79EA_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		NullCheck(L_0);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_3;
		L_3 = GameObject_GetComponent_m99E12753EA84947521DC711CA33F452B5E65B474(L_0, L_2, NULL);
		NullCheck(((WaterBase_t8D07B5BBBD1C82666F71EDF26C12BF03B39A79EA*)CastclassClass((RuntimeObject*)L_3, WaterBase_t8D07B5BBBD1C82666F71EDF26C12BF03B39A79EA_il2cpp_TypeInfo_var)));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = ((WaterBase_t8D07B5BBBD1C82666F71EDF26C12BF03B39A79EA*)CastclassClass((RuntimeObject*)L_3, WaterBase_t8D07B5BBBD1C82666F71EDF26C12BF03B39A79EA_il2cpp_TypeInfo_var))->___sharedMaterial_4;
		__this->___sharedMaterial_11 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sharedMaterial_11), (void*)L_4);
		// }
		return;
	}
}
// UnityEngine.Camera PlanarReflection::CreateReflectionCameraFor(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* PlanarReflection_CreateReflectionCameraFor_m03D132C67254E036B77E053EB5E3A5A30D0722BB (PlanarReflection_t01C9F7773DB42C71EABA687BD37C7C8BD0679249* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71E2151BF75F822D32529B598E65CB2CF534C8BD);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_2 = NULL;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* G_B6_0 = NULL;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* G_B7_1 = NULL;
	{
		// System.String reflName = gameObject.name+"Reflection"+cam.name;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = ___cam0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_1, _stringLiteral71E2151BF75F822D32529B598E65CB2CF534C8BD, L_3, NULL);
		V_0 = L_4;
		// GameObject go = GameObject.Find(reflName);
		String_t* L_5 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(L_5, NULL);
		V_1 = L_6;
		// if(!go)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_7, NULL);
		if (L_8)
		{
			goto IL_0045;
		}
	}
	{
		// go = new GameObject(reflName, typeof(Camera));
		String_t* L_9 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_10 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_11 = L_10;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		GameObject__ctor_m721D643351E55308EA4F5F41B67D5446D11C61F0(L_14, L_9, L_11, NULL);
		V_1 = L_14;
	}

IL_0045:
	{
		// if(!go.GetComponent(typeof(Camera)))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		NullCheck(L_15);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_18;
		L_18 = GameObject_GetComponent_m99E12753EA84947521DC711CA33F452B5E65B474(L_15, L_17, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_18, NULL);
		if (L_19)
		{
			goto IL_006d;
		}
	}
	{
		// go.AddComponent(typeof(Camera));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		NullCheck(L_20);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_23;
		L_23 = GameObject_AddComponent_mDF246771EC34613FA6AF0C98D443368FB43E9F36(L_20, L_22, NULL);
	}

IL_006d:
	{
		// Camera reflectCamera = go.GetComponent<Camera>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = V_1;
		NullCheck(L_24);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_25;
		L_25 = GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6(L_24, GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var);
		V_2 = L_25;
		// reflectCamera.backgroundColor = clearColor;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_26 = V_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = __this->___clearColor_6;
		NullCheck(L_26);
		Camera_set_backgroundColor_m036FD8C316A93A0B168ACC89AFF16D396B872138(L_26, L_27, NULL);
		// reflectCamera.clearFlags = reflectSkybox ? CameraClearFlags.Skybox : CameraClearFlags.SolidColor;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_28 = V_2;
		bool L_29 = __this->___reflectSkybox_5;
		G_B5_0 = L_28;
		if (L_29)
		{
			G_B6_0 = L_28;
			goto IL_008c;
		}
	}
	{
		G_B7_0 = 2;
		G_B7_1 = G_B5_0;
		goto IL_008d;
	}

IL_008c:
	{
		G_B7_0 = 1;
		G_B7_1 = G_B6_0;
	}

IL_008d:
	{
		NullCheck(G_B7_1);
		Camera_set_clearFlags_m66541D9CC43CBAA5FE7364A50D43CA5569FD4D93(G_B7_1, G_B7_0, NULL);
		// SetStandardCameraParameter(reflectCamera,reflectionMask);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_30 = V_2;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_31 = __this->___reflectionMask_4;
		PlanarReflection_SetStandardCameraParameter_m27AD2543516D6C715E00C0DD8601C56870D992D4(__this, L_30, L_31, NULL);
		// if(!reflectCamera.targetTexture)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_32 = V_2;
		NullCheck(L_32);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_33;
		L_33 = Camera_get_targetTexture_mC856D7FF8351476068D04E245E4F08F5C56A55BD(L_32, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_33, NULL);
		if (L_34)
		{
			goto IL_00b9;
		}
	}
	{
		// reflectCamera.targetTexture = CreateTextureFor(cam);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_35 = V_2;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_36 = ___cam0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_37;
		L_37 = PlanarReflection_CreateTextureFor_m5CAB5328AADABD73C6CF2E5604E0782B2E4A83EB(__this, L_36, NULL);
		NullCheck(L_35);
		Camera_set_targetTexture_mE6C740F21A72DA47FB5B1D31D208710738A836C4(L_35, L_37, NULL);
	}

IL_00b9:
	{
		// return reflectCamera;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_38 = V_2;
		return L_38;
	}
}
// System.Void PlanarReflection::SetStandardCameraParameter(UnityEngine.Camera,UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflection_SetStandardCameraParameter_m27AD2543516D6C715E00C0DD8601C56870D992D4 (PlanarReflection_t01C9F7773DB42C71EABA687BD37C7C8BD0679249* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam0, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46580D65357E6BC22728934BD6BC047227EFE0E6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cam.cullingMask = mask & ~(1<<LayerMask.NameToLayer("Water"));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___cam0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_1 = ___mask1;
		int32_t L_2;
		L_2 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_1, NULL);
		int32_t L_3;
		L_3 = LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139(_stringLiteral46580D65357E6BC22728934BD6BC047227EFE0E6, NULL);
		NullCheck(L_0);
		Camera_set_cullingMask_m14F426710530BA8FA53AEC02F79C418AA558CB32(L_0, ((int32_t)(L_2&((~((int32_t)(1<<((int32_t)(L_3&((int32_t)31))))))))), NULL);
		// cam.backgroundColor = Color.black;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = ___cam0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		NullCheck(L_4);
		Camera_set_backgroundColor_m036FD8C316A93A0B168ACC89AFF16D396B872138(L_4, L_5, NULL);
		// cam.enabled = false;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = ___cam0;
		NullCheck(L_6);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_6, (bool)0, NULL);
		// }
		return;
	}
}
// UnityEngine.RenderTexture PlanarReflection::CreateTextureFor(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* PlanarReflection_CreateTextureFor_m5CAB5328AADABD73C6CF2E5604E0782B2E4A83EB (PlanarReflection_t01C9F7773DB42C71EABA687BD37C7C8BD0679249* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RenderTexture rt = new RenderTexture(Mathf.FloorToInt(cam.pixelWidth*0.5F), Mathf.FloorToInt(cam.pixelHeight*0.5F), 24);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___cam0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Camera_get_pixelWidth_m55AC8AD744FC0179865C2E630C68F9AD0799065D(L_0, NULL);
		int32_t L_2;
		L_2 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(((float)il2cpp_codegen_multiply(((float)L_1), (0.5f))), NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = ___cam0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Camera_get_pixelHeight_m00881B5A440B0018D5A8F837694027050B500F59(L_3, NULL);
		int32_t L_5;
		L_5 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(((float)il2cpp_codegen_multiply(((float)L_4), (0.5f))), NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)il2cpp_codegen_object_new(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		RenderTexture__ctor_m45EACC89DDF408948889586516B3CA7AA8B73BFA(L_6, L_2, L_5, ((int32_t)24), NULL);
		// rt.hideFlags = HideFlags.DontSave;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_7 = L_6;
		NullCheck(L_7);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_7, ((int32_t)52), NULL);
		// return rt;
		return L_7;
	}
}
// System.Void PlanarReflection::RenderHelpCameras(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflection_RenderHelpCameras_m8CC0B3C9437472EF32CAB52927F74E7EA5B0C0AB (PlanarReflection_t01C9F7773DB42C71EABA687BD37C7C8BD0679249* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___currentCam0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5A0C77623E27D33EF51E8874C1FC4740C6EC748E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mF851A106660DB5B20BF9F137E8523AFEF8582D18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m8073AFCB144A96589548ACD600418E381CDD0505_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE7FE4DCD7D1D6FED31F331F5913A71852404CF07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mE5074004B30CDC63968F7CBED61C3CAF2138B910_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t57B517077AAE444D29577C0761ECF606105926AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (null == helperCameras)
		Dictionary_2_t57B517077AAE444D29577C0761ECF606105926AE* L_0 = __this->___helperCameras_12;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// helperCameras = new Dictionary<Camera, bool>();
		Dictionary_2_t57B517077AAE444D29577C0761ECF606105926AE* L_1 = (Dictionary_2_t57B517077AAE444D29577C0761ECF606105926AE*)il2cpp_codegen_object_new(Dictionary_2_t57B517077AAE444D29577C0761ECF606105926AE_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m8073AFCB144A96589548ACD600418E381CDD0505(L_1, Dictionary_2__ctor_m8073AFCB144A96589548ACD600418E381CDD0505_RuntimeMethod_var);
		__this->___helperCameras_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___helperCameras_12), (void*)L_1);
	}

IL_0013:
	{
		// if(!helperCameras.ContainsKey(currentCam)) {
		Dictionary_2_t57B517077AAE444D29577C0761ECF606105926AE* L_2 = __this->___helperCameras_12;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = ___currentCam0;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_ContainsKey_mF851A106660DB5B20BF9F137E8523AFEF8582D18(L_2, L_3, Dictionary_2_ContainsKey_mF851A106660DB5B20BF9F137E8523AFEF8582D18_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		// helperCameras.Add(currentCam, false);
		Dictionary_2_t57B517077AAE444D29577C0761ECF606105926AE* L_5 = __this->___helperCameras_12;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = ___currentCam0;
		NullCheck(L_5);
		Dictionary_2_Add_m5A0C77623E27D33EF51E8874C1FC4740C6EC748E(L_5, L_6, (bool)0, Dictionary_2_Add_m5A0C77623E27D33EF51E8874C1FC4740C6EC748E_RuntimeMethod_var);
	}

IL_002e:
	{
		// if(helperCameras[currentCam]) {
		Dictionary_2_t57B517077AAE444D29577C0761ECF606105926AE* L_7 = __this->___helperCameras_12;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8 = ___currentCam0;
		NullCheck(L_7);
		bool L_9;
		L_9 = Dictionary_2_get_Item_mE7FE4DCD7D1D6FED31F331F5913A71852404CF07(L_7, L_8, Dictionary_2_get_Item_mE7FE4DCD7D1D6FED31F331F5913A71852404CF07_RuntimeMethod_var);
		if (!L_9)
		{
			goto IL_003d;
		}
	}
	{
		// return;
		return;
	}

IL_003d:
	{
		// if(!reflectionCamera)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_10 = __this->___reflectionCamera_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_10, NULL);
		if (L_11)
		{
			goto IL_0057;
		}
	}
	{
		// reflectionCamera = CreateReflectionCameraFor(currentCam);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_12 = ___currentCam0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_13;
		L_13 = PlanarReflection_CreateReflectionCameraFor_m03D132C67254E036B77E053EB5E3A5A30D0722BB(__this, L_12, NULL);
		__this->___reflectionCamera_10 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reflectionCamera_10), (void*)L_13);
	}

IL_0057:
	{
		// RenderReflectionFor(currentCam, reflectionCamera);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_14 = ___currentCam0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_15 = __this->___reflectionCamera_10;
		PlanarReflection_RenderReflectionFor_m34771F975824C9FD4060AC15D659C9CE06BF8E58(__this, L_14, L_15, NULL);
		// helperCameras[currentCam] = true;
		Dictionary_2_t57B517077AAE444D29577C0761ECF606105926AE* L_16 = __this->___helperCameras_12;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_17 = ___currentCam0;
		NullCheck(L_16);
		Dictionary_2_set_Item_mE5074004B30CDC63968F7CBED61C3CAF2138B910(L_16, L_17, (bool)1, Dictionary_2_set_Item_mE5074004B30CDC63968F7CBED61C3CAF2138B910_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void PlanarReflection::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflection_LateUpdate_mFC0B3A49A0C7D6A34F9FDF9DBB8200663B069EBC (PlanarReflection_t01C9F7773DB42C71EABA687BD37C7C8BD0679249* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m99F3AA70A9133B80B7116E3B6ADA49E91BF124AE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (null != helperCameras)
		Dictionary_2_t57B517077AAE444D29577C0761ECF606105926AE* L_0 = __this->___helperCameras_12;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// helperCameras.Clear();
		Dictionary_2_t57B517077AAE444D29577C0761ECF606105926AE* L_1 = __this->___helperCameras_12;
		NullCheck(L_1);
		Dictionary_2_Clear_m99F3AA70A9133B80B7116E3B6ADA49E91BF124AE(L_1, Dictionary_2_Clear_m99F3AA70A9133B80B7116E3B6ADA49E91BF124AE_RuntimeMethod_var);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void PlanarReflection::WaterTileBeingRendered(UnityEngine.Transform,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflection_WaterTileBeingRendered_m93AD050506974E9D6F39BBA70CF230C61AE03380 (PlanarReflection_t01C9F7773DB42C71EABA687BD37C7C8BD0679249* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___tr0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___currentCam1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RenderHelpCameras(currentCam);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___currentCam1;
		PlanarReflection_RenderHelpCameras_m8CC0B3C9437472EF32CAB52927F74E7EA5B0C0AB(__this, L_0, NULL);
		// if(reflectionCamera && sharedMaterial) {
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = __this->___reflectionCamera_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->___sharedMaterial_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		// sharedMaterial.SetTexture(reflectionSampler, reflectionCamera.targetTexture);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___sharedMaterial_11;
		String_t* L_6 = __this->___reflectionSampler_7;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7 = __this->___reflectionCamera_10;
		NullCheck(L_7);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_8;
		L_8 = Camera_get_targetTexture_mC856D7FF8351476068D04E245E4F08F5C56A55BD(L_7, NULL);
		NullCheck(L_5);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_5, L_6, L_8, NULL);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void PlanarReflection::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflection_OnEnable_m1DFC30510887ADCEAEBE552344C593C6C313B5A3 (PlanarReflection_t01C9F7773DB42C71EABA687BD37C7C8BD0679249* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E95A42E4D201338C7B575F7A000B10917104E6D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAD18F553E14FBD4BD1D57B89FFE0F7680479FE6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Shader.EnableKeyword("WATER_REFLECTIVE");
		Shader_EnableKeyword_m2449D6D86962FA7F5D1ED2B165EF63B019CBCCF1(_stringLiteral2E95A42E4D201338C7B575F7A000B10917104E6D, NULL);
		// Shader.DisableKeyword("WATER_SIMPLE");
		Shader_DisableKeyword_m20FCB3643CD53D86E46DA431DA971E59D49DAF88(_stringLiteralEAD18F553E14FBD4BD1D57B89FFE0F7680479FE6, NULL);
		// }
		return;
	}
}
// System.Void PlanarReflection::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflection_OnDisable_mAD0740534D86690A9BC5CAEF9BFA0CAD7D6FC1F1 (PlanarReflection_t01C9F7773DB42C71EABA687BD37C7C8BD0679249* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E95A42E4D201338C7B575F7A000B10917104E6D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAD18F553E14FBD4BD1D57B89FFE0F7680479FE6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Shader.EnableKeyword("WATER_SIMPLE");
		Shader_EnableKeyword_m2449D6D86962FA7F5D1ED2B165EF63B019CBCCF1(_stringLiteralEAD18F553E14FBD4BD1D57B89FFE0F7680479FE6, NULL);
		// Shader.DisableKeyword("WATER_REFLECTIVE");
		Shader_DisableKeyword_m20FCB3643CD53D86E46DA431DA971E59D49DAF88(_stringLiteral2E95A42E4D201338C7B575F7A000B10917104E6D, NULL);
		// }
		return;
	}
}
// System.Void PlanarReflection::RenderReflectionFor(UnityEngine.Camera,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflection_RenderReflectionFor_m34771F975824C9FD4060AC15D659C9CE06BF8E58 (PlanarReflection_t01C9F7773DB42C71EABA687BD37C7C8BD0679249* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___reflectCamera1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Skybox_tB3C6FDB5DCB4633B155B7A80045542B7C3388441_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Skybox_tB3C6FDB5DCB4633B155B7A80045542B7C3388441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46580D65357E6BC22728934BD6BC047227EFE0E6);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Skybox_tB3C6FDB5DCB4633B155B7A80045542B7C3388441* V_11 = NULL;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* G_B7_0 = NULL;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* G_B8_1 = NULL;
	{
		// if(!reflectCamera)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___reflectCamera1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if(sharedMaterial && !sharedMaterial.HasProperty(reflectionSampler)) {
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___sharedMaterial_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___sharedMaterial_11;
		String_t* L_5 = __this->___reflectionSampler_7;
		NullCheck(L_4);
		bool L_6;
		L_6 = Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C(L_4, L_5, NULL);
		if (L_6)
		{
			goto IL_002a;
		}
	}
	{
		// return;
		return;
	}

IL_002a:
	{
		// reflectCamera.cullingMask = reflectionMask & ~(1<<LayerMask.NameToLayer("Water"));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7 = ___reflectCamera1;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_8 = __this->___reflectionMask_4;
		int32_t L_9;
		L_9 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_8, NULL);
		int32_t L_10;
		L_10 = LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139(_stringLiteral46580D65357E6BC22728934BD6BC047227EFE0E6, NULL);
		NullCheck(L_7);
		Camera_set_cullingMask_m14F426710530BA8FA53AEC02F79C418AA558CB32(L_7, ((int32_t)(L_9&((~((int32_t)(1<<((int32_t)(L_10&((int32_t)31))))))))), NULL);
		// SaneCameraSettings(reflectCamera);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_11 = ___reflectCamera1;
		PlanarReflection_SaneCameraSettings_mC6D6FB58E52785713FA5F5D010727F07C1979947(__this, L_11, NULL);
		// reflectCamera.backgroundColor = clearColor;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_12 = ___reflectCamera1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = __this->___clearColor_6;
		NullCheck(L_12);
		Camera_set_backgroundColor_m036FD8C316A93A0B168ACC89AFF16D396B872138(L_12, L_13, NULL);
		// reflectCamera.clearFlags = reflectSkybox ? CameraClearFlags.Skybox : CameraClearFlags.SolidColor;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_14 = ___reflectCamera1;
		bool L_15 = __this->___reflectSkybox_5;
		G_B6_0 = L_14;
		if (L_15)
		{
			G_B7_0 = L_14;
			goto IL_006b;
		}
	}
	{
		G_B8_0 = 2;
		G_B8_1 = G_B6_0;
		goto IL_006c;
	}

IL_006b:
	{
		G_B8_0 = 1;
		G_B8_1 = G_B7_0;
	}

IL_006c:
	{
		NullCheck(G_B8_1);
		Camera_set_clearFlags_m66541D9CC43CBAA5FE7364A50D43CA5569FD4D93(G_B8_1, G_B8_0, NULL);
		// if(reflectSkybox)
		bool L_16 = __this->___reflectSkybox_5;
		if (!L_16)
		{
			goto IL_00f7;
		}
	}
	{
		// if(cam.gameObject.GetComponent(typeof(Skybox)))
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_17 = ___cam0;
		NullCheck(L_17);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_17, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Skybox_tB3C6FDB5DCB4633B155B7A80045542B7C3388441_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		NullCheck(L_18);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_21;
		L_21 = GameObject_GetComponent_m99E12753EA84947521DC711CA33F452B5E65B474(L_18, L_20, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_21, NULL);
		if (!L_22)
		{
			goto IL_00f7;
		}
	}
	{
		// Skybox sb = (Skybox)reflectCamera.gameObject.GetComponent(typeof(Skybox));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_23 = ___reflectCamera1;
		NullCheck(L_23);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_23, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (Skybox_tB3C6FDB5DCB4633B155B7A80045542B7C3388441_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		NullCheck(L_24);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_27;
		L_27 = GameObject_GetComponent_m99E12753EA84947521DC711CA33F452B5E65B474(L_24, L_26, NULL);
		V_11 = ((Skybox_tB3C6FDB5DCB4633B155B7A80045542B7C3388441*)CastclassSealed((RuntimeObject*)L_27, Skybox_tB3C6FDB5DCB4633B155B7A80045542B7C3388441_il2cpp_TypeInfo_var));
		// if (!sb)
		Skybox_tB3C6FDB5DCB4633B155B7A80045542B7C3388441* L_28 = V_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_28, NULL);
		if (L_29)
		{
			goto IL_00d6;
		}
	}
	{
		// sb = (Skybox)reflectCamera.gameObject.AddComponent(typeof(Skybox));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_30 = ___reflectCamera1;
		NullCheck(L_30);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31;
		L_31 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_30, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (Skybox_tB3C6FDB5DCB4633B155B7A80045542B7C3388441_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_33;
		L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
		NullCheck(L_31);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_34;
		L_34 = GameObject_AddComponent_mDF246771EC34613FA6AF0C98D443368FB43E9F36(L_31, L_33, NULL);
		V_11 = ((Skybox_tB3C6FDB5DCB4633B155B7A80045542B7C3388441*)CastclassSealed((RuntimeObject*)L_34, Skybox_tB3C6FDB5DCB4633B155B7A80045542B7C3388441_il2cpp_TypeInfo_var));
	}

IL_00d6:
	{
		// sb.material = ((Skybox)cam.GetComponent(typeof(Skybox))).material;
		Skybox_tB3C6FDB5DCB4633B155B7A80045542B7C3388441* L_35 = V_11;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_36 = ___cam0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (Skybox_tB3C6FDB5DCB4633B155B7A80045542B7C3388441_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		NullCheck(L_36);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_39;
		L_39 = Component_GetComponent_m4352437B839B9601EB007CAC1007C8E1FB8A427D(L_36, L_38, NULL);
		NullCheck(((Skybox_tB3C6FDB5DCB4633B155B7A80045542B7C3388441*)CastclassSealed((RuntimeObject*)L_39, Skybox_tB3C6FDB5DCB4633B155B7A80045542B7C3388441_il2cpp_TypeInfo_var)));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_40;
		L_40 = Skybox_get_material_m8575E583E00DC4B2CC8C129FB1F5501A6557B781(((Skybox_tB3C6FDB5DCB4633B155B7A80045542B7C3388441*)CastclassSealed((RuntimeObject*)L_39, Skybox_tB3C6FDB5DCB4633B155B7A80045542B7C3388441_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_35);
		Skybox_set_material_m18B5BCD0F5988399466D9EF88FA995A03204CBFA(L_35, L_40, NULL);
	}

IL_00f7:
	{
		// GL.SetRevertBackfacing(true);
		GL_SetRevertBackfacing_mA99C540DE453C9F95BCCB6DCE98B7A42765F0410((bool)1, NULL);
		// Transform reflectiveSurface = transform; //waterHeight;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		V_0 = L_41;
		// Vector3 eulerA = cam.transform.eulerAngles;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_42 = ___cam0;
		NullCheck(L_42);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_42, NULL);
		NullCheck(L_43);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_43, NULL);
		V_1 = L_44;
		// reflectCamera.transform.eulerAngles = new Vector3(-eulerA.x, eulerA.y, eulerA.z);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_45 = ___reflectCamera1;
		NullCheck(L_45);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46;
		L_46 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = V_1;
		float L_48 = L_47.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = V_1;
		float L_50 = L_49.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = V_1;
		float L_52 = L_51.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		memset((&L_53), 0, sizeof(L_53));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_53), ((-L_48)), L_50, L_52, /*hidden argument*/NULL);
		NullCheck(L_46);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_46, L_53, NULL);
		// reflectCamera.transform.position = cam.transform.position;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_54 = ___reflectCamera1;
		NullCheck(L_54);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55;
		L_55 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_54, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_56 = ___cam0;
		NullCheck(L_56);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_57;
		L_57 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_56, NULL);
		NullCheck(L_57);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_57, NULL);
		NullCheck(L_55);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_55, L_58, NULL);
		// Vector3 pos = reflectiveSurface.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_59 = V_0;
		NullCheck(L_59);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_60;
		L_60 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_59, NULL);
		NullCheck(L_60);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		L_61 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_60, NULL);
		V_2 = L_61;
		// pos.y = reflectiveSurface.position.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_62 = V_0;
		NullCheck(L_62);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_62, NULL);
		float L_64 = L_63.___y_3;
		(&V_2)->___y_3 = L_64;
		// Vector3 normal = reflectiveSurface.transform.up;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_65 = V_0;
		NullCheck(L_65);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_66;
		L_66 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_65, NULL);
		NullCheck(L_66);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_66, NULL);
		V_3 = L_67;
		// float d = -Vector3.Dot(normal, pos) - clipPlaneOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69 = V_2;
		float L_70;
		L_70 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_68, L_69, NULL);
		float L_71 = __this->___clipPlaneOffset_8;
		V_4 = ((float)il2cpp_codegen_subtract(((-L_70)), L_71));
		// Vector4 reflectionPlane = new Vector4(normal.x, normal.y, normal.z, d);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72 = V_3;
		float L_73 = L_72.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74 = V_3;
		float L_75 = L_74.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = V_3;
		float L_77 = L_76.___z_4;
		float L_78 = V_4;
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&V_5), L_73, L_75, L_77, L_78, NULL);
		// Matrix4x4 reflection = Matrix4x4.zero;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_79;
		L_79 = Matrix4x4_get_zero_m5D5F0475AD231C2C6BE5A9C80E11E24013B1B827(NULL);
		V_6 = L_79;
		// reflection = CalculateReflectionMatrix(reflection, reflectionPlane);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_80 = V_6;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_81 = V_5;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_82;
		L_82 = PlanarReflection_CalculateReflectionMatrix_m907715C4A71E736650B99C54A45FC0B37D24929B(L_80, L_81, NULL);
		V_6 = L_82;
		// oldpos = cam.transform.position;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_83 = ___cam0;
		NullCheck(L_83);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_84;
		L_84 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_83, NULL);
		NullCheck(L_84);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
		L_85 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_84, NULL);
		__this->___oldpos_9 = L_85;
		// Vector3 newpos = reflection.MultiplyPoint (oldpos);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = __this->___oldpos_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87;
		L_87 = Matrix4x4_MultiplyPoint_m20E910B65693559BFDE99382472D8DD02C862E7E((&V_6), L_86, NULL);
		V_7 = L_87;
		// reflectCamera.worldToCameraMatrix = cam.worldToCameraMatrix * reflection;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_88 = ___reflectCamera1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_89 = ___cam0;
		NullCheck(L_89);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_90;
		L_90 = Camera_get_worldToCameraMatrix_m48E324BD76706A316A1701EFC6A3DEC7DFB2FF40(L_89, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_91 = V_6;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_92;
		L_92 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(L_90, L_91, NULL);
		NullCheck(L_88);
		Camera_set_worldToCameraMatrix_mC199F02E435CE7261F7EECD1FD78A33EA96ABC0D(L_88, L_92, NULL);
		// Vector4 clipPlane = CameraSpacePlane(reflectCamera, pos, normal, 1.0f);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_93 = ___reflectCamera1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95 = V_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_96;
		L_96 = PlanarReflection_CameraSpacePlane_m2E8F14E5BCD369AED1CA8C582C5B815ED6C679B8(__this, L_93, L_94, L_95, (1.0f), NULL);
		V_8 = L_96;
		// Matrix4x4 projection =  cam.projectionMatrix;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_97 = ___cam0;
		NullCheck(L_97);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_98;
		L_98 = Camera_get_projectionMatrix_m9B943EFDD6418528A055321E14F75F1511DD9B4A(L_97, NULL);
		V_9 = L_98;
		// projection = CalculateObliqueMatrix(projection, clipPlane);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_99 = V_9;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_100 = V_8;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_101;
		L_101 = PlanarReflection_CalculateObliqueMatrix_mDF6487A9A932273FF242C2171170623BBF35638E(L_99, L_100, NULL);
		V_9 = L_101;
		// reflectCamera.projectionMatrix = projection;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_102 = ___reflectCamera1;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_103 = V_9;
		NullCheck(L_102);
		Camera_set_projectionMatrix_m351820E6903139402FFFF40221B32D0C52B5A094(L_102, L_103, NULL);
		// reflectCamera.transform.position = newpos;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_104 = ___reflectCamera1;
		NullCheck(L_104);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_105;
		L_105 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_104, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = V_7;
		NullCheck(L_105);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_105, L_106, NULL);
		// Vector3 euler = cam.transform.eulerAngles;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_107 = ___cam0;
		NullCheck(L_107);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_108;
		L_108 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_107, NULL);
		NullCheck(L_108);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109;
		L_109 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_108, NULL);
		V_10 = L_109;
		// reflectCamera.transform.eulerAngles = new Vector3(-euler.x, euler.y, euler.z);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_110 = ___reflectCamera1;
		NullCheck(L_110);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_111;
		L_111 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_110, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_112 = V_10;
		float L_113 = L_112.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114 = V_10;
		float L_115 = L_114.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_116 = V_10;
		float L_117 = L_116.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_118;
		memset((&L_118), 0, sizeof(L_118));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_118), ((-L_113)), L_115, L_117, /*hidden argument*/NULL);
		NullCheck(L_111);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_111, L_118, NULL);
		// reflectCamera.Render();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_119 = ___reflectCamera1;
		NullCheck(L_119);
		Camera_Render_m6089001EB6710DA9A21C87185D65922F13A24509(L_119, NULL);
		// GL.SetRevertBackfacing(false);
		GL_SetRevertBackfacing_mA99C540DE453C9F95BCCB6DCE98B7A42765F0410((bool)0, NULL);
		// }
		return;
	}
}
// System.Void PlanarReflection::SaneCameraSettings(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflection_SaneCameraSettings_mC6D6FB58E52785713FA5F5D010727F07C1979947 (PlanarReflection_t01C9F7773DB42C71EABA687BD37C7C8BD0679249* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___helperCam0, const RuntimeMethod* method) 
{
	{
		// helperCam.depthTextureMode = DepthTextureMode.None;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___helperCam0;
		NullCheck(L_0);
		Camera_set_depthTextureMode_mE722389E4DF8B3DF7F6100DB142E4DBAF698F6BF(L_0, 0, NULL);
		// helperCam.backgroundColor = Color.black;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = ___helperCam0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		NullCheck(L_1);
		Camera_set_backgroundColor_m036FD8C316A93A0B168ACC89AFF16D396B872138(L_1, L_2, NULL);
		// helperCam.clearFlags = CameraClearFlags.SolidColor;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = ___helperCam0;
		NullCheck(L_3);
		Camera_set_clearFlags_m66541D9CC43CBAA5FE7364A50D43CA5569FD4D93(L_3, 2, NULL);
		// helperCam.renderingPath = RenderingPath.Forward;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = ___helperCam0;
		NullCheck(L_4);
		Camera_set_renderingPath_m5BD8E4230DE3DD68F722AED5D85271E2A2B026B3(L_4, 1, NULL);
		// }
		return;
	}
}
// UnityEngine.Matrix4x4 PlanarReflection::CalculateObliqueMatrix(UnityEngine.Matrix4x4,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 PlanarReflection_CalculateObliqueMatrix_mDF6487A9A932273FF242C2171170623BBF35638E (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___projection0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___clipPlane1, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector4 q = projection.inverse * new Vector4(
		//     sgn(clipPlane.x),
		//     sgn(clipPlane.y),
		//     1.0F,
		//     1.0F
		// );
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0;
		L_0 = Matrix4x4_get_inverse_m4F4A881CD789281EA90EB68CFD39F36C8A81E6BD((&___projection0), NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = ___clipPlane1;
		float L_2 = L_1.___x_1;
		float L_3;
		L_3 = PlanarReflection_sgn_mAE55EB4B4F56DB0E5F76502E837565444C64E37E(L_2, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___clipPlane1;
		float L_5 = L_4.___y_2;
		float L_6;
		L_6 = PlanarReflection_sgn_mAE55EB4B4F56DB0E5F76502E837565444C64E37E(L_5, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_7), L_3, L_6, (1.0f), (1.0f), /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		L_8 = Matrix4x4_op_Multiply_m319DF5B7DD9C9499EB8A5682FA63B1AAF0EE87A4(L_0, L_7, NULL);
		V_0 = L_8;
		// Vector4 c = clipPlane * (2.0F / (Vector4.Dot (clipPlane, q)));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = ___clipPlane1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___clipPlane1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11 = V_0;
		float L_12;
		L_12 = Vector4_Dot_m40A3B2E258E53E4847583474E40AC29F68AF8BA3_inline(L_10, L_11, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13;
		L_13 = Vector4_op_Multiply_m02FE150FD7366546FC19A36B6928512376BF64E8_inline(L_9, ((float)((2.0f)/L_12)), NULL);
		V_1 = L_13;
		// projection[2] = c.x - projection[3];
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = V_1;
		float L_15 = L_14.___x_1;
		float L_16;
		L_16 = Matrix4x4_get_Item_m771C2EE3A3BFFBAC9F2AD07FFCAAF6146C1BE92A((&___projection0), 3, NULL);
		Matrix4x4_set_Item_m47C4DDBFAE6578D6008AEF433777D4B2FACB62B0((&___projection0), 2, ((float)il2cpp_codegen_subtract(L_15, L_16)), NULL);
		// projection[6] = c.y - projection[7];
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_17 = V_1;
		float L_18 = L_17.___y_2;
		float L_19;
		L_19 = Matrix4x4_get_Item_m771C2EE3A3BFFBAC9F2AD07FFCAAF6146C1BE92A((&___projection0), 7, NULL);
		Matrix4x4_set_Item_m47C4DDBFAE6578D6008AEF433777D4B2FACB62B0((&___projection0), 6, ((float)il2cpp_codegen_subtract(L_18, L_19)), NULL);
		// projection[10] = c.z - projection[11];
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_20 = V_1;
		float L_21 = L_20.___z_3;
		float L_22;
		L_22 = Matrix4x4_get_Item_m771C2EE3A3BFFBAC9F2AD07FFCAAF6146C1BE92A((&___projection0), ((int32_t)11), NULL);
		Matrix4x4_set_Item_m47C4DDBFAE6578D6008AEF433777D4B2FACB62B0((&___projection0), ((int32_t)10), ((float)il2cpp_codegen_subtract(L_21, L_22)), NULL);
		// projection[14] = c.w - projection[15];
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_23 = V_1;
		float L_24 = L_23.___w_4;
		float L_25;
		L_25 = Matrix4x4_get_Item_m771C2EE3A3BFFBAC9F2AD07FFCAAF6146C1BE92A((&___projection0), ((int32_t)15), NULL);
		Matrix4x4_set_Item_m47C4DDBFAE6578D6008AEF433777D4B2FACB62B0((&___projection0), ((int32_t)14), ((float)il2cpp_codegen_subtract(L_24, L_25)), NULL);
		// return projection;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_26 = ___projection0;
		return L_26;
	}
}
// UnityEngine.Matrix4x4 PlanarReflection::CalculateReflectionMatrix(UnityEngine.Matrix4x4,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 PlanarReflection_CalculateReflectionMatrix_m907715C4A71E736650B99C54A45FC0B37D24929B (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___reflectionMat0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___plane1, const RuntimeMethod* method) 
{
	{
		// reflectionMat.m00 = (1.0F - 2.0F*plane[0]*plane[0]);
		float L_0;
		L_0 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 0, NULL);
		float L_1;
		L_1 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 0, NULL);
		(&___reflectionMat0)->___m00_0 = ((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((2.0f), L_0)), L_1))));
		// reflectionMat.m01 = (   - 2.0F*plane[0]*plane[1]);
		float L_2;
		L_2 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 0, NULL);
		float L_3;
		L_3 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 1, NULL);
		(&___reflectionMat0)->___m01_4 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((-2.0f), L_2)), L_3));
		// reflectionMat.m02 = (   - 2.0F*plane[0]*plane[2]);
		float L_4;
		L_4 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 0, NULL);
		float L_5;
		L_5 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 2, NULL);
		(&___reflectionMat0)->___m02_8 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((-2.0f), L_4)), L_5));
		// reflectionMat.m03 = (   - 2.0F*plane[3]*plane[0]);
		float L_6;
		L_6 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 3, NULL);
		float L_7;
		L_7 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 0, NULL);
		(&___reflectionMat0)->___m03_12 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((-2.0f), L_6)), L_7));
		// reflectionMat.m10 = (   - 2.0F*plane[1]*plane[0]);
		float L_8;
		L_8 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 1, NULL);
		float L_9;
		L_9 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 0, NULL);
		(&___reflectionMat0)->___m10_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((-2.0f), L_8)), L_9));
		// reflectionMat.m11 = (1.0F - 2.0F*plane[1]*plane[1]);
		float L_10;
		L_10 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 1, NULL);
		float L_11;
		L_11 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 1, NULL);
		(&___reflectionMat0)->___m11_5 = ((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((2.0f), L_10)), L_11))));
		// reflectionMat.m12 = (   - 2.0F*plane[1]*plane[2]);
		float L_12;
		L_12 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 1, NULL);
		float L_13;
		L_13 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 2, NULL);
		(&___reflectionMat0)->___m12_9 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((-2.0f), L_12)), L_13));
		// reflectionMat.m13 = (   - 2.0F*plane[3]*plane[1]);
		float L_14;
		L_14 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 3, NULL);
		float L_15;
		L_15 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 1, NULL);
		(&___reflectionMat0)->___m13_13 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((-2.0f), L_14)), L_15));
		// reflectionMat.m20 = (   - 2.0F*plane[2]*plane[0]);
		float L_16;
		L_16 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 2, NULL);
		float L_17;
		L_17 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 0, NULL);
		(&___reflectionMat0)->___m20_2 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((-2.0f), L_16)), L_17));
		// reflectionMat.m21 = (   - 2.0F*plane[2]*plane[1]);
		float L_18;
		L_18 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 2, NULL);
		float L_19;
		L_19 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 1, NULL);
		(&___reflectionMat0)->___m21_6 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((-2.0f), L_18)), L_19));
		// reflectionMat.m22 = (1.0F - 2.0F*plane[2]*plane[2]);
		float L_20;
		L_20 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 2, NULL);
		float L_21;
		L_21 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 2, NULL);
		(&___reflectionMat0)->___m22_10 = ((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((2.0f), L_20)), L_21))));
		// reflectionMat.m23 = (   - 2.0F*plane[3]*plane[2]);
		float L_22;
		L_22 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 3, NULL);
		float L_23;
		L_23 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 2, NULL);
		(&___reflectionMat0)->___m23_14 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((-2.0f), L_22)), L_23));
		// reflectionMat.m30 = 0.0F;
		(&___reflectionMat0)->___m30_3 = (0.0f);
		// reflectionMat.m31 = 0.0F;
		(&___reflectionMat0)->___m31_7 = (0.0f);
		// reflectionMat.m32 = 0.0F;
		(&___reflectionMat0)->___m32_11 = (0.0f);
		// reflectionMat.m33 = 1.0F;
		(&___reflectionMat0)->___m33_15 = (1.0f);
		// return reflectionMat;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_24 = ___reflectionMat0;
		return L_24;
	}
}
// System.Single PlanarReflection::sgn(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlanarReflection_sgn_mAE55EB4B4F56DB0E5F76502E837565444C64E37E (float ___a0, const RuntimeMethod* method) 
{
	{
		// if (a > 0.0F) return 1.0F;
		float L_0 = ___a0;
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_000e;
		}
	}
	{
		// if (a > 0.0F) return 1.0F;
		return (1.0f);
	}

IL_000e:
	{
		// if (a < 0.0F) return -1.0F;
		float L_1 = ___a0;
		if ((!(((float)L_1) < ((float)(0.0f)))))
		{
			goto IL_001c;
		}
	}
	{
		// if (a < 0.0F) return -1.0F;
		return (-1.0f);
	}

IL_001c:
	{
		// return 0.0F;
		return (0.0f);
	}
}
// UnityEngine.Vector4 PlanarReflection::CameraSpacePlane(UnityEngine.Camera,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 PlanarReflection_CameraSpacePlane_m2E8F14E5BCD369AED1CA8C582C5B815ED6C679B8 (PlanarReflection_t01C9F7773DB42C71EABA687BD37C7C8BD0679249* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal2, float ___sideSign3, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// Vector3 offsetPos = pos + normal * clipPlaneOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___pos1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___normal2;
		float L_2 = __this->___clipPlaneOffset_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_0, L_3, NULL);
		V_0 = L_4;
		// Matrix4x4 m = cam.worldToCameraMatrix;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = ___cam0;
		NullCheck(L_5);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6;
		L_6 = Camera_get_worldToCameraMatrix_m48E324BD76706A316A1701EFC6A3DEC7DFB2FF40(L_5, NULL);
		V_1 = L_6;
		// Vector3 cpos = m.MultiplyPoint (offsetPos);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Matrix4x4_MultiplyPoint_m20E910B65693559BFDE99382472D8DD02C862E7E((&V_1), L_7, NULL);
		V_2 = L_8;
		// Vector3 cnormal = m.MultiplyVector (normal).normalized * sideSign;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___normal2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Matrix4x4_MultiplyVector_mFD12F86A473E90BBB0002149ABA3917B2A518937((&V_1), L_9, NULL);
		V_4 = L_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_4), NULL);
		float L_12 = ___sideSign3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_11, L_12, NULL);
		V_3 = L_13;
		// return new Vector4 (cnormal.x, cnormal.y, cnormal.z, -Vector3.Dot (cpos,cnormal));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_3;
		float L_15 = L_14.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_3;
		float L_17 = L_16.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_3;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_3;
		float L_22;
		L_22 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_20, L_21, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_23), L_15, L_17, L_19, ((-L_22)), /*hidden argument*/NULL);
		return L_23;
	}
}
// System.Void PlanarReflection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflection__ctor_m4474BEA7C5EEABA1885E8ABB1DFC1274B1BF04C6 (PlanarReflection_t01C9F7773DB42C71EABA687BD37C7C8BD0679249* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BC903474F3EEC4A94B28FB209B0CB7F7426FCF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Color clearColor = Color.grey;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_grey_m1CE6BEDA3EF8569E939F77A4B0231D9839864F92_inline(NULL);
		__this->___clearColor_6 = L_0;
		// public System.String reflectionSampler = "_ReflectionTex";
		__this->___reflectionSampler_7 = _stringLiteral88BC903474F3EEC4A94B28FB209B0CB7F7426FCF;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reflectionSampler_7), (void*)_stringLiteral88BC903474F3EEC4A94B28FB209B0CB7F7426FCF);
		// public float clipPlaneOffset = 0.07F;
		__this->___clipPlaneOffset_8 = (0.0700000003f);
		// private Vector3 oldpos = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___oldpos_9 = L_1;
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
// System.Void SpecularLighting::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecularLighting_Start_m484095E64ED9F125CE7D742AD4EABF63256D3C13 (SpecularLighting_t1C9EAF60B3F3C2E9021D4ACC63C9480D57AB70F7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaterBase_t8D07B5BBBD1C82666F71EDF26C12BF03B39A79EA_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaterBase_t8D07B5BBBD1C82666F71EDF26C12BF03B39A79EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// waterBase = (WaterBase)gameObject.GetComponent(typeof(WaterBase));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (WaterBase_t8D07B5BBBD1C82666F71EDF26C12BF03B39A79EA_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		NullCheck(L_0);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_3;
		L_3 = GameObject_GetComponent_m99E12753EA84947521DC711CA33F452B5E65B474(L_0, L_2, NULL);
		__this->___waterBase_5 = ((WaterBase_t8D07B5BBBD1C82666F71EDF26C12BF03B39A79EA*)CastclassClass((RuntimeObject*)L_3, WaterBase_t8D07B5BBBD1C82666F71EDF26C12BF03B39A79EA_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___waterBase_5), (void*)((WaterBase_t8D07B5BBBD1C82666F71EDF26C12BF03B39A79EA*)CastclassClass((RuntimeObject*)L_3, WaterBase_t8D07B5BBBD1C82666F71EDF26C12BF03B39A79EA_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void SpecularLighting::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecularLighting_Update_m468C34F4D5AFA6C2E6D998E33BC399C56A460EB5 (SpecularLighting_t1C9EAF60B3F3C2E9021D4ACC63C9480D57AB70F7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaterBase_t8D07B5BBBD1C82666F71EDF26C12BF03B39A79EA_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaterBase_t8D07B5BBBD1C82666F71EDF26C12BF03B39A79EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0573D2759A5B22BC958DEF1F9BC81C0DA713C77);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!waterBase)
		WaterBase_t8D07B5BBBD1C82666F71EDF26C12BF03B39A79EA* L_0 = __this->___waterBase_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_002d;
		}
	}
	{
		// waterBase = (WaterBase)gameObject.GetComponent(typeof(WaterBase));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (WaterBase_t8D07B5BBBD1C82666F71EDF26C12BF03B39A79EA_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		NullCheck(L_2);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_5;
		L_5 = GameObject_GetComponent_m99E12753EA84947521DC711CA33F452B5E65B474(L_2, L_4, NULL);
		__this->___waterBase_5 = ((WaterBase_t8D07B5BBBD1C82666F71EDF26C12BF03B39A79EA*)CastclassClass((RuntimeObject*)L_5, WaterBase_t8D07B5BBBD1C82666F71EDF26C12BF03B39A79EA_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___waterBase_5), (void*)((WaterBase_t8D07B5BBBD1C82666F71EDF26C12BF03B39A79EA*)CastclassClass((RuntimeObject*)L_5, WaterBase_t8D07B5BBBD1C82666F71EDF26C12BF03B39A79EA_il2cpp_TypeInfo_var)));
	}

IL_002d:
	{
		// if (specularLight && waterBase.sharedMaterial)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___specularLight_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_6, NULL);
		if (!L_7)
		{
			goto IL_0076;
		}
	}
	{
		WaterBase_t8D07B5BBBD1C82666F71EDF26C12BF03B39A79EA* L_8 = __this->___waterBase_5;
		NullCheck(L_8);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = L_8->___sharedMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_9, NULL);
		if (!L_10)
		{
			goto IL_0076;
		}
	}
	{
		// waterBase.sharedMaterial.SetVector("_WorldLightDir", specularLight.transform.forward);
		WaterBase_t8D07B5BBBD1C82666F71EDF26C12BF03B39A79EA* L_11 = __this->___waterBase_5;
		NullCheck(L_11);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = L_11->___sharedMaterial_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->___specularLight_4;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_14, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_16;
		L_16 = Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline(L_15, NULL);
		NullCheck(L_12);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_12, _stringLiteralE0573D2759A5B22BC958DEF1F9BC81C0DA713C77, L_16, NULL);
	}

IL_0076:
	{
		// }
		return;
	}
}
// System.Void SpecularLighting::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecularLighting__ctor_m80E00F900AF3152823C444D0EF4D46ACD68F0868 (SpecularLighting_t1C9EAF60B3F3C2E9021D4ACC63C9480D57AB70F7* __this, const RuntimeMethod* method) 
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
// System.Void WaterBase::UpdateShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterBase_UpdateShader_m3E93ABEBE2386040D1A538DBD54B6F0E3DD16BE1 (WaterBase_t8D07B5BBBD1C82666F71EDF26C12BF03B39A79EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral867D47DB5A791E2DC5656A715F62E8E6A13FEF38);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3E776B0A49C1C913D60A78C71AEA3EF1070C228);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(waterQuality > WaterQuality.Medium)
		int32_t L_0 = __this->___waterQuality_5;
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0020;
		}
	}
	{
		// sharedMaterial.shader.maximumLOD = 501;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = __this->___sharedMaterial_4;
		NullCheck(L_1);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2;
		L_2 = Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983(L_1, NULL);
		NullCheck(L_2);
		Shader_set_maximumLOD_mC07203B1137E60D0E80E8BB991A37435220D4CE8(L_2, ((int32_t)501), NULL);
		goto IL_0055;
	}

IL_0020:
	{
		// else if(waterQuality> WaterQuality.Low)
		int32_t L_3 = __this->___waterQuality_5;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		// sharedMaterial.shader.maximumLOD = 301;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___sharedMaterial_4;
		NullCheck(L_4);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_5;
		L_5 = Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983(L_4, NULL);
		NullCheck(L_5);
		Shader_set_maximumLOD_mC07203B1137E60D0E80E8BB991A37435220D4CE8(L_5, ((int32_t)301), NULL);
		goto IL_0055;
	}

IL_0040:
	{
		// sharedMaterial.shader.maximumLOD = 201;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = __this->___sharedMaterial_4;
		NullCheck(L_6);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_7;
		L_7 = Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983(L_6, NULL);
		NullCheck(L_7);
		Shader_set_maximumLOD_mC07203B1137E60D0E80E8BB991A37435220D4CE8(L_7, ((int32_t)201), NULL);
	}

IL_0055:
	{
		// if (!SystemInfo.SupportsRenderTextureFormat(RenderTextureFormat.Depth))
		bool L_8;
		L_8 = SystemInfo_SupportsRenderTextureFormat_mCCC3C69578A2C5B7367F73999E6938C315A98201(1, NULL);
		if (L_8)
		{
			goto IL_0064;
		}
	}
	{
		// edgeBlend = false;
		__this->___edgeBlend_6 = (bool)0;
	}

IL_0064:
	{
		// if(edgeBlend)
		bool L_9 = __this->___edgeBlend_6;
		if (!L_9)
		{
			goto IL_009f;
		}
	}
	{
		// Shader.EnableKeyword("WATER_EDGEBLEND_ON");
		Shader_EnableKeyword_m2449D6D86962FA7F5D1ED2B165EF63B019CBCCF1(_stringLiteralA3E776B0A49C1C913D60A78C71AEA3EF1070C228, NULL);
		// Shader.DisableKeyword("WATER_EDGEBLEND_OFF");
		Shader_DisableKeyword_m20FCB3643CD53D86E46DA431DA971E59D49DAF88(_stringLiteral867D47DB5A791E2DC5656A715F62E8E6A13FEF38, NULL);
		// if (Camera.main)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_10;
		L_10 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_10, NULL);
		if (!L_11)
		{
			goto IL_00b3;
		}
	}
	{
		// Camera.main.depthTextureMode |= DepthTextureMode.Depth;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_12;
		L_12 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_13 = L_12;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = Camera_get_depthTextureMode_m998CDEBC055FE2A910F3B650585ADE3E2BB141EE(L_13, NULL);
		NullCheck(L_13);
		Camera_set_depthTextureMode_mE722389E4DF8B3DF7F6100DB142E4DBAF698F6BF(L_13, ((int32_t)((int32_t)L_14|1)), NULL);
		return;
	}

IL_009f:
	{
		// Shader.EnableKeyword("WATER_EDGEBLEND_OFF");
		Shader_EnableKeyword_m2449D6D86962FA7F5D1ED2B165EF63B019CBCCF1(_stringLiteral867D47DB5A791E2DC5656A715F62E8E6A13FEF38, NULL);
		// Shader.DisableKeyword("WATER_EDGEBLEND_ON");
		Shader_DisableKeyword_m20FCB3643CD53D86E46DA431DA971E59D49DAF88(_stringLiteralA3E776B0A49C1C913D60A78C71AEA3EF1070C228, NULL);
	}

IL_00b3:
	{
		// }
		return;
	}
}
// System.Void WaterBase::WaterTileBeingRendered(UnityEngine.Transform,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterBase_WaterTileBeingRendered_m7C7B9D47E9214CA4808FBAE30EFD1A628B6F6D5A (WaterBase_t8D07B5BBBD1C82666F71EDF26C12BF03B39A79EA* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___tr0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___currentCam1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (currentCam && edgeBlend)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___currentCam1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		bool L_2 = __this->___edgeBlend_6;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// currentCam.depthTextureMode |= DepthTextureMode.Depth;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = ___currentCam1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = L_3;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Camera_get_depthTextureMode_m998CDEBC055FE2A910F3B650585ADE3E2BB141EE(L_4, NULL);
		NullCheck(L_4);
		Camera_set_depthTextureMode_mE722389E4DF8B3DF7F6100DB142E4DBAF698F6BF(L_4, ((int32_t)((int32_t)L_5|1)), NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void WaterBase::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterBase_Update_mF747F7FA966B760D1D16709EC78DAA973C5C4021 (WaterBase_t8D07B5BBBD1C82666F71EDF26C12BF03B39A79EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(sharedMaterial)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___sharedMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// UpdateShader();
		WaterBase_UpdateShader_m3E93ABEBE2386040D1A538DBD54B6F0E3DD16BE1(__this, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void WaterBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterBase__ctor_mD9515BE32E4592656CE9F90BF5F1961CCCD03EBD (WaterBase_t8D07B5BBBD1C82666F71EDF26C12BF03B39A79EA* __this, const RuntimeMethod* method) 
{
	{
		// public WaterQuality waterQuality = WaterQuality.High;
		__this->___waterQuality_5 = 2;
		// public bool edgeBlend = true;
		__this->___edgeBlend_6 = (bool)1;
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
// System.Void WaterTile::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterTile_Start_mD0E63A8DE8FAC6F24C12DF6C09B902B23B453F01 (WaterTile_t0CF14271C08BB6B4D5081C4B4BBCE359F081EE65* __this, const RuntimeMethod* method) 
{
	{
		// AcquireComponents();
		WaterTile_AcquireComponents_m63504ABEFA8974C6FCF60A00BD45E0CA45A1183A(__this, NULL);
		// }
		return;
	}
}
// System.Void WaterTile::AcquireComponents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterTile_AcquireComponents_m63504ABEFA8974C6FCF60A00BD45E0CA45A1183A (WaterTile_t0CF14271C08BB6B4D5081C4B4BBCE359F081EE65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlanarReflection_t01C9F7773DB42C71EABA687BD37C7C8BD0679249_m4F065364D8269D0A09C1512BE3F834AF1E924E73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisWaterBase_t8D07B5BBBD1C82666F71EDF26C12BF03B39A79EA_mC0A9738284951B51C70B8E45F26A719901436DF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!reflection) {
		PlanarReflection_t01C9F7773DB42C71EABA687BD37C7C8BD0679249* L_0 = __this->___reflection_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_0048;
		}
	}
	{
		// if (transform.parent)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		// reflection = (PlanarReflection)transform.parent.GetComponent<PlanarReflection>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_5, NULL);
		NullCheck(L_6);
		PlanarReflection_t01C9F7773DB42C71EABA687BD37C7C8BD0679249* L_7;
		L_7 = Component_GetComponent_TisPlanarReflection_t01C9F7773DB42C71EABA687BD37C7C8BD0679249_m4F065364D8269D0A09C1512BE3F834AF1E924E73(L_6, Component_GetComponent_TisPlanarReflection_t01C9F7773DB42C71EABA687BD37C7C8BD0679249_m4F065364D8269D0A09C1512BE3F834AF1E924E73_RuntimeMethod_var);
		__this->___reflection_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reflection_4), (void*)L_7);
		goto IL_0048;
	}

IL_0037:
	{
		// reflection = (PlanarReflection)transform.GetComponent<PlanarReflection>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		PlanarReflection_t01C9F7773DB42C71EABA687BD37C7C8BD0679249* L_9;
		L_9 = Component_GetComponent_TisPlanarReflection_t01C9F7773DB42C71EABA687BD37C7C8BD0679249_m4F065364D8269D0A09C1512BE3F834AF1E924E73(L_8, Component_GetComponent_TisPlanarReflection_t01C9F7773DB42C71EABA687BD37C7C8BD0679249_m4F065364D8269D0A09C1512BE3F834AF1E924E73_RuntimeMethod_var);
		__this->___reflection_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reflection_4), (void*)L_9);
	}

IL_0048:
	{
		// if (!waterBase) {
		WaterBase_t8D07B5BBBD1C82666F71EDF26C12BF03B39A79EA* L_10 = __this->___waterBase_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_10, NULL);
		if (L_11)
		{
			goto IL_008f;
		}
	}
	{
		// if (transform.parent)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_13, NULL);
		if (!L_14)
		{
			goto IL_007e;
		}
	}
	{
		// waterBase = (WaterBase)transform.parent.GetComponent<WaterBase>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_15, NULL);
		NullCheck(L_16);
		WaterBase_t8D07B5BBBD1C82666F71EDF26C12BF03B39A79EA* L_17;
		L_17 = Component_GetComponent_TisWaterBase_t8D07B5BBBD1C82666F71EDF26C12BF03B39A79EA_mC0A9738284951B51C70B8E45F26A719901436DF3(L_16, Component_GetComponent_TisWaterBase_t8D07B5BBBD1C82666F71EDF26C12BF03B39A79EA_mC0A9738284951B51C70B8E45F26A719901436DF3_RuntimeMethod_var);
		__this->___waterBase_5 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___waterBase_5), (void*)L_17);
		return;
	}

IL_007e:
	{
		// waterBase = (WaterBase)transform.GetComponent<WaterBase>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_18);
		WaterBase_t8D07B5BBBD1C82666F71EDF26C12BF03B39A79EA* L_19;
		L_19 = Component_GetComponent_TisWaterBase_t8D07B5BBBD1C82666F71EDF26C12BF03B39A79EA_mC0A9738284951B51C70B8E45F26A719901436DF3(L_18, Component_GetComponent_TisWaterBase_t8D07B5BBBD1C82666F71EDF26C12BF03B39A79EA_mC0A9738284951B51C70B8E45F26A719901436DF3_RuntimeMethod_var);
		__this->___waterBase_5 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___waterBase_5), (void*)L_19);
	}

IL_008f:
	{
		// }
		return;
	}
}
// System.Void WaterTile::OnWillRenderObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterTile_OnWillRenderObject_m60C0B9A2531ED2656841BDFBA3E3DE8C6F3AF961 (WaterTile_t0CF14271C08BB6B4D5081C4B4BBCE359F081EE65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (reflection)
		PlanarReflection_t01C9F7773DB42C71EABA687BD37C7C8BD0679249* L_0 = __this->___reflection_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// reflection.WaterTileBeingRendered(transform, Camera.current);
		PlanarReflection_t01C9F7773DB42C71EABA687BD37C7C8BD0679249* L_2 = __this->___reflection_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = Camera_get_current_m25217A02CB09E3BD50E3E0327879E870AD58C6C3(NULL);
		NullCheck(L_2);
		PlanarReflection_WaterTileBeingRendered_m93AD050506974E9D6F39BBA70CF230C61AE03380(L_2, L_3, L_4, NULL);
	}

IL_0023:
	{
		// if (waterBase)
		WaterBase_t8D07B5BBBD1C82666F71EDF26C12BF03B39A79EA* L_5 = __this->___waterBase_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_5, NULL);
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		// waterBase.WaterTileBeingRendered(transform, Camera.current);
		WaterBase_t8D07B5BBBD1C82666F71EDF26C12BF03B39A79EA* L_7 = __this->___waterBase_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_9;
		L_9 = Camera_get_current_m25217A02CB09E3BD50E3E0327879E870AD58C6C3(NULL);
		NullCheck(L_7);
		WaterBase_WaterTileBeingRendered_m7C7B9D47E9214CA4808FBAE30EFD1A628B6F6D5A(L_7, L_8, L_9, NULL);
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void WaterTile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterTile__ctor_mC756EDF5A52F61B6C3FE8C0362E2AB1A7079EB1E (WaterTile_t0CF14271C08BB6B4D5081C4B4BBCE359F081EE65* __this, const RuntimeMethod* method) 
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
// System.Void UnityEngine.XR.OpenXR.Samples.MeshingFeature.FallingSphere::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FallingSphere_Start_mA5F656B736FA5AC265D51582444E4682CB83FFA2 (FallingSphere_tE12F80B78F3B25C609125CF5384A42AD3F5EF9EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_5), (void*)L_0);
		// starting = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		__this->___starting_4 = L_2;
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.MeshingFeature.FallingSphere::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FallingSphere_FixedUpdate_m3A15CC58648EAD2033911C4D517E1D4A4567A947 (FallingSphere_tE12F80B78F3B25C609125CF5384A42AD3F5EF9EA* __this, const RuntimeMethod* method) 
{
	{
		// if (transform.position.y < -10)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___y_3;
		if ((!(((float)L_2) < ((float)(-10.0f)))))
		{
			goto IL_0048;
		}
	}
	{
		// rb.velocity = Vector3.zero;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3 = __this->___rb_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_3);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_3, L_4, NULL);
		// rb.angularVelocity = Vector3.zero;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5 = __this->___rb_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_5);
		Rigidbody_set_angularVelocity_m23266B4E52BF0D2E65CC984AC73CC40B8D4A27E0(L_5, L_6, NULL);
		// rb.MovePosition(starting);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_7 = __this->___rb_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___starting_4;
		NullCheck(L_7);
		Rigidbody_MovePosition_mB2CD29ABC8F59AC338C0A3A5A6B75C38FDA92CA9(L_7, L_8, NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.MeshingFeature.FallingSphere::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FallingSphere__ctor_mF045BE8913869389EAB2B517053BD0A91A010722 (FallingSphere_tE12F80B78F3B25C609125CF5384A42AD3F5EF9EA* __this, const RuntimeMethod* method) 
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
// System.Void UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingBehaviour::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshingBehaviour_Start_m0FD2D4DA344B65CE5140E4BEA7E12D957E41F897 (MeshingBehaviour_t109955F72D30C3D1F02C61F77289972F36947DE2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2D504F27EFCAFC96E2CC2541C7A144D920F76A77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC7DA166E8D82026036A1F31B4B32E0C1549A62FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mEC986C80443975BD0614D2D8580012A9C0B634B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE26BFC6B67208BD0D9CA0FB072FE6D07927222D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRSettings_GetFeature_TisMeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2_mCB0851553933D9B0FE7ED440CF6F5761B9120FBD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_GetInstances_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m44A912E10E9B8D0466155F3C9CDB3A378D1C41C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A4A75F8AA5E0F61ACA8A64BF8C1612267A769EE);
		s_Il2CppMethodInitialized = true;
	}
	MeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2* V_0 = NULL;
	List_1_tE26BFC6B67208BD0D9CA0FB072FE6D07927222D4* V_1 = NULL;
	{
		// var feature = OpenXRSettings.Instance.GetFeature<MeshingTeapotFeature>();
		OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55* L_0;
		L_0 = OpenXRSettings_get_Instance_m0F645DB8A0ECC1325AD730F18479BCDCB92D1920(NULL);
		NullCheck(L_0);
		MeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2* L_1;
		L_1 = OpenXRSettings_GetFeature_TisMeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2_mCB0851553933D9B0FE7ED440CF6F5761B9120FBD(L_0, OpenXRSettings_GetFeature_TisMeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2_mCB0851553933D9B0FE7ED440CF6F5761B9120FBD_RuntimeMethod_var);
		V_0 = L_1;
		// if (null == feature || feature.enabled == false)
		MeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_2, NULL);
		if (L_3)
		{
			goto IL_001c;
		}
	}
	{
		MeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2* L_4 = V_0;
		NullCheck(L_4);
		bool L_5;
		L_5 = OpenXRFeature_get_enabled_m958523A02F396C1623F2C7D7292B2E96A26270CD(L_4, NULL);
		if (L_5)
		{
			goto IL_0024;
		}
	}

IL_001c:
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_0024:
	{
		// var meshSubsystems = new List<XRMeshSubsystem>();
		List_1_tE26BFC6B67208BD0D9CA0FB072FE6D07927222D4* L_6 = (List_1_tE26BFC6B67208BD0D9CA0FB072FE6D07927222D4*)il2cpp_codegen_object_new(List_1_tE26BFC6B67208BD0D9CA0FB072FE6D07927222D4_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		List_1__ctor_m2D504F27EFCAFC96E2CC2541C7A144D920F76A77(L_6, List_1__ctor_m2D504F27EFCAFC96E2CC2541C7A144D920F76A77_RuntimeMethod_var);
		V_1 = L_6;
		// SubsystemManager.GetInstances(meshSubsystems);
		List_1_tE26BFC6B67208BD0D9CA0FB072FE6D07927222D4* L_7 = V_1;
		il2cpp_codegen_runtime_class_init_inline(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		SubsystemManager_GetInstances_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m44A912E10E9B8D0466155F3C9CDB3A378D1C41C3(L_7, SubsystemManager_GetInstances_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m44A912E10E9B8D0466155F3C9CDB3A378D1C41C3_RuntimeMethod_var);
		// if (meshSubsystems.Count == 1)
		List_1_tE26BFC6B67208BD0D9CA0FB072FE6D07927222D4* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_mC7DA166E8D82026036A1F31B4B32E0C1549A62FD_inline(L_8, List_1_get_Count_mC7DA166E8D82026036A1F31B4B32E0C1549A62FD_RuntimeMethod_var);
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		// s_MeshSubsystem = meshSubsystems[0];
		List_1_tE26BFC6B67208BD0D9CA0FB072FE6D07927222D4* L_10 = V_1;
		NullCheck(L_10);
		XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* L_11;
		L_11 = List_1_get_Item_mEC986C80443975BD0614D2D8580012A9C0B634B3(L_10, 0, List_1_get_Item_mEC986C80443975BD0614D2D8580012A9C0B634B3_RuntimeMethod_var);
		__this->___s_MeshSubsystem_7 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___s_MeshSubsystem_7), (void*)L_11);
		// textMesh.gameObject.SetActive(false);
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_12 = __this->___textMesh_5;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)0, NULL);
		return;
	}

IL_0058:
	{
		// textMesh.text = "Failed to initialize MeshSubsystem.";
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_14 = __this->___textMesh_5;
		NullCheck(L_14);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_14, _stringLiteral6A4A75F8AA5E0F61ACA8A64BF8C1612267A769EE, NULL);
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingBehaviour::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshingBehaviour_Update_m65D2787A869C31C638CA19643B72C0EC151739AC (MeshingBehaviour_t109955F72D30C3D1F02C61F77289972F36947DE2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m3ACCE6031F6FF6C54F88DE9EF8AD788143E6C016_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD5700C6F114DD67B63664D9FD62690E29520FEB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m4A55A1B492681E3944838CD2008DB0DC4CE6C777_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m01B983AEF89C8F17DEFD740A0E013C0CA4AC81C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mAB2B6FFD31DB8BF5C1516AEDD3901373D9CD412C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC0CE60FBC4FAA79C6D5B26DD275B4DA0DF7265E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_m21E4C15ED89B2D1A80F393D96CF4464B16E9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m468FAA4C99E6FF3C1756D6BD18FA8C2992355333_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCE536F8736F04AC3C46EED6FD5FA02F5D22A84C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CUpdateU3Eb__7_0_mD2B7D1DD8BF091248BC6B4734E36263EFBDC15FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tEC6D4B278440969CB479B2E8E2B65B2681CA6CE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA V_1;
	memset((&V_1), 0, sizeof(V_1));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_3 = NULL;
	MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* V_4 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_5 = NULL;
	int32_t V_6 = 0;
	Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* G_B11_2 = NULL;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* G_B11_3 = NULL;
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC G_B11_4;
	memset((&G_B11_4), 0, sizeof(G_B11_4));
	XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* G_B11_5 = NULL;
	Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8* G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* G_B10_2 = NULL;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* G_B10_3 = NULL;
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC G_B10_4;
	memset((&G_B10_4), 0, sizeof(G_B10_4));
	XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* G_B10_5 = NULL;
	{
		// if (s_MeshSubsystem.running && s_MeshSubsystem.TryGetMeshInfos(s_MeshInfos))
		XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* L_0 = __this->___s_MeshSubsystem_7;
		NullCheck(L_0);
		bool L_1;
		L_1 = IntegratedSubsystem_get_running_m18AA0D7AD1CB593DC9EE5F3DC79643717509D6E8(L_0, NULL);
		if (!L_1)
		{
			goto IL_012d;
		}
	}
	{
		XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* L_2 = __this->___s_MeshSubsystem_7;
		List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* L_3 = __this->___s_MeshInfos_8;
		NullCheck(L_2);
		bool L_4;
		L_4 = XRMeshSubsystem_TryGetMeshInfos_m05F584066A873F286C16B99A929C4B3B9AB58FD2(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_012d;
		}
	}
	{
		// foreach (var meshInfo in s_MeshInfos)
		List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* L_5 = __this->___s_MeshInfos_8;
		NullCheck(L_5);
		Enumerator_tEC6D4B278440969CB479B2E8E2B65B2681CA6CE3 L_6;
		L_6 = List_1_GetEnumerator_m468FAA4C99E6FF3C1756D6BD18FA8C2992355333(L_5, List_1_GetEnumerator_m468FAA4C99E6FF3C1756D6BD18FA8C2992355333_RuntimeMethod_var);
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_011f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m01B983AEF89C8F17DEFD740A0E013C0CA4AC81C7((&V_0), Enumerator_Dispose_m01B983AEF89C8F17DEFD740A0E013C0CA4AC81C7_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0111_1;
			}

IL_0037_1:
			{
				// foreach (var meshInfo in s_MeshInfos)
				MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA L_7;
				L_7 = Enumerator_get_Current_mC0CE60FBC4FAA79C6D5B26DD275B4DA0DF7265E6_inline((&V_0), Enumerator_get_Current_mC0CE60FBC4FAA79C6D5B26DD275B4DA0DF7265E6_RuntimeMethod_var);
				V_1 = L_7;
				// switch (meshInfo.ChangeState)
				int32_t L_8;
				L_8 = MeshInfo_get_ChangeState_mF366492B8EF4A9FC8F677E01A6BA4C6C75D3BF68_inline((&V_1), NULL);
				V_6 = L_8;
				int32_t L_9 = V_6;
				if ((!(((uint32_t)L_9) > ((uint32_t)1))))
				{
					goto IL_005a_1;
				}
			}
			{
				int32_t L_10 = V_6;
				if ((((int32_t)L_10) == ((int32_t)2)))
				{
					goto IL_00e1_1;
				}
			}
			{
				goto IL_0111_1;
			}

IL_005a_1:
			{
				// if (!m_MeshIdToGo.TryGetValue(meshInfo.MeshId, out var go))
				Dictionary_2_t03505FE02BAD9618F6A47DE9EE5E22F38BBF93C6* L_11 = __this->___m_MeshIdToGo_9;
				MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_12;
				L_12 = MeshInfo_get_MeshId_m96D69F5BA60A596D7C9FAAF0931940452E3D8846_inline((&V_1), NULL);
				NullCheck(L_11);
				bool L_13;
				L_13 = Dictionary_2_TryGetValue_mD5700C6F114DD67B63664D9FD62690E29520FEB4(L_11, L_12, (&V_2), Dictionary_2_TryGetValue_mD5700C6F114DD67B63664D9FD62690E29520FEB4_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_0096_1;
				}
			}
			{
				// go = Instantiate(emptyMeshPrefab, target, false);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___emptyMeshPrefab_4;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = __this->___target_6;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
				L_16 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCE536F8736F04AC3C46EED6FD5FA02F5D22A84C6(L_14, L_15, (bool)0, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCE536F8736F04AC3C46EED6FD5FA02F5D22A84C6_RuntimeMethod_var);
				V_2 = L_16;
				// m_MeshIdToGo[meshInfo.MeshId] = go;
				Dictionary_2_t03505FE02BAD9618F6A47DE9EE5E22F38BBF93C6* L_17 = __this->___m_MeshIdToGo_9;
				MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_18;
				L_18 = MeshInfo_get_MeshId_m96D69F5BA60A596D7C9FAAF0931940452E3D8846_inline((&V_1), NULL);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = V_2;
				NullCheck(L_17);
				Dictionary_2_set_Item_m4A55A1B492681E3944838CD2008DB0DC4CE6C777(L_17, L_18, L_19, Dictionary_2_set_Item_m4A55A1B492681E3944838CD2008DB0DC4CE6C777_RuntimeMethod_var);
			}

IL_0096_1:
			{
				// var mesh = go.GetComponent<MeshFilter>().mesh;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = V_2;
				NullCheck(L_20);
				MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_21;
				L_21 = GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8(L_20, GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var);
				NullCheck(L_21);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_22;
				L_22 = MeshFilter_get_mesh_m13172D7EF6682861971817D0A47EE2BE49FBCB1C(L_21, NULL);
				V_3 = L_22;
				// var col = go.GetComponent<MeshCollider>();
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = V_2;
				NullCheck(L_23);
				MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_24;
				L_24 = GameObject_GetComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_m21E4C15ED89B2D1A80F393D96CF4464B16E9F1F9(L_23, GameObject_GetComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_m21E4C15ED89B2D1A80F393D96CF4464B16E9F1F9_RuntimeMethod_var);
				V_4 = L_24;
				// s_MeshSubsystem.GenerateMeshAsync(meshInfo.MeshId, mesh, col, MeshVertexAttributes.Normals | MeshVertexAttributes.UVs,
				//     result =>
				//     {
				//         Debug.Log("Mesh generated: " + result.Status);
				//     });
				XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* L_25 = __this->___s_MeshSubsystem_7;
				MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_26;
				L_26 = MeshInfo_get_MeshId_m96D69F5BA60A596D7C9FAAF0931940452E3D8846_inline((&V_1), NULL);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_27 = V_3;
				MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_28 = V_4;
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B_il2cpp_TypeInfo_var);
				Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8* L_29 = ((U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_1;
				Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8* L_30 = L_29;
				G_B10_0 = L_30;
				G_B10_1 = 5;
				G_B10_2 = L_28;
				G_B10_3 = L_27;
				G_B10_4 = L_26;
				G_B10_5 = L_25;
				if (L_30)
				{
					G_B11_0 = L_30;
					G_B11_1 = 5;
					G_B11_2 = L_28;
					G_B11_3 = L_27;
					G_B11_4 = L_26;
					G_B11_5 = L_25;
					goto IL_00da_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B_il2cpp_TypeInfo_var);
				U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B* L_31 = ((U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B_il2cpp_TypeInfo_var))->___U3CU3E9_0;
				Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8* L_32 = (Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8*)il2cpp_codegen_object_new(Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8_il2cpp_TypeInfo_var);
				NullCheck(L_32);
				Action_1__ctor_m62D287B08FD32117DDF0FA2BB669D66F788BF382(L_32, L_31, (intptr_t)((void*)U3CU3Ec_U3CUpdateU3Eb__7_0_mD2B7D1DD8BF091248BC6B4734E36263EFBDC15FD_RuntimeMethod_var), NULL);
				Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8* L_33 = L_32;
				((U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_1 = L_33;
				Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_1), (void*)L_33);
				G_B11_0 = L_33;
				G_B11_1 = G_B10_1;
				G_B11_2 = G_B10_2;
				G_B11_3 = G_B10_3;
				G_B11_4 = G_B10_4;
				G_B11_5 = G_B10_5;
			}

IL_00da_1:
			{
				NullCheck(G_B11_5);
				XRMeshSubsystem_GenerateMeshAsync_m3DEA3C294695FD7C54D1186FF7DCE84A4BA1CFB7(G_B11_5, G_B11_4, G_B11_3, G_B11_2, G_B11_1, G_B11_0, NULL);
				// break;
				goto IL_0111_1;
			}

IL_00e1_1:
			{
				// if (m_MeshIdToGo.TryGetValue(meshInfo.MeshId, out var meshGo))
				Dictionary_2_t03505FE02BAD9618F6A47DE9EE5E22F38BBF93C6* L_34 = __this->___m_MeshIdToGo_9;
				MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_35;
				L_35 = MeshInfo_get_MeshId_m96D69F5BA60A596D7C9FAAF0931940452E3D8846_inline((&V_1), NULL);
				NullCheck(L_34);
				bool L_36;
				L_36 = Dictionary_2_TryGetValue_mD5700C6F114DD67B63664D9FD62690E29520FEB4(L_34, L_35, (&V_5), Dictionary_2_TryGetValue_mD5700C6F114DD67B63664D9FD62690E29520FEB4_RuntimeMethod_var);
				if (!L_36)
				{
					goto IL_0111_1;
				}
			}
			{
				// Destroy(meshGo);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = V_5;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_37, NULL);
				// m_MeshIdToGo.Remove(meshInfo.MeshId);
				Dictionary_2_t03505FE02BAD9618F6A47DE9EE5E22F38BBF93C6* L_38 = __this->___m_MeshIdToGo_9;
				MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_39;
				L_39 = MeshInfo_get_MeshId_m96D69F5BA60A596D7C9FAAF0931940452E3D8846_inline((&V_1), NULL);
				NullCheck(L_38);
				bool L_40;
				L_40 = Dictionary_2_Remove_m3ACCE6031F6FF6C54F88DE9EF8AD788143E6C016(L_38, L_39, Dictionary_2_Remove_m3ACCE6031F6FF6C54F88DE9EF8AD788143E6C016_RuntimeMethod_var);
			}

IL_0111_1:
			{
				// foreach (var meshInfo in s_MeshInfos)
				bool L_41;
				L_41 = Enumerator_MoveNext_mAB2B6FFD31DB8BF5C1516AEDD3901373D9CD412C((&V_0), Enumerator_MoveNext_mAB2B6FFD31DB8BF5C1516AEDD3901373D9CD412C_RuntimeMethod_var);
				if (L_41)
				{
					goto IL_0037_1;
				}
			}
			{
				goto IL_012d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_012d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshingBehaviour__ctor_mAAC064E80F89337602B32FEF8304AD3516E542AA (MeshingBehaviour_t109955F72D30C3D1F02C61F77289972F36947DE2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mFF35FF8199520A91C28C7C4A6F912CADEFE83909_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t03505FE02BAD9618F6A47DE9EE5E22F38BBF93C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA2DD2929DEFD0FB15C436C1FEC952D5B092CBA23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tEE09D0BD215A518344AF2985829C519B609B7B17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<MeshInfo> s_MeshInfos = new List<MeshInfo>();
		List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* L_0 = (List_1_tEE09D0BD215A518344AF2985829C519B609B7B17*)il2cpp_codegen_object_new(List_1_tEE09D0BD215A518344AF2985829C519B609B7B17_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mA2DD2929DEFD0FB15C436C1FEC952D5B092CBA23(L_0, List_1__ctor_mA2DD2929DEFD0FB15C436C1FEC952D5B092CBA23_RuntimeMethod_var);
		__this->___s_MeshInfos_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___s_MeshInfos_8), (void*)L_0);
		// private Dictionary<MeshId, GameObject> m_MeshIdToGo = new Dictionary<MeshId, GameObject>();
		Dictionary_2_t03505FE02BAD9618F6A47DE9EE5E22F38BBF93C6* L_1 = (Dictionary_2_t03505FE02BAD9618F6A47DE9EE5E22F38BBF93C6*)il2cpp_codegen_object_new(Dictionary_2_t03505FE02BAD9618F6A47DE9EE5E22F38BBF93C6_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_mFF35FF8199520A91C28C7C4A6F912CADEFE83909(L_1, Dictionary_2__ctor_mFF35FF8199520A91C28C7C4A6F912CADEFE83909_RuntimeMethod_var);
		__this->___m_MeshIdToGo_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_MeshIdToGo_9), (void*)L_1);
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
// System.Void UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingBehaviour/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mEB0AA84168607FF0187D9E783FE3FDB7D8A0C796 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B* L_0 = (U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B*)il2cpp_codegen_object_new(U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m726994FB513CD5C23A758B095B7F2050D7A88F00(L_0, NULL);
		((U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingBehaviour/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m726994FB513CD5C23A758B095B7F2050D7A88F00 (U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingBehaviour/<>c::<Update>b__7_0(UnityEngine.XR.MeshGenerationResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CUpdateU3Eb__7_0_mD2B7D1DD8BF091248BC6B4734E36263EFBDC15FD (U3CU3Ec_t2D405DDDC76BA38130BAF879BB44CCB1BA02F02B* __this, MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C ___result0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshGenerationStatus_t1F91400BEB3E9E6B4DC12A43C85006812BD28EDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7185F3BCA17ABA6AA2CF6A9C5404AB293CFFC48);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Debug.Log("Mesh generated: " + result.Status);
		int32_t L_0;
		L_0 = MeshGenerationResult_get_Status_m392754927B1E28DB2E6078A212F8FCC013AC10C0_inline((&___result0), NULL);
		V_0 = L_0;
		Il2CppFakeBox<int32_t> L_1(MeshGenerationStatus_t1F91400BEB3E9E6B4DC12A43C85006812BD28EDE_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_2;
		L_2 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_1), NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralD7185F3BCA17ABA6AA2CF6A9C5404AB293CFFC48, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// });
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
// System.Void UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingTeapotFeature::OnSubsystemCreate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshingTeapotFeature_OnSubsystemCreate_m829E4DB978C5C6CA1E12C31FE355F5ED7E4132B0 (MeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRFeature_CreateSubsystem_TisXRMeshSubsystemDescriptor_tD9814661B8661C69D5A0DBB76C9AF61778B9CEC1_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_mAB175555B5E53A082F353048FD7E6ABF6846F607_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45ABB9CCE315792527F1FB93BD11632791565DBD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CreateSubsystem<XRMeshSubsystemDescriptor, XRMeshSubsystem>(s_MeshDescriptors, "Sample Meshing");
		il2cpp_codegen_runtime_class_init_inline(MeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2_il2cpp_TypeInfo_var);
		List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22* L_0 = ((MeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2_StaticFields*)il2cpp_codegen_static_fields_for(MeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2_il2cpp_TypeInfo_var))->___s_MeshDescriptors_17;
		OpenXRFeature_CreateSubsystem_TisXRMeshSubsystemDescriptor_tD9814661B8661C69D5A0DBB76C9AF61778B9CEC1_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_mAB175555B5E53A082F353048FD7E6ABF6846F607(__this, L_0, _stringLiteral45ABB9CCE315792527F1FB93BD11632791565DBD, OpenXRFeature_CreateSubsystem_TisXRMeshSubsystemDescriptor_tD9814661B8661C69D5A0DBB76C9AF61778B9CEC1_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_mAB175555B5E53A082F353048FD7E6ABF6846F607_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingTeapotFeature::OnSubsystemStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshingTeapotFeature_OnSubsystemStart_m781F9E63F36D607B8B505B7101497FA62CD8FB8D (MeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRFeature_StartSubsystem_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m0C067F6B64FF1332C06FCC302EB30FA6BC88F29C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartSubsystem<XRMeshSubsystem>();
		OpenXRFeature_StartSubsystem_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m0C067F6B64FF1332C06FCC302EB30FA6BC88F29C(__this, OpenXRFeature_StartSubsystem_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m0C067F6B64FF1332C06FCC302EB30FA6BC88F29C_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingTeapotFeature::OnSubsystemStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshingTeapotFeature_OnSubsystemStop_mF4964F832C2E3E45335C024632FD7237C24E3639 (MeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRFeature_StopSubsystem_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m94A9611521BB67BAACE92079BEB86CB5D8E64B86_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StopSubsystem<XRMeshSubsystem>();
		OpenXRFeature_StopSubsystem_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m94A9611521BB67BAACE92079BEB86CB5D8E64B86(__this, OpenXRFeature_StopSubsystem_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m94A9611521BB67BAACE92079BEB86CB5D8E64B86_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingTeapotFeature::OnSubsystemDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshingTeapotFeature_OnSubsystemDestroy_m72B93C7FE5846BAEAFF000426012519A6D582C16 (MeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRFeature_DestroySubsystem_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m90715606D59F037609DDB43AEF21D087F3C25EBB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DestroySubsystem<XRMeshSubsystem>();
		OpenXRFeature_DestroySubsystem_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m90715606D59F037609DDB43AEF21D087F3C25EBB(__this, OpenXRFeature_DestroySubsystem_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m90715606D59F037609DDB43AEF21D087F3C25EBB_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingTeapotFeature::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshingTeapotFeature__ctor_mF9443C25EBF36C2E2B75A0EC646AE3D6A1F951C4 (MeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2* __this, const RuntimeMethod* method) 
{
	{
		OpenXRFeature__ctor_m120460E34ECC22ED2DB96797A6DCB5C870E78852(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.MeshingFeature.MeshingTeapotFeature::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshingTeapotFeature__cctor_m86122B69143A66DAD457A42EFDB9B397D646A1ED (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m277DBA8B46097B1BA355F0215F73E0DA16803756_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static List<XRMeshSubsystemDescriptor> s_MeshDescriptors =
		//     new List<XRMeshSubsystemDescriptor>();
		List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22* L_0 = (List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22*)il2cpp_codegen_object_new(List_1_tA9571B7847EA1D73E7B431473A8F7D19B9786E22_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m277DBA8B46097B1BA355F0215F73E0DA16803756(L_0, List_1__ctor_m277DBA8B46097B1BA355F0215F73E0DA16803756_RuntimeMethod_var);
		((MeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2_StaticFields*)il2cpp_codegen_static_fields_for(MeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2_il2cpp_TypeInfo_var))->___s_MeshDescriptors_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((MeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2_StaticFields*)il2cpp_codegen_static_fields_for(MeshingTeapotFeature_t6E683DFB18C66C81CC152B9F021E6EA2E52F94B2_il2cpp_TypeInfo_var))->___s_MeshDescriptors_17), (void*)L_0);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_InterceptCreateSessionFeature_OnMessage_mDC10AA02BB5ED0AA93C96BAEA118F3923E2E4354(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	InterceptCreateSessionFeature_OnMessage_mDC10AA02BB5ED0AA93C96BAEA118F3923E2E4354(____message0_unmarshaled, NULL);

}
// System.String UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature::get_receivedMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InterceptCreateSessionFeature_get_receivedMessage_m3783793E40B12DC8AE9770D6DBB7F981D36C92D6 (InterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F* __this, const RuntimeMethod* method) 
{
	{
		// public string receivedMessage { get; private set; }
		String_t* L_0 = __this->___U3CreceivedMessageU3Ek__BackingField_18;
		return L_0;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature::set_receivedMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterceptCreateSessionFeature_set_receivedMessage_m06924CA717DBCA3DCFCCC136AF8F1C86CE98756D (InterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string receivedMessage { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CreceivedMessageU3Ek__BackingField_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CreceivedMessageU3Ek__BackingField_18), (void*)L_0);
		return;
	}
}
// System.IntPtr UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature::HookGetInstanceProcAddr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t InterceptCreateSessionFeature_HookGetInstanceProcAddr_m8E62A8EF76425D5CBC6EF2086C66402653FC9C0A (InterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F* __this, intptr_t ___func0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF33CDB2C1E618C34248975FB6EB8FC1FC6256C81);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("EXT: registering our own xrGetInstanceProcAddr");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralF33CDB2C1E618C34248975FB6EB8FC1FC6256C81, NULL);
		// return intercept_xrCreateSession_xrGetInstanceProcAddr(func);
		intptr_t L_0 = ___func0;
		intptr_t L_1;
		L_1 = InterceptCreateSessionFeature_intercept_xrCreateSession_xrGetInstanceProcAddr_mB3560C7616943DE21C2260F2F9D28BAC2846F3D1(L_0, NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature::OnInstanceCreate(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InterceptCreateSessionFeature_OnInstanceCreate_mDB9D5F1E18BAA436FEF1C4433D779A8A961A8E21 (InterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F* __this, uint64_t ___xrInstance0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterceptCreateSessionFeature_OnMessage_mDC10AA02BB5ED0AA93C96BAEA118F3923E2E4354_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReceiveMessageDelegate_tFF45138D21684C2ADF9D6603D1048CA02845970B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6694A5DE87718A7301C9D332796F1D8284057656);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Internal_SetCallback(OnMessage);
		ReceiveMessageDelegate_tFF45138D21684C2ADF9D6603D1048CA02845970B* L_0 = (ReceiveMessageDelegate_tFF45138D21684C2ADF9D6603D1048CA02845970B*)il2cpp_codegen_object_new(ReceiveMessageDelegate_tFF45138D21684C2ADF9D6603D1048CA02845970B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ReceiveMessageDelegate__ctor_m152A9C050292D523407A94CA7A708C9C89C00E06(L_0, NULL, (intptr_t)((void*)InterceptCreateSessionFeature_OnMessage_mDC10AA02BB5ED0AA93C96BAEA118F3923E2E4354_RuntimeMethod_var), NULL);
		InterceptCreateSessionFeature_Internal_SetCallback_m43E93F76F34966289CB788334D87FEB66850C491(L_0, NULL);
		// Internal_SetMessage(message);
		String_t* L_1 = __this->___message_17;
		InterceptCreateSessionFeature_Internal_SetMessage_m7B17D2CD0BB04E55B3A9CB05DCFC2182A8436E10(L_1, NULL);
		// Debug.Log($"EXT: Got xrInstance: {xrInstance}");
		uint64_t L_2 = ___xrInstance0;
		uint64_t L_3 = L_2;
		RuntimeObject* L_4 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral6694A5DE87718A7301C9D332796F1D8284057656, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_5, NULL);
		// return true;
		return (bool)1;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature::OnMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterceptCreateSessionFeature_OnMessage_mDC10AA02BB5ED0AA93C96BAEA118F3923E2E4354 (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRSettings_GetFeature_TisInterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F_mCA36190361158CB585814D7DC7E9DB5567FB73AB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	InterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F* V_0 = NULL;
	{
		// if (message == null)
		String_t* L_0 = ___message0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// Debug.Log(message);
		String_t* L_1 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// var feature = OpenXRSettings.Instance.GetFeature<InterceptCreateSessionFeature>();
		OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55* L_2;
		L_2 = OpenXRSettings_get_Instance_m0F645DB8A0ECC1325AD730F18479BCDCB92D1920(NULL);
		NullCheck(L_2);
		InterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F* L_3;
		L_3 = OpenXRSettings_GetFeature_TisInterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F_mCA36190361158CB585814D7DC7E9DB5567FB73AB(L_2, OpenXRSettings_GetFeature_TisInterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F_mCA36190361158CB585814D7DC7E9DB5567FB73AB_RuntimeMethod_var);
		V_0 = L_3;
		// if (null == feature)
		InterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_4, NULL);
		if (!L_5)
		{
			goto IL_001f;
		}
	}
	{
		// return;
		return;
	}

IL_001f:
	{
		// feature.receivedMessage = message;
		InterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F* L_6 = V_0;
		String_t* L_7 = ___message0;
		NullCheck(L_6);
		InterceptCreateSessionFeature_set_receivedMessage_m06924CA717DBCA3DCFCCC136AF8F1C86CE98756D_inline(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature::OnSessionCreate(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterceptCreateSessionFeature_OnSessionCreate_mDACF4FF80A5496A2D82814AFA71F799E3C437D56 (InterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F* __this, uint64_t ___xrSession0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F2EE87779038CC92BFBB1DF34C03DEF305FB801);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"EXT: Got xrSession: {xrSession}");
		uint64_t L_0 = ___xrSession0;
		uint64_t L_1 = L_0;
		RuntimeObject* L_2 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral5F2EE87779038CC92BFBB1DF34C03DEF305FB801, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature::OnSessionBegin(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterceptCreateSessionFeature_OnSessionBegin_m15CD5550E062FBEC79260F9228CFC77FC07856CB (InterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F* __this, uint64_t ___xrSession0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98C756BD55BDDC280B6C032C2E49B6D45D887F8C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"EXT: xrBeginSession: {xrSession}");
		uint64_t L_0 = ___xrSession0;
		uint64_t L_1 = L_0;
		RuntimeObject* L_2 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral98C756BD55BDDC280B6C032C2E49B6D45D887F8C, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature::OnSessionEnd(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterceptCreateSessionFeature_OnSessionEnd_m7CB13DAC61C6312563F892F8FD8C0CF6A687A95A (InterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F* __this, uint64_t ___xrSession0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5B72789EFB9E0555C84C47E04FC5E67DCBB9A44);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"EXT: about to xrEndSession: {xrSession}");
		uint64_t L_0 = ___xrSession0;
		uint64_t L_1 = L_0;
		RuntimeObject* L_2 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralC5B72789EFB9E0555C84C47E04FC5E67DCBB9A44, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// }
		return;
	}
}
// System.IntPtr UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature::intercept_xrCreateSession_xrGetInstanceProcAddr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t InterceptCreateSessionFeature_intercept_xrCreateSession_xrGetInstanceProcAddr_mB3560C7616943DE21C2260F2F9D28BAC2846F3D1 (intptr_t ___func0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_InterceptFeaturePlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("InterceptFeaturePlugin"), "script_intercept_xrCreateSession_xrGetInstanceProcAddr", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_InterceptFeaturePlugin_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(script_intercept_xrCreateSession_xrGetInstanceProcAddr)(___func0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___func0);
	#endif

	return returnValue;
}
// System.Void UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature::Internal_SetMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterceptCreateSessionFeature_Internal_SetMessage_m7B17D2CD0BB04E55B3A9CB05DCFC2182A8436E10 (String_t* ___printString0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_InterceptFeaturePlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("InterceptFeaturePlugin"), "script_set_message", IL2CPP_CALL_DEFAULT, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___printString0' to native representation
	char* ____printString0_marshaled = NULL;
	____printString0_marshaled = il2cpp_codegen_marshal_string(___printString0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_InterceptFeaturePlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(script_set_message)(____printString0_marshaled);
	#else
	il2cppPInvokeFunc(____printString0_marshaled);
	#endif

	// Marshaling cleanup of parameter '___printString0' native representation
	il2cpp_codegen_marshal_free(____printString0_marshaled);
	____printString0_marshaled = NULL;

}
// System.Void UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature::Internal_SetCallback(UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature/ReceiveMessageDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterceptCreateSessionFeature_Internal_SetCallback_m43E93F76F34966289CB788334D87FEB66850C491 (ReceiveMessageDelegate_tFF45138D21684C2ADF9D6603D1048CA02845970B* ___callback0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_InterceptFeaturePlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("InterceptFeaturePlugin"), "script_set_callback", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_InterceptFeaturePlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(script_set_callback)(____callback0_marshaled);
	#else
	il2cppPInvokeFunc(____callback0_marshaled);
	#endif

}
// System.Void UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterceptCreateSessionFeature__ctor_mD0FAEE0D99BDF012EE612DEDA4407BEA51D1E40B (InterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1692839853852513A7A25A35F75CD821A35339C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string message = "Hello from C#!";
		__this->___message_17 = _stringLiteralB1692839853852513A7A25A35F75CD821A35339C;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___message_17), (void*)_stringLiteralB1692839853852513A7A25A35F75CD821A35339C);
		OpenXRFeature__ctor_m120460E34ECC22ED2DB96797A6DCB5C870E78852(__this, NULL);
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
void OnMessageDelegate_Invoke_m84C09CC1A93644DB772323D0788A7115F3D836C0_Multicast(OnMessageDelegate_tF1346CB5CF6BF1F9B3CEDB817F23CF0E2A68D5A9* __this, String_t* ___message0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnMessageDelegate_tF1346CB5CF6BF1F9B3CEDB817F23CF0E2A68D5A9* currentDelegate = reinterpret_cast<OnMessageDelegate_tF1346CB5CF6BF1F9B3CEDB817F23CF0E2A68D5A9*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___message0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnMessageDelegate_Invoke_m84C09CC1A93644DB772323D0788A7115F3D836C0_OpenInst(OnMessageDelegate_tF1346CB5CF6BF1F9B3CEDB817F23CF0E2A68D5A9* __this, String_t* ___message0, const RuntimeMethod* method)
{
	NullCheck(___message0);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___message0, method);
}
void OnMessageDelegate_Invoke_m84C09CC1A93644DB772323D0788A7115F3D836C0_OpenStatic(OnMessageDelegate_tF1346CB5CF6BF1F9B3CEDB817F23CF0E2A68D5A9* __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___message0, method);
}
void OnMessageDelegate_Invoke_m84C09CC1A93644DB772323D0788A7115F3D836C0_OpenStaticInvoker(OnMessageDelegate_tF1346CB5CF6BF1F9B3CEDB817F23CF0E2A68D5A9* __this, String_t* ___message0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___message0);
}
void OnMessageDelegate_Invoke_m84C09CC1A93644DB772323D0788A7115F3D836C0_ClosedStaticInvoker(OnMessageDelegate_tF1346CB5CF6BF1F9B3CEDB817F23CF0E2A68D5A9* __this, String_t* ___message0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___message0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnMessageDelegate_tF1346CB5CF6BF1F9B3CEDB817F23CF0E2A68D5A9 (OnMessageDelegate_tF1346CB5CF6BF1F9B3CEDB817F23CF0E2A68D5A9* __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

}
// System.Void UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature/OnMessageDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnMessageDelegate__ctor_m801B609CB0434789C86EAD1684D20BF61DE06498 (OnMessageDelegate_tF1346CB5CF6BF1F9B3CEDB817F23CF0E2A68D5A9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnMessageDelegate_Invoke_m84C09CC1A93644DB772323D0788A7115F3D836C0_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnMessageDelegate_Invoke_m84C09CC1A93644DB772323D0788A7115F3D836C0_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnMessageDelegate_Invoke_m84C09CC1A93644DB772323D0788A7115F3D836C0_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&OnMessageDelegate_Invoke_m84C09CC1A93644DB772323D0788A7115F3D836C0_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnMessageDelegate_Invoke_m84C09CC1A93644DB772323D0788A7115F3D836C0_Multicast;
}
// System.Void UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature/OnMessageDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnMessageDelegate_Invoke_m84C09CC1A93644DB772323D0788A7115F3D836C0 (OnMessageDelegate_tF1346CB5CF6BF1F9B3CEDB817F23CF0E2A68D5A9* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___message0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature/OnMessageDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnMessageDelegate_BeginInvoke_m28732DC47EBF67DA6238B054994108A78625BF49 (OnMessageDelegate_tF1346CB5CF6BF1F9B3CEDB817F23CF0E2A68D5A9* __this, String_t* ___message0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature/OnMessageDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnMessageDelegate_EndInvoke_m652C2BA612DB540A590E2356FF221E2BB80DCDFE (OnMessageDelegate_tF1346CB5CF6BF1F9B3CEDB817F23CF0E2A68D5A9* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ReceiveMessageDelegate_Invoke_mB9A0465F24A5AD6094104C8892DFC8654DA63064_Multicast(ReceiveMessageDelegate_tFF45138D21684C2ADF9D6603D1048CA02845970B* __this, String_t* ___message0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ReceiveMessageDelegate_tFF45138D21684C2ADF9D6603D1048CA02845970B* currentDelegate = reinterpret_cast<ReceiveMessageDelegate_tFF45138D21684C2ADF9D6603D1048CA02845970B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___message0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ReceiveMessageDelegate_Invoke_mB9A0465F24A5AD6094104C8892DFC8654DA63064_OpenInst(ReceiveMessageDelegate_tFF45138D21684C2ADF9D6603D1048CA02845970B* __this, String_t* ___message0, const RuntimeMethod* method)
{
	NullCheck(___message0);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___message0, method);
}
void ReceiveMessageDelegate_Invoke_mB9A0465F24A5AD6094104C8892DFC8654DA63064_OpenStatic(ReceiveMessageDelegate_tFF45138D21684C2ADF9D6603D1048CA02845970B* __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___message0, method);
}
void ReceiveMessageDelegate_Invoke_mB9A0465F24A5AD6094104C8892DFC8654DA63064_OpenStaticInvoker(ReceiveMessageDelegate_tFF45138D21684C2ADF9D6603D1048CA02845970B* __this, String_t* ___message0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___message0);
}
void ReceiveMessageDelegate_Invoke_mB9A0465F24A5AD6094104C8892DFC8654DA63064_ClosedStaticInvoker(ReceiveMessageDelegate_tFF45138D21684C2ADF9D6603D1048CA02845970B* __this, String_t* ___message0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___message0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ReceiveMessageDelegate_tFF45138D21684C2ADF9D6603D1048CA02845970B (ReceiveMessageDelegate_tFF45138D21684C2ADF9D6603D1048CA02845970B* __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

}
// System.Void UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature/ReceiveMessageDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiveMessageDelegate__ctor_m152A9C050292D523407A94CA7A708C9C89C00E06 (ReceiveMessageDelegate_tFF45138D21684C2ADF9D6603D1048CA02845970B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ReceiveMessageDelegate_Invoke_mB9A0465F24A5AD6094104C8892DFC8654DA63064_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ReceiveMessageDelegate_Invoke_mB9A0465F24A5AD6094104C8892DFC8654DA63064_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ReceiveMessageDelegate_Invoke_mB9A0465F24A5AD6094104C8892DFC8654DA63064_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&ReceiveMessageDelegate_Invoke_mB9A0465F24A5AD6094104C8892DFC8654DA63064_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ReceiveMessageDelegate_Invoke_mB9A0465F24A5AD6094104C8892DFC8654DA63064_Multicast;
}
// System.Void UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature/ReceiveMessageDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiveMessageDelegate_Invoke_mB9A0465F24A5AD6094104C8892DFC8654DA63064 (ReceiveMessageDelegate_tFF45138D21684C2ADF9D6603D1048CA02845970B* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___message0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature/ReceiveMessageDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReceiveMessageDelegate_BeginInvoke_m70F1F6CA07C4219A74CBBE7C0EBD6777D600230F (ReceiveMessageDelegate_tFF45138D21684C2ADF9D6603D1048CA02845970B* __this, String_t* ___message0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptCreateSessionFeature/ReceiveMessageDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiveMessageDelegate_EndInvoke_m5F92BB28F37C771DDBE557852F74F8E1312EE9F2 (ReceiveMessageDelegate_tFF45138D21684C2ADF9D6603D1048CA02845970B* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptMessageHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterceptMessageHandler_Start_m9DCC386E18B0022AED0CCF7659795C6CEAAE7ECD (InterceptMessageHandler_t1DF3F1A3719A60512C414F1E247D810ED8599FE4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRSettings_GetFeature_TisInterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F_mCA36190361158CB585814D7DC7E9DB5567FB73AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8CCA272FE14112D756F93769EECED88FA5AC79A);
		s_Il2CppMethodInitialized = true;
	}
	InterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F* V_0 = NULL;
	{
		// var feature = OpenXRSettings.Instance.GetFeature<InterceptCreateSessionFeature>();
		OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55* L_0;
		L_0 = OpenXRSettings_get_Instance_m0F645DB8A0ECC1325AD730F18479BCDCB92D1920(NULL);
		NullCheck(L_0);
		InterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F* L_1;
		L_1 = OpenXRSettings_GetFeature_TisInterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F_mCA36190361158CB585814D7DC7E9DB5567FB73AB(L_0, OpenXRSettings_GetFeature_TisInterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F_mCA36190361158CB585814D7DC7E9DB5567FB73AB_RuntimeMethod_var);
		V_0 = L_1;
		// if (feature == null || !feature.enabled)
		InterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_3)
		{
			goto IL_001c;
		}
	}
	{
		InterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F* L_4 = V_0;
		NullCheck(L_4);
		bool L_5;
		L_5 = OpenXRFeature_get_enabled_m958523A02F396C1623F2C7D7292B2E96A26270CD(L_4, NULL);
		if (L_5)
		{
			goto IL_002d;
		}
	}

IL_001c:
	{
		// textMesh.text = "InterceptCreateSession feature not enabled";
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_6 = __this->___textMesh_4;
		NullCheck(L_6);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_6, _stringLiteralA8CCA272FE14112D756F93769EECED88FA5AC79A, NULL);
		return;
	}

IL_002d:
	{
		// textMesh.text = feature.receivedMessage;
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_7 = __this->___textMesh_4;
		InterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = InterceptCreateSessionFeature_get_receivedMessage_m3783793E40B12DC8AE9770D6DBB7F981D36C92D6_inline(L_8, NULL);
		NullCheck(L_7);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_7, L_9, NULL);
		// textMesh.color = Color.white;
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_10 = __this->___textMesh_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		L_11 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		NullCheck(L_10);
		TextMesh_set_color_mF08F30C3CD797C16289225B567724B9F07DC641E(L_10, L_11, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Samples.InterceptFeature.InterceptMessageHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterceptMessageHandler__ctor_mA197DD6FF64EDDB88CAF44B9A607AC5BBB812EBF (InterceptMessageHandler_t1DF3F1A3719A60512C414F1E247D810ED8599FE4* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___value0;
		int32_t L_1 = ___min1;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___value0;
		int32_t L_5 = ___max2;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___v0;
		float L_5 = L_4.___z_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_6), L_1, L_3, L_5, (0.0f), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_Dot_m40A3B2E258E53E4847583474E40AC29F68AF8BA3_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___a0;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___b1;
		float L_3 = L_2.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___a0;
		float L_5 = L_4.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___b1;
		float L_7 = L_6.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___a0;
		float L_9 = L_8.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___b1;
		float L_11 = L_10.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = ___a0;
		float L_13 = L_12.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = ___b1;
		float L_15 = L_14.___w_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
		goto IL_003b;
	}

IL_003b:
	{
		float L_16 = V_0;
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Multiply_m02FE150FD7366546FC19A36B6928512376BF64E8_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___a0;
		float L_1 = L_0.___x_1;
		float L_2 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = ___a0;
		float L_4 = L_3.___y_2;
		float L_5 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___a0;
		float L_7 = L_6.___z_3;
		float L_8 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = ___a0;
		float L_10 = L_9.___w_4;
		float L_11 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), ((float)il2cpp_codegen_multiply(L_10, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0029;
	}

IL_0029:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		int32_t L_0 = ___index0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_001d;
			}
			case 1:
			{
				goto IL_0026;
			}
			case 2:
			{
				goto IL_002f;
			}
			case 3:
			{
				goto IL_0038;
			}
		}
	}
	{
		goto IL_0041;
	}

IL_001d:
	{
		float L_3 = __this->___x_1;
		V_2 = L_3;
		goto IL_004c;
	}

IL_0026:
	{
		float L_4 = __this->___y_2;
		V_2 = L_4;
		goto IL_004c;
	}

IL_002f:
	{
		float L_5 = __this->___z_3;
		V_2 = L_5;
		goto IL_004c;
	}

IL_0038:
	{
		float L_6 = __this->___w_4;
		V_2 = L_6;
		goto IL_004c;
	}

IL_0041:
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_7 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB23C3717573626FB4C3C7DF5C19EDE7689837214)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_RuntimeMethod_var)));
	}

IL_004c:
	{
		float L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = floor(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_grey_m1CE6BEDA3EF8569E939F77A4B0231D9839864F92_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.5f), (0.5f), (0.5f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MeshInfo_get_ChangeState_mF366492B8EF4A9FC8F677E01A6BA4C6C75D3BF68_inline (MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CChangeStateU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC MeshInfo_get_MeshId_m96D69F5BA60A596D7C9FAAF0931940452E3D8846_inline (MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA* __this, const RuntimeMethod* method) 
{
	{
		MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_0 = __this->___U3CMeshIdU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MeshGenerationResult_get_Status_m392754927B1E28DB2E6078A212F8FCC013AC10C0_inline (MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CStatusU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InterceptCreateSessionFeature_set_receivedMessage_m06924CA717DBCA3DCFCCC136AF8F1C86CE98756D_inline (InterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string receivedMessage { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CreceivedMessageU3Ek__BackingField_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CreceivedMessageU3Ek__BackingField_18), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InterceptCreateSessionFeature_get_receivedMessage_m3783793E40B12DC8AE9770D6DBB7F981D36C92D6_inline (InterceptCreateSessionFeature_t3FA3FF7E38EA0233C3A4F8544AD7DBF1DC69785F* __this, const RuntimeMethod* method) 
{
	{
		// public string receivedMessage { get; private set; }
		String_t* L_0 = __this->___U3CreceivedMessageU3Ek__BackingField_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA Enumerator_get_Current_mC0CE60FBC4FAA79C6D5B26DD275B4DA0DF7265E6_gshared_inline (Enumerator_tEC6D4B278440969CB479B2E8E2B65B2681CA6CE3* __this, const RuntimeMethod* method) 
{
	{
		MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA L_0 = (MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
