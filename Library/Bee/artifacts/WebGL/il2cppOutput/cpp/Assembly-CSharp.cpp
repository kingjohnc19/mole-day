#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`1<System.Single>
struct Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7;
// System.Func`2<UnityEngine.AudioSource,System.Boolean>
struct Func_2_t920AB46A880DA3D1651F78EE6B4AF6EE30D43937;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.IEnumerable`1<UnityEngine.AudioSource>
struct IEnumerable_1_t100A605302E409122C25E4E00A58C703DFC428EA;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.List`1<System.Func`1<System.Single>>
struct List_1_t6F64C3EC2C2C6614F0A241F3D022EC8745453001;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Predicate`1<UnityEngine.AudioSource>
struct Predicate_1_tC996B23FA1541A49E50BC47010AB40E23A621271;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Func`1<System.Single>[]
struct Func_1U5BU5D_t9DA6AF00D03864D2A6519555F6C6BCCBAB09A05F;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2;
// Button[]
struct ButtonU5BU5D_t794F5842D7A836C586DBE4F1F11D7B12042DF2EA;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// Button
struct Button_t08E85812946542C2FD1F37BA7C97825101832DC8;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.CapsuleCollider
struct CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// CollisionTrigger
struct CollisionTrigger_tA274AF9BF7ECBB260B866D13D1AF4B98F6DA2112;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// Crouch
struct Crouch_t5E2751F5A50DD97CAF1DBA3A07594BFADB38637E;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// FirstPersonAudio
struct FirstPersonAudio_t42DBEA25B65A97CD0277104F996717899E882174;
// FirstPersonLook
struct FirstPersonLook_tFFEABF55DC99B2EC1D6B5DAEE9864E5815F6B93C;
// FirstPersonMovement
struct FirstPersonMovement_tA852887AB56569BDD01EA2BE85F9B39C349C5FFE;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GroundCheck
struct GroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// Jump
struct Jump_t5984E7808773AD6C29ABDF6EF00972AEFA377F8F;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// Main
struct Main_t6125012C4D88701077DD3C4660130C5535730E1E;
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
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Quiz
struct Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// Zoom
struct Zoom_tF5A194929F87C356C89A06E28D8DD7C6DF48C7D6;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// FirstPersonAudio/<>c__DisplayClass25_0
struct U3CU3Ec__DisplayClass25_0_tCBB1DEC8E8547F79F57BD561E1D8602D11E560E0;
// FirstPersonAudio/<>c__DisplayClass32_0
struct U3CU3Ec__DisplayClass32_0_t47A835B4C06EBD5C72E218CDD9AF93019999CF83;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Quiz/<EndQuiz>d__12
struct U3CEndQuizU3Ed__12_tDA9452C3E793382EAF4211E788B60A30CCB8AB96;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t920AB46A880DA3D1651F78EE6B4AF6EE30D43937_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t100A605302E409122C25E4E00A58C703DFC428EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t8CCDF3960396514276C96EB6767A3C6A1EB993FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6F64C3EC2C2C6614F0A241F3D022EC8745453001_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_tC996B23FA1541A49E50BC47010AB40E23A621271_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CEndQuizU3Ed__12_tDA9452C3E793382EAF4211E788B60A30CCB8AB96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass25_0_tCBB1DEC8E8547F79F57BD561E1D8602D11E560E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass32_0_t47A835B4C06EBD5C72E218CDD9AF93019999CF83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral40F21F93F82D1725316FEFCF919E83EB3AF5EDAA;
IL2CPP_EXTERN_C String_t* _stringLiteral46580D65357E6BC22728934BD6BC047227EFE0E6;
IL2CPP_EXTERN_C String_t* _stringLiteral53FEF6F383C8B0EB9CD4F13DA2213E71227E258D;
IL2CPP_EXTERN_C String_t* _stringLiteral58D29FB07FF8A509E2E16212E72BE26200A112C5;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral739EFA49D5BD725C6477104ECBB7E5F64FD4311D;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral9D354CA1036DDA6F701F800C5C1B3A4235D2EDD7;
IL2CPP_EXTERN_C String_t* _stringLiteral9D627A5BC20D80C603CF15094CD83EEAED55A707;
IL2CPP_EXTERN_C String_t* _stringLiteral9F9418A87EC4493AA1CC6198B7ABBB103821BE9B;
IL2CPP_EXTERN_C String_t* _stringLiteralA10C489BB7C68C194C4FBA5CAB848B7EADD708C0;
IL2CPP_EXTERN_C String_t* _stringLiteralA56779C0A85F3DC0A0744E2D106ECAE754EAFAB3;
IL2CPP_EXTERN_C String_t* _stringLiteralA5723BBC3EB34422E8DC0D4E6092918036D3D406;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB59F0EFCC2B82196C428CFD6D80A08F8B47573FC;
IL2CPP_EXTERN_C String_t* _stringLiteralB7E2BD95D61EE09EEA449D591DC5ADACF44AA1D5;
IL2CPP_EXTERN_C String_t* _stringLiteralBBC1106D65ACC9B0DB541F4FAF5DBAF5B7F7BA1F;
IL2CPP_EXTERN_C String_t* _stringLiteralCBED19BA525EB9EF85B9A02F320B67373B4D6DE0;
IL2CPP_EXTERN_C String_t* _stringLiteralF5486130599D54264F28B5C2BD0983DF1242C46A;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Find_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mEA7F597DF34F16102B2BD664432F08ED292715B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_m1F93042AD3EE0FA7BBC4E1345164738262F23FAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisGroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44_m949899B924A6395CEA3DD82BD58D9A23180B0974_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisCrouch_t5E2751F5A50DD97CAF1DBA3A07594BFADB38637E_mB3E5CE01E48DF98421E2A58777EE3DDBF8FE5AEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisFirstPersonMovement_tA852887AB56569BDD01EA2BE85F9B39C349C5FFE_mE72DA6C0F2CD4180F703668D1D752F12ED0DADCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisJump_t5984E7808773AD6C29ABDF6EF00972AEFA377F8F_m0E400D3292CAE3A02757F7F02C6F08C3FEE2E6E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0B2E782E5333019BB07171DB8729E45114227660_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Crouch_SpeedOverride_m392F2AF30FD113613ED46F00BB25154F44D6FC99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m645FDC2F31588349A9C75C750E78E5870DE06917_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirstPersonAudio_PlayCrouchEndAudio_mFADF07FB52E7DB44571D4872BEC9B8EB0D7F3E9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirstPersonAudio_PlayCrouchStartAudio_mEA45F53F68075AB92CBD155D26BF2C024D06A05B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirstPersonAudio_PlayJumpAudio_m06A6D11FE803C71F52A411C4140577E31B12BC4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirstPersonAudio_PlayLandingAudio_m418A84C6945EEC6D587ADE8F7E9057B3AEBE2F29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisFirstPersonMovement_tA852887AB56569BDD01EA2BE85F9B39C349C5FFE_mD450454E1FF11EFE7F6FE9ED6871C8B4355803C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC0C5EBDE0E867AB446CD4FDFC0842C80DB286995_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m73F8F11AF52640BDBADC0E0CDBDE9673E6FDD9C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mC7B6449E976E336300E6DBDE519CAA996C500E9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m26C8AB45C83E1904BEC2C2394CB7EB89675F088F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m1321940B939A317AFAAE8AD59F740B8981351E62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mEE8528015DEAADFAD394CB7EFC7CAF0E57F3517F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CEndQuizU3Ed__12_System_Collections_IEnumerator_Reset_mF3ED8F33792C7E69DB4BADFA51D22D1D744DA802_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass25_0_U3CSetPlayingMovingAudioU3Eb__0_mE65FFB2CE9EE8B18668294D5EDF2E23363E9707F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass32_0_U3CGetOrCreateAudioSourceU3Eb__0_m8DC3447DF696CE1EBB081414E0D26B4A8E91D180_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
struct AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2;
struct ButtonU5BU5D_t794F5842D7A836C586DBE4F1F11D7B12042DF2EA;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

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

// System.Collections.Generic.List`1<System.Func`1<System.Single>>
struct List_1_t6F64C3EC2C2C6614F0A241F3D022EC8745453001  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Func_1U5BU5D_t9DA6AF00D03864D2A6519555F6C6BCCBAB09A05F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t6F64C3EC2C2C6614F0A241F3D022EC8745453001_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Func_1U5BU5D_t9DA6AF00D03864D2A6519555F6C6BCCBAB09A05F* ___s_emptyArray_5;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// FirstPersonAudio/<>c__DisplayClass25_0
struct U3CU3Ec__DisplayClass25_0_tCBB1DEC8E8547F79F57BD561E1D8602D11E560E0  : public RuntimeObject
{
	// UnityEngine.AudioSource FirstPersonAudio/<>c__DisplayClass25_0::audioToPlay
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioToPlay_0;
	// System.Func`2<UnityEngine.AudioSource,System.Boolean> FirstPersonAudio/<>c__DisplayClass25_0::<>9__0
	Func_2_t920AB46A880DA3D1651F78EE6B4AF6EE30D43937* ___U3CU3E9__0_1;
};

// FirstPersonAudio/<>c__DisplayClass32_0
struct U3CU3Ec__DisplayClass32_0_t47A835B4C06EBD5C72E218CDD9AF93019999CF83  : public RuntimeObject
{
	// System.String FirstPersonAudio/<>c__DisplayClass32_0::name
	String_t* ___name_0;
};

// Quiz/<EndQuiz>d__12
struct U3CEndQuizU3Ed__12_tDA9452C3E793382EAF4211E788B60A30CCB8AB96  : public RuntimeObject
{
	// System.Int32 Quiz/<EndQuiz>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Quiz/<EndQuiz>d__12::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Quiz Quiz/<EndQuiz>d__12::<>4__this
	Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* ___U3CU3E4__this_2;
};

// System.Nullable`1<System.Single>
struct Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	float ___value_1;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
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

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// System.Func`1<System.Single>
struct Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.AudioSource,System.Boolean>
struct Func_2_t920AB46A880DA3D1651F78EE6B4AF6EE30D43937  : public MulticastDelegate_t
{
};

// System.Predicate`1<UnityEngine.AudioSource>
struct Predicate_1_tC996B23FA1541A49E50BC47010AB40E23A621271  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
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

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
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

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
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

// UnityEngine.CapsuleCollider
struct CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
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

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// Button
struct Button_t08E85812946542C2FD1F37BA7C97825101832DC8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Button::cursor
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cursor_4;
	// UnityEngine.GameObject Button::player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player_5;
	// UnityEngine.GameObject Button::letter
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___letter_6;
	// System.Boolean Button::cursorHovering
	bool ___cursorHovering_7;
	// System.Boolean Button::active
	bool ___active_8;
	// System.Boolean Button::selected
	bool ___selected_9;
	// UnityEngine.Material Button::activeMat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___activeMat_10;
	// UnityEngine.Material Button::inactiveMat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___inactiveMat_11;
	// UnityEngine.Material Button::wrongMat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___wrongMat_12;
	// UnityEngine.Material Button::rightMat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___rightMat_13;
	// UnityEngine.Animator Button::anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___anim_14;
};

// CollisionTrigger
struct CollisionTrigger_tA274AF9BF7ECBB260B866D13D1AF4B98F6DA2112  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean CollisionTrigger::triggered
	bool ___triggered_4;
};

// Crouch
struct Crouch_t5E2751F5A50DD97CAF1DBA3A07594BFADB38637E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.KeyCode Crouch::key
	int32_t ___key_4;
	// FirstPersonMovement Crouch::movement
	FirstPersonMovement_tA852887AB56569BDD01EA2BE85F9B39C349C5FFE* ___movement_5;
	// System.Single Crouch::movementSpeed
	float ___movementSpeed_6;
	// UnityEngine.Transform Crouch::headToLower
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___headToLower_7;
	// System.Nullable`1<System.Single> Crouch::defaultHeadYLocalPosition
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___defaultHeadYLocalPosition_8;
	// System.Single Crouch::crouchYHeadPosition
	float ___crouchYHeadPosition_9;
	// UnityEngine.CapsuleCollider Crouch::colliderToLower
	CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* ___colliderToLower_10;
	// System.Nullable`1<System.Single> Crouch::defaultColliderHeight
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___defaultColliderHeight_11;
	// System.Boolean Crouch::<IsCrouched>k__BackingField
	bool ___U3CIsCrouchedU3Ek__BackingField_12;
	// System.Action Crouch::CrouchStart
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___CrouchStart_13;
	// System.Action Crouch::CrouchEnd
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___CrouchEnd_14;
};

// FirstPersonAudio
struct FirstPersonAudio_t42DBEA25B65A97CD0277104F996717899E882174  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// FirstPersonMovement FirstPersonAudio::character
	FirstPersonMovement_tA852887AB56569BDD01EA2BE85F9B39C349C5FFE* ___character_4;
	// GroundCheck FirstPersonAudio::groundCheck
	GroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44* ___groundCheck_5;
	// UnityEngine.AudioSource FirstPersonAudio::stepAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___stepAudio_6;
	// UnityEngine.AudioSource FirstPersonAudio::runningAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___runningAudio_7;
	// System.Single FirstPersonAudio::velocityThreshold
	float ___velocityThreshold_8;
	// UnityEngine.Vector2 FirstPersonAudio::lastCharacterPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lastCharacterPosition_9;
	// UnityEngine.AudioSource FirstPersonAudio::landingAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___landingAudio_10;
	// UnityEngine.AudioClip[] FirstPersonAudio::landingSFX
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ___landingSFX_11;
	// Jump FirstPersonAudio::jump
	Jump_t5984E7808773AD6C29ABDF6EF00972AEFA377F8F* ___jump_12;
	// UnityEngine.AudioSource FirstPersonAudio::jumpAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___jumpAudio_13;
	// UnityEngine.AudioClip[] FirstPersonAudio::jumpSFX
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ___jumpSFX_14;
	// Crouch FirstPersonAudio::crouch
	Crouch_t5E2751F5A50DD97CAF1DBA3A07594BFADB38637E* ___crouch_15;
	// UnityEngine.AudioSource FirstPersonAudio::crouchStartAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___crouchStartAudio_16;
	// UnityEngine.AudioSource FirstPersonAudio::crouchedAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___crouchedAudio_17;
	// UnityEngine.AudioSource FirstPersonAudio::crouchEndAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___crouchEndAudio_18;
	// UnityEngine.AudioClip[] FirstPersonAudio::crouchStartSFX
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ___crouchStartSFX_19;
	// UnityEngine.AudioClip[] FirstPersonAudio::crouchEndSFX
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ___crouchEndSFX_20;
};

// FirstPersonLook
struct FirstPersonLook_tFFEABF55DC99B2EC1D6B5DAEE9864E5815F6B93C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform FirstPersonLook::character
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___character_4;
	// System.Single FirstPersonLook::sensitivity
	float ___sensitivity_5;
	// System.Single FirstPersonLook::smoothing
	float ___smoothing_6;
	// UnityEngine.Vector2 FirstPersonLook::velocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___velocity_7;
	// UnityEngine.Vector2 FirstPersonLook::frameVelocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___frameVelocity_8;
};

// FirstPersonMovement
struct FirstPersonMovement_tA852887AB56569BDD01EA2BE85F9B39C349C5FFE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single FirstPersonMovement::speed
	float ___speed_4;
	// UnityEngine.GameObject FirstPersonMovement::cursor
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cursor_5;
	// UnityEngine.GameObject FirstPersonMovement::pointer
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pointer_6;
	// System.Boolean FirstPersonMovement::hovering
	bool ___hovering_7;
	// UnityEngine.GameObject FirstPersonMovement::camera
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___camera_8;
	// System.Boolean FirstPersonMovement::canRun
	bool ___canRun_9;
	// System.Boolean FirstPersonMovement::<IsRunning>k__BackingField
	bool ___U3CIsRunningU3Ek__BackingField_10;
	// System.Single FirstPersonMovement::runSpeed
	float ___runSpeed_11;
	// UnityEngine.KeyCode FirstPersonMovement::runningKey
	int32_t ___runningKey_12;
	// UnityEngine.GameObject FirstPersonMovement::tint
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___tint_13;
	// System.Boolean FirstPersonMovement::touchingWater
	bool ___touchingWater_14;
	// System.Boolean FirstPersonMovement::inSubmarine
	bool ___inSubmarine_15;
	// UnityEngine.Material FirstPersonMovement::skybox
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___skybox_16;
	// UnityEngine.Material FirstPersonMovement::darkSkybox
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___darkSkybox_17;
	// UnityEngine.Rigidbody FirstPersonMovement::rigidbody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rigidbody_18;
	// System.Collections.Generic.List`1<System.Func`1<System.Single>> FirstPersonMovement::speedOverrides
	List_1_t6F64C3EC2C2C6614F0A241F3D022EC8745453001* ___speedOverrides_19;
};

// GroundCheck
struct GroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single GroundCheck::distanceThreshold
	float ___distanceThreshold_4;
	// System.Boolean GroundCheck::isGrounded
	bool ___isGrounded_5;
	// System.Action GroundCheck::Grounded
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Grounded_6;
};

// Jump
struct Jump_t5984E7808773AD6C29ABDF6EF00972AEFA377F8F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Rigidbody Jump::rigidbody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rigidbody_4;
	// System.Single Jump::jumpStrength
	float ___jumpStrength_5;
	// System.Action Jump::Jumped
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Jumped_6;
	// GroundCheck Jump::groundCheck
	GroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44* ___groundCheck_7;
};

// Main
struct Main_t6125012C4D88701077DD3C4660130C5535730E1E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// CollisionTrigger Main::doorTrigger
	CollisionTrigger_tA274AF9BF7ECBB260B866D13D1AF4B98F6DA2112* ___doorTrigger_4;
	// System.Boolean Main::alreadyTriggered
	bool ___alreadyTriggered_5;
	// UnityEngine.Animator Main::doorAnim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___doorAnim_6;
	// Button Main::startButton
	Button_t08E85812946542C2FD1F37BA7C97825101832DC8* ___startButton_7;
	// System.Int32 Main::questionsAnswered
	int32_t ___questionsAnswered_8;
	// System.Int32 Main::questionsCorrect
	int32_t ___questionsCorrect_9;
	// TMPro.TextMeshProUGUI Main::scoreText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___scoreText_10;
	// Quiz Main::question1
	Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* ___question1_11;
	// Quiz Main::question2
	Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* ___question2_12;
	// Quiz Main::question3
	Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* ___question3_13;
	// Quiz Main::question4
	Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* ___question4_14;
};

// Quiz
struct Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Button[] Quiz::button
	ButtonU5BU5D_t794F5842D7A836C586DBE4F1F11D7B12042DF2EA* ___button_4;
	// System.String Quiz::question
	String_t* ___question_5;
	// System.Int32 Quiz::correctAns
	int32_t ___correctAns_6;
	// System.Boolean Quiz::answered
	bool ___answered_7;
	// System.Boolean Quiz::correct
	bool ___correct_8;
	// System.Boolean Quiz::quizActive
	bool ___quizActive_9;
	// TMPro.TextMeshProUGUI Quiz::caption
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___caption_10;
	// UnityEngine.UI.Image Quiz::rightImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___rightImage_11;
	// UnityEngine.UI.Image Quiz::wrongImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___wrongImage_12;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Zoom
struct Zoom_tF5A194929F87C356C89A06E28D8DD7C6DF48C7D6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera Zoom::camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera_4;
	// System.Single Zoom::defaultFOV
	float ___defaultFOV_5;
	// System.Single Zoom::maxZoomFOV
	float ___maxZoomFOV_6;
	// System.Single Zoom::currentZoom
	float ___currentZoom_7;
	// System.Single Zoom::sensitivity
	float ___sensitivity_8;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_265;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_267;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_268;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_269;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_272;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_273;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_274;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_275;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_276;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_278;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_279;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_281;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_282;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_283;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_284;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_304;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2  : public RuntimeArray
{
	ALIGN_FIELD (8) AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* m_Items[1];

	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31  : public RuntimeArray
{
	ALIGN_FIELD (8) AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* m_Items[1];

	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Button[]
struct ButtonU5BU5D_t794F5842D7A836C586DBE4F1F11D7B12042DF2EA  : public RuntimeArray
{
	ALIGN_FIELD (8) Button_t08E85812946542C2FD1F37BA7C97825101832DC8* m_Items[1];

	inline Button_t08E85812946542C2FD1F37BA7C97825101832DC8* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Button_t08E85812946542C2FD1F37BA7C97825101832DC8** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Button_t08E85812946542C2FD1F37BA7C97825101832DC8* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Button_t08E85812946542C2FD1F37BA7C97825101832DC8* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Button_t08E85812946542C2FD1F37BA7C97825101832DC8** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Button_t08E85812946542C2FD1F37BA7C97825101832DC8* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Single>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_gshared (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, float ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Single>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_gshared (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m94E0C712F86101E026834DA318C3FFF46DE49C71_gshared (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T System.Array::Find<System.Object>(T[],System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_Find_TisRuntimeObject_m03DE8D6544B37CBB6B339128ACC38C60CCFC4C24_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array0, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___match1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// TResult System.Func`1<System.Single>::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_1_Invoke_m6EC66204056853EDE42F634FECB2D7D4685B54B0_gshared_inline (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<FirstPersonMovement>()
inline FirstPersonMovement_tA852887AB56569BDD01EA2BE85F9B39C349C5FFE* Component_GetComponentInParent_TisFirstPersonMovement_tA852887AB56569BDD01EA2BE85F9B39C349C5FFE_mE72DA6C0F2CD4180F703668D1D752F12ED0DADCC (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  FirstPersonMovement_tA852887AB56569BDD01EA2BE85F9B39C349C5FFE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.CapsuleCollider>()
inline CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* Component_GetComponentInChildren_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_m1F93042AD3EE0FA7BBC4E1345164738262F23FAB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
inline bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, const RuntimeMethod*))Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Single>::.ctor(T)
inline void Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420 (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, float ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, float, const RuntimeMethod*))Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_gshared)(__this, ___value0, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.CapsuleCollider::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CapsuleCollider_get_height_m63A31072F296AEE6222DC9C88704882BB6A54A24 (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Single>::get_Value()
inline float Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method)
{
	return ((  float (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, const RuntimeMethod*))Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_gshared)(__this, method);
}
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.CapsuleCollider::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.CapsuleCollider::set_center(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCollider_set_center_m242D92DAEF25887C6A87A0777E4E624C0A431A2E (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean Crouch::get_IsCrouched()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Crouch_get_IsCrouched_m8021AD022A7B374B3B874ADC220EF7C450E8953D_inline (Crouch_t5E2751F5A50DD97CAF1DBA3A07594BFADB38637E* __this, const RuntimeMethod* method) ;
// System.Void Crouch::set_IsCrouched(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Crouch_set_IsCrouched_m0E68FE1FCB4B9AB458FDB6ED63274E3E18500DEF_inline (Crouch_t5E2751F5A50DD97CAF1DBA3A07594BFADB38637E* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Crouch::SetSpeedOverrideActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crouch_SetSpeedOverrideActive_m3594FDB1D21D4CE01281EF2553B99924879A9497 (Crouch_t5E2751F5A50DD97CAF1DBA3A07594BFADB38637E* __this, bool ___state0, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Single>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m94E0C712F86101E026834DA318C3FFF46DE49C71 (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m94E0C712F86101E026834DA318C3FFF46DE49C71_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean System.Collections.Generic.List`1<System.Func`1<System.Single>>::Contains(T)
inline bool List_1_Contains_m73F8F11AF52640BDBADC0E0CDBDE9673E6FDD9C4 (List_1_t6F64C3EC2C2C6614F0A241F3D022EC8745453001* __this, Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t6F64C3EC2C2C6614F0A241F3D022EC8745453001*, Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Func`1<System.Single>>::Add(T)
inline void List_1_Add_mC0C5EBDE0E867AB446CD4FDFC0842C80DB286995_inline (List_1_t6F64C3EC2C2C6614F0A241F3D022EC8745453001* __this, Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6F64C3EC2C2C6614F0A241F3D022EC8745453001*, Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<System.Func`1<System.Single>>::Remove(T)
inline bool List_1_Remove_mC7B6449E976E336300E6DBDE519CAA996C500E9B (List_1_t6F64C3EC2C2C6614F0A241F3D022EC8745453001* __this, Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t6F64C3EC2C2C6614F0A241F3D022EC8745453001*, Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<GroundCheck>()
inline GroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44* Component_GetComponentInChildren_TisGroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44_m949899B924A6395CEA3DD82BD58D9A23180B0974 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  GroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// UnityEngine.AudioSource FirstPersonAudio::GetOrCreateAudioSource(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* FirstPersonAudio_GetOrCreateAudioSource_mFDAA7C59175E30DFF97C5596B53D2FCDEEDDFCEB (FirstPersonAudio_t42DBEA25B65A97CD0277104F996717899E882174* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<Jump>()
inline Jump_t5984E7808773AD6C29ABDF6EF00972AEFA377F8F* Component_GetComponentInParent_TisJump_t5984E7808773AD6C29ABDF6EF00972AEFA377F8F_m0E400D3292CAE3A02757F7F02C6F08C3FEE2E6E6 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Jump_t5984E7808773AD6C29ABDF6EF00972AEFA377F8F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponentInParent<Crouch>()
inline Crouch_t5E2751F5A50DD97CAF1DBA3A07594BFADB38637E* Component_GetComponentInParent_TisCrouch_t5E2751F5A50DD97CAF1DBA3A07594BFADB38637E_mB3E5CE01E48DF98421E2A58777EE3DDBF8FE5AEF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Crouch_t5E2751F5A50DD97CAF1DBA3A07594BFADB38637E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// System.Void FirstPersonAudio::SubscribeToEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonAudio_SubscribeToEvents_m31617B3C4816E3A7D1A03A1863200C377A235DB2 (FirstPersonAudio_t42DBEA25B65A97CD0277104F996717899E882174* __this, const RuntimeMethod* method) ;
// System.Void FirstPersonAudio::UnsubscribeToEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonAudio_UnsubscribeToEvents_m58258AA6D714786043FA98E4898DB1A078B055DD (FirstPersonAudio_t42DBEA25B65A97CD0277104F996717899E882174* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 FirstPersonAudio::get_CurrentCharacterPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 FirstPersonAudio_get_CurrentCharacterPosition_mBA3186546303206E2BB71C4B1956F898DF86ACA0 (FirstPersonAudio_t42DBEA25B65A97CD0277104F996717899E882174* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void FirstPersonAudio::SetPlayingMovingAudio(UnityEngine.AudioSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonAudio_SetPlayingMovingAudio_m9B5EC029AA0A149A29EF2EFCCADFA76975EEF914 (FirstPersonAudio_t42DBEA25B65A97CD0277104F996717899E882174* __this, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioToPlay0, const RuntimeMethod* method) ;
// System.Boolean FirstPersonMovement::get_IsRunning()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FirstPersonMovement_get_IsRunning_m58CAF98A09A5CE86F21EE8DC8A1ACBF5A655681E_inline (FirstPersonMovement_tA852887AB56569BDD01EA2BE85F9B39C349C5FFE* __this, const RuntimeMethod* method) ;
// System.Void FirstPersonAudio/<>c__DisplayClass25_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_0__ctor_mD581F9E0567BD4F4790D95AF369E7DB99C2D0885 (U3CU3Ec__DisplayClass25_0_tCBB1DEC8E8547F79F57BD561E1D8602D11E560E0* __this, const RuntimeMethod* method) ;
// UnityEngine.AudioSource[] FirstPersonAudio::get_MovingAudios()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* FirstPersonAudio_get_MovingAudios_mCA93AC23C6D9C04041B6C6BB4A9BA3339E527228 (FirstPersonAudio_t42DBEA25B65A97CD0277104F996717899E882174* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<UnityEngine.AudioSource,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m284248A81FFE4D81A6D1B5F5F132D0BBBE7C5BC5 (Func_2_t920AB46A880DA3D1651F78EE6B4AF6EE30D43937* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t920AB46A880DA3D1651F78EE6B4AF6EE30D43937*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<UnityEngine.AudioSource>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m645FDC2F31588349A9C75C750E78E5870DE06917 (RuntimeObject* ___source0, Func_2_t920AB46A880DA3D1651F78EE6B4AF6EE30D43937* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t920AB46A880DA3D1651F78EE6B4AF6EE30D43937*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared)(___source0, ___predicate1, method);
}
// System.Void UnityEngine.AudioSource::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Pause_m2C2A09359E8AA924FEADECC1AFEA519B3C915B26 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void FirstPersonAudio::PlayRandomClip(UnityEngine.AudioSource,UnityEngine.AudioClip[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonAudio_PlayRandomClip_mABBA1CD664E21496BB474804CD50AB3818160880 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audio0, AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ___clips1, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void GroundCheck::add_Grounded(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundCheck_add_Grounded_mEE759BD36FAB4E2BB10DABF3EBD80D5FF53B9700 (GroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void Jump::add_Jumped(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jump_add_Jumped_m24D47318B3EF5EDB511C8D12B209DC4745DFDD35 (Jump_t5984E7808773AD6C29ABDF6EF00972AEFA377F8F* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void Crouch::add_CrouchStart(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crouch_add_CrouchStart_m743D6F1D74DD460789DAA1EBE70A703826A0FF9D (Crouch_t5E2751F5A50DD97CAF1DBA3A07594BFADB38637E* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void Crouch::add_CrouchEnd(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crouch_add_CrouchEnd_m967A7741C4C8602EC97627E8CFC9CBB4935B5FCF (Crouch_t5E2751F5A50DD97CAF1DBA3A07594BFADB38637E* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void GroundCheck::remove_Grounded(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundCheck_remove_Grounded_m37450B17F210C314BA069657F336AC29F9A993A6 (GroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void Jump::remove_Jumped(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jump_remove_Jumped_m89E3F17DB2E89AC875B7ACBBC02A7D771BF2D358 (Jump_t5984E7808773AD6C29ABDF6EF00972AEFA377F8F* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void Crouch::remove_CrouchStart(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crouch_remove_CrouchStart_m4B26C7796907864959C8A3C018A062C3220E7D7B (Crouch_t5E2751F5A50DD97CAF1DBA3A07594BFADB38637E* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void Crouch::remove_CrouchEnd(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crouch_remove_CrouchEnd_mBB76273ABFAAC8C24541F0C7291CD3CD9C3C7611 (Crouch_t5E2751F5A50DD97CAF1DBA3A07594BFADB38637E* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void FirstPersonAudio/<>c__DisplayClass32_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass32_0__ctor_m20D8B942EF8CB12071A18B2E24109986C04007E1 (U3CU3Ec__DisplayClass32_0_t47A835B4C06EBD5C72E218CDD9AF93019999CF83* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.AudioSource>()
inline AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* Component_GetComponentsInChildren_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0B2E782E5333019BB07171DB8729E45114227660 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// System.Void System.Predicate`1<UnityEngine.AudioSource>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m2808F3031265BA0D1D4164CFDCDB71A53B155B6D (Predicate_1_tC996B23FA1541A49E50BC47010AB40E23A621271* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_tC996B23FA1541A49E50BC47010AB40E23A621271*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___object0, ___method1, method);
}
// T System.Array::Find<UnityEngine.AudioSource>(T[],System.Predicate`1<T>)
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Array_Find_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mEA7F597DF34F16102B2BD664432F08ED292715B9 (AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* ___array0, Predicate_1_tC996B23FA1541A49E50BC47010AB40E23A621271* ___match1, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2*, Predicate_1_tC996B23FA1541A49E50BC47010AB40E23A621271*, const RuntimeMethod*))Array_Find_TisRuntimeObject_m03DE8D6544B37CBB6B339128ACC38C60CCFC4C24_gshared)(___array0, ___match1, method);
}
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::set_spatialBlend(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_spatialBlend_mCEE7A3E87A8C146E048B2CA3413FDC7BDB7BE001 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_playOnAwake(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_playOnAwake_m7EACC6ECEF12D7BA86A4E5A53603F1C8F9E11949 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___value0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 GroundCheck::get_RaycastOrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GroundCheck_get_RaycastOrigin_mA790C0A47F7A1097DB27104647F5FCABEC047A8D (GroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mCFF84927BE3EC1780DBA34CCED374E7FF12ABCBE (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, float ___maxDistance2, const RuntimeMethod* method) ;
// System.Single GroundCheck::get_RaycastDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GroundCheck_get_RaycastDistance_m9A8B70C128CF51CE65DA49234E0B688392D6B939 (GroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawLine_m873C7065638CFE611C48F429742690508044B75A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___end1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579 (String_t* ___buttonName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.Camera::get_fieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Input::get_mouseScrollDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Input_get_mouseScrollDelta_mD112408E9182AA0F529179FF31E21D8DCD5CFA74 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4 (String_t* ___axisName0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::Scale(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Scale_m8D61A8D2272549F1EF41256F7E8A206C6500EA6C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::Lerp(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Lerp_m1A36103F7967F653A929556E26E6D052C298C00C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80 (float ___angle0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void FirstPersonMovement::set_IsRunning(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirstPersonMovement_set_IsRunning_mADC233CB94F50A40278FACBAA8940A4CB114EA78_inline (FirstPersonMovement_tA852887AB56569BDD01EA2BE85F9B39C349C5FFE* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Func`1<System.Single>>::get_Count()
inline int32_t List_1_get_Count_m1321940B939A317AFAAE8AD59F740B8981351E62_inline (List_1_t6F64C3EC2C2C6614F0A241F3D022EC8745453001* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6F64C3EC2C2C6614F0A241F3D022EC8745453001*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.Func`1<System.Single>>::get_Item(System.Int32)
inline Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* List_1_get_Item_mEE8528015DEAADFAD394CB7EFC7CAF0E57F3517F (List_1_t6F64C3EC2C2C6614F0A241F3D022EC8745453001* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* (*) (List_1_t6F64C3EC2C2C6614F0A241F3D022EC8745453001*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// TResult System.Func`1<System.Single>::Invoke()
inline float Func_1_Invoke_m6EC66204056853EDE42F634FECB2D7D4685B54B0_inline (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* __this, const RuntimeMethod* method)
{
	return ((  float (*) (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7*, const RuntimeMethod*))Func_1_Invoke_m6EC66204056853EDE42F634FECB2D7D4685B54B0_gshared_inline)(__this, method);
}
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___axisName0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m011EA7022C33B2C499EF744E5AF3E01EEB8FBD33 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo2, float ___maxDistance3, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderSettings::set_ambientLight(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderSettings_set_ambientLight_m44E42CEB67937FC0CFC86767CB07D93D8E780880 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderSettings::set_skybox(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderSettings_set_skybox_m7988CC3217B1456CA0A7294127527BFC18EEC872 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderSettings::set_fogColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderSettings_set_fogColor_mBBD12EC3492195F85F583CAF4FAE4A973227639B (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderSettings::set_fogStartDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderSettings_set_fogStartDistance_mF53EDDD1B96FD948B5213BAC17480FEE847896CA (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderSettings::set_fogEndDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderSettings_set_fogEndDistance_m3A8CA92B0A13432069104061629C25DF13BAEDDD (float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_gray()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Func`1<System.Single>>::.ctor()
inline void List_1__ctor_m26C8AB45C83E1904BEC2C2394CB7EB89675F088F (List_1_t6F64C3EC2C2C6614F0A241F3D022EC8745453001* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6F64C3EC2C2C6614F0A241F3D022EC8745453001*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Button::buttonInactive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Button_buttonInactive_m45678A3D6DF8B217D3FF9DB0437D974190D6648F (Button_t08E85812946542C2FD1F37BA7C97825101832DC8* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<FirstPersonMovement>()
inline FirstPersonMovement_tA852887AB56569BDD01EA2BE85F9B39C349C5FFE* GameObject_GetComponent_TisFirstPersonMovement_tA852887AB56569BDD01EA2BE85F9B39C349C5FFE_mD450454E1FF11EFE7F6FE9ED6871C8B4355803C6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  FirstPersonMovement_tA852887AB56569BDD01EA2BE85F9B39C349C5FFE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3 (int32_t ___button0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::set_tag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_tag_m0A41528AFD8C83E1CEC5D769921159897CDD2B24 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) ;
// System.Void Button::buttonActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Button_buttonActive_m9603B8CD810458EC811C548E50B08DC3E599C763 (Button_t08E85812946542C2FD1F37BA7C97825101832DC8* __this, const RuntimeMethod* method) ;
// System.Void Quiz::StartQuiz()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quiz_StartQuiz_m8823C6FC6D50FD16474BE13C2A6FB7BB15B2E3CE (Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___f0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Quiz::EndQuiz()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Quiz_EndQuiz_m82ECFF61E116CD99610E687386DFA58BFAF4DD17 (Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void Quiz/<EndQuiz>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEndQuizU3Ed__12__ctor_mE1A6D05E5C82A498C8E336694E8ABD7766FFBE43 (U3CEndQuizU3Ed__12_tDA9452C3E793382EAF4211E788B60A30CCB8AB96* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Button::buttonWrong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Button_buttonWrong_m18054BB637478EA2009DB494815CDCBF931B7894 (Button_t08E85812946542C2FD1F37BA7C97825101832DC8* __this, const RuntimeMethod* method) ;
// System.Void Button::buttonRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Button_buttonRight_m825490755267C44C5A2F7EE9C5BE6CBB8F334B7C (Button_t08E85812946542C2FD1F37BA7C97825101832DC8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
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
// System.Boolean Crouch::get_IsCrouched()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Crouch_get_IsCrouched_m8021AD022A7B374B3B874ADC220EF7C450E8953D (Crouch_t5E2751F5A50DD97CAF1DBA3A07594BFADB38637E* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsCrouched { get; private set; }
		bool L_0 = __this->___U3CIsCrouchedU3Ek__BackingField_12;
		return L_0;
	}
}
// System.Void Crouch::set_IsCrouched(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crouch_set_IsCrouched_m0E68FE1FCB4B9AB458FDB6ED63274E3E18500DEF (Crouch_t5E2751F5A50DD97CAF1DBA3A07594BFADB38637E* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsCrouched { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CIsCrouchedU3Ek__BackingField_12 = L_0;
		return;
	}
}
// System.Void Crouch::add_CrouchStart(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crouch_add_CrouchStart_m743D6F1D74DD460789DAA1EBE70A703826A0FF9D (Crouch_t5E2751F5A50DD97CAF1DBA3A07594BFADB38637E* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___CrouchStart_13;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___CrouchStart_13);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Crouch::remove_CrouchStart(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crouch_remove_CrouchStart_m4B26C7796907864959C8A3C018A062C3220E7D7B (Crouch_t5E2751F5A50DD97CAF1DBA3A07594BFADB38637E* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___CrouchStart_13;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___CrouchStart_13);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Crouch::add_CrouchEnd(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crouch_add_CrouchEnd_m967A7741C4C8602EC97627E8CFC9CBB4935B5FCF (Crouch_t5E2751F5A50DD97CAF1DBA3A07594BFADB38637E* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___CrouchEnd_14;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___CrouchEnd_14);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Crouch::remove_CrouchEnd(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crouch_remove_CrouchEnd_mBB76273ABFAAC8C24541F0C7291CD3CD9C3C7611 (Crouch_t5E2751F5A50DD97CAF1DBA3A07594BFADB38637E* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___CrouchEnd_14;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___CrouchEnd_14);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Crouch::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crouch_Reset_m0B9B7F2D45BD7EB4AC49944A2386B5E55E0618AD (Crouch_t5E2751F5A50DD97CAF1DBA3A07594BFADB38637E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_m1F93042AD3EE0FA7BBC4E1345164738262F23FAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisFirstPersonMovement_tA852887AB56569BDD01EA2BE85F9B39C349C5FFE_mE72DA6C0F2CD4180F703668D1D752F12ED0DADCC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// movement = GetComponentInParent<FirstPersonMovement>();
		FirstPersonMovement_tA852887AB56569BDD01EA2BE85F9B39C349C5FFE* L_0;
		L_0 = Component_GetComponentInParent_TisFirstPersonMovement_tA852887AB56569BDD01EA2BE85F9B39C349C5FFE_mE72DA6C0F2CD4180F703668D1D752F12ED0DADCC(__this, Component_GetComponentInParent_TisFirstPersonMovement_tA852887AB56569BDD01EA2BE85F9B39C349C5FFE_mE72DA6C0F2CD4180F703668D1D752F12ED0DADCC_RuntimeMethod_var);
		__this->___movement_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___movement_5), (void*)L_0);
		// headToLower = movement.GetComponentInChildren<Camera>().transform;
		FirstPersonMovement_tA852887AB56569BDD01EA2BE85F9B39C349C5FFE* L_1 = __this->___movement_5;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0(L_1, Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0_RuntimeMethod_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		__this->___headToLower_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___headToLower_7), (void*)L_3);
		// colliderToLower = movement.GetComponentInChildren<CapsuleCollider>();
		FirstPersonMovement_tA852887AB56569BDD01EA2BE85F9B39C349C5FFE* L_4 = __this->___movement_5;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_5;
		L_5 = Component_GetComponentInChildren_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_m1F93042AD3EE0FA7BBC4E1345164738262F23FAB(L_4, Component_GetComponentInChildren_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_m1F93042AD3EE0FA7BBC4E1345164738262F23FAB_RuntimeMethod_var);
		__this->___colliderToLower_10 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___colliderToLower_10), (void*)L_5);
		// }
		return;
	}
}
// System.Void Crouch::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crouch_LateUpdate_m534250AC6ECC5416B6BFE6A78AD612E497D95991 (Crouch_t5E2751F5A50DD97CAF1DBA3A07594BFADB38637E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B15_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B14_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B23_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B22_0 = NULL;
	{
		// if (Input.GetKey(key))
		int32_t L_0 = __this->___key_4;
		bool L_1;
		L_1 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(L_0, NULL);
		if (!L_1)
		{
			goto IL_0158;
		}
	}
	{
		// if (headToLower)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___headToLower_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_007b;
		}
	}
	{
		// if (!defaultHeadYLocalPosition.HasValue)
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_4 = (&__this->___defaultHeadYLocalPosition_8);
		bool L_5;
		L_5 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline(L_4, Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0045;
		}
	}
	{
		// defaultHeadYLocalPosition = headToLower.localPosition.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___headToLower_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_6, NULL);
		float L_8 = L_7.___y_3;
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420((&L_9), L_8, /*hidden argument*/Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
		__this->___defaultHeadYLocalPosition_8 = L_9;
	}

IL_0045:
	{
		// headToLower.localPosition = new Vector3(headToLower.localPosition.x, crouchYHeadPosition, headToLower.localPosition.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___headToLower_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___headToLower_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_11, NULL);
		float L_13 = L_12.___x_2;
		float L_14 = __this->___crouchYHeadPosition_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = __this->___headToLower_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_15, NULL);
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_18), L_13, L_14, L_17, /*hidden argument*/NULL);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_10, L_18, NULL);
	}

IL_007b:
	{
		// if (colliderToLower)
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_19 = __this->___colliderToLower_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_19, NULL);
		if (!L_20)
		{
			goto IL_012e;
		}
	}
	{
		// if (!defaultColliderHeight.HasValue)
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_21 = (&__this->___defaultColliderHeight_11);
		bool L_22;
		L_22 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline(L_21, Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		if (L_22)
		{
			goto IL_00ae;
		}
	}
	{
		// defaultColliderHeight = colliderToLower.height;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_23 = __this->___colliderToLower_10;
		float L_24;
		L_24 = CapsuleCollider_get_height_m63A31072F296AEE6222DC9C88704882BB6A54A24(L_23, NULL);
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420((&L_25), L_24, /*hidden argument*/Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
		__this->___defaultColliderHeight_11 = L_25;
	}

IL_00ae:
	{
		// if(defaultHeadYLocalPosition.HasValue)
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_26 = (&__this->___defaultHeadYLocalPosition_8);
		bool L_27;
		L_27 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline(L_26, Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		if (!L_27)
		{
			goto IL_00d0;
		}
	}
	{
		// loweringAmount = defaultHeadYLocalPosition.Value - crouchYHeadPosition;
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_28 = (&__this->___defaultHeadYLocalPosition_8);
		float L_29;
		L_29 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA(L_28, Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		float L_30 = __this->___crouchYHeadPosition_9;
		V_0 = ((float)il2cpp_codegen_subtract(L_29, L_30));
		goto IL_00e2;
	}

IL_00d0:
	{
		// loweringAmount = defaultColliderHeight.Value * .5f;
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_31 = (&__this->___defaultColliderHeight_11);
		float L_32;
		L_32 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA(L_31, Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		V_0 = ((float)il2cpp_codegen_multiply(L_32, (0.5f)));
	}

IL_00e2:
	{
		// colliderToLower.height = Mathf.Max(defaultColliderHeight.Value - loweringAmount, 0);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_33 = __this->___colliderToLower_10;
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_34 = (&__this->___defaultColliderHeight_11);
		float L_35;
		L_35 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA(L_34, Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		float L_36 = V_0;
		float L_37;
		L_37 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)il2cpp_codegen_subtract(L_35, L_36)), (0.0f), NULL);
		CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB(L_33, L_37, NULL);
		// colliderToLower.center = Vector3.up * colliderToLower.height * .5f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_38 = __this->___colliderToLower_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_40 = __this->___colliderToLower_10;
		float L_41;
		L_41 = CapsuleCollider_get_height_m63A31072F296AEE6222DC9C88704882BB6A54A24(L_40, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_39, L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_42, (0.5f), NULL);
		CapsuleCollider_set_center_m242D92DAEF25887C6A87A0777E4E624C0A431A2E(L_38, L_43, NULL);
	}

IL_012e:
	{
		// if (!IsCrouched)
		bool L_44;
		L_44 = Crouch_get_IsCrouched_m8021AD022A7B374B3B874ADC220EF7C450E8953D_inline(__this, NULL);
		if (L_44)
		{
			goto IL_0216;
		}
	}
	{
		// IsCrouched = true;
		Crouch_set_IsCrouched_m0E68FE1FCB4B9AB458FDB6ED63274E3E18500DEF_inline(__this, (bool)1, NULL);
		// SetSpeedOverrideActive(true);
		Crouch_SetSpeedOverrideActive_m3594FDB1D21D4CE01281EF2553B99924879A9497(__this, (bool)1, NULL);
		// CrouchStart?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_45 = __this->___CrouchStart_13;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_46 = L_45;
		G_B14_0 = L_46;
		if (L_46)
		{
			G_B15_0 = L_46;
			goto IL_0152;
		}
	}
	{
		return;
	}

IL_0152:
	{
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B15_0, NULL);
		return;
	}

IL_0158:
	{
		// if (IsCrouched)
		bool L_47;
		L_47 = Crouch_get_IsCrouched_m8021AD022A7B374B3B874ADC220EF7C450E8953D_inline(__this, NULL);
		if (!L_47)
		{
			goto IL_0216;
		}
	}
	{
		// if (headToLower)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48 = __this->___headToLower_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_49;
		L_49 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_48, NULL);
		if (!L_49)
		{
			goto IL_01ab;
		}
	}
	{
		// headToLower.localPosition = new Vector3(headToLower.localPosition.x, defaultHeadYLocalPosition.Value, headToLower.localPosition.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_50 = __this->___headToLower_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51 = __this->___headToLower_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_51, NULL);
		float L_53 = L_52.___x_2;
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_54 = (&__this->___defaultHeadYLocalPosition_8);
		float L_55;
		L_55 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA(L_54, Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_56 = __this->___headToLower_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_56, NULL);
		float L_58 = L_57.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		memset((&L_59), 0, sizeof(L_59));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_59), L_53, L_55, L_58, /*hidden argument*/NULL);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_50, L_59, NULL);
	}

IL_01ab:
	{
		// if (colliderToLower)
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_60 = __this->___colliderToLower_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_61;
		L_61 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_60, NULL);
		if (!L_61)
		{
			goto IL_01f8;
		}
	}
	{
		// colliderToLower.height = defaultColliderHeight.Value;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_62 = __this->___colliderToLower_10;
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_63 = (&__this->___defaultColliderHeight_11);
		float L_64;
		L_64 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA(L_63, Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB(L_62, L_64, NULL);
		// colliderToLower.center = Vector3.up * colliderToLower.height * .5f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_65 = __this->___colliderToLower_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		L_66 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_67 = __this->___colliderToLower_10;
		float L_68;
		L_68 = CapsuleCollider_get_height_m63A31072F296AEE6222DC9C88704882BB6A54A24(L_67, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_66, L_68, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		L_70 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_69, (0.5f), NULL);
		CapsuleCollider_set_center_m242D92DAEF25887C6A87A0777E4E624C0A431A2E(L_65, L_70, NULL);
	}

IL_01f8:
	{
		// IsCrouched = false;
		Crouch_set_IsCrouched_m0E68FE1FCB4B9AB458FDB6ED63274E3E18500DEF_inline(__this, (bool)0, NULL);
		// SetSpeedOverrideActive(false);
		Crouch_SetSpeedOverrideActive_m3594FDB1D21D4CE01281EF2553B99924879A9497(__this, (bool)0, NULL);
		// CrouchEnd?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_71 = __this->___CrouchEnd_14;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_72 = L_71;
		G_B22_0 = L_72;
		if (L_72)
		{
			G_B23_0 = L_72;
			goto IL_0211;
		}
	}
	{
		return;
	}

IL_0211:
	{
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B23_0, NULL);
	}

IL_0216:
	{
		// }
		return;
	}
}
// System.Void Crouch::SetSpeedOverrideActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crouch_SetSpeedOverrideActive_m3594FDB1D21D4CE01281EF2553B99924879A9497 (Crouch_t5E2751F5A50DD97CAF1DBA3A07594BFADB38637E* __this, bool ___state0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crouch_SpeedOverride_m392F2AF30FD113613ED46F00BB25154F44D6FC99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC0C5EBDE0E867AB446CD4FDFC0842C80DB286995_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m73F8F11AF52640BDBADC0E0CDBDE9673E6FDD9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mC7B6449E976E336300E6DBDE519CAA996C500E9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(!movement)
		FirstPersonMovement_tA852887AB56569BDD01EA2BE85F9B39C349C5FFE* L_0 = __this->___movement_5;
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
		// if (state)
		bool L_2 = ___state0;
		if (!L_2)
		{
			goto IL_004c;
		}
	}
	{
		// if (!movement.speedOverrides.Contains(SpeedOverride))
		FirstPersonMovement_tA852887AB56569BDD01EA2BE85F9B39C349C5FFE* L_3 = __this->___movement_5;
		List_1_t6F64C3EC2C2C6614F0A241F3D022EC8745453001* L_4 = L_3->___speedOverrides_19;
		Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* L_5 = (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7*)il2cpp_codegen_object_new(Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7_il2cpp_TypeInfo_var);
		Func_1__ctor_m94E0C712F86101E026834DA318C3FFF46DE49C71(L_5, __this, (intptr_t)((void*)Crouch_SpeedOverride_m392F2AF30FD113613ED46F00BB25154F44D6FC99_RuntimeMethod_var), NULL);
		bool L_6;
		L_6 = List_1_Contains_m73F8F11AF52640BDBADC0E0CDBDE9673E6FDD9C4(L_4, L_5, List_1_Contains_m73F8F11AF52640BDBADC0E0CDBDE9673E6FDD9C4_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_0087;
		}
	}
	{
		// movement.speedOverrides.Add(SpeedOverride);
		FirstPersonMovement_tA852887AB56569BDD01EA2BE85F9B39C349C5FFE* L_7 = __this->___movement_5;
		List_1_t6F64C3EC2C2C6614F0A241F3D022EC8745453001* L_8 = L_7->___speedOverrides_19;
		Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* L_9 = (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7*)il2cpp_codegen_object_new(Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7_il2cpp_TypeInfo_var);
		Func_1__ctor_m94E0C712F86101E026834DA318C3FFF46DE49C71(L_9, __this, (intptr_t)((void*)Crouch_SpeedOverride_m392F2AF30FD113613ED46F00BB25154F44D6FC99_RuntimeMethod_var), NULL);
		List_1_Add_mC0C5EBDE0E867AB446CD4FDFC0842C80DB286995_inline(L_8, L_9, List_1_Add_mC0C5EBDE0E867AB446CD4FDFC0842C80DB286995_RuntimeMethod_var);
		return;
	}

IL_004c:
	{
		// if (movement.speedOverrides.Contains(SpeedOverride))
		FirstPersonMovement_tA852887AB56569BDD01EA2BE85F9B39C349C5FFE* L_10 = __this->___movement_5;
		List_1_t6F64C3EC2C2C6614F0A241F3D022EC8745453001* L_11 = L_10->___speedOverrides_19;
		Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* L_12 = (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7*)il2cpp_codegen_object_new(Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7_il2cpp_TypeInfo_var);
		Func_1__ctor_m94E0C712F86101E026834DA318C3FFF46DE49C71(L_12, __this, (intptr_t)((void*)Crouch_SpeedOverride_m392F2AF30FD113613ED46F00BB25154F44D6FC99_RuntimeMethod_var), NULL);
		bool L_13;
		L_13 = List_1_Contains_m73F8F11AF52640BDBADC0E0CDBDE9673E6FDD9C4(L_11, L_12, List_1_Contains_m73F8F11AF52640BDBADC0E0CDBDE9673E6FDD9C4_RuntimeMethod_var);
		if (!L_13)
		{
			goto IL_0087;
		}
	}
	{
		// movement.speedOverrides.Remove(SpeedOverride);
		FirstPersonMovement_tA852887AB56569BDD01EA2BE85F9B39C349C5FFE* L_14 = __this->___movement_5;
		List_1_t6F64C3EC2C2C6614F0A241F3D022EC8745453001* L_15 = L_14->___speedOverrides_19;
		Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* L_16 = (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7*)il2cpp_codegen_object_new(Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7_il2cpp_TypeInfo_var);
		Func_1__ctor_m94E0C712F86101E026834DA318C3FFF46DE49C71(L_16, __this, (intptr_t)((void*)Crouch_SpeedOverride_m392F2AF30FD113613ED46F00BB25154F44D6FC99_RuntimeMethod_var), NULL);
		bool L_17;
		L_17 = List_1_Remove_mC7B6449E976E336300E6DBDE519CAA996C500E9B(L_15, L_16, List_1_Remove_mC7B6449E976E336300E6DBDE519CAA996C500E9B_RuntimeMethod_var);
	}

IL_0087:
	{
		// }
		return;
	}
}
// System.Single Crouch::SpeedOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Crouch_SpeedOverride_m392F2AF30FD113613ED46F00BB25154F44D6FC99 (Crouch_t5E2751F5A50DD97CAF1DBA3A07594BFADB38637E* __this, const RuntimeMethod* method) 
{
	{
		// float SpeedOverride() => movementSpeed;
		float L_0 = __this->___movementSpeed_6;
		return L_0;
	}
}
// System.Void Crouch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crouch__ctor_m785E4538AAF566037576D96272D3EAA49228F97C (Crouch_t5E2751F5A50DD97CAF1DBA3A07594BFADB38637E* __this, const RuntimeMethod* method) 
{
	{
		// public KeyCode key = KeyCode.LeftControl;
		__this->___key_4 = ((int32_t)306);
		// public float movementSpeed = 2;
		__this->___movementSpeed_6 = (2.0f);
		// public float crouchYHeadPosition = 1;
		__this->___crouchYHeadPosition_9 = (1.0f);
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
// UnityEngine.Vector2 FirstPersonAudio::get_CurrentCharacterPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 FirstPersonAudio_get_CurrentCharacterPosition_mBA3186546303206E2BB71C4B1956F898DF86ACA0 (FirstPersonAudio_t42DBEA25B65A97CD0277104F996717899E882174* __this, const RuntimeMethod* method) 
{
	{
		// Vector2 CurrentCharacterPosition => new Vector2(character.transform.position.x, character.transform.position.z);
		FirstPersonMovement_tA852887AB56569BDD01EA2BE85F9B39C349C5FFE* L_0 = __this->___character_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = L_2.___x_2;
		FirstPersonMovement_tA852887AB56569BDD01EA2BE85F9B39C349C5FFE* L_4 = __this->___character_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7 = L_6.___z_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), L_3, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.AudioSource[] FirstPersonAudio::get_MovingAudios()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* FirstPersonAudio_get_MovingAudios_mCA93AC23C6D9C04041B6C6BB4A9BA3339E527228 (FirstPersonAudio_t42DBEA25B65A97CD0277104F996717899E882174* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AudioSource[] MovingAudios => new AudioSource[] { stepAudio, runningAudio, crouchedAudio };
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_0 = (AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2*)(AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2*)SZArrayNew(AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2_il2cpp_TypeInfo_var, (uint32_t)3);
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_1 = L_0;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___stepAudio_6;
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*)L_2);
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_3 = L_1;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___runningAudio_7;
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*)L_4);
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_5 = L_3;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = __this->___crouchedAudio_17;
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*)L_6);
		return L_5;
	}
}
// System.Void FirstPersonAudio::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonAudio_Reset_m559BA9EBB7B6CEFE33B36AF95D524AFF59184F16 (FirstPersonAudio_t42DBEA25B65A97CD0277104F996717899E882174* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisGroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44_m949899B924A6395CEA3DD82BD58D9A23180B0974_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisCrouch_t5E2751F5A50DD97CAF1DBA3A07594BFADB38637E_mB3E5CE01E48DF98421E2A58777EE3DDBF8FE5AEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisFirstPersonMovement_tA852887AB56569BDD01EA2BE85F9B39C349C5FFE_mE72DA6C0F2CD4180F703668D1D752F12ED0DADCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisJump_t5984E7808773AD6C29ABDF6EF00972AEFA377F8F_m0E400D3292CAE3A02757F7F02C6F08C3FEE2E6E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53FEF6F383C8B0EB9CD4F13DA2213E71227E258D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral739EFA49D5BD725C6477104ECBB7E5F64FD4311D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D627A5BC20D80C603CF15094CD83EEAED55A707);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F9418A87EC4493AA1CC6198B7ABBB103821BE9B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA10C489BB7C68C194C4FBA5CAB848B7EADD708C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7E2BD95D61EE09EEA449D591DC5ADACF44AA1D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5486130599D54264F28B5C2BD0983DF1242C46A);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B2_0 = NULL;
	FirstPersonAudio_t42DBEA25B65A97CD0277104F996717899E882174* G_B2_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B1_0 = NULL;
	FirstPersonAudio_t42DBEA25B65A97CD0277104F996717899E882174* G_B1_1 = NULL;
	{
		// character = GetComponentInParent<FirstPersonMovement>();
		FirstPersonMovement_tA852887AB56569BDD01EA2BE85F9B39C349C5FFE* L_0;
		L_0 = Component_GetComponentInParent_TisFirstPersonMovement_tA852887AB56569BDD01EA2BE85F9B39C349C5FFE_mE72DA6C0F2CD4180F703668D1D752F12ED0DADCC(__this, Component_GetComponentInParent_TisFirstPersonMovement_tA852887AB56569BDD01EA2BE85F9B39C349C5FFE_mE72DA6C0F2CD4180F703668D1D752F12ED0DADCC_RuntimeMethod_var);
		__this->___character_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___character_4), (void*)L_0);
		// groundCheck = (transform.parent ?? transform).GetComponentInChildren<GroundCheck>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = __this;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = __this;
			goto IL_0022;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0022:
	{
		GroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44* L_5;
		L_5 = Component_GetComponentInChildren_TisGroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44_m949899B924A6395CEA3DD82BD58D9A23180B0974(G_B2_0, Component_GetComponentInChildren_TisGroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44_m949899B924A6395CEA3DD82BD58D9A23180B0974_RuntimeMethod_var);
		G_B2_1->___groundCheck_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___groundCheck_5), (void*)L_5);
		// stepAudio = GetOrCreateAudioSource("Step Audio");
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6;
		L_6 = FirstPersonAudio_GetOrCreateAudioSource_mFDAA7C59175E30DFF97C5596B53D2FCDEEDDFCEB(__this, _stringLiteral9D627A5BC20D80C603CF15094CD83EEAED55A707, NULL);
		__this->___stepAudio_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stepAudio_6), (void*)L_6);
		// runningAudio = GetOrCreateAudioSource("Running Audio");
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_7;
		L_7 = FirstPersonAudio_GetOrCreateAudioSource_mFDAA7C59175E30DFF97C5596B53D2FCDEEDDFCEB(__this, _stringLiteral53FEF6F383C8B0EB9CD4F13DA2213E71227E258D, NULL);
		__this->___runningAudio_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___runningAudio_7), (void*)L_7);
		// landingAudio = GetOrCreateAudioSource("Landing Audio");
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_8;
		L_8 = FirstPersonAudio_GetOrCreateAudioSource_mFDAA7C59175E30DFF97C5596B53D2FCDEEDDFCEB(__this, _stringLiteralA10C489BB7C68C194C4FBA5CAB848B7EADD708C0, NULL);
		__this->___landingAudio_10 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___landingAudio_10), (void*)L_8);
		// jump = GetComponentInParent<Jump>();
		Jump_t5984E7808773AD6C29ABDF6EF00972AEFA377F8F* L_9;
		L_9 = Component_GetComponentInParent_TisJump_t5984E7808773AD6C29ABDF6EF00972AEFA377F8F_m0E400D3292CAE3A02757F7F02C6F08C3FEE2E6E6(__this, Component_GetComponentInParent_TisJump_t5984E7808773AD6C29ABDF6EF00972AEFA377F8F_m0E400D3292CAE3A02757F7F02C6F08C3FEE2E6E6_RuntimeMethod_var);
		__this->___jump_12 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___jump_12), (void*)L_9);
		// if (jump)
		Jump_t5984E7808773AD6C29ABDF6EF00972AEFA377F8F* L_10 = __this->___jump_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_10, NULL);
		if (!L_11)
		{
			goto IL_0089;
		}
	}
	{
		// jumpAudio = GetOrCreateAudioSource("Jump audio");
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_12;
		L_12 = FirstPersonAudio_GetOrCreateAudioSource_mFDAA7C59175E30DFF97C5596B53D2FCDEEDDFCEB(__this, _stringLiteralB7E2BD95D61EE09EEA449D591DC5ADACF44AA1D5, NULL);
		__this->___jumpAudio_13 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___jumpAudio_13), (void*)L_12);
	}

IL_0089:
	{
		// crouch = GetComponentInParent<Crouch>();
		Crouch_t5E2751F5A50DD97CAF1DBA3A07594BFADB38637E* L_13;
		L_13 = Component_GetComponentInParent_TisCrouch_t5E2751F5A50DD97CAF1DBA3A07594BFADB38637E_mB3E5CE01E48DF98421E2A58777EE3DDBF8FE5AEF(__this, Component_GetComponentInParent_TisCrouch_t5E2751F5A50DD97CAF1DBA3A07594BFADB38637E_mB3E5CE01E48DF98421E2A58777EE3DDBF8FE5AEF_RuntimeMethod_var);
		__this->___crouch_15 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___crouch_15), (void*)L_13);
		// if (crouch)
		Crouch_t5E2751F5A50DD97CAF1DBA3A07594BFADB38637E* L_14 = __this->___crouch_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_14, NULL);
		if (!L_15)
		{
			goto IL_00d5;
		}
	}
	{
		// crouchStartAudio = GetOrCreateAudioSource("Crouch Start Audio");
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_16;
		L_16 = FirstPersonAudio_GetOrCreateAudioSource_mFDAA7C59175E30DFF97C5596B53D2FCDEEDDFCEB(__this, _stringLiteral9F9418A87EC4493AA1CC6198B7ABBB103821BE9B, NULL);
		__this->___crouchStartAudio_16 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___crouchStartAudio_16), (void*)L_16);
		// crouchStartAudio = GetOrCreateAudioSource("Crouched Audio");
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_17;
		L_17 = FirstPersonAudio_GetOrCreateAudioSource_mFDAA7C59175E30DFF97C5596B53D2FCDEEDDFCEB(__this, _stringLiteral739EFA49D5BD725C6477104ECBB7E5F64FD4311D, NULL);
		__this->___crouchStartAudio_16 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___crouchStartAudio_16), (void*)L_17);
		// crouchStartAudio = GetOrCreateAudioSource("Crouch End Audio");
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_18;
		L_18 = FirstPersonAudio_GetOrCreateAudioSource_mFDAA7C59175E30DFF97C5596B53D2FCDEEDDFCEB(__this, _stringLiteralF5486130599D54264F28B5C2BD0983DF1242C46A, NULL);
		__this->___crouchStartAudio_16 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___crouchStartAudio_16), (void*)L_18);
	}

IL_00d5:
	{
		// }
		return;
	}
}
// System.Void FirstPersonAudio::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonAudio_OnEnable_m3B77D48881CFC8F10C6E617C38D2F895165878F7 (FirstPersonAudio_t42DBEA25B65A97CD0277104F996717899E882174* __this, const RuntimeMethod* method) 
{
	{
		// void OnEnable() => SubscribeToEvents();
		FirstPersonAudio_SubscribeToEvents_m31617B3C4816E3A7D1A03A1863200C377A235DB2(__this, NULL);
		return;
	}
}
// System.Void FirstPersonAudio::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonAudio_OnDisable_m205FF08E030AC6BD983556AA00D008334B1C76EA (FirstPersonAudio_t42DBEA25B65A97CD0277104F996717899E882174* __this, const RuntimeMethod* method) 
{
	{
		// void OnDisable() => UnsubscribeToEvents();
		FirstPersonAudio_UnsubscribeToEvents_m58258AA6D714786043FA98E4898DB1A078B055DD(__this, NULL);
		return;
	}
}
// System.Void FirstPersonAudio::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonAudio_FixedUpdate_m5A5252FEC86919FB4C7A482DEDD7E76447ED5EAC (FirstPersonAudio_t42DBEA25B65A97CD0277104F996717899E882174* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// float velocity = Vector3.Distance(CurrentCharacterPosition, lastCharacterPosition);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = FirstPersonAudio_get_CurrentCharacterPosition_mBA3186546303206E2BB71C4B1956F898DF86ACA0(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_0, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = __this->___lastCharacterPosition_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_2, NULL);
		float L_4;
		L_4 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_1, L_3, NULL);
		// if (velocity >= velocityThreshold && groundCheck && groundCheck.isGrounded)
		float L_5 = __this->___velocityThreshold_8;
		if ((!(((float)L_4) >= ((float)L_5))))
		{
			goto IL_008e;
		}
	}
	{
		GroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44* L_6 = __this->___groundCheck_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_6, NULL);
		if (!L_7)
		{
			goto IL_008e;
		}
	}
	{
		GroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44* L_8 = __this->___groundCheck_5;
		bool L_9 = L_8->___isGrounded_5;
		if (!L_9)
		{
			goto IL_008e;
		}
	}
	{
		// if (crouch && crouch.IsCrouched)
		Crouch_t5E2751F5A50DD97CAF1DBA3A07594BFADB38637E* L_10 = __this->___crouch_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_10, NULL);
		if (!L_11)
		{
			goto IL_0065;
		}
	}
	{
		Crouch_t5E2751F5A50DD97CAF1DBA3A07594BFADB38637E* L_12 = __this->___crouch_15;
		bool L_13;
		L_13 = Crouch_get_IsCrouched_m8021AD022A7B374B3B874ADC220EF7C450E8953D_inline(L_12, NULL);
		if (!L_13)
		{
			goto IL_0065;
		}
	}
	{
		// SetPlayingMovingAudio(crouchedAudio);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_14 = __this->___crouchedAudio_17;
		FirstPersonAudio_SetPlayingMovingAudio_m9B5EC029AA0A149A29EF2EFCCADFA76975EEF914(__this, L_14, NULL);
		goto IL_0095;
	}

IL_0065:
	{
		// else if (character.IsRunning)
		FirstPersonMovement_tA852887AB56569BDD01EA2BE85F9B39C349C5FFE* L_15 = __this->___character_4;
		bool L_16;
		L_16 = FirstPersonMovement_get_IsRunning_m58CAF98A09A5CE86F21EE8DC8A1ACBF5A655681E_inline(L_15, NULL);
		if (!L_16)
		{
			goto IL_0080;
		}
	}
	{
		// SetPlayingMovingAudio(runningAudio);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_17 = __this->___runningAudio_7;
		FirstPersonAudio_SetPlayingMovingAudio_m9B5EC029AA0A149A29EF2EFCCADFA76975EEF914(__this, L_17, NULL);
		goto IL_0095;
	}

IL_0080:
	{
		// SetPlayingMovingAudio(stepAudio);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_18 = __this->___stepAudio_6;
		FirstPersonAudio_SetPlayingMovingAudio_m9B5EC029AA0A149A29EF2EFCCADFA76975EEF914(__this, L_18, NULL);
		goto IL_0095;
	}

IL_008e:
	{
		// SetPlayingMovingAudio(null);
		FirstPersonAudio_SetPlayingMovingAudio_m9B5EC029AA0A149A29EF2EFCCADFA76975EEF914(__this, (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*)NULL, NULL);
	}

IL_0095:
	{
		// lastCharacterPosition = CurrentCharacterPosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = FirstPersonAudio_get_CurrentCharacterPosition_mBA3186546303206E2BB71C4B1956F898DF86ACA0(__this, NULL);
		__this->___lastCharacterPosition_9 = L_19;
		// }
		return;
	}
}
// System.Void FirstPersonAudio::SetPlayingMovingAudio(UnityEngine.AudioSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonAudio_SetPlayingMovingAudio_m9B5EC029AA0A149A29EF2EFCCADFA76975EEF914 (FirstPersonAudio_t42DBEA25B65A97CD0277104F996717899E882174* __this, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioToPlay0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m645FDC2F31588349A9C75C750E78E5870DE06917_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t920AB46A880DA3D1651F78EE6B4AF6EE30D43937_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t100A605302E409122C25E4E00A58C703DFC428EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t8CCDF3960396514276C96EB6767A3C6A1EB993FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass25_0_U3CSetPlayingMovingAudioU3Eb__0_mE65FFB2CE9EE8B18668294D5EDF2E23363E9707F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass25_0_tCBB1DEC8E8547F79F57BD561E1D8602D11E560E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass25_0_tCBB1DEC8E8547F79F57BD561E1D8602D11E560E0* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Func_2_t920AB46A880DA3D1651F78EE6B4AF6EE30D43937* V_2 = NULL;
	Func_2_t920AB46A880DA3D1651F78EE6B4AF6EE30D43937* G_B2_0 = NULL;
	AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* G_B2_1 = NULL;
	Func_2_t920AB46A880DA3D1651F78EE6B4AF6EE30D43937* G_B1_0 = NULL;
	AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* G_B1_1 = NULL;
	{
		U3CU3Ec__DisplayClass25_0_tCBB1DEC8E8547F79F57BD561E1D8602D11E560E0* L_0 = (U3CU3Ec__DisplayClass25_0_tCBB1DEC8E8547F79F57BD561E1D8602D11E560E0*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass25_0_tCBB1DEC8E8547F79F57BD561E1D8602D11E560E0_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass25_0__ctor_mD581F9E0567BD4F4790D95AF369E7DB99C2D0885(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass25_0_tCBB1DEC8E8547F79F57BD561E1D8602D11E560E0* L_1 = V_0;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = ___audioToPlay0;
		L_1->___audioToPlay_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___audioToPlay_0), (void*)L_2);
		// foreach (var audio in MovingAudios.Where(audio => audio != audioToPlay && audio != null))
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_3;
		L_3 = FirstPersonAudio_get_MovingAudios_mCA93AC23C6D9C04041B6C6BB4A9BA3339E527228(__this, NULL);
		U3CU3Ec__DisplayClass25_0_tCBB1DEC8E8547F79F57BD561E1D8602D11E560E0* L_4 = V_0;
		Func_2_t920AB46A880DA3D1651F78EE6B4AF6EE30D43937* L_5 = L_4->___U3CU3E9__0_1;
		Func_2_t920AB46A880DA3D1651F78EE6B4AF6EE30D43937* L_6 = L_5;
		G_B1_0 = L_6;
		G_B1_1 = L_3;
		if (L_6)
		{
			G_B2_0 = L_6;
			G_B2_1 = L_3;
			goto IL_0032;
		}
	}
	{
		U3CU3Ec__DisplayClass25_0_tCBB1DEC8E8547F79F57BD561E1D8602D11E560E0* L_7 = V_0;
		U3CU3Ec__DisplayClass25_0_tCBB1DEC8E8547F79F57BD561E1D8602D11E560E0* L_8 = V_0;
		Func_2_t920AB46A880DA3D1651F78EE6B4AF6EE30D43937* L_9 = (Func_2_t920AB46A880DA3D1651F78EE6B4AF6EE30D43937*)il2cpp_codegen_object_new(Func_2_t920AB46A880DA3D1651F78EE6B4AF6EE30D43937_il2cpp_TypeInfo_var);
		Func_2__ctor_m284248A81FFE4D81A6D1B5F5F132D0BBBE7C5BC5(L_9, L_8, (intptr_t)((void*)U3CU3Ec__DisplayClass25_0_U3CSetPlayingMovingAudioU3Eb__0_mE65FFB2CE9EE8B18668294D5EDF2E23363E9707F_RuntimeMethod_var), NULL);
		Func_2_t920AB46A880DA3D1651F78EE6B4AF6EE30D43937* L_10 = L_9;
		V_2 = L_10;
		L_7->___U3CU3E9__0_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___U3CU3E9__0_1), (void*)L_10);
		Func_2_t920AB46A880DA3D1651F78EE6B4AF6EE30D43937* L_11 = V_2;
		G_B2_0 = L_11;
		G_B2_1 = G_B1_1;
	}

IL_0032:
	{
		RuntimeObject* L_12;
		L_12 = Enumerable_Where_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m645FDC2F31588349A9C75C750E78E5870DE06917((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_Where_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m645FDC2F31588349A9C75C750E78E5870DE06917_RuntimeMethod_var);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.AudioSource>::GetEnumerator() */, IEnumerable_1_t100A605302E409122C25E4E00A58C703DFC428EA_il2cpp_TypeInfo_var, L_12);
		V_1 = L_13;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_14 = V_1;
					if (!L_14)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_15 = V_1;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_15);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004a_1;
			}

IL_003f_1:
			{
				// foreach (var audio in MovingAudios.Where(audio => audio != audioToPlay && audio != null))
				RuntimeObject* L_16 = V_1;
				AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_17;
				L_17 = InterfaceFuncInvoker0< AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.AudioSource>::get_Current() */, IEnumerator_1_t8CCDF3960396514276C96EB6767A3C6A1EB993FF_il2cpp_TypeInfo_var, L_16);
				// audio.Pause();
				AudioSource_Pause_m2C2A09359E8AA924FEADECC1AFEA519B3C915B26(L_17, NULL);
			}

IL_004a_1:
			{
				// foreach (var audio in MovingAudios.Where(audio => audio != audioToPlay && audio != null))
				RuntimeObject* L_18 = V_1;
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_18);
				if (L_19)
				{
					goto IL_003f_1;
				}
			}
			{
				goto IL_005e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// if (audioToPlay && !audioToPlay.isPlaying)
		U3CU3Ec__DisplayClass25_0_tCBB1DEC8E8547F79F57BD561E1D8602D11E560E0* L_20 = V_0;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_21 = L_20->___audioToPlay_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_21, NULL);
		if (!L_22)
		{
			goto IL_0083;
		}
	}
	{
		U3CU3Ec__DisplayClass25_0_tCBB1DEC8E8547F79F57BD561E1D8602D11E560E0* L_23 = V_0;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_24 = L_23->___audioToPlay_0;
		bool L_25;
		L_25 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_24, NULL);
		if (L_25)
		{
			goto IL_0083;
		}
	}
	{
		// audioToPlay.Play();
		U3CU3Ec__DisplayClass25_0_tCBB1DEC8E8547F79F57BD561E1D8602D11E560E0* L_26 = V_0;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_27 = L_26->___audioToPlay_0;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_27, NULL);
	}

IL_0083:
	{
		// }
		return;
	}
}
// System.Void FirstPersonAudio::PlayLandingAudio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonAudio_PlayLandingAudio_m418A84C6945EEC6D587ADE8F7E9057B3AEBE2F29 (FirstPersonAudio_t42DBEA25B65A97CD0277104F996717899E882174* __this, const RuntimeMethod* method) 
{
	{
		// void PlayLandingAudio() => PlayRandomClip(landingAudio, landingSFX);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___landingAudio_10;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_1 = __this->___landingSFX_11;
		FirstPersonAudio_PlayRandomClip_mABBA1CD664E21496BB474804CD50AB3818160880(L_0, L_1, NULL);
		return;
	}
}
// System.Void FirstPersonAudio::PlayJumpAudio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonAudio_PlayJumpAudio_m06A6D11FE803C71F52A411C4140577E31B12BC4A (FirstPersonAudio_t42DBEA25B65A97CD0277104F996717899E882174* __this, const RuntimeMethod* method) 
{
	{
		// void PlayJumpAudio() => PlayRandomClip(jumpAudio, jumpSFX);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___jumpAudio_13;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_1 = __this->___jumpSFX_14;
		FirstPersonAudio_PlayRandomClip_mABBA1CD664E21496BB474804CD50AB3818160880(L_0, L_1, NULL);
		return;
	}
}
// System.Void FirstPersonAudio::PlayCrouchStartAudio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonAudio_PlayCrouchStartAudio_mEA45F53F68075AB92CBD155D26BF2C024D06A05B (FirstPersonAudio_t42DBEA25B65A97CD0277104F996717899E882174* __this, const RuntimeMethod* method) 
{
	{
		// void PlayCrouchStartAudio() => PlayRandomClip(crouchStartAudio, crouchStartSFX);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___crouchStartAudio_16;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_1 = __this->___crouchStartSFX_19;
		FirstPersonAudio_PlayRandomClip_mABBA1CD664E21496BB474804CD50AB3818160880(L_0, L_1, NULL);
		return;
	}
}
// System.Void FirstPersonAudio::PlayCrouchEndAudio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonAudio_PlayCrouchEndAudio_mFADF07FB52E7DB44571D4872BEC9B8EB0D7F3E9E (FirstPersonAudio_t42DBEA25B65A97CD0277104F996717899E882174* __this, const RuntimeMethod* method) 
{
	{
		// void PlayCrouchEndAudio() => PlayRandomClip(crouchEndAudio, crouchEndSFX);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___crouchEndAudio_18;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_1 = __this->___crouchEndSFX_20;
		FirstPersonAudio_PlayRandomClip_mABBA1CD664E21496BB474804CD50AB3818160880(L_0, L_1, NULL);
		return;
	}
}
// System.Void FirstPersonAudio::SubscribeToEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonAudio_SubscribeToEvents_m31617B3C4816E3A7D1A03A1863200C377A235DB2 (FirstPersonAudio_t42DBEA25B65A97CD0277104F996717899E882174* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirstPersonAudio_PlayCrouchEndAudio_mFADF07FB52E7DB44571D4872BEC9B8EB0D7F3E9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirstPersonAudio_PlayCrouchStartAudio_mEA45F53F68075AB92CBD155D26BF2C024D06A05B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirstPersonAudio_PlayJumpAudio_m06A6D11FE803C71F52A411C4140577E31B12BC4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirstPersonAudio_PlayLandingAudio_m418A84C6945EEC6D587ADE8F7E9057B3AEBE2F29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// groundCheck.Grounded += PlayLandingAudio;
		GroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44* L_0 = __this->___groundCheck_5;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)FirstPersonAudio_PlayLandingAudio_m418A84C6945EEC6D587ADE8F7E9057B3AEBE2F29_RuntimeMethod_var), NULL);
		GroundCheck_add_Grounded_mEE759BD36FAB4E2BB10DABF3EBD80D5FF53B9700(L_0, L_1, NULL);
		// if (jump)
		Jump_t5984E7808773AD6C29ABDF6EF00972AEFA377F8F* L_2 = __this->___jump_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		// jump.Jumped += PlayJumpAudio;
		Jump_t5984E7808773AD6C29ABDF6EF00972AEFA377F8F* L_4 = __this->___jump_12;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_5, __this, (intptr_t)((void*)FirstPersonAudio_PlayJumpAudio_m06A6D11FE803C71F52A411C4140577E31B12BC4A_RuntimeMethod_var), NULL);
		Jump_add_Jumped_m24D47318B3EF5EDB511C8D12B209DC4745DFDD35(L_4, L_5, NULL);
	}

IL_003b:
	{
		// if (crouch)
		Crouch_t5E2751F5A50DD97CAF1DBA3A07594BFADB38637E* L_6 = __this->___crouch_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_6, NULL);
		if (!L_7)
		{
			goto IL_0076;
		}
	}
	{
		// crouch.CrouchStart += PlayCrouchStartAudio;
		Crouch_t5E2751F5A50DD97CAF1DBA3A07594BFADB38637E* L_8 = __this->___crouch_15;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_9, __this, (intptr_t)((void*)FirstPersonAudio_PlayCrouchStartAudio_mEA45F53F68075AB92CBD155D26BF2C024D06A05B_RuntimeMethod_var), NULL);
		Crouch_add_CrouchStart_m743D6F1D74DD460789DAA1EBE70A703826A0FF9D(L_8, L_9, NULL);
		// crouch.CrouchEnd += PlayCrouchEndAudio;
		Crouch_t5E2751F5A50DD97CAF1DBA3A07594BFADB38637E* L_10 = __this->___crouch_15;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_11 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_11, __this, (intptr_t)((void*)FirstPersonAudio_PlayCrouchEndAudio_mFADF07FB52E7DB44571D4872BEC9B8EB0D7F3E9E_RuntimeMethod_var), NULL);
		Crouch_add_CrouchEnd_m967A7741C4C8602EC97627E8CFC9CBB4935B5FCF(L_10, L_11, NULL);
	}

IL_0076:
	{
		// }
		return;
	}
}
// System.Void FirstPersonAudio::UnsubscribeToEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonAudio_UnsubscribeToEvents_m58258AA6D714786043FA98E4898DB1A078B055DD (FirstPersonAudio_t42DBEA25B65A97CD0277104F996717899E882174* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirstPersonAudio_PlayCrouchEndAudio_mFADF07FB52E7DB44571D4872BEC9B8EB0D7F3E9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirstPersonAudio_PlayCrouchStartAudio_mEA45F53F68075AB92CBD155D26BF2C024D06A05B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirstPersonAudio_PlayJumpAudio_m06A6D11FE803C71F52A411C4140577E31B12BC4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirstPersonAudio_PlayLandingAudio_m418A84C6945EEC6D587ADE8F7E9057B3AEBE2F29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// groundCheck.Grounded -= PlayLandingAudio;
		GroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44* L_0 = __this->___groundCheck_5;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)FirstPersonAudio_PlayLandingAudio_m418A84C6945EEC6D587ADE8F7E9057B3AEBE2F29_RuntimeMethod_var), NULL);
		GroundCheck_remove_Grounded_m37450B17F210C314BA069657F336AC29F9A993A6(L_0, L_1, NULL);
		// if (jump)
		Jump_t5984E7808773AD6C29ABDF6EF00972AEFA377F8F* L_2 = __this->___jump_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		// jump.Jumped -= PlayJumpAudio;
		Jump_t5984E7808773AD6C29ABDF6EF00972AEFA377F8F* L_4 = __this->___jump_12;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_5, __this, (intptr_t)((void*)FirstPersonAudio_PlayJumpAudio_m06A6D11FE803C71F52A411C4140577E31B12BC4A_RuntimeMethod_var), NULL);
		Jump_remove_Jumped_m89E3F17DB2E89AC875B7ACBBC02A7D771BF2D358(L_4, L_5, NULL);
	}

IL_003b:
	{
		// if (crouch)
		Crouch_t5E2751F5A50DD97CAF1DBA3A07594BFADB38637E* L_6 = __this->___crouch_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_6, NULL);
		if (!L_7)
		{
			goto IL_0076;
		}
	}
	{
		// crouch.CrouchStart -= PlayCrouchStartAudio;
		Crouch_t5E2751F5A50DD97CAF1DBA3A07594BFADB38637E* L_8 = __this->___crouch_15;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_9, __this, (intptr_t)((void*)FirstPersonAudio_PlayCrouchStartAudio_mEA45F53F68075AB92CBD155D26BF2C024D06A05B_RuntimeMethod_var), NULL);
		Crouch_remove_CrouchStart_m4B26C7796907864959C8A3C018A062C3220E7D7B(L_8, L_9, NULL);
		// crouch.CrouchEnd -= PlayCrouchEndAudio;
		Crouch_t5E2751F5A50DD97CAF1DBA3A07594BFADB38637E* L_10 = __this->___crouch_15;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_11 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_11, __this, (intptr_t)((void*)FirstPersonAudio_PlayCrouchEndAudio_mFADF07FB52E7DB44571D4872BEC9B8EB0D7F3E9E_RuntimeMethod_var), NULL);
		Crouch_remove_CrouchEnd_mBB76273ABFAAC8C24541F0C7291CD3CD9C3C7611(L_10, L_11, NULL);
	}

IL_0076:
	{
		// }
		return;
	}
}
// UnityEngine.AudioSource FirstPersonAudio::GetOrCreateAudioSource(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* FirstPersonAudio_GetOrCreateAudioSource_mFDAA7C59175E30DFF97C5596B53D2FCDEEDDFCEB (FirstPersonAudio_t42DBEA25B65A97CD0277104F996717899E882174* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Find_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mEA7F597DF34F16102B2BD664432F08ED292715B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0B2E782E5333019BB07171DB8729E45114227660_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_tC996B23FA1541A49E50BC47010AB40E23A621271_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass32_0_U3CGetOrCreateAudioSourceU3Eb__0_m8DC3447DF696CE1EBB081414E0D26B4A8E91D180_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass32_0_t47A835B4C06EBD5C72E218CDD9AF93019999CF83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass32_0_t47A835B4C06EBD5C72E218CDD9AF93019999CF83* V_0 = NULL;
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass32_0_t47A835B4C06EBD5C72E218CDD9AF93019999CF83* L_0 = (U3CU3Ec__DisplayClass32_0_t47A835B4C06EBD5C72E218CDD9AF93019999CF83*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass32_0_t47A835B4C06EBD5C72E218CDD9AF93019999CF83_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass32_0__ctor_m20D8B942EF8CB12071A18B2E24109986C04007E1(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass32_0_t47A835B4C06EBD5C72E218CDD9AF93019999CF83* L_1 = V_0;
		String_t* L_2 = ___name0;
		L_1->___name_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___name_0), (void*)L_2);
		// AudioSource result = System.Array.Find(GetComponentsInChildren<AudioSource>(), a => a.name == name);
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_3;
		L_3 = Component_GetComponentsInChildren_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0B2E782E5333019BB07171DB8729E45114227660(__this, Component_GetComponentsInChildren_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0B2E782E5333019BB07171DB8729E45114227660_RuntimeMethod_var);
		U3CU3Ec__DisplayClass32_0_t47A835B4C06EBD5C72E218CDD9AF93019999CF83* L_4 = V_0;
		Predicate_1_tC996B23FA1541A49E50BC47010AB40E23A621271* L_5 = (Predicate_1_tC996B23FA1541A49E50BC47010AB40E23A621271*)il2cpp_codegen_object_new(Predicate_1_tC996B23FA1541A49E50BC47010AB40E23A621271_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m2808F3031265BA0D1D4164CFDCDB71A53B155B6D(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass32_0_U3CGetOrCreateAudioSourceU3Eb__0_m8DC3447DF696CE1EBB081414E0D26B4A8E91D180_RuntimeMethod_var), NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6;
		L_6 = Array_Find_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mEA7F597DF34F16102B2BD664432F08ED292715B9(L_3, L_5, Array_Find_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mEA7F597DF34F16102B2BD664432F08ED292715B9_RuntimeMethod_var);
		V_1 = L_6;
		// if (result)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_7 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_7, NULL);
		if (!L_8)
		{
			goto IL_002f;
		}
	}
	{
		// return result;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_9 = V_1;
		return L_9;
	}

IL_002f:
	{
		// result = new GameObject(name).AddComponent<AudioSource>();
		U3CU3Ec__DisplayClass32_0_t47A835B4C06EBD5C72E218CDD9AF93019999CF83* L_10 = V_0;
		String_t* L_11 = L_10->___name_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_12, L_11, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_13;
		L_13 = GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14(L_12, GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var);
		V_1 = L_13;
		// result.spatialBlend = 1;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_14 = V_1;
		AudioSource_set_spatialBlend_mCEE7A3E87A8C146E048B2CA3413FDC7BDB7BE001(L_14, (1.0f), NULL);
		// result.playOnAwake = false;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_15 = V_1;
		AudioSource_set_playOnAwake_m7EACC6ECEF12D7BA86A4E5A53603F1C8F9E11949(L_15, (bool)0, NULL);
		// result.transform.SetParent(transform, false);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_16 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_17, L_18, (bool)0, NULL);
		// return result;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_19 = V_1;
		return L_19;
	}
}
// System.Void FirstPersonAudio::PlayRandomClip(UnityEngine.AudioSource,UnityEngine.AudioClip[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonAudio_PlayRandomClip_mABBA1CD664E21496BB474804CD50AB3818160880 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audio0, AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ___clips1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_0 = NULL;
	{
		// if (!audio || clips.Length <= 0)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = ___audio0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_2 = ___clips1;
		if ((((RuntimeArray*)L_2)->max_length))
		{
			goto IL_000d;
		}
	}

IL_000c:
	{
		// return;
		return;
	}

IL_000d:
	{
		// AudioClip clip = clips[Random.Range(0, clips.Length)];
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_3 = ___clips1;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_4 = ___clips1;
		int32_t L_5;
		L_5 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		int32_t L_6 = L_5;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_7 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = L_7;
		// if (clips.Length > 1)
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_8 = ___clips1;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))) <= ((int32_t)1)))
		{
			goto IL_003b;
		}
	}
	{
		goto IL_002d;
	}

IL_0021:
	{
		// clip = clips[Random.Range(0, clips.Length)];
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_9 = ___clips1;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_10 = ___clips1;
		int32_t L_11;
		L_11 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_10)->max_length)), NULL);
		int32_t L_12 = L_11;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_13 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		V_0 = L_13;
	}

IL_002d:
	{
		// while (clip == audio.clip)
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_14 = V_0;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_15 = ___audio0;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_16;
		L_16 = AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE(L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_14, L_16, NULL);
		if (L_17)
		{
			goto IL_0021;
		}
	}

IL_003b:
	{
		// audio.clip = clip;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_18 = ___audio0;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_19 = V_0;
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_18, L_19, NULL);
		// audio.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_20 = ___audio0;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_20, NULL);
		// }
		return;
	}
}
// System.Void FirstPersonAudio::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonAudio__ctor_mC6A1041CFF29539E828CF0E0F19B7051F56A61DD (FirstPersonAudio_t42DBEA25B65A97CD0277104F996717899E882174* __this, const RuntimeMethod* method) 
{
	{
		// public float velocityThreshold = .01f;
		__this->___velocityThreshold_8 = (0.00999999978f);
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
// System.Void FirstPersonAudio/<>c__DisplayClass25_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_0__ctor_mD581F9E0567BD4F4790D95AF369E7DB99C2D0885 (U3CU3Ec__DisplayClass25_0_tCBB1DEC8E8547F79F57BD561E1D8602D11E560E0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean FirstPersonAudio/<>c__DisplayClass25_0::<SetPlayingMovingAudio>b__0(UnityEngine.AudioSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass25_0_U3CSetPlayingMovingAudioU3Eb__0_mE65FFB2CE9EE8B18668294D5EDF2E23363E9707F (U3CU3Ec__DisplayClass25_0_tCBB1DEC8E8547F79F57BD561E1D8602D11E560E0* __this, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audio0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// foreach (var audio in MovingAudios.Where(audio => audio != audioToPlay && audio != null))
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = ___audio0;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->___audioToPlay_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = ___audio0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_4;
	}

IL_0016:
	{
		return (bool)0;
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
// System.Void FirstPersonAudio/<>c__DisplayClass32_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass32_0__ctor_m20D8B942EF8CB12071A18B2E24109986C04007E1 (U3CU3Ec__DisplayClass32_0_t47A835B4C06EBD5C72E218CDD9AF93019999CF83* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean FirstPersonAudio/<>c__DisplayClass32_0::<GetOrCreateAudioSource>b__0(UnityEngine.AudioSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass32_0_U3CGetOrCreateAudioSourceU3Eb__0_m8DC3447DF696CE1EBB081414E0D26B4A8E91D180 (U3CU3Ec__DisplayClass32_0_t47A835B4C06EBD5C72E218CDD9AF93019999CF83* __this, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___a0, const RuntimeMethod* method) 
{
	{
		// AudioSource result = System.Array.Find(GetComponentsInChildren<AudioSource>(), a => a.name == name);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = ___a0;
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2 = __this->___name_0;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_2, NULL);
		return L_3;
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
// System.Void GroundCheck::add_Grounded(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundCheck_add_Grounded_mEE759BD36FAB4E2BB10DABF3EBD80D5FF53B9700 (GroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___Grounded_6;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___Grounded_6);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GroundCheck::remove_Grounded(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundCheck_remove_Grounded_m37450B17F210C314BA069657F336AC29F9A993A6 (GroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___Grounded_6;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___Grounded_6);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// UnityEngine.Vector3 GroundCheck::get_RaycastOrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GroundCheck_get_RaycastOrigin_mA790C0A47F7A1097DB27104647F5FCABEC047A8D (GroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44* __this, const RuntimeMethod* method) 
{
	{
		// Vector3 RaycastOrigin => transform.position + Vector3.up * OriginOffset;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_2, (0.00100000005f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_1, L_3, NULL);
		return L_4;
	}
}
// System.Single GroundCheck::get_RaycastDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GroundCheck_get_RaycastDistance_m9A8B70C128CF51CE65DA49234E0B688392D6B939 (GroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44* __this, const RuntimeMethod* method) 
{
	{
		// float RaycastDistance => distanceThreshold + OriginOffset;
		float L_0 = __this->___distanceThreshold_4;
		return ((float)il2cpp_codegen_add(L_0, (0.00100000005f)));
	}
}
// System.Void GroundCheck::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundCheck_LateUpdate_m7B43E9452B8425B8ECF2F1C69DE597BA41296645 (GroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B4_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B3_0 = NULL;
	{
		// bool isGroundedNow = Physics.Raycast(RaycastOrigin, Vector3.down, distanceThreshold * 2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = GroundCheck_get_RaycastOrigin_mA790C0A47F7A1097DB27104647F5FCABEC047A8D(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		float L_2 = __this->___distanceThreshold_4;
		bool L_3;
		L_3 = Physics_Raycast_mCFF84927BE3EC1780DBA34CCED374E7FF12ABCBE(L_0, L_1, ((float)il2cpp_codegen_multiply(L_2, (2.0f))), NULL);
		V_0 = L_3;
		// if (isGroundedNow && !isGrounded)
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		bool L_5 = __this->___isGrounded_5;
		if (L_5)
		{
			goto IL_0039;
		}
	}
	{
		// Grounded?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = __this->___Grounded_6;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = L_6;
		G_B3_0 = L_7;
		if (L_7)
		{
			G_B4_0 = L_7;
			goto IL_0034;
		}
	}
	{
		goto IL_0039;
	}

IL_0034:
	{
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B4_0, NULL);
	}

IL_0039:
	{
		// isGrounded = isGroundedNow;
		bool L_8 = V_0;
		__this->___isGrounded_5 = L_8;
		// }
		return;
	}
}
// System.Void GroundCheck::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundCheck_OnDrawGizmosSelected_m1EC6946686C56D67B25DB79EF26A1D4A5544EA31 (GroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B1_1;
	memset((&G_B1_1), 0, sizeof(G_B1_1));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_1;
	memset((&G_B3_1), 0, sizeof(G_B3_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_2;
	memset((&G_B3_2), 0, sizeof(G_B3_2));
	{
		// Debug.DrawLine(RaycastOrigin, RaycastOrigin + Vector3.down * RaycastDistance, isGrounded ? Color.white : Color.red);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = GroundCheck_get_RaycastOrigin_mA790C0A47F7A1097DB27104647F5FCABEC047A8D(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = GroundCheck_get_RaycastOrigin_mA790C0A47F7A1097DB27104647F5FCABEC047A8D(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		float L_3;
		L_3 = GroundCheck_get_RaycastDistance_m9A8B70C128CF51CE65DA49234E0B688392D6B939(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_2, L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_1, L_4, NULL);
		bool L_6 = __this->___isGrounded_5;
		G_B1_0 = L_5;
		G_B1_1 = L_0;
		if (L_6)
		{
			G_B2_0 = L_5;
			G_B2_1 = L_0;
			goto IL_0030;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		G_B3_0 = L_7;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0035;
	}

IL_0030:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		G_B3_0 = L_8;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0035:
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawLine_m873C7065638CFE611C48F429742690508044B75A(G_B3_2, G_B3_1, G_B3_0, NULL);
		// }
		return;
	}
}
// System.Void GroundCheck::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundCheck__ctor_m0221EBF4D34C3F1345FC82BA872F8BD63C9FDE86 (GroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44* __this, const RuntimeMethod* method) 
{
	{
		// public float distanceThreshold = .15f;
		__this->___distanceThreshold_4 = (0.150000006f);
		// public bool isGrounded = true;
		__this->___isGrounded_5 = (bool)1;
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
// System.Void Jump::add_Jumped(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jump_add_Jumped_m24D47318B3EF5EDB511C8D12B209DC4745DFDD35 (Jump_t5984E7808773AD6C29ABDF6EF00972AEFA377F8F* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___Jumped_6;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___Jumped_6);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Jump::remove_Jumped(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jump_remove_Jumped_m89E3F17DB2E89AC875B7ACBBC02A7D771BF2D358 (Jump_t5984E7808773AD6C29ABDF6EF00972AEFA377F8F* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___Jumped_6;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___Jumped_6);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Jump::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jump_Reset_m607CCB22C20BF87939E1D6B90968B4D766176C8E (Jump_t5984E7808773AD6C29ABDF6EF00972AEFA377F8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisGroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44_m949899B924A6395CEA3DD82BD58D9A23180B0974_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// groundCheck = GetComponentInChildren<GroundCheck>();
		GroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44* L_0;
		L_0 = Component_GetComponentInChildren_TisGroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44_m949899B924A6395CEA3DD82BD58D9A23180B0974(__this, Component_GetComponentInChildren_TisGroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44_m949899B924A6395CEA3DD82BD58D9A23180B0974_RuntimeMethod_var);
		__this->___groundCheck_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___groundCheck_7), (void*)L_0);
		// }
		return;
	}
}
// System.Void Jump::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jump_Awake_m3E68C347D08D03A331518B9CA05155096998A4E0 (Jump_t5984E7808773AD6C29ABDF6EF00972AEFA377F8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rigidbody = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rigidbody_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rigidbody_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void Jump::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jump_LateUpdate_m8564FE68553B0E7351DE7B9C362557C8CCD0F54C (Jump_t5984E7808773AD6C29ABDF6EF00972AEFA377F8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B5_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B4_0 = NULL;
	{
		// if (Input.GetButtonDown("Jump") && (!groundCheck || groundCheck.isGrounded))
		bool L_0;
		L_0 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		if (!L_0)
		{
			goto IL_005b;
		}
	}
	{
		GroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44* L_1 = __this->___groundCheck_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		GroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44* L_3 = __this->___groundCheck_7;
		bool L_4 = L_3->___isGrounded_5;
		if (!L_4)
		{
			goto IL_005b;
		}
	}

IL_0026:
	{
		// rigidbody.AddForce(Vector3.up * 100 * jumpStrength);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5 = __this->___rigidbody_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_6, (100.0f), NULL);
		float L_8 = __this->___jumpStrength_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_7, L_8, NULL);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_5, L_9, NULL);
		// Jumped?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = __this->___Jumped_6;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_11 = L_10;
		G_B4_0 = L_11;
		if (L_11)
		{
			G_B5_0 = L_11;
			goto IL_0056;
		}
	}
	{
		return;
	}

IL_0056:
	{
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B5_0, NULL);
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void Jump::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jump__ctor_m9CE21BB399187D66D418C4CF330935DA24BBA9BC (Jump_t5984E7808773AD6C29ABDF6EF00972AEFA377F8F* __this, const RuntimeMethod* method) 
{
	{
		// public float jumpStrength = 2;
		__this->___jumpStrength_5 = (2.0f);
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
// System.Void Zoom::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zoom_Awake_mF258D9502FF5BB5EB15C9328A87260FA2C4FEB87 (Zoom_tF5A194929F87C356C89A06E28D8DD7C6DF48C7D6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// camera = GetComponent<Camera>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		__this->___camera_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___camera_4), (void*)L_0);
		// if (camera)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = __this->___camera_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		// defaultFOV = camera.fieldOfView;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = __this->___camera_4;
		float L_4;
		L_4 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_3, NULL);
		__this->___defaultFOV_5 = L_4;
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void Zoom::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zoom_Update_m3D5AFFECB27EA4D0EE42C11666C1D6A694601A2D (Zoom_tF5A194929F87C356C89A06E28D8DD7C6DF48C7D6* __this, const RuntimeMethod* method) 
{
	{
		// currentZoom += Input.mouseScrollDelta.y * sensitivity * .05f;
		float L_0 = __this->___currentZoom_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Input_get_mouseScrollDelta_mD112408E9182AA0F529179FF31E21D8DCD5CFA74(NULL);
		float L_2 = L_1.___y_1;
		float L_3 = __this->___sensitivity_8;
		__this->___currentZoom_7 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_2, L_3)), (0.0500000007f)))));
		// currentZoom = Mathf.Clamp01(currentZoom);
		float L_4 = __this->___currentZoom_7;
		float L_5;
		L_5 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_4, NULL);
		__this->___currentZoom_7 = L_5;
		// camera.fieldOfView = Mathf.Lerp(defaultFOV, maxZoomFOV, currentZoom);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = __this->___camera_4;
		float L_7 = __this->___defaultFOV_5;
		float L_8 = __this->___maxZoomFOV_6;
		float L_9 = __this->___currentZoom_7;
		float L_10;
		L_10 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_7, L_8, L_9, NULL);
		Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777(L_6, L_10, NULL);
		// }
		return;
	}
}
// System.Void Zoom::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zoom__ctor_mBAA888A8925DB3AD0823BE2DA733AFB386757A3D (Zoom_tF5A194929F87C356C89A06E28D8DD7C6DF48C7D6* __this, const RuntimeMethod* method) 
{
	{
		// public float defaultFOV = 60;
		__this->___defaultFOV_5 = (60.0f);
		// public float maxZoomFOV = 15;
		__this->___maxZoomFOV_6 = (15.0f);
		// public float sensitivity = 1;
		__this->___sensitivity_8 = (1.0f);
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
// System.Void FirstPersonLook::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonLook_Reset_mF091A025787CA0EE8DF751FF246FF6F8734407BF (FirstPersonLook_tFFEABF55DC99B2EC1D6B5DAEE9864E5815F6B93C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisFirstPersonMovement_tA852887AB56569BDD01EA2BE85F9B39C349C5FFE_mE72DA6C0F2CD4180F703668D1D752F12ED0DADCC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// character = GetComponentInParent<FirstPersonMovement>().transform;
		FirstPersonMovement_tA852887AB56569BDD01EA2BE85F9B39C349C5FFE* L_0;
		L_0 = Component_GetComponentInParent_TisFirstPersonMovement_tA852887AB56569BDD01EA2BE85F9B39C349C5FFE_mE72DA6C0F2CD4180F703668D1D752F12ED0DADCC(__this, Component_GetComponentInParent_TisFirstPersonMovement_tA852887AB56569BDD01EA2BE85F9B39C349C5FFE_mE72DA6C0F2CD4180F703668D1D752F12ED0DADCC_RuntimeMethod_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		__this->___character_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___character_4), (void*)L_1);
		// }
		return;
	}
}
// System.Void FirstPersonLook::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonLook_Start_mBB349CEB628665204D05B275DB075145F1F9F121 (FirstPersonLook_tFFEABF55DC99B2EC1D6B5DAEE9864E5815F6B93C* __this, const RuntimeMethod* method) 
{
	{
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9(1, NULL);
		// }
		return;
	}
}
// System.Void FirstPersonLook::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonLook_Update_mC9D2857AABF9B4BEEC6CE1A4F277002D37BAADF4 (FirstPersonLook_tFFEABF55DC99B2EC1D6B5DAEE9864E5815F6B93C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 mouseDelta = new Vector2(Input.GetAxisRaw("Mouse X"), Input.GetAxisRaw("Mouse Y"));
		float L_0;
		L_0 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		float L_1;
		L_1 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), L_0, L_1, /*hidden argument*/NULL);
		// Vector2 rawFrameVelocity = Vector2.Scale(mouseDelta, Vector2.one * sensitivity);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline(NULL);
		float L_4 = __this->___sensitivity_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_3, L_4, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_Scale_m8D61A8D2272549F1EF41256F7E8A206C6500EA6C_inline(L_2, L_5, NULL);
		V_0 = L_6;
		// frameVelocity = Vector2.Lerp(frameVelocity, rawFrameVelocity, 1 / smoothing);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = __this->___frameVelocity_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_0;
		float L_9 = __this->___smoothing_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_Lerp_m1A36103F7967F653A929556E26E6D052C298C00C_inline(L_7, L_8, ((float)((1.0f)/L_9)), NULL);
		__this->___frameVelocity_8 = L_10;
		// velocity += frameVelocity;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = __this->___velocity_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = __this->___frameVelocity_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_11, L_12, NULL);
		__this->___velocity_7 = L_13;
		// velocity.y = Mathf.Clamp(velocity.y, -90, 90);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_14 = (&__this->___velocity_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_15 = (&__this->___velocity_7);
		float L_16 = L_15->___y_1;
		float L_17;
		L_17 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_16, (-90.0f), (90.0f), NULL);
		L_14->___y_1 = L_17;
		// transform.localRotation = Quaternion.AngleAxis(-velocity.y, Vector3.right);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_19 = (&__this->___velocity_7);
		float L_20 = L_19->___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
		L_22 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(((-L_20)), L_21, NULL);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_18, L_22, NULL);
		// character.localRotation = Quaternion.AngleAxis(velocity.x, Vector3.up);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = __this->___character_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_24 = (&__this->___velocity_7);
		float L_25 = L_24->___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
		L_27 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(L_25, L_26, NULL);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_23, L_27, NULL);
		// }
		return;
	}
}
// System.Void FirstPersonLook::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonLook__ctor_m30C53AE3BE07B7A39AC3019F6D017B4596DF8E2D (FirstPersonLook_tFFEABF55DC99B2EC1D6B5DAEE9864E5815F6B93C* __this, const RuntimeMethod* method) 
{
	{
		// public float sensitivity = 2;
		__this->___sensitivity_5 = (2.0f);
		// public float smoothing = 1.5f;
		__this->___smoothing_6 = (1.5f);
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
// System.Boolean FirstPersonMovement::get_IsRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirstPersonMovement_get_IsRunning_m58CAF98A09A5CE86F21EE8DC8A1ACBF5A655681E (FirstPersonMovement_tA852887AB56569BDD01EA2BE85F9B39C349C5FFE* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsRunning { get; private set; }
		bool L_0 = __this->___U3CIsRunningU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void FirstPersonMovement::set_IsRunning(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonMovement_set_IsRunning_mADC233CB94F50A40278FACBAA8940A4CB114EA78 (FirstPersonMovement_tA852887AB56569BDD01EA2BE85F9B39C349C5FFE* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsRunning { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CIsRunningU3Ek__BackingField_10 = L_0;
		return;
	}
}
// System.Void FirstPersonMovement::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonMovement_Awake_m990DD91BA764F975B869F740F58CD17190E2D108 (FirstPersonMovement_tA852887AB56569BDD01EA2BE85F9B39C349C5FFE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rigidbody = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rigidbody_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rigidbody_18), (void*)L_0);
		// }
		return;
	}
}
// System.Void FirstPersonMovement::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonMovement_FixedUpdate_m4A242C7CBF7936CE3CF56223AF24A44E910ED74F (FirstPersonMovement_tA852887AB56569BDD01EA2BE85F9B39C349C5FFE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1321940B939A317AFAAE8AD59F740B8981351E62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mEE8528015DEAADFAD394CB7EFC7CAF0E57F3517F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58D29FB07FF8A509E2E16212E72BE26200A112C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FirstPersonMovement_tA852887AB56569BDD01EA2BE85F9B39C349C5FFE* G_B2_0 = NULL;
	FirstPersonMovement_tA852887AB56569BDD01EA2BE85F9B39C349C5FFE* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	FirstPersonMovement_tA852887AB56569BDD01EA2BE85F9B39C349C5FFE* G_B3_1 = NULL;
	float G_B6_0 = 0.0f;
	{
		// IsRunning = canRun && Input.GetKey(runningKey);
		bool L_0 = __this->___canRun_9;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = __this->___runningKey_12;
		bool L_2;
		L_2 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(L_1, NULL);
		G_B3_0 = ((int32_t)(L_2));
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		FirstPersonMovement_set_IsRunning_mADC233CB94F50A40278FACBAA8940A4CB114EA78_inline(G_B3_1, (bool)G_B3_0, NULL);
		// float targetMovingSpeed = IsRunning ? runSpeed : speed;
		bool L_3;
		L_3 = FirstPersonMovement_get_IsRunning_m58CAF98A09A5CE86F21EE8DC8A1ACBF5A655681E_inline(__this, NULL);
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		float L_4 = __this->___speed_4;
		G_B6_0 = L_4;
		goto IL_0032;
	}

IL_002c:
	{
		float L_5 = __this->___runSpeed_11;
		G_B6_0 = L_5;
	}

IL_0032:
	{
		V_0 = G_B6_0;
		// if (speedOverrides.Count > 0)
		List_1_t6F64C3EC2C2C6614F0A241F3D022EC8745453001* L_6 = __this->___speedOverrides_19;
		int32_t L_7;
		L_7 = List_1_get_Count_m1321940B939A317AFAAE8AD59F740B8981351E62_inline(L_6, List_1_get_Count_m1321940B939A317AFAAE8AD59F740B8981351E62_RuntimeMethod_var);
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_005f;
		}
	}
	{
		// targetMovingSpeed = speedOverrides[speedOverrides.Count - 1]();
		List_1_t6F64C3EC2C2C6614F0A241F3D022EC8745453001* L_8 = __this->___speedOverrides_19;
		List_1_t6F64C3EC2C2C6614F0A241F3D022EC8745453001* L_9 = __this->___speedOverrides_19;
		int32_t L_10;
		L_10 = List_1_get_Count_m1321940B939A317AFAAE8AD59F740B8981351E62_inline(L_9, List_1_get_Count_m1321940B939A317AFAAE8AD59F740B8981351E62_RuntimeMethod_var);
		Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* L_11;
		L_11 = List_1_get_Item_mEE8528015DEAADFAD394CB7EFC7CAF0E57F3517F(L_8, ((int32_t)il2cpp_codegen_subtract(L_10, 1)), List_1_get_Item_mEE8528015DEAADFAD394CB7EFC7CAF0E57F3517F_RuntimeMethod_var);
		float L_12;
		L_12 = Func_1_Invoke_m6EC66204056853EDE42F634FECB2D7D4685B54B0_inline(L_11, NULL);
		V_0 = L_12;
	}

IL_005f:
	{
		// Vector2 targetVelocity =new Vector2( Input.GetAxis("Horizontal") * targetMovingSpeed, Input.GetAxis("Vertical") * targetMovingSpeed);
		float L_13;
		L_13 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		float L_14 = V_0;
		float L_15;
		L_15 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		float L_16 = V_0;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), ((float)il2cpp_codegen_multiply(L_13, L_14)), ((float)il2cpp_codegen_multiply(L_15, L_16)), NULL);
		// rigidbody.velocity = transform.rotation * new Vector3(targetVelocity.x, rigidbody.velocity.y, targetVelocity.y);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_17 = __this->___rigidbody_18;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_18, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = V_1;
		float L_21 = L_20.___x_0;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_22 = __this->___rigidbody_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_22, NULL);
		float L_24 = L_23.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = V_1;
		float L_26 = L_25.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_27), L_21, L_24, L_26, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_19, L_27, NULL);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_17, L_28, NULL);
		// if (Physics.Raycast(camera.transform.position, camera.transform.TransformDirection(Vector3.forward), out hit, 2))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = __this->___camera_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_30, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = __this->___camera_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_32, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_33, L_34, NULL);
		bool L_36;
		L_36 = Physics_Raycast_m011EA7022C33B2C499EF744E5AF3E01EEB8FBD33(L_31, L_35, (&V_2), (2.0f), NULL);
		if (!L_36)
		{
			goto IL_0147;
		}
	}
	{
		// if (hit.collider.tag == "Interactable")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_37;
		L_37 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_2), NULL);
		String_t* L_38;
		L_38 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_37, NULL);
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral58D29FB07FF8A509E2E16212E72BE26200A112C5, NULL);
		if (!L_39)
		{
			goto IL_0126;
		}
	}
	{
		// cursor.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = __this->___cursor_5;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_40, (bool)0, NULL);
		// pointer.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = __this->___pointer_6;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_41, (bool)1, NULL);
		// hovering = true;
		__this->___hovering_7 = (bool)1;
		goto IL_015f;
	}

IL_0126:
	{
		// cursor.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42 = __this->___cursor_5;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_42, (bool)1, NULL);
		// pointer.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43 = __this->___pointer_6;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_43, (bool)0, NULL);
		// hovering = false;
		__this->___hovering_7 = (bool)0;
		goto IL_015f;
	}

IL_0147:
	{
		// cursor.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44 = __this->___cursor_5;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_44, (bool)1, NULL);
		// pointer.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45 = __this->___pointer_6;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_45, (bool)0, NULL);
	}

IL_015f:
	{
		// if (touchingWater && !inSubmarine)
		bool L_46 = __this->___touchingWater_14;
		if (!L_46)
		{
			goto IL_017c;
		}
	}
	{
		bool L_47 = __this->___inSubmarine_15;
		if (L_47)
		{
			goto IL_017c;
		}
	}
	{
		// tint.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = __this->___tint_13;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_48, (bool)1, NULL);
		return;
	}

IL_017c:
	{
		// tint.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49 = __this->___tint_13;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_49, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void FirstPersonMovement::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonMovement_OnTriggerEnter_mB81D99A5FB8855F180E974153A5785947D349C75 (FirstPersonMovement_tA852887AB56569BDD01EA2BE85F9B39C349C5FFE* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40F21F93F82D1725316FEFCF919E83EB3AF5EDAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46580D65357E6BC22728934BD6BC047227EFE0E6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.transform.tag == "Water")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___collision0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		String_t* L_2;
		L_2 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral46580D65357E6BC22728934BD6BC047227EFE0E6, NULL);
		if (!L_3)
		{
			goto IL_0051;
		}
	}
	{
		// touchingWater = true;
		__this->___touchingWater_14 = (bool)1;
		// RenderSettings.ambientLight = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		RenderSettings_set_ambientLight_m44E42CEB67937FC0CFC86767CB07D93D8E780880(L_4, NULL);
		// RenderSettings.skybox = darkSkybox;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___darkSkybox_17;
		RenderSettings_set_skybox_m7988CC3217B1456CA0A7294127527BFC18EEC872(L_5, NULL);
		// RenderSettings.fogColor = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		RenderSettings_set_fogColor_mBBD12EC3492195F85F583CAF4FAE4A973227639B(L_6, NULL);
		// RenderSettings.fogStartDistance = 5;
		RenderSettings_set_fogStartDistance_mF53EDDD1B96FD948B5213BAC17480FEE847896CA((5.0f), NULL);
		// RenderSettings.fogEndDistance = 20;
		RenderSettings_set_fogEndDistance_m3A8CA92B0A13432069104061629C25DF13BAEDDD((20.0f), NULL);
	}

IL_0051:
	{
		// if (collision.transform.tag == "Submarine")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_7 = ___collision0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		String_t* L_9;
		L_9 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_8, NULL);
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteral40F21F93F82D1725316FEFCF919E83EB3AF5EDAA, NULL);
		if (!L_10)
		{
			goto IL_006f;
		}
	}
	{
		// inSubmarine = true;
		__this->___inSubmarine_15 = (bool)1;
	}

IL_006f:
	{
		// }
		return;
	}
}
// System.Void FirstPersonMovement::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonMovement_OnTriggerExit_mE9EF5D857D119FA0815C4CB98F074FC26BD8C11D (FirstPersonMovement_tA852887AB56569BDD01EA2BE85F9B39C349C5FFE* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40F21F93F82D1725316FEFCF919E83EB3AF5EDAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46580D65357E6BC22728934BD6BC047227EFE0E6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.transform.tag == "Water")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___collision0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		String_t* L_2;
		L_2 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral46580D65357E6BC22728934BD6BC047227EFE0E6, NULL);
		if (!L_3)
		{
			goto IL_0051;
		}
	}
	{
		// touchingWater = false;
		__this->___touchingWater_14 = (bool)0;
		// RenderSettings.ambientLight = Color.gray;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline(NULL);
		RenderSettings_set_ambientLight_m44E42CEB67937FC0CFC86767CB07D93D8E780880(L_4, NULL);
		// RenderSettings.skybox = skybox;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___skybox_16;
		RenderSettings_set_skybox_m7988CC3217B1456CA0A7294127527BFC18EEC872(L_5, NULL);
		// RenderSettings.fogColor = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		RenderSettings_set_fogColor_mBBD12EC3492195F85F583CAF4FAE4A973227639B(L_6, NULL);
		// RenderSettings.fogStartDistance = 15;
		RenderSettings_set_fogStartDistance_mF53EDDD1B96FD948B5213BAC17480FEE847896CA((15.0f), NULL);
		// RenderSettings.fogEndDistance = 85;
		RenderSettings_set_fogEndDistance_m3A8CA92B0A13432069104061629C25DF13BAEDDD((85.0f), NULL);
	}

IL_0051:
	{
		// if (collision.transform.tag == "Submarine")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_7 = ___collision0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		String_t* L_9;
		L_9 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_8, NULL);
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteral40F21F93F82D1725316FEFCF919E83EB3AF5EDAA, NULL);
		if (!L_10)
		{
			goto IL_006f;
		}
	}
	{
		// inSubmarine = false;
		__this->___inSubmarine_15 = (bool)0;
	}

IL_006f:
	{
		// }
		return;
	}
}
// System.Void FirstPersonMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonMovement__ctor_mD1305896B698A089ECA24F8DB3E11052FE675C0A (FirstPersonMovement_tA852887AB56569BDD01EA2BE85F9B39C349C5FFE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m26C8AB45C83E1904BEC2C2394CB7EB89675F088F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6F64C3EC2C2C6614F0A241F3D022EC8745453001_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float speed = 5;
		__this->___speed_4 = (5.0f);
		// public bool canRun = true;
		__this->___canRun_9 = (bool)1;
		// public float runSpeed = 9;
		__this->___runSpeed_11 = (9.0f);
		// public KeyCode runningKey = KeyCode.LeftShift;
		__this->___runningKey_12 = ((int32_t)304);
		// public List<System.Func<float>> speedOverrides = new List<System.Func<float>>();
		List_1_t6F64C3EC2C2C6614F0A241F3D022EC8745453001* L_0 = (List_1_t6F64C3EC2C2C6614F0A241F3D022EC8745453001*)il2cpp_codegen_object_new(List_1_t6F64C3EC2C2C6614F0A241F3D022EC8745453001_il2cpp_TypeInfo_var);
		List_1__ctor_m26C8AB45C83E1904BEC2C2394CB7EB89675F088F(L_0, List_1__ctor_m26C8AB45C83E1904BEC2C2394CB7EB89675F088F_RuntimeMethod_var);
		__this->___speedOverrides_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___speedOverrides_19), (void*)L_0);
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
// System.Void Button::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Button_Start_m2D250D21BF475775E879DEC6B631016C2F1D98AA (Button_t08E85812946542C2FD1F37BA7C97825101832DC8* __this, const RuntimeMethod* method) 
{
	{
		// cursor.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___cursor_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// buttonInactive();
		Button_buttonInactive_m45678A3D6DF8B217D3FF9DB0437D974190D6648F(__this, NULL);
		// }
		return;
	}
}
// System.Void Button::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Button_Update_m09AD64D785E4E8C6680ABC33917D4079BE9F173F (Button_t08E85812946542C2FD1F37BA7C97825101832DC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisFirstPersonMovement_tA852887AB56569BDD01EA2BE85F9B39C349C5FFE_mD450454E1FF11EFE7F6FE9ED6871C8B4355803C6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (cursorHovering && active && player.GetComponent<FirstPersonMovement>().hovering)
		bool L_0 = __this->___cursorHovering_7;
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		bool L_1 = __this->___active_8;
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___player_5;
		FirstPersonMovement_tA852887AB56569BDD01EA2BE85F9B39C349C5FFE* L_3;
		L_3 = GameObject_GetComponent_TisFirstPersonMovement_tA852887AB56569BDD01EA2BE85F9B39C349C5FFE_mD450454E1FF11EFE7F6FE9ED6871C8B4355803C6(L_2, GameObject_GetComponent_TisFirstPersonMovement_tA852887AB56569BDD01EA2BE85F9B39C349C5FFE_mD450454E1FF11EFE7F6FE9ED6871C8B4355803C6_RuntimeMethod_var);
		bool L_4 = L_3->___hovering_7;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_5;
		L_5 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		// selected = true;
		__this->___selected_9 = (bool)1;
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void Button::OnMouseEnter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Button_OnMouseEnter_m2774ED2E3F3AB0E664D13C08134D43F11857E38D (Button_t08E85812946542C2FD1F37BA7C97825101832DC8* __this, const RuntimeMethod* method) 
{
	{
		// cursorHovering = true;
		__this->___cursorHovering_7 = (bool)1;
		// }
		return;
	}
}
// System.Void Button::OnMouseExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Button_OnMouseExit_m8631193E76C274171E5CB3C95BCF6C6E334BCC59 (Button_t08E85812946542C2FD1F37BA7C97825101832DC8* __this, const RuntimeMethod* method) 
{
	{
		// cursorHovering = false;
		__this->___cursorHovering_7 = (bool)0;
		// }
		return;
	}
}
// System.Void Button::buttonActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Button_buttonActive_m9603B8CD810458EC811C548E50B08DC3E599C763 (Button_t08E85812946542C2FD1F37BA7C97825101832DC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58D29FB07FF8A509E2E16212E72BE26200A112C5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<MeshRenderer>().material = activeMat;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0;
		L_0 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(__this, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = __this->___activeMat_10;
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_0, L_1, NULL);
		// letter.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___letter_6;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// active = true;
		__this->___active_8 = (bool)1;
		// gameObject.tag = "Interactable";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		GameObject_set_tag_m0A41528AFD8C83E1CEC5D769921159897CDD2B24(L_3, _stringLiteral58D29FB07FF8A509E2E16212E72BE26200A112C5, NULL);
		// }
		return;
	}
}
// System.Void Button::buttonInactive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Button_buttonInactive_m45678A3D6DF8B217D3FF9DB0437D974190D6648F (Button_t08E85812946542C2FD1F37BA7C97825101832DC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB59F0EFCC2B82196C428CFD6D80A08F8B47573FC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<MeshRenderer>().material = inactiveMat;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0;
		L_0 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(__this, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = __this->___inactiveMat_11;
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_0, L_1, NULL);
		// letter.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___letter_6;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// active = false;
		__this->___active_8 = (bool)0;
		// gameObject.tag = "Untagged";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		GameObject_set_tag_m0A41528AFD8C83E1CEC5D769921159897CDD2B24(L_3, _stringLiteralB59F0EFCC2B82196C428CFD6D80A08F8B47573FC, NULL);
		// }
		return;
	}
}
// System.Void Button::buttonWrong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Button_buttonWrong_m18054BB637478EA2009DB494815CDCBF931B7894 (Button_t08E85812946542C2FD1F37BA7C97825101832DC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB59F0EFCC2B82196C428CFD6D80A08F8B47573FC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<MeshRenderer>().material = wrongMat;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0;
		L_0 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(__this, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = __this->___wrongMat_12;
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_0, L_1, NULL);
		// active = false;
		__this->___active_8 = (bool)0;
		// gameObject.tag = "Untagged";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		GameObject_set_tag_m0A41528AFD8C83E1CEC5D769921159897CDD2B24(L_2, _stringLiteralB59F0EFCC2B82196C428CFD6D80A08F8B47573FC, NULL);
		// }
		return;
	}
}
// System.Void Button::buttonRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Button_buttonRight_m825490755267C44C5A2F7EE9C5BE6CBB8F334B7C (Button_t08E85812946542C2FD1F37BA7C97825101832DC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB59F0EFCC2B82196C428CFD6D80A08F8B47573FC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<MeshRenderer>().material = rightMat;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0;
		L_0 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(__this, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = __this->___rightMat_13;
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_0, L_1, NULL);
		// active = false;
		__this->___active_8 = (bool)0;
		// gameObject.tag = "Untagged";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		GameObject_set_tag_m0A41528AFD8C83E1CEC5D769921159897CDD2B24(L_2, _stringLiteralB59F0EFCC2B82196C428CFD6D80A08F8B47573FC, NULL);
		// }
		return;
	}
}
// System.Void Button::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Button__ctor_m6CC103D3CBE7ABCDC685DCC02F320D62DCC05D16 (Button_t08E85812946542C2FD1F37BA7C97825101832DC8* __this, const RuntimeMethod* method) 
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
// System.Void CollisionTrigger::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTrigger_Start_m348E50A4E29C33A5A7FBEE67D3E2ABCB176ED818 (CollisionTrigger_tA274AF9BF7ECBB260B866D13D1AF4B98F6DA2112* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void CollisionTrigger::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTrigger_Update_m2AA0A3EDFE0FB4B389605BFACE60B61CEDCFD198 (CollisionTrigger_tA274AF9BF7ECBB260B866D13D1AF4B98F6DA2112* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void CollisionTrigger::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTrigger_OnTriggerEnter_m9D78045A1E926C96551E7B6285F578DC1C53F5A3 (CollisionTrigger_tA274AF9BF7ECBB260B866D13D1AF4B98F6DA2112* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collision0, const RuntimeMethod* method) 
{
	{
		// triggered = true;
		__this->___triggered_4 = (bool)1;
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void CollisionTrigger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTrigger__ctor_m4B74BF0FFAD0B10A01236F32592566B88E81DA2D (CollisionTrigger_tA274AF9BF7ECBB260B866D13D1AF4B98F6DA2112* __this, const RuntimeMethod* method) 
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
// System.Void Main::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_Start_m5864CE07B60D35921FE23903087087FC5C3CF8FD (Main_t6125012C4D88701077DD3C4660130C5535730E1E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Main::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_Update_m6A75833947272413C503ECE10B0D91F56F193526 (Main_t6125012C4D88701077DD3C4660130C5535730E1E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D354CA1036DDA6F701F800C5C1B3A4235D2EDD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBC1106D65ACC9B0DB541F4FAF5DBAF5B7F7BA1F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBED19BA525EB9EF85B9A02F320B67373B4D6DE0);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (doorTrigger.triggered && !alreadyTriggered)
		CollisionTrigger_tA274AF9BF7ECBB260B866D13D1AF4B98F6DA2112* L_0 = __this->___doorTrigger_4;
		bool L_1 = L_0->___triggered_4;
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		bool L_2 = __this->___alreadyTriggered_5;
		if (L_2)
		{
			goto IL_003d;
		}
	}
	{
		// startButton.anim.SetBool("Up", true);
		Button_t08E85812946542C2FD1F37BA7C97825101832DC8* L_3 = __this->___startButton_7;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4 = L_3->___anim_14;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_4, _stringLiteral9D354CA1036DDA6F701F800C5C1B3A4235D2EDD7, (bool)1, NULL);
		// startButton.buttonActive();
		Button_t08E85812946542C2FD1F37BA7C97825101832DC8* L_5 = __this->___startButton_7;
		Button_buttonActive_m9603B8CD810458EC811C548E50B08DC3E599C763(L_5, NULL);
		// alreadyTriggered = true;
		__this->___alreadyTriggered_5 = (bool)1;
	}

IL_003d:
	{
		// if (question1.quizActive == false && question1.answered == false && startButton.selected)
		Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* L_6 = __this->___question1_11;
		bool L_7 = L_6->___quizActive_9;
		if (L_7)
		{
			goto IL_00a1;
		}
	}
	{
		Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* L_8 = __this->___question1_11;
		bool L_9 = L_8->___answered_7;
		if (L_9)
		{
			goto IL_00a1;
		}
	}
	{
		Button_t08E85812946542C2FD1F37BA7C97825101832DC8* L_10 = __this->___startButton_7;
		bool L_11 = L_10->___selected_9;
		if (!L_11)
		{
			goto IL_00a1;
		}
	}
	{
		// startButton.buttonInactive();
		Button_t08E85812946542C2FD1F37BA7C97825101832DC8* L_12 = __this->___startButton_7;
		Button_buttonInactive_m45678A3D6DF8B217D3FF9DB0437D974190D6648F(L_12, NULL);
		// startButton.anim.SetBool("Up", false);
		Button_t08E85812946542C2FD1F37BA7C97825101832DC8* L_13 = __this->___startButton_7;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_14 = L_13->___anim_14;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_14, _stringLiteral9D354CA1036DDA6F701F800C5C1B3A4235D2EDD7, (bool)0, NULL);
		// doorAnim.SetBool("Closed", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_15 = __this->___doorAnim_6;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_15, _stringLiteralBBC1106D65ACC9B0DB541F4FAF5DBAF5B7F7BA1F, (bool)1, NULL);
		// question1.StartQuiz();
		Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* L_16 = __this->___question1_11;
		Quiz_StartQuiz_m8823C6FC6D50FD16474BE13C2A6FB7BB15B2E3CE(L_16, NULL);
	}

IL_00a1:
	{
		// if (question1.answered == true && question1.quizActive == false && question2.quizActive == false && question2.answered == false)
		Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* L_17 = __this->___question1_11;
		bool L_18 = L_17->___answered_7;
		if (!L_18)
		{
			goto IL_0119;
		}
	}
	{
		Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* L_19 = __this->___question1_11;
		bool L_20 = L_19->___quizActive_9;
		if (L_20)
		{
			goto IL_0119;
		}
	}
	{
		Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* L_21 = __this->___question2_12;
		bool L_22 = L_21->___quizActive_9;
		if (L_22)
		{
			goto IL_0119;
		}
	}
	{
		Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* L_23 = __this->___question2_12;
		bool L_24 = L_23->___answered_7;
		if (L_24)
		{
			goto IL_0119;
		}
	}
	{
		// if (question1.correct)
		Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* L_25 = __this->___question1_11;
		bool L_26 = L_25->___correct_8;
		if (!L_26)
		{
			goto IL_00f0;
		}
	}
	{
		// questionsCorrect++;
		int32_t L_27 = __this->___questionsCorrect_9;
		__this->___questionsCorrect_9 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_00f0:
	{
		// questionsAnswered++;
		int32_t L_28 = __this->___questionsAnswered_8;
		__this->___questionsAnswered_8 = ((int32_t)il2cpp_codegen_add(L_28, 1));
		// GameObject.Destroy(question1.gameObject);
		Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* L_29 = __this->___question1_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30;
		L_30 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_29, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_30, NULL);
		// question2.StartQuiz();
		Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* L_31 = __this->___question2_12;
		Quiz_StartQuiz_m8823C6FC6D50FD16474BE13C2A6FB7BB15B2E3CE(L_31, NULL);
	}

IL_0119:
	{
		// if (question2 != null && question2.answered == true && question2.quizActive == false && question3.quizActive == false && question3.answered == false)
		Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* L_32 = __this->___question2_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_32, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_33)
		{
			goto IL_019f;
		}
	}
	{
		Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* L_34 = __this->___question2_12;
		bool L_35 = L_34->___answered_7;
		if (!L_35)
		{
			goto IL_019f;
		}
	}
	{
		Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* L_36 = __this->___question2_12;
		bool L_37 = L_36->___quizActive_9;
		if (L_37)
		{
			goto IL_019f;
		}
	}
	{
		Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* L_38 = __this->___question3_13;
		bool L_39 = L_38->___quizActive_9;
		if (L_39)
		{
			goto IL_019f;
		}
	}
	{
		Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* L_40 = __this->___question3_13;
		bool L_41 = L_40->___answered_7;
		if (L_41)
		{
			goto IL_019f;
		}
	}
	{
		// if (question2.correct)
		Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* L_42 = __this->___question2_12;
		bool L_43 = L_42->___correct_8;
		if (!L_43)
		{
			goto IL_0176;
		}
	}
	{
		// questionsCorrect++;
		int32_t L_44 = __this->___questionsCorrect_9;
		__this->___questionsCorrect_9 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_0176:
	{
		// questionsAnswered++;
		int32_t L_45 = __this->___questionsAnswered_8;
		__this->___questionsAnswered_8 = ((int32_t)il2cpp_codegen_add(L_45, 1));
		// GameObject.Destroy(question2.gameObject);
		Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* L_46 = __this->___question2_12;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47;
		L_47 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_46, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_47, NULL);
		// question3.StartQuiz();
		Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* L_48 = __this->___question3_13;
		Quiz_StartQuiz_m8823C6FC6D50FD16474BE13C2A6FB7BB15B2E3CE(L_48, NULL);
	}

IL_019f:
	{
		// if (question3 != null && question3.answered == true && question3.quizActive == false && question4.quizActive == false && question4.answered == false)
		Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* L_49 = __this->___question3_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_50;
		L_50 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_49, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_50)
		{
			goto IL_0225;
		}
	}
	{
		Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* L_51 = __this->___question3_13;
		bool L_52 = L_51->___answered_7;
		if (!L_52)
		{
			goto IL_0225;
		}
	}
	{
		Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* L_53 = __this->___question3_13;
		bool L_54 = L_53->___quizActive_9;
		if (L_54)
		{
			goto IL_0225;
		}
	}
	{
		Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* L_55 = __this->___question4_14;
		bool L_56 = L_55->___quizActive_9;
		if (L_56)
		{
			goto IL_0225;
		}
	}
	{
		Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* L_57 = __this->___question4_14;
		bool L_58 = L_57->___answered_7;
		if (L_58)
		{
			goto IL_0225;
		}
	}
	{
		// if (question3.correct)
		Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* L_59 = __this->___question3_13;
		bool L_60 = L_59->___correct_8;
		if (!L_60)
		{
			goto IL_01fc;
		}
	}
	{
		// questionsCorrect++;
		int32_t L_61 = __this->___questionsCorrect_9;
		__this->___questionsCorrect_9 = ((int32_t)il2cpp_codegen_add(L_61, 1));
	}

IL_01fc:
	{
		// questionsAnswered++;
		int32_t L_62 = __this->___questionsAnswered_8;
		__this->___questionsAnswered_8 = ((int32_t)il2cpp_codegen_add(L_62, 1));
		// GameObject.Destroy(question3.gameObject);
		Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* L_63 = __this->___question3_13;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_64;
		L_64 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_63, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_64, NULL);
		// question4.StartQuiz();
		Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* L_65 = __this->___question4_14;
		Quiz_StartQuiz_m8823C6FC6D50FD16474BE13C2A6FB7BB15B2E3CE(L_65, NULL);
	}

IL_0225:
	{
		// if (question4 != null && question4.answered == true && question4.quizActive == false)
		Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* L_66 = __this->___question4_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_67;
		L_67 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_66, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_67)
		{
			goto IL_0286;
		}
	}
	{
		Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* L_68 = __this->___question4_14;
		bool L_69 = L_68->___answered_7;
		if (!L_69)
		{
			goto IL_0286;
		}
	}
	{
		Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* L_70 = __this->___question4_14;
		bool L_71 = L_70->___quizActive_9;
		if (L_71)
		{
			goto IL_0286;
		}
	}
	{
		// if (question4.correct)
		Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* L_72 = __this->___question4_14;
		bool L_73 = L_72->___correct_8;
		if (!L_73)
		{
			goto IL_0268;
		}
	}
	{
		// questionsCorrect++;
		int32_t L_74 = __this->___questionsCorrect_9;
		__this->___questionsCorrect_9 = ((int32_t)il2cpp_codegen_add(L_74, 1));
	}

IL_0268:
	{
		// questionsAnswered++;
		int32_t L_75 = __this->___questionsAnswered_8;
		__this->___questionsAnswered_8 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		// GameObject.Destroy(question4.gameObject);
		Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* L_76 = __this->___question4_14;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_77;
		L_77 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_76, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_77, NULL);
	}

IL_0286:
	{
		// if (questionsAnswered != 0)
		int32_t L_78 = __this->___questionsAnswered_8;
		if (!L_78)
		{
			goto IL_0305;
		}
	}
	{
		// int percentageScore = Mathf.RoundToInt(((float)questionsCorrect / questionsAnswered) * 100);
		int32_t L_79 = __this->___questionsCorrect_9;
		int32_t L_80 = __this->___questionsAnswered_8;
		int32_t L_81;
		L_81 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)il2cpp_codegen_multiply(((float)(((float)L_79)/((float)L_80))), (100.0f))), NULL);
		V_0 = L_81;
		// scoreText.text = "Score: " + percentageScore + "% (" + questionsCorrect + "/" + questionsAnswered + ")";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_82 = __this->___scoreText_10;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_83 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_84 = L_83;
		ArrayElementTypeCheck (L_84, _stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6);
		(L_84)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_85 = L_84;
		String_t* L_86;
		L_86 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		ArrayElementTypeCheck (L_85, L_86);
		(L_85)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_86);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_87 = L_85;
		ArrayElementTypeCheck (L_87, _stringLiteralCBED19BA525EB9EF85B9A02F320B67373B4D6DE0);
		(L_87)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralCBED19BA525EB9EF85B9A02F320B67373B4D6DE0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_88 = L_87;
		int32_t* L_89 = (&__this->___questionsCorrect_9);
		String_t* L_90;
		L_90 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_89, NULL);
		ArrayElementTypeCheck (L_88, L_90);
		(L_88)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_90);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_91 = L_88;
		ArrayElementTypeCheck (L_91, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		(L_91)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_92 = L_91;
		int32_t* L_93 = (&__this->___questionsAnswered_8);
		String_t* L_94;
		L_94 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_93, NULL);
		ArrayElementTypeCheck (L_92, L_94);
		(L_92)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)L_94);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_95 = L_92;
		ArrayElementTypeCheck (L_95, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_95)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_96;
		L_96 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_95, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_82, L_96);
	}

IL_0305:
	{
		// }
		return;
	}
}
// System.Void Main::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main__ctor_mC5886B5D00EEF6A6D8F96F3A84762F8AD71E51B6 (Main_t6125012C4D88701077DD3C4660130C5535730E1E* __this, const RuntimeMethod* method) 
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
// System.Void Quiz::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quiz_Start_mC71F7546C3B3453D5B6CB864A4F4DB411BD71273 (Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Quiz::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quiz_Update_m015DC475E4F54A1A93BBE452CB3903F67121A1F8 (Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (quizActive && !answered)
		bool L_0 = __this->___quizActive_9;
		if (!L_0)
		{
			goto IL_0122;
		}
	}
	{
		bool L_1 = __this->___answered_7;
		if (L_1)
		{
			goto IL_0122;
		}
	}
	{
		// switch (correctAns)
		int32_t L_2 = __this->___correctAns_6;
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0034;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00d7;
			}
		}
	}
	{
		goto IL_0122;
	}

IL_0034:
	{
		// if (button[0].selected)
		ButtonU5BU5D_t794F5842D7A836C586DBE4F1F11D7B12042DF2EA* L_4 = __this->___button_4;
		int32_t L_5 = 0;
		Button_t08E85812946542C2FD1F37BA7C97825101832DC8* L_6 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		bool L_7 = L_6->___selected_9;
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		// answered = true;
		__this->___answered_7 = (bool)1;
		// correct = true;
		__this->___correct_8 = (bool)1;
		goto IL_0122;
	}

IL_0056:
	{
		// else if (button[1].selected || button[2].selected)
		ButtonU5BU5D_t794F5842D7A836C586DBE4F1F11D7B12042DF2EA* L_8 = __this->___button_4;
		int32_t L_9 = 1;
		Button_t08E85812946542C2FD1F37BA7C97825101832DC8* L_10 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		bool L_11 = L_10->___selected_9;
		if (L_11)
		{
			goto IL_0077;
		}
	}
	{
		ButtonU5BU5D_t794F5842D7A836C586DBE4F1F11D7B12042DF2EA* L_12 = __this->___button_4;
		int32_t L_13 = 2;
		Button_t08E85812946542C2FD1F37BA7C97825101832DC8* L_14 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		bool L_15 = L_14->___selected_9;
		if (!L_15)
		{
			goto IL_0122;
		}
	}

IL_0077:
	{
		// answered = true;
		__this->___answered_7 = (bool)1;
		// correct = false;
		__this->___correct_8 = (bool)0;
		// break;
		goto IL_0122;
	}

IL_008a:
	{
		// if (button[1].selected)
		ButtonU5BU5D_t794F5842D7A836C586DBE4F1F11D7B12042DF2EA* L_16 = __this->___button_4;
		int32_t L_17 = 1;
		Button_t08E85812946542C2FD1F37BA7C97825101832DC8* L_18 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		bool L_19 = L_18->___selected_9;
		if (!L_19)
		{
			goto IL_00a9;
		}
	}
	{
		// answered = true;
		__this->___answered_7 = (bool)1;
		// correct = true;
		__this->___correct_8 = (bool)1;
		goto IL_0122;
	}

IL_00a9:
	{
		// else if (button[0].selected || button[2].selected)
		ButtonU5BU5D_t794F5842D7A836C586DBE4F1F11D7B12042DF2EA* L_20 = __this->___button_4;
		int32_t L_21 = 0;
		Button_t08E85812946542C2FD1F37BA7C97825101832DC8* L_22 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		bool L_23 = L_22->___selected_9;
		if (L_23)
		{
			goto IL_00c7;
		}
	}
	{
		ButtonU5BU5D_t794F5842D7A836C586DBE4F1F11D7B12042DF2EA* L_24 = __this->___button_4;
		int32_t L_25 = 2;
		Button_t08E85812946542C2FD1F37BA7C97825101832DC8* L_26 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		bool L_27 = L_26->___selected_9;
		if (!L_27)
		{
			goto IL_0122;
		}
	}

IL_00c7:
	{
		// answered = true;
		__this->___answered_7 = (bool)1;
		// correct = false;
		__this->___correct_8 = (bool)0;
		// break;
		goto IL_0122;
	}

IL_00d7:
	{
		// if (button[2].selected)
		ButtonU5BU5D_t794F5842D7A836C586DBE4F1F11D7B12042DF2EA* L_28 = __this->___button_4;
		int32_t L_29 = 2;
		Button_t08E85812946542C2FD1F37BA7C97825101832DC8* L_30 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29));
		bool L_31 = L_30->___selected_9;
		if (!L_31)
		{
			goto IL_00f6;
		}
	}
	{
		// answered = true;
		__this->___answered_7 = (bool)1;
		// correct = true;
		__this->___correct_8 = (bool)1;
		goto IL_0122;
	}

IL_00f6:
	{
		// else if (button[0].selected || button[1].selected)
		ButtonU5BU5D_t794F5842D7A836C586DBE4F1F11D7B12042DF2EA* L_32 = __this->___button_4;
		int32_t L_33 = 0;
		Button_t08E85812946542C2FD1F37BA7C97825101832DC8* L_34 = (L_32)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		bool L_35 = L_34->___selected_9;
		if (L_35)
		{
			goto IL_0114;
		}
	}
	{
		ButtonU5BU5D_t794F5842D7A836C586DBE4F1F11D7B12042DF2EA* L_36 = __this->___button_4;
		int32_t L_37 = 1;
		Button_t08E85812946542C2FD1F37BA7C97825101832DC8* L_38 = (L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		bool L_39 = L_38->___selected_9;
		if (!L_39)
		{
			goto IL_0122;
		}
	}

IL_0114:
	{
		// answered = true;
		__this->___answered_7 = (bool)1;
		// correct = false;
		__this->___correct_8 = (bool)0;
	}

IL_0122:
	{
		// if (answered && quizActive)
		bool L_40 = __this->___answered_7;
		if (!L_40)
		{
			goto IL_013f;
		}
	}
	{
		bool L_41 = __this->___quizActive_9;
		if (!L_41)
		{
			goto IL_013f;
		}
	}
	{
		// StartCoroutine(EndQuiz());
		RuntimeObject* L_42;
		L_42 = Quiz_EndQuiz_m82ECFF61E116CD99610E687386DFA58BFAF4DD17(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_43;
		L_43 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_42, NULL);
	}

IL_013f:
	{
		// }
		return;
	}
}
// System.Void Quiz::StartQuiz()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quiz_StartQuiz_m8823C6FC6D50FD16474BE13C2A6FB7BB15B2E3CE (Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* __this, const RuntimeMethod* method) 
{
	ButtonU5BU5D_t794F5842D7A836C586DBE4F1F11D7B12042DF2EA* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (Button but in button)
		ButtonU5BU5D_t794F5842D7A836C586DBE4F1F11D7B12042DF2EA* L_0 = __this->___button_4;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0017;
	}

IL_000b:
	{
		// foreach (Button but in button)
		ButtonU5BU5D_t794F5842D7A836C586DBE4F1F11D7B12042DF2EA* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		Button_t08E85812946542C2FD1F37BA7C97825101832DC8* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		// but.buttonActive();
		Button_buttonActive_m9603B8CD810458EC811C548E50B08DC3E599C763(L_4, NULL);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0017:
	{
		// foreach (Button but in button)
		int32_t L_6 = V_1;
		ButtonU5BU5D_t794F5842D7A836C586DBE4F1F11D7B12042DF2EA* L_7 = V_0;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// caption.text = question;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_8 = __this->___caption_10;
		String_t* L_9 = __this->___question_5;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_8, L_9);
		// quizActive = true;
		__this->___quizActive_9 = (bool)1;
		// }
		return;
	}
}
// System.Collections.IEnumerator Quiz::EndQuiz()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Quiz_EndQuiz_m82ECFF61E116CD99610E687386DFA58BFAF4DD17 (Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CEndQuizU3Ed__12_tDA9452C3E793382EAF4211E788B60A30CCB8AB96_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CEndQuizU3Ed__12_tDA9452C3E793382EAF4211E788B60A30CCB8AB96* L_0 = (U3CEndQuizU3Ed__12_tDA9452C3E793382EAF4211E788B60A30CCB8AB96*)il2cpp_codegen_object_new(U3CEndQuizU3Ed__12_tDA9452C3E793382EAF4211E788B60A30CCB8AB96_il2cpp_TypeInfo_var);
		U3CEndQuizU3Ed__12__ctor_mE1A6D05E5C82A498C8E336694E8ABD7766FFBE43(L_0, 0, NULL);
		U3CEndQuizU3Ed__12_tDA9452C3E793382EAF4211E788B60A30CCB8AB96* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Quiz::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quiz__ctor_m4D02464E441FA54DA7852D92BD7DB12237BFB4EB (Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* __this, const RuntimeMethod* method) 
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
// System.Void Quiz/<EndQuiz>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEndQuizU3Ed__12__ctor_mE1A6D05E5C82A498C8E336694E8ABD7766FFBE43 (U3CEndQuizU3Ed__12_tDA9452C3E793382EAF4211E788B60A30CCB8AB96* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Quiz/<EndQuiz>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEndQuizU3Ed__12_System_IDisposable_Dispose_m4D6FA0D1FA679C4720FD5B499F3A0C281718C46A (U3CEndQuizU3Ed__12_tDA9452C3E793382EAF4211E788B60A30CCB8AB96* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Quiz/<EndQuiz>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEndQuizU3Ed__12_MoveNext_mF83BF3AB666D47F657AA1F4AA9E322CF76A510EB (U3CEndQuizU3Ed__12_tDA9452C3E793382EAF4211E788B60A30CCB8AB96* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA56779C0A85F3DC0A0744E2D106ECAE754EAFAB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5723BBC3EB34422E8DC0D4E6092918036D3D406);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* V_1 = NULL;
	ButtonU5BU5D_t794F5842D7A836C586DBE4F1F11D7B12042DF2EA* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00bc;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (correct)
		Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* L_4 = V_1;
		bool L_5 = L_4->___correct_8;
		if (!L_5)
		{
			goto IL_004c;
		}
	}
	{
		// caption.text = "Correct!";
		Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* L_6 = V_1;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_7 = L_6->___caption_10;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_7, _stringLiteralA56779C0A85F3DC0A0744E2D106ECAE754EAFAB3);
		// rightImage.gameObject.SetActive(true);
		Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* L_8 = V_1;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9 = L_8->___rightImage_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)1, NULL);
		goto IL_006d;
	}

IL_004c:
	{
		// caption.text = "Incorrect...";
		Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* L_11 = V_1;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_12 = L_11->___caption_10;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_12, _stringLiteralA5723BBC3EB34422E8DC0D4E6092918036D3D406);
		// wrongImage.gameObject.SetActive(true);
		Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* L_13 = V_1;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = L_13->___wrongImage_12;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_14, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)1, NULL);
	}

IL_006d:
	{
		// foreach (Button but in button)
		Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* L_16 = V_1;
		ButtonU5BU5D_t794F5842D7A836C586DBE4F1F11D7B12042DF2EA* L_17 = L_16->___button_4;
		V_2 = L_17;
		V_3 = 0;
		goto IL_008b;
	}

IL_0078:
	{
		// foreach (Button but in button)
		ButtonU5BU5D_t794F5842D7A836C586DBE4F1F11D7B12042DF2EA* L_18 = V_2;
		int32_t L_19 = V_3;
		int32_t L_20 = L_19;
		Button_t08E85812946542C2FD1F37BA7C97825101832DC8* L_21 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		// but.buttonWrong();
		Button_t08E85812946542C2FD1F37BA7C97825101832DC8* L_22 = L_21;
		Button_buttonWrong_m18054BB637478EA2009DB494815CDCBF931B7894(L_22, NULL);
		// but.selected = false;
		L_22->___selected_9 = (bool)0;
		int32_t L_23 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_008b:
	{
		// foreach (Button but in button)
		int32_t L_24 = V_3;
		ButtonU5BU5D_t794F5842D7A836C586DBE4F1F11D7B12042DF2EA* L_25 = V_2;
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_0078;
		}
	}
	{
		// button[correctAns].buttonRight();
		Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* L_26 = V_1;
		ButtonU5BU5D_t794F5842D7A836C586DBE4F1F11D7B12042DF2EA* L_27 = L_26->___button_4;
		Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* L_28 = V_1;
		int32_t L_29 = L_28->___correctAns_6;
		int32_t L_30 = L_29;
		Button_t08E85812946542C2FD1F37BA7C97825101832DC8* L_31 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		Button_buttonRight_m825490755267C44C5A2F7EE9C5BE6CBB8F334B7C(L_31, NULL);
		// yield return new WaitForSeconds(3f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_32 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_32, (3.0f), NULL);
		__this->___U3CU3E2__current_1 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_32);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00bc:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// quizActive = false;
		Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* L_33 = V_1;
		L_33->___quizActive_9 = (bool)0;
		// rightImage.gameObject.SetActive(false);
		Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* L_34 = V_1;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_35 = L_34->___rightImage_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36;
		L_36 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_35, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_36, (bool)0, NULL);
		// wrongImage.gameObject.SetActive(false);
		Quiz_t6C26E41E999AF5DEF8E408C7F49A566A4A92D19C* L_37 = V_1;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_38 = L_37->___wrongImage_12;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39;
		L_39 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_38, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_39, (bool)0, NULL);
		// yield break;
		return (bool)0;
	}
}
// System.Object Quiz/<EndQuiz>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEndQuizU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m43ABC04F0672F7FAC819D7C09C7AB215A0534DC1 (U3CEndQuizU3Ed__12_tDA9452C3E793382EAF4211E788B60A30CCB8AB96* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Quiz/<EndQuiz>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEndQuizU3Ed__12_System_Collections_IEnumerator_Reset_mF3ED8F33792C7E69DB4BADFA51D22D1D744DA802 (U3CEndQuizU3Ed__12_tDA9452C3E793382EAF4211E788B60A30CCB8AB96* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CEndQuizU3Ed__12_System_Collections_IEnumerator_Reset_mF3ED8F33792C7E69DB4BADFA51D22D1D744DA802_RuntimeMethod_var)));
	}
}
// System.Object Quiz/<EndQuiz>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEndQuizU3Ed__12_System_Collections_IEnumerator_get_Current_m2ACC6D881A140CE70C8A8950AFAF84153E06FAD4 (U3CEndQuizU3Ed__12_tDA9452C3E793382EAF4211E788B60A30CCB8AB96* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Crouch_get_IsCrouched_m8021AD022A7B374B3B874ADC220EF7C450E8953D_inline (Crouch_t5E2751F5A50DD97CAF1DBA3A07594BFADB38637E* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsCrouched { get; private set; }
		bool L_0 = __this->___U3CIsCrouchedU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Crouch_set_IsCrouched_m0E68FE1FCB4B9AB458FDB6ED63274E3E18500DEF_inline (Crouch_t5E2751F5A50DD97CAF1DBA3A07594BFADB38637E* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsCrouched { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CIsCrouchedU3Ek__BackingField_12 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FirstPersonMovement_get_IsRunning_m58CAF98A09A5CE86F21EE8DC8A1ACBF5A655681E_inline (FirstPersonMovement_tA852887AB56569BDD01EA2BE85F9B39C349C5FFE* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsRunning { get; private set; }
		bool L_0 = __this->___U3CIsRunningU3Ek__BackingField_10;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___downVector_8;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline (const RuntimeMethod* method) 
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
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___oneVector_3;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Scale_m8D61A8D2272549F1EF41256F7E8A206C6500EA6C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
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
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Lerp_m1A36103F7967F653A929556E26E6D052C298C00C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___a0;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___b1;
		float L_5 = L_4.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___a0;
		float L_7 = L_6.___x_0;
		float L_8 = ___t2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___a0;
		float L_10 = L_9.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = ___b1;
		float L_12 = L_11.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = ___a0;
		float L_14 = L_13.___y_1;
		float L_15 = ___t2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_16), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_0;
		return L_17;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirstPersonMovement_set_IsRunning_mADC233CB94F50A40278FACBAA8940A4CB114EA78_inline (FirstPersonMovement_tA852887AB56569BDD01EA2BE85F9B39C349C5FFE* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsRunning { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CIsRunningU3Ek__BackingField_10 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___f0, const RuntimeMethod* method) 
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
		L_1 = bankers_round(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_1_Invoke_m6EC66204056853EDE42F634FECB2D7D4685B54B0_gshared_inline (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* __this, const RuntimeMethod* method) 
{
	typedef float (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
