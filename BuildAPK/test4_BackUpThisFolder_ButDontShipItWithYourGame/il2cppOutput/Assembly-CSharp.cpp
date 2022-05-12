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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.AnyMultipeerNetworkingInitializedArgs>
struct ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727;
// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectedArgs>
struct ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB;
// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectionFailedArgs>
struct ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928;
// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.DisconnectedArgs>
struct ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF;
// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PersistentKeyValueUpdatedArgs>
struct ArdkEventHandler_1_t819D1AD68903C22AD570015EF9413414DBCBC7E6;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<UnityEngine.Color>
struct BaseItemSerializer_1_t7AC2BAF3D4DA1444C73B43FADDCA188D80767E98;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Int16>
struct BaseItemSerializer_1_tDB493E21405A4BB5BB42550A360158EE65D2F3E0;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Object>
struct BaseItemSerializer_1_t5567DB1CC433FC78226745FF7219C9D37D4A23B9;
// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.String>
struct BaseItemSerializer_1_t254BC814052F73D7946C911ED39D5A7254BEB42A;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Type,Niantic.ARDK.Utilities.BinarySerialization.ISerializationContext>
struct Dictionary_2_t5F6E491FADF1115E93791D1C6C52E78B25B4F1F9;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.HashSet`1<System.IO.Stream>
struct HashSet_1_tD8BC5CA8B573CC6655C0BB415428A47597E7369F;
// System.Collections.Generic.IEnumerable`1<System.Int32Enum>
struct IEnumerable_1_t71A46277DBD73BD4009B2B20885D2B7057593A1A;
// System.Collections.Generic.IEnumerable`1<Role>
struct IEnumerable_1_tBE33C0401D5ED30C7C4BB1E47121DE5DAD962E10;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<TMPro.TMP_Dropdown/DropdownItem>
struct List_1_tA7EEECF976A6B4957450A4D235070C9324ED1A97;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// TMPro.TweenRunner`1<TMPro.FloatTween>
struct TweenRunner_1_tF277B20625C8B1939DC85508C4679C690757395E;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
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
// Role[]
struct RoleU5BU5D_tC247448952C7237A189DBE274942E63D6BF79F4C;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// TMPro.TextMeshProUGUI[]
struct TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A;
// UnityEngine.Touch[]
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3;
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
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer
struct BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1;
// Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer
struct BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// ChoiceClass1
struct ChoiceClass1_tE28590E2849F9AEE5894B71323BBD95F5C4B19A4;
// ChoiceClass2
struct ChoiceClass2_t9F6082C1E6C256B2EA9EB4F865FCD7F51B5250F6;
// ChoiceTest
struct ChoiceTest_t5B34EE0F174CC0ECA14E4801CDC789164AA6E2F8;
// ColorTest
struct ColorTest_t5B0303352CBC13E7105D6CC7A9DDF07FFD1F1E6E;
// UnityEngine.Compass
struct Compass_t161CD14062E71ED7324FE12ED003EE0877EE546F;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// GPS
struct GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9;
// GPStestPC
struct GPStestPC_t21A132A3B277C06F4CFE79F2CE1728152CD61FAA;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Niantic.ARDK.Networking.IMultipeerNetworking
struct IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F;
// Niantic.ARDK.Networking.IPeer
struct IPeer_tB26E05AC085737591A7AE8FB14966542EB78BA81;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// InputTest
struct InputTest_t7E37142ACC101267C13A2AC892569C03E47ABCBD;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.LocationService
struct LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Niantic.ARDKExamples.NetworkObject
struct NetworkObject_t9C9A3A74F9B000400F21C6D958C2687C315A012C;
// Node
struct Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Niantic.ARDKExamples.PersistentKeyValueChoice
struct PersistentKeyValueChoice_t265703E17D456F9DBAB63533333481BDE36F4314;
// Niantic.ARDKExamples.PersistentKeyValueExampleManagerVisualDimension
struct PersistentKeyValueExampleManagerVisualDimension_tF89D92A17C48602D5492D950C62084E1F2D9F71F;
// Niantic.ARDKExamples.PersistentKeyValueTree
struct PersistentKeyValueTree_t97C18E58A7392FDB56B81D387EB07F0915B037A2;
// Point
struct Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_Dropdown
struct TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504;
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
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
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
// Visibility
struct Visibility_t918BF48EBF5A0BFFBF654B3097341CAC5AA1788B;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// Niantic.ARDK.Utilities.BinarySerialization.Contexts._TypeDeserializationContext
struct _TypeDeserializationContext_tC96C9598090EBDD64977D7368D25182A219E53DE;
// Niantic.ARDK.Utilities.BinarySerialization.Contexts._TypeSerializationContext
struct _TypeSerializationContext_t4B72B95994C3FEFA286B8E05E75B1A23D4E42208;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// GPS/<Position>d__11
struct U3CPositionU3Ed__11_tEA95EBC793A717055CD4F609EDE730772065A147;
// InputTest/<WaitAndPrint>d__4
struct U3CWaitAndPrintU3Ed__4_t8F8FB81EAAC148C8D6A9F6B0555D2A1ACB8D468C;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Niantic.ARDKExamples.PersistentKeyValueChoice/<WaitForReset>d__11
struct U3CWaitForResetU3Ed__11_t67412F530C268FAEE8757D6065DCCAB58D1AF1F9;
// Niantic.ARDKExamples.PersistentKeyValueTree/<WaitForReset>d__14
struct U3CWaitForResetU3Ed__14_t10D63D0A0BF1E7B4659C4840274457C038481D89;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// TMPro.TMP_Dropdown/DropdownEvent
struct DropdownEvent_tFD4609E80240BC887A6D31F9F3C252A8A6843E91;
// TMPro.TMP_Dropdown/OptionData
struct OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E;
// TMPro.TMP_Dropdown/OptionDataList
struct OptionDataList_tF66EA4801BFA499F010E6EFF89ED760BF4F0BEE1;

IL2CPP_EXTERN_C RuntimeClass* ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArdkEventHandler_1_t819D1AD68903C22AD570015EF9413414DBCBC7E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorSerializer_tA90CE1FC18ACA6B0F16B821BAD357F797D4284ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16Serializer_t08895AEDFBC84DFB57677B812CFF6FF8D3993F27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MultipeerNetworkingFactory_tF258FAA4E989F1306DE3D55785C4A7201AE5C05C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PersistentKeyValueChoice_t265703E17D456F9DBAB63533333481BDE36F4314_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PersistentKeyValueTree_t97C18E58A7392FDB56B81D387EB07F0915B037A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformAgnosticInput_tA2741C9A9A85BC19A3FC0A000966ADEBAB901B0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringSerializer_t0D84EFD9B8788D4AE312379A22B751581AC98559_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPositionU3Ed__11_tEA95EBC793A717055CD4F609EDE730772065A147_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitAndPrintU3Ed__4_t8F8FB81EAAC148C8D6A9F6B0555D2A1ACB8D468C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitForResetU3Ed__11_t67412F530C268FAEE8757D6065DCCAB58D1AF1F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitForResetU3Ed__14_t10D63D0A0BF1E7B4659C4840274457C038481D89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral14652B2A6A161F42FC015E8CECDFB515D175761C;
IL2CPP_EXTERN_C String_t* _stringLiteral14ABB8CDC6A64C0A5B1F9ABE754570BF4B2C307E;
IL2CPP_EXTERN_C String_t* _stringLiteral185AA134ECCBF006FD070C8D8574F859896EC215;
IL2CPP_EXTERN_C String_t* _stringLiteral19B7D722FFCBB1EBCC95DE76FB16F022050F3CC8;
IL2CPP_EXTERN_C String_t* _stringLiteral1AC0F53BDC2368ECCEB10EFDAA1C5CE853AB51F0;
IL2CPP_EXTERN_C String_t* _stringLiteral1D171A4CACA4D064A038F731E191F541989E01DD;
IL2CPP_EXTERN_C String_t* _stringLiteral27F5AEF2EA3F86FEBADEC72F91210C2F3A8C2F89;
IL2CPP_EXTERN_C String_t* _stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333;
IL2CPP_EXTERN_C String_t* _stringLiteral3F841ED2976F3423F3FED30E494E32CAA198B884;
IL2CPP_EXTERN_C String_t* _stringLiteral47A23BFD06ECFD154AD092ED652B1B4111CD15FC;
IL2CPP_EXTERN_C String_t* _stringLiteral4C6E966011D7EE59D80D0B69AEAEE4683F646BF3;
IL2CPP_EXTERN_C String_t* _stringLiteral513D64C8B35B515DA2E78656C4867BBC7D889694;
IL2CPP_EXTERN_C String_t* _stringLiteral5FB06859EF4BE17F95D098C6B4F616CBE9B6DEBA;
IL2CPP_EXTERN_C String_t* _stringLiteral675B8F443EDEEE4F4D0001FD46C9A15269493543;
IL2CPP_EXTERN_C String_t* _stringLiteral712BBA9190176846FD43949DC6500B24463A6E4A;
IL2CPP_EXTERN_C String_t* _stringLiteral74E3BB87021CE621B0756AC22746A4BC74568459;
IL2CPP_EXTERN_C String_t* _stringLiteral75FAF73308668FD490C851CC686D98C743D7461C;
IL2CPP_EXTERN_C String_t* _stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE;
IL2CPP_EXTERN_C String_t* _stringLiteral8B39CC30B2BD23CA2FC64019E9230509ADB2DAE8;
IL2CPP_EXTERN_C String_t* _stringLiteral8C25A1F95ACADBA500A01BD2A901325EAA1A45FC;
IL2CPP_EXTERN_C String_t* _stringLiteral916F6B1D0AAD57876A2BCB38638F93F526C3901E;
IL2CPP_EXTERN_C String_t* _stringLiteral9DB2115B51E0C5B47AC89B0FFD65E4F3497E1C40;
IL2CPP_EXTERN_C String_t* _stringLiteral9F0359D8A221CBF3FF7A13A4AC038B30BFA09689;
IL2CPP_EXTERN_C String_t* _stringLiteralA448BC9C846BA7E63B5E1343958878B4A69082F0;
IL2CPP_EXTERN_C String_t* _stringLiteralA74ACAA1F61DE0EB348EC03946685B0B6270CB36;
IL2CPP_EXTERN_C String_t* _stringLiteralB057A438444498A79A7724C7395556AB54E62FEC;
IL2CPP_EXTERN_C String_t* _stringLiteralB75EF3978C889705A28E76850DEBD30539262099;
IL2CPP_EXTERN_C String_t* _stringLiteralC180F5E54DA3264EB964930AB295F88592821846;
IL2CPP_EXTERN_C String_t* _stringLiteralCA3EB2281C26DA4DD928082294669B22BE9EF168;
IL2CPP_EXTERN_C String_t* _stringLiteralCA9A355B510B515024569E6C926AC3B4DBBBA6AB;
IL2CPP_EXTERN_C String_t* _stringLiteralCB14F2914CE5180DDDB0C1B32D64F5926B745964;
IL2CPP_EXTERN_C String_t* _stringLiteralCFDD61812B195B7F0F9CD2AC1DD40589AB7AC237;
IL2CPP_EXTERN_C String_t* _stringLiteralD7E548AAC17AB2B8CA95B9C50EDCA8640D6598FE;
IL2CPP_EXTERN_C String_t* _stringLiteralD9F6B690E16E25915983F3E6C7BE53DDCC99D060;
IL2CPP_EXTERN_C String_t* _stringLiteralDB9770DCA7FF4F0F27853F0DC794D0FA06AFD22D;
IL2CPP_EXTERN_C String_t* _stringLiteralE2EE8E73413D8C0EC384803067E74CF1A2A1AAFB;
IL2CPP_EXTERN_C String_t* _stringLiteralE9BF22729544B5E920EAC9403A78D51B00B6B882;
IL2CPP_EXTERN_C String_t* _stringLiteralFB6C1F66CC7E11F32F17E21E52D7FF100BE4B4D0;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseItemSerializer_1_Deserialize_m0DAC07DD13CC390BF791E29BCF331A3F7D4EE3E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseItemSerializer_1_Deserialize_m3A4FB6C1C6273C537302137638DA87979EFCA69B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseItemSerializer_1_Deserialize_m7A4F86FE6A3D9FACD34B7EE6999949140C978CA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseItemSerializer_1_Serialize_m21CFA58C4660F7F737AAB8FE0456907846E0E5D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseItemSerializer_1_Serialize_mA7702F1F6D4B6D8768B9451E1AD64855FC8B7DFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseItemSerializer_1_Serialize_mAEF9084A1E9EB765C586F8D3A5DBC006C28AB9FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Contains_TisRole_t053FF4A4C848D01EDA0F9F49F39A1BB5BB335A8C_m64BA73BDF7E453ABF9A0FA8266766DB4A4B73459_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkObject_OnConnect_m037B57C1E590C5C0DD298E59FE532DF9DC5DA032_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkObject_OnConnectionFailed_m7AFF1A50AC0D7CD4FD28ED96FBE40D7AD3E72ADB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkObject_OnDisconnect_m995F7B0098C4BB2910D7F4525AA41091B16B1301_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkObject_OnKeyValueUpdated_m214BF34708C15FEC3F01DDEA740702D6D50AF4F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkObject_OnNetworkingInitialized_mDC39973C92F37AC78C4D1977F0811D6381BA380B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PersistentKeyValueChoice_OnConnect_m450E1B011272599BC25D87005A02C9006D191638_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PersistentKeyValueChoice_OnConnectionFailed_m1AEF7BEF2D3E3EDC874BD1FE374A89DCCB2B6B93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PersistentKeyValueChoice_OnDisconnect_m4858B62952A973D8F58A0884D5629747A683C9F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PersistentKeyValueChoice_OnKeyValueUpdated_m06C752D78209AEA2B10891E2A976B0DA0DC9215B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PersistentKeyValueChoice_OnNetworkingInitialized_m0357C75FD87B37D46F8B5FB21E877C593846AD85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PersistentKeyValueExampleManagerVisualDimension_OnConnect_m26941BB70B1955E9024979874478213BD2720697_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PersistentKeyValueExampleManagerVisualDimension_OnConnectionFailed_m18332D59C39531DE5A6F82541E4A0E5A548E4EEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PersistentKeyValueExampleManagerVisualDimension_OnDisconnect_m5C9C885596AFDC25B525D3980B5132C2D183A5B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PersistentKeyValueExampleManagerVisualDimension_OnKeyValueUpdated_mB7FDB5B88DD09CA473C1984D01711DDDFE2E7DB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PersistentKeyValueExampleManagerVisualDimension_OnNetworkingInitialized_m9AD420B3A19024110582BC1222B8E5CB250E2BCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PersistentKeyValueTree_OnConnect_m5AB242003854032CA253797AAED780DF98F54807_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PersistentKeyValueTree_OnConnectionFailed_m3F35F6290F6EF4D973E69D06E83306C85FEFF33C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PersistentKeyValueTree_OnDisconnect_m57EDBA26734E5712F25B5ECB690F42DEEBB9C637_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PersistentKeyValueTree_OnKeyValueUpdated_mF580012CD0675CCB0727362C02E866E59C988881_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PersistentKeyValueTree_OnNetworkingInitialized_mDD3E1540A3A5F8B7DB74B094E1CE4294FB541C20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPositionU3Ed__11_System_Collections_IEnumerator_Reset_m9A844276D905D549FC4D3DD8D63E018B869CC7EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitAndPrintU3Ed__4_System_Collections_IEnumerator_Reset_mC7FC753FF91247746F95AF9B6B0A46D8CBADD60B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitForResetU3Ed__11_System_Collections_IEnumerator_Reset_m1AF7C10B6528B054435851D997593C6AE262EED7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitForResetU3Ed__14_System_Collections_IEnumerator_Reset_m914952990D0F71DDC09E6AFE90756D6FE2A4EDAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2_ToString_m34799B0E95F3F60FEFB9F41941C93E09B214DD8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2__ctor_m07EDA6EDF9BDDD9DB44BAFD23DC7AB04E57428E1_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RoleU5BU5D_tC247448952C7237A189DBE274942E63D6BF79F4C;
struct TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A;
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3;

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

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<UnityEngine.Color>
struct BaseItemSerializer_1_t7AC2BAF3D4DA1444C73B43FADDCA188D80767E98  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Int16>
struct BaseItemSerializer_1_tDB493E21405A4BB5BB42550A360158EE65D2F3E0  : public RuntimeObject
{
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.String>
struct BaseItemSerializer_1_t254BC814052F73D7946C911ED39D5A7254BEB42A  : public RuntimeObject
{
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};
struct Il2CppArrayBounds;

// Niantic.ARDK.Utilities.BinarySerialization.BinarySerializerOrDeserializer
struct BinarySerializerOrDeserializer_t5F6BEAD0DE782725DFC40A46B18AABC8EAA379A7  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Type,Niantic.ARDK.Utilities.BinarySerialization.ISerializationContext> Niantic.ARDK.Utilities.BinarySerialization.BinarySerializerOrDeserializer::_contexts
	Dictionary_2_t5F6E491FADF1115E93791D1C6C52E78B25B4F1F9* ____contexts_2;
	// System.IO.Stream Niantic.ARDK.Utilities.BinarySerialization.BinarySerializerOrDeserializer::<Stream>k__BackingField
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___U3CStreamU3Ek__BackingField_4;
};

struct BinarySerializerOrDeserializer_t5F6BEAD0DE782725DFC40A46B18AABC8EAA379A7_StaticFields
{
	// System.Object Niantic.ARDK.Utilities.BinarySerialization.BinarySerializerOrDeserializer::_runningStreamsLock
	RuntimeObject* ____runningStreamsLock_0;
	// System.Collections.Generic.HashSet`1<System.IO.Stream> Niantic.ARDK.Utilities.BinarySerialization.BinarySerializerOrDeserializer::_runningStreams
	HashSet_1_tD8BC5CA8B573CC6655C0BB415428A47597E7369F* ____runningStreams_1;
};

// ChoiceClass1
struct ChoiceClass1_tE28590E2849F9AEE5894B71323BBD95F5C4B19A4  : public RuntimeObject
{
	// System.Boolean ChoiceClass1::isActiveChoice
	bool ___isActiveChoice_0;
	// Visibility ChoiceClass1::visibilitys
	Visibility_t918BF48EBF5A0BFFBF654B3097341CAC5AA1788B* ___visibilitys_1;
	// System.String ChoiceClass1::DialogueText
	String_t* ___DialogueText_2;
	// System.String ChoiceClass1::Button1Text
	String_t* ___Button1Text_3;
	// ChoiceClass2 ChoiceClass1::Choice1
	ChoiceClass2_t9F6082C1E6C256B2EA9EB4F865FCD7F51B5250F6* ___Choice1_4;
	// System.String ChoiceClass1::Button2Text
	String_t* ___Button2Text_5;
	// ChoiceClass2 ChoiceClass1::Choice2
	ChoiceClass2_t9F6082C1E6C256B2EA9EB4F865FCD7F51B5250F6* ___Choice2_6;
};

// ChoiceClass2
struct ChoiceClass2_t9F6082C1E6C256B2EA9EB4F865FCD7F51B5250F6  : public RuntimeObject
{
	// ChoiceClass1 ChoiceClass2::choice
	ChoiceClass1_tE28590E2849F9AEE5894B71323BBD95F5C4B19A4* ___choice_0;
};

// UnityEngine.Compass
struct Compass_t161CD14062E71ED7324FE12ED003EE0877EE546F  : public RuntimeObject
{
};

// UnityEngine.LocationService
struct LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2  : public RuntimeObject
{
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// Point
struct Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93  : public RuntimeObject
{
	// System.Double Point::X
	double ___X_0;
	// System.Double Point::Y
	double ___Y_1;
	// UnityEngine.UI.Image Point::picture
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___picture_2;
	// System.String Point::infos
	String_t* ___infos_3;
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

// Visibility
struct Visibility_t918BF48EBF5A0BFFBF654B3097341CAC5AA1788B  : public RuntimeObject
{
	// Role[] Visibility::Decide
	RoleU5BU5D_tC247448952C7237A189DBE274942E63D6BF79F4C* ___Decide_0;
	// Role[] Visibility::See
	RoleU5BU5D_tC247448952C7237A189DBE274942E63D6BF79F4C* ___See_1;
	// Role[] Visibility::Blind
	RoleU5BU5D_tC247448952C7237A189DBE274942E63D6BF79F4C* ___Blind_2;
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

// GPS/<Position>d__11
struct U3CPositionU3Ed__11_tEA95EBC793A717055CD4F609EDE730772065A147  : public RuntimeObject
{
	// System.Int32 GPS/<Position>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GPS/<Position>d__11::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GPS GPS/<Position>d__11::<>4__this
	GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* ___U3CU3E4__this_2;
	// System.Int32 GPS/<Position>d__11::<maxWait>5__2
	int32_t ___U3CmaxWaitU3E5__2_3;
};

// InputTest/<WaitAndPrint>d__4
struct U3CWaitAndPrintU3Ed__4_t8F8FB81EAAC148C8D6A9F6B0555D2A1ACB8D468C  : public RuntimeObject
{
	// System.Int32 InputTest/<WaitAndPrint>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object InputTest/<WaitAndPrint>d__4::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// InputTest InputTest/<WaitAndPrint>d__4::<>4__this
	InputTest_t7E37142ACC101267C13A2AC892569C03E47ABCBD* ___U3CU3E4__this_2;
};

// Niantic.ARDKExamples.PersistentKeyValueChoice/<WaitForReset>d__11
struct U3CWaitForResetU3Ed__11_t67412F530C268FAEE8757D6065DCCAB58D1AF1F9  : public RuntimeObject
{
	// System.Int32 Niantic.ARDKExamples.PersistentKeyValueChoice/<WaitForReset>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Niantic.ARDKExamples.PersistentKeyValueChoice/<WaitForReset>d__11::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single Niantic.ARDKExamples.PersistentKeyValueChoice/<WaitForReset>d__11::sec
	float ___sec_2;
	// Niantic.ARDKExamples.PersistentKeyValueChoice Niantic.ARDKExamples.PersistentKeyValueChoice/<WaitForReset>d__11::<>4__this
	PersistentKeyValueChoice_t265703E17D456F9DBAB63533333481BDE36F4314* ___U3CU3E4__this_3;
};

// Niantic.ARDKExamples.PersistentKeyValueTree/<WaitForReset>d__14
struct U3CWaitForResetU3Ed__14_t10D63D0A0BF1E7B4659C4840274457C038481D89  : public RuntimeObject
{
	// System.Int32 Niantic.ARDKExamples.PersistentKeyValueTree/<WaitForReset>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Niantic.ARDKExamples.PersistentKeyValueTree/<WaitForReset>d__14::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single Niantic.ARDKExamples.PersistentKeyValueTree/<WaitForReset>d__14::sec
	float ___sec_2;
	// Niantic.ARDKExamples.PersistentKeyValueTree Niantic.ARDKExamples.PersistentKeyValueTree/<WaitForReset>d__14::<>4__this
	PersistentKeyValueTree_t97C18E58A7392FDB56B81D387EB07F0915B037A2* ___U3CU3E4__this_3;
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

// System.ValueTuple`2<System.Double,System.Double>
struct ValueTuple_2_t6535F6090E6D3C9A7A645F4BFD8ED400CBA8B14C 
{
	// T1 System.ValueTuple`2::Item1
	double ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	double ___Item2_1;
};

// Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.AnyMultipeerNetworkingInitializedArgs
struct AnyMultipeerNetworkingInitializedArgs_t9E508F81618E02A064E5D69F39BF65F0C3E38FB2 
{
	// Niantic.ARDK.Networking.IMultipeerNetworking Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.AnyMultipeerNetworkingInitializedArgs::Networking
	RuntimeObject* ___Networking_0;
};
// Native definition for P/Invoke marshalling of Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.AnyMultipeerNetworkingInitializedArgs
struct AnyMultipeerNetworkingInitializedArgs_t9E508F81618E02A064E5D69F39BF65F0C3E38FB2_marshaled_pinvoke
{
	RuntimeObject* ___Networking_0;
};
// Native definition for COM marshalling of Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.AnyMultipeerNetworkingInitializedArgs
struct AnyMultipeerNetworkingInitializedArgs_t9E508F81618E02A064E5D69F39BF65F0C3E38FB2_marshaled_com
{
	RuntimeObject* ___Networking_0;
};

// Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer
struct BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1  : public BinarySerializerOrDeserializer_t5F6BEAD0DE782725DFC40A46B18AABC8EAA379A7
{
	// Niantic.ARDK.Utilities.BinarySerialization.Contexts._TypeDeserializationContext Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer::_context
	_TypeDeserializationContext_tC96C9598090EBDD64977D7368D25182A219E53DE* ____context_5;
};

// Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer
struct BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4  : public BinarySerializerOrDeserializer_t5F6BEAD0DE782725DFC40A46B18AABC8EAA379A7
{
	// Niantic.ARDK.Utilities.BinarySerialization.Contexts._TypeSerializationContext Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer::_context
	_TypeSerializationContext_t4B72B95994C3FEFA286B8E05E75B1A23D4E42208* ____context_5;
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
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

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.ColorSerializer
struct ColorSerializer_tA90CE1FC18ACA6B0F16B821BAD357F797D4284ED  : public BaseItemSerializer_1_t7AC2BAF3D4DA1444C73B43FADDCA188D80767E98
{
};

struct ColorSerializer_tA90CE1FC18ACA6B0F16B821BAD357F797D4284ED_StaticFields
{
	// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.ColorSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.ColorSerializer::Instance
	ColorSerializer_tA90CE1FC18ACA6B0F16B821BAD357F797D4284ED* ___Instance_1;
};

// Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectedArgs
struct ConnectedArgs_t743850D611ABED06BEF37656F9878CA7FD852BFF 
{
	// Niantic.ARDK.Networking.IPeer Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectedArgs::<Self>k__BackingField
	RuntimeObject* ___U3CSelfU3Ek__BackingField_0;
	// Niantic.ARDK.Networking.IPeer Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectedArgs::<Host>k__BackingField
	RuntimeObject* ___U3CHostU3Ek__BackingField_1;
};
// Native definition for P/Invoke marshalling of Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectedArgs
struct ConnectedArgs_t743850D611ABED06BEF37656F9878CA7FD852BFF_marshaled_pinvoke
{
	RuntimeObject* ___U3CSelfU3Ek__BackingField_0;
	RuntimeObject* ___U3CHostU3Ek__BackingField_1;
};
// Native definition for COM marshalling of Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectedArgs
struct ConnectedArgs_t743850D611ABED06BEF37656F9878CA7FD852BFF_marshaled_com
{
	RuntimeObject* ___U3CSelfU3Ek__BackingField_0;
	RuntimeObject* ___U3CHostU3Ek__BackingField_1;
};

// Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectionFailedArgs
struct ConnectionFailedArgs_tA6F0384572A7AB910CD8D4779458D910A8591FBC 
{
	// System.UInt32 Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectionFailedArgs::<ErrorCode>k__BackingField
	uint32_t ___U3CErrorCodeU3Ek__BackingField_0;
};

// Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.DisconnectedArgs
struct DisconnectedArgs_t85B536918847AC525EAFB30C21179DDE41BCF462 
{
	union
	{
		struct
		{
		};
		uint8_t DisconnectedArgs_t85B536918847AC525EAFB30C21179DDE41BCF462__padding[1];
	};
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

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.Int16Serializer
struct Int16Serializer_t08895AEDFBC84DFB57677B812CFF6FF8D3993F27  : public BaseItemSerializer_1_tDB493E21405A4BB5BB42550A360158EE65D2F3E0
{
};

struct Int16Serializer_t08895AEDFBC84DFB57677B812CFF6FF8D3993F27_StaticFields
{
	// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.Int16Serializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.Int16Serializer::Instance
	Int16Serializer_t08895AEDFBC84DFB57677B812CFF6FF8D3993F27* ___Instance_1;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// UnityEngine.LocationInfo
struct LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 
{
	// System.Double UnityEngine.LocationInfo::m_Timestamp
	double ___m_Timestamp_0;
	// System.Single UnityEngine.LocationInfo::m_Latitude
	float ___m_Latitude_1;
	// System.Single UnityEngine.LocationInfo::m_Longitude
	float ___m_Longitude_2;
	// System.Single UnityEngine.LocationInfo::m_Altitude
	float ___m_Altitude_3;
	// System.Single UnityEngine.LocationInfo::m_HorizontalAccuracy
	float ___m_HorizontalAccuracy_4;
	// System.Single UnityEngine.LocationInfo::m_VerticalAccuracy
	float ___m_VerticalAccuracy_5;
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

// Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PersistentKeyValueUpdatedArgs
struct PersistentKeyValueUpdatedArgs_tBF5C837DBBB2FBBBEFE3592A869A0068135EBE6A 
{
	// System.String Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PersistentKeyValueUpdatedArgs::<Key>k__BackingField
	String_t* ___U3CKeyU3Ek__BackingField_0;
	// System.Byte[] Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PersistentKeyValueUpdatedArgs::_value
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____value_1;
};
// Native definition for P/Invoke marshalling of Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PersistentKeyValueUpdatedArgs
struct PersistentKeyValueUpdatedArgs_tBF5C837DBBB2FBBBEFE3592A869A0068135EBE6A_marshaled_pinvoke
{
	char* ___U3CKeyU3Ek__BackingField_0;
	Il2CppSafeArray/*NONE*/* ____value_1;
};
// Native definition for COM marshalling of Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PersistentKeyValueUpdatedArgs
struct PersistentKeyValueUpdatedArgs_tBF5C837DBBB2FBBBEFE3592A869A0068135EBE6A_marshaled_com
{
	Il2CppChar* ___U3CKeyU3Ek__BackingField_0;
	Il2CppSafeArray/*NONE*/* ____value_1;
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

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_4;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.StringSerializer
struct StringSerializer_t0D84EFD9B8788D4AE312379A22B751581AC98559  : public BaseItemSerializer_1_t254BC814052F73D7946C911ED39D5A7254BEB42A
{
};

struct StringSerializer_t0D84EFD9B8788D4AE312379A22B751581AC98559_StaticFields
{
	// Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.StringSerializer Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.StringSerializer::Instance
	StringSerializer_t0D84EFD9B8788D4AE312379A22B751581AC98559* ___Instance_1;
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

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_5;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_6;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_7;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_8;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_9;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_10;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_11;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_12;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_13;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_14;
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

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
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

// Role
struct Role_t053FF4A4C848D01EDA0F9F49F39A1BB5BB335A8C 
{
	// System.Int32 Role::value__
	int32_t ___value___2;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.AnyMultipeerNetworkingInitializedArgs>
struct ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727  : public MulticastDelegate_t
{
};

// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectedArgs>
struct ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB  : public MulticastDelegate_t
{
};

// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectionFailedArgs>
struct ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928  : public MulticastDelegate_t
{
};

// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.DisconnectedArgs>
struct ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF  : public MulticastDelegate_t
{
};

// Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PersistentKeyValueUpdatedArgs>
struct ArdkEventHandler_1_t819D1AD68903C22AD570015EF9413414DBCBC7E6  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
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

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// ChoiceTest
struct ChoiceTest_t5B34EE0F174CC0ECA14E4801CDC789164AA6E2F8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI ChoiceTest::textDialogueText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___textDialogueText_4;
	// UnityEngine.UI.Button ChoiceTest::Button1
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___Button1_5;
	// UnityEngine.UI.Button ChoiceTest::Button2
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___Button2_6;
	// Role ChoiceTest::YourRole
	int32_t ___YourRole_7;
	// ChoiceClass1 ChoiceTest::choice
	ChoiceClass1_tE28590E2849F9AEE5894B71323BBD95F5C4B19A4* ___choice_8;
	// ChoiceClass1 ChoiceTest::MemoryChoice
	ChoiceClass1_tE28590E2849F9AEE5894B71323BBD95F5C4B19A4* ___MemoryChoice_9;
};

// ColorTest
struct ColorTest_t5B0303352CBC13E7105D6CC7A9DDF07FFD1F1E6E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Color ColorTest::red
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___red_4;
};

// GPS
struct GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI[] GPS::positions
	TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* ___positions_4;
	// TMPro.TextMeshProUGUI GPS::Distance
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___Distance_5;
	// TMPro.TextMeshProUGUI GPS::DistanceAproximation
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___DistanceAproximation_6;
	// TMPro.TextMeshProUGUI GPS::Boussole
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___Boussole_7;
	// TMPro.TextMeshProUGUI GPS::TargetAngle
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___TargetAngle_8;
	// UnityEngine.UI.Image GPS::ImageBoussole
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___ImageBoussole_9;
	// Point GPS::YourPosition
	Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93* ___YourPosition_10;
	// Point GPS::pointB
	Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93* ___pointB_11;
	// System.Single GPS::AnglePlayerTarget
	float ___AnglePlayerTarget_12;
};

// GPStestPC
struct GPStestPC_t21A132A3B277C06F4CFE79F2CE1728152CD61FAA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Point GPStestPC::pointA
	Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93* ___pointA_4;
	// Point GPStestPC::pointB
	Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93* ___pointB_5;
	// System.Single GPStestPC::distance
	float ___distance_6;
};

// InputTest
struct InputTest_t7E37142ACC101267C13A2AC892569C03E47ABCBD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject InputTest::cube
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cube_4;
	// TMPro.TextMeshProUGUI InputTest::text1
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___text1_5;
};

// Niantic.ARDKExamples.NetworkObject
struct NetworkObject_t9C9A3A74F9B000400F21C6D958C2687C315A012C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image Niantic.ARDKExamples.NetworkObject::_serverBlob
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ____serverBlob_4;
	// UnityEngine.UI.Image Niantic.ARDKExamples.NetworkObject::_localBlob
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ____localBlob_5;
	// Niantic.ARDK.Networking.IMultipeerNetworking Niantic.ARDKExamples.NetworkObject::_networking
	RuntimeObject* ____networking_6;
	// System.IO.MemoryStream Niantic.ARDKExamples.NetworkObject::_stream
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* ____stream_7;
	// System.IO.MemoryStream Niantic.ARDKExamples.NetworkObject::_stream2
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* ____stream2_8;
};

// Node
struct Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Node::isActiveChoice
	bool ___isActiveChoice_4;
	// Visibility Node::visibilitys
	Visibility_t918BF48EBF5A0BFFBF654B3097341CAC5AA1788B* ___visibilitys_5;
	// System.String Node::DialogueText
	String_t* ___DialogueText_6;
	// System.String Node::Button1Text
	String_t* ___Button1Text_7;
	// Node Node::Choice1
	Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* ___Choice1_8;
	// System.String Node::Button2Text
	String_t* ___Button2Text_9;
	// Node Node::Choice2
	Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* ___Choice2_10;
};

// Niantic.ARDKExamples.PersistentKeyValueChoice
struct PersistentKeyValueChoice_t265703E17D456F9DBAB63533333481BDE36F4314  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI Niantic.ARDKExamples.PersistentKeyValueChoice::textDialogueText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___textDialogueText_5;
	// UnityEngine.UI.Button Niantic.ARDKExamples.PersistentKeyValueChoice::Button1
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___Button1_6;
	// UnityEngine.UI.Button Niantic.ARDKExamples.PersistentKeyValueChoice::Button2
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___Button2_7;
	// TMPro.TMP_Dropdown Niantic.ARDKExamples.PersistentKeyValueChoice::RolesSelection
	TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* ___RolesSelection_8;
	// Role Niantic.ARDKExamples.PersistentKeyValueChoice::YourRole
	int32_t ___YourRole_9;
	// ChoiceClass1 Niantic.ARDKExamples.PersistentKeyValueChoice::choice
	ChoiceClass1_tE28590E2849F9AEE5894B71323BBD95F5C4B19A4* ___choice_10;
	// ChoiceClass1 Niantic.ARDKExamples.PersistentKeyValueChoice::MemoryChoice
	ChoiceClass1_tE28590E2849F9AEE5894B71323BBD95F5C4B19A4* ___MemoryChoice_11;
	// Niantic.ARDK.Networking.IMultipeerNetworking Niantic.ARDKExamples.PersistentKeyValueChoice::_networking
	RuntimeObject* ____networking_12;
	// System.IO.MemoryStream Niantic.ARDKExamples.PersistentKeyValueChoice::_stream
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* ____stream_13;
};

struct PersistentKeyValueChoice_t265703E17D456F9DBAB63533333481BDE36F4314_StaticFields
{
	// Niantic.ARDKExamples.PersistentKeyValueChoice Niantic.ARDKExamples.PersistentKeyValueChoice::instance
	PersistentKeyValueChoice_t265703E17D456F9DBAB63533333481BDE36F4314* ___instance_4;
};

// Niantic.ARDKExamples.PersistentKeyValueExampleManagerVisualDimension
struct PersistentKeyValueExampleManagerVisualDimension_tF89D92A17C48602D5492D950C62084E1F2D9F71F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image Niantic.ARDKExamples.PersistentKeyValueExampleManagerVisualDimension::_serverBlob
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ____serverBlob_4;
	// UnityEngine.UI.Image Niantic.ARDKExamples.PersistentKeyValueExampleManagerVisualDimension::_localBlob
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ____localBlob_5;
	// Niantic.ARDK.Networking.IMultipeerNetworking Niantic.ARDKExamples.PersistentKeyValueExampleManagerVisualDimension::_networking
	RuntimeObject* ____networking_6;
	// System.IO.MemoryStream Niantic.ARDKExamples.PersistentKeyValueExampleManagerVisualDimension::_stream
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* ____stream_7;
	// System.IO.MemoryStream Niantic.ARDKExamples.PersistentKeyValueExampleManagerVisualDimension::_stream2
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* ____stream2_8;
};

// Niantic.ARDKExamples.PersistentKeyValueTree
struct PersistentKeyValueTree_t97C18E58A7392FDB56B81D387EB07F0915B037A2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Button Niantic.ARDKExamples.PersistentKeyValueTree::JoinButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___JoinButton_5;
	// TMPro.TextMeshProUGUI Niantic.ARDKExamples.PersistentKeyValueTree::textDialogueText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___textDialogueText_6;
	// UnityEngine.UI.Button Niantic.ARDKExamples.PersistentKeyValueTree::Button1
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___Button1_7;
	// UnityEngine.UI.Button Niantic.ARDKExamples.PersistentKeyValueTree::Button2
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___Button2_8;
	// UnityEngine.UI.Button Niantic.ARDKExamples.PersistentKeyValueTree::Reset
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___Reset_9;
	// TMPro.TMP_Dropdown Niantic.ARDKExamples.PersistentKeyValueTree::RolesSelection
	TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* ___RolesSelection_10;
	// Role Niantic.ARDKExamples.PersistentKeyValueTree::YourRole
	int32_t ___YourRole_11;
	// Node Niantic.ARDKExamples.PersistentKeyValueTree::Node
	Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* ___Node_12;
	// Node Niantic.ARDKExamples.PersistentKeyValueTree::MemoryNode
	Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* ___MemoryNode_13;
	// Niantic.ARDK.Networking.IMultipeerNetworking Niantic.ARDKExamples.PersistentKeyValueTree::_networking
	RuntimeObject* ____networking_14;
	// System.IO.MemoryStream Niantic.ARDKExamples.PersistentKeyValueTree::_stream
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* ____stream_15;
};

struct PersistentKeyValueTree_t97C18E58A7392FDB56B81D387EB07F0915B037A2_StaticFields
{
	// Niantic.ARDKExamples.PersistentKeyValueTree Niantic.ARDKExamples.PersistentKeyValueTree::instance
	PersistentKeyValueTree_t97C18E58A7392FDB56B81D387EB07F0915B037A2* ___instance_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
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

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
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

// TMPro.TMP_Dropdown
struct TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform TMPro.TMP_Dropdown::m_Template
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Template_20;
	// TMPro.TMP_Text TMPro.TMP_Dropdown::m_CaptionText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_CaptionText_21;
	// UnityEngine.UI.Image TMPro.TMP_Dropdown::m_CaptionImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_CaptionImage_22;
	// UnityEngine.UI.Graphic TMPro.TMP_Dropdown::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_23;
	// TMPro.TMP_Text TMPro.TMP_Dropdown::m_ItemText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_ItemText_24;
	// UnityEngine.UI.Image TMPro.TMP_Dropdown::m_ItemImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_ItemImage_25;
	// System.Int32 TMPro.TMP_Dropdown::m_Value
	int32_t ___m_Value_26;
	// TMPro.TMP_Dropdown/OptionDataList TMPro.TMP_Dropdown::m_Options
	OptionDataList_tF66EA4801BFA499F010E6EFF89ED760BF4F0BEE1* ___m_Options_27;
	// TMPro.TMP_Dropdown/DropdownEvent TMPro.TMP_Dropdown::m_OnValueChanged
	DropdownEvent_tFD4609E80240BC887A6D31F9F3C252A8A6843E91* ___m_OnValueChanged_28;
	// System.Single TMPro.TMP_Dropdown::m_AlphaFadeSpeed
	float ___m_AlphaFadeSpeed_29;
	// UnityEngine.GameObject TMPro.TMP_Dropdown::m_Dropdown
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Dropdown_30;
	// UnityEngine.GameObject TMPro.TMP_Dropdown::m_Blocker
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Blocker_31;
	// System.Collections.Generic.List`1<TMPro.TMP_Dropdown/DropdownItem> TMPro.TMP_Dropdown::m_Items
	List_1_tA7EEECF976A6B4957450A4D235070C9324ED1A97* ___m_Items_32;
	// TMPro.TweenRunner`1<TMPro.FloatTween> TMPro.TMP_Dropdown::m_AlphaTweenRunner
	TweenRunner_1_tF277B20625C8B1939DC85508C4679C690757395E* ___m_AlphaTweenRunner_33;
	// System.Boolean TMPro.TMP_Dropdown::validTemplate
	bool ___validTemplate_34;
	// UnityEngine.Coroutine TMPro.TMP_Dropdown::m_Coroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_Coroutine_35;
};

struct TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504_StaticFields
{
	// TMPro.TMP_Dropdown/OptionData TMPro.TMP_Dropdown::s_NoOptionData
	OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* ___s_NoOptionData_36;
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
// TMPro.TextMeshProUGUI[]
struct TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A  : public RuntimeArray
{
	ALIGN_FIELD (8) TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* m_Items[1];

	inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* value)
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
// UnityEngine.Touch[]
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3  : public RuntimeArray
{
	ALIGN_FIELD (8) Touch_t03E51455ED508492B3F278903A0114FA0E87B417 m_Items[1];

	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// Role[]
struct RoleU5BU5D_tC247448952C7237A189DBE274942E63D6BF79F4C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// System.String System.ValueTuple`2<System.Double,System.Double>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_2_ToString_m34799B0E95F3F60FEFB9F41941C93E09B214DD8E_gshared (ValueTuple_2_t6535F6090E6D3C9A7A645F4BFD8ED400CBA8B14C* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.ValueTuple`2<System.Double,System.Double>::.ctor(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_m07EDA6EDF9BDDD9DB44BAFD23DC7AB04E57428E1_gshared (ValueTuple_2_t6535F6090E6D3C9A7A645F4BFD8ED400CBA8B14C* __this, double ___item10, double ___item21, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.AnyMultipeerNetworkingInitializedArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArdkEventHandler_1__ctor_m9FB2DC8CD3B72FE727B2855A1C3D4E0DE63CBDC0_gshared (ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectedArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArdkEventHandler_1__ctor_m22539F947DA2CBC7EA7478AF8B4A1DEB1EC5BB0E_gshared (ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.DisconnectedArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArdkEventHandler_1__ctor_m606C96124A5303A0411B90E06609E41D1A96D034_gshared (ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectionFailedArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArdkEventHandler_1__ctor_m3BB5E86F077CBC5F6FB0F7564554ACBB57DC0FBE_gshared (ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PersistentKeyValueUpdatedArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArdkEventHandler_1__ctor_m0987D415ADF489B5C888126AF34713A0557C8862_gshared (ArdkEventHandler_1_t819D1AD68903C22AD570015EF9413414DBCBC7E6* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<UnityEngine.Color>::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseItemSerializer_1_Serialize_m21CFA58C4660F7F737AAB8FE0456907846E0E5D1_gshared (BaseItemSerializer_1_t7AC2BAF3D4DA1444C73B43FADDCA188D80767E98* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___item1, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Object>::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseItemSerializer_1_Serialize_m812587A0D6ACF813EE896F5C12F336CBE4FA9E7A_gshared (BaseItemSerializer_1_t5567DB1CC433FC78226745FF7219C9D37D4A23B9* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, RuntimeObject* ___item1, const RuntimeMethod* method) ;
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<UnityEngine.Color>::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F BaseItemSerializer_1_Deserialize_m3A4FB6C1C6273C537302137638DA87979EFCA69B_gshared (BaseItemSerializer_1_t7AC2BAF3D4DA1444C73B43FADDCA188D80767E98* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) ;
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Object>::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaseItemSerializer_1_Deserialize_m7658951FF09BF782BFF9742317DA72016203DFEA_gshared (BaseItemSerializer_1_t5567DB1CC433FC78226745FF7219C9D37D4A23B9* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Contains<System.Int32Enum>(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Contains_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mCF235BF6055957FECC7BC52DB8F433FB3CE7C643_gshared (RuntimeObject* ___source0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Int16>::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseItemSerializer_1_Serialize_mA7702F1F6D4B6D8768B9451E1AD64855FC8B7DFD_gshared (BaseItemSerializer_1_tDB493E21405A4BB5BB42550A360158EE65D2F3E0* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, int16_t ___item1, const RuntimeMethod* method) ;
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Int16>::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t BaseItemSerializer_1_Deserialize_m7A4F86FE6A3D9FACD34B7EE6999949140C978CA5_gshared (BaseItemSerializer_1_tDB493E21405A4BB5BB42550A360158EE65D2F3E0* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// System.Collections.IEnumerator GPS::Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GPS_Position_m8880CB63F97A6CD850651191687F3DE7C286A823 (GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void GPS::UpdateCompass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPS_UpdateCompass_m0504FAC09EE02E7FE384B275B235E7E7DAFCAFA4 (GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* __this, const RuntimeMethod* method) ;
// System.Void GPS/<Position>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPositionU3Ed__11__ctor_mB72485B55A8A580939E835DA1E2402EEF15ECE29 (U3CPositionU3Ed__11_tEA95EBC793A717055CD4F609EDE730772065A147* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.LocationService UnityEngine.Input::get_location()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* Input_get_location_m6F753D9369213F07EC556FF6240D723DCF3C689D (const RuntimeMethod* method) ;
// UnityEngine.LocationServiceStatus UnityEngine.LocationService::get_status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LocationService_get_status_m25B7C4012B9529265D9746BB73ED689737E9C9CD (LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* __this, const RuntimeMethod* method) ;
// UnityEngine.LocationInfo UnityEngine.LocationService::get_lastData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 LocationService_get_lastData_m50C68F3DFB23894CF519F00BBA9D72146EE9345F (LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.LocationInfo::get_latitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LocationInfo_get_latitude_mAF0A46443555AF18EA3C516292CB92B1669CA863 (LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441* __this, const RuntimeMethod* method) ;
// System.String System.Double::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339 (double* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Single UnityEngine.LocationInfo::get_longitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LocationInfo_get_longitude_mCB720DD0E139B7C614F78D40595E1BBF1F5433A2 (LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.LocationInfo::get_altitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LocationInfo_get_altitude_m3B4BE2F447F3599F5677DD72A86C3A1A801ABAE0 (LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.LocationInfo::get_horizontalAccuracy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LocationInfo_get_horizontalAccuracy_m3178154DD5F4F72B8743665F33CCAE5BEC6296F4 (LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.LocationInfo::get_verticalAccuracy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LocationInfo_get_verticalAccuracy_m90B3477474136BE858810B92C2C601BBB311A16B (LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441* __this, const RuntimeMethod* method) ;
// System.Double UnityEngine.LocationInfo::get_timestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double LocationInfo_get_timestamp_mAD1095E60A61DF0FA66195AA06A0F801CF9BDC9F (LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441* __this, const RuntimeMethod* method) ;
// System.Double Point::Distance(Point,Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Point_Distance_m8370E6BBFD9D731CE8B8B80F87FD1F4279444298 (Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93* __this, Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93* ___A0, Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93* ___B1, const RuntimeMethod* method) ;
// System.ValueTuple`2<System.Double,System.Double> Point::DistanceAproximation(Point,Point,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t6535F6090E6D3C9A7A645F4BFD8ED400CBA8B14C Point_DistanceAproximation_m5B89299E134A852D5DDC91726CCC0C49C8F891B8 (Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93* __this, Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93* ___A0, Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93* ___B1, double ___aproximationH2, double ___aproximatioV3, const RuntimeMethod* method) ;
// System.String System.ValueTuple`2<System.Double,System.Double>::ToString()
inline String_t* ValueTuple_2_ToString_m34799B0E95F3F60FEFB9F41941C93E09B214DD8E (ValueTuple_2_t6535F6090E6D3C9A7A645F4BFD8ED400CBA8B14C* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_2_t6535F6090E6D3C9A7A645F4BFD8ED400CBA8B14C*, const RuntimeMethod*))ValueTuple_2_ToString_m34799B0E95F3F60FEFB9F41941C93E09B214DD8E_gshared)(__this, method);
}
// UnityEngine.Compass UnityEngine.Input::get_compass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Compass_t161CD14062E71ED7324FE12ED003EE0877EE546F* Input_get_compass_m4CBF5D097BC0F70475D9CC08F2EEA5C2BFCF5F34 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Compass::get_magneticHeading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Compass_get_magneticHeading_m5052F97DD5B914F629B138956D250AE2EFFE1C55 (Compass_t161CD14062E71ED7324FE12ED003EE0877EE546F* __this, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m015249B312238B8DCA3493489FAFC3055E2FFEF8_inline (float ___f0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Angle(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Angle_m9668B13074D1664DD192669C14B3A8FC01676299_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___from0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___to1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Compass::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Compass_set_enabled_m26DFB64F789DA4B875359E8CE1C3E9E2270CFCA9 (Compass_t161CD14062E71ED7324FE12ED003EE0877EE546F* __this, bool ___value0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Android.Permission::HasUserAuthorizedPermission(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Permission_HasUserAuthorizedPermission_m2742B284815A87BA03E79B45CA8DB35CF6A78736 (String_t* ___permission0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Android.Permission::RequestUserPermission(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Permission_RequestUserPermission_mFB96123E7F4EAFB684C6E527830C892107EEDE21 (String_t* ___permission0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.LocationService::get_isEnabledByUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocationService_get_isEnabledByUser_m78FE3A38B1101BAF658E259C1A6B4CD9A008DCAE (LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.LocationService::Start(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationService_Start_m5076FE201E96C086B0F9C2D8677DA69C98099F3D (LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* __this, float ___desiredAccuracyInMeters0, float ___updateDistanceInMeters1, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, float ___repeatRate2, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Boolean Point::isInCircle(Point,Point,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Point_isInCircle_mAED3C862AE7EB289AD1348C3AD26D34687DC5368 (Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93* __this, Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93* ___A0, Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93* ___B1, float ___distance2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Double System.Math::Pow(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3 (double ___x0, double ___y1, const RuntimeMethod* method) ;
// System.Void System.ValueTuple`2<System.Double,System.Double>::.ctor(T1,T2)
inline void ValueTuple_2__ctor_m07EDA6EDF9BDDD9DB44BAFD23DC7AB04E57428E1 (ValueTuple_2_t6535F6090E6D3C9A7A645F4BFD8ED400CBA8B14C* __this, double ___item10, double ___item21, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_t6535F6090E6D3C9A7A645F4BFD8ED400CBA8B14C*, double, double, const RuntimeMethod*))ValueTuple_2__ctor_m07EDA6EDF9BDDD9DB44BAFD23DC7AB04E57428E1_gshared)(__this, ___item10, ___item21, method);
}
// UnityEngine.Touch[] UnityEngine.Input::get_touches()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* Input_get_touches_m884B92DD9A389F7985AB275A9717AC629C258B6B (const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43 (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m07803863BB5A3896FA01061562532B21E1ED6D4A (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Collections.IEnumerator InputTest::WaitAndPrint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputTest_WaitAndPrint_m1FE9AA7EA5D77033A12FAC792C19413DFCD2215E (InputTest_t7E37142ACC101267C13A2AC892569C03E47ABCBD* __this, const RuntimeMethod* method) ;
// System.Void InputTest/<WaitAndPrint>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAndPrintU3Ed__4__ctor_mDB406E187368F40F4A8D8E52C1D7D2ABDE069BBE (U3CWaitAndPrintU3Ed__4_t8F8FB81EAAC148C8D6A9F6B0555D2A1ACB8D468C* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3 (const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.String UnityEngine.Color::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Color_ToString_m0018DE2184B3377CCA6FBD72D5D47886DC669147 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.AnyMultipeerNetworkingInitializedArgs>::.ctor(System.Object,System.IntPtr)
inline void ArdkEventHandler_1__ctor_m9FB2DC8CD3B72FE727B2855A1C3D4E0DE63CBDC0 (ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727*, RuntimeObject*, intptr_t, const RuntimeMethod*))ArdkEventHandler_1__ctor_m9FB2DC8CD3B72FE727B2855A1C3D4E0DE63CBDC0_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Niantic.ARDK.Networking.MultipeerNetworkingFactory::add_NetworkingInitialized(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.AnyMultipeerNetworkingInitializedArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultipeerNetworkingFactory_add_NetworkingInitialized_m56CC71E74A195459B6975492F0F257EBF4C069E6 (ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727* ___value0, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectedArgs>::.ctor(System.Object,System.IntPtr)
inline void ArdkEventHandler_1__ctor_m22539F947DA2CBC7EA7478AF8B4A1DEB1EC5BB0E (ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB*, RuntimeObject*, intptr_t, const RuntimeMethod*))ArdkEventHandler_1__ctor_m22539F947DA2CBC7EA7478AF8B4A1DEB1EC5BB0E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.DisconnectedArgs>::.ctor(System.Object,System.IntPtr)
inline void ArdkEventHandler_1__ctor_m606C96124A5303A0411B90E06609E41D1A96D034 (ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF*, RuntimeObject*, intptr_t, const RuntimeMethod*))ArdkEventHandler_1__ctor_m606C96124A5303A0411B90E06609E41D1A96D034_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectionFailedArgs>::.ctor(System.Object,System.IntPtr)
inline void ArdkEventHandler_1__ctor_m3BB5E86F077CBC5F6FB0F7564554ACBB57DC0FBE (ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928*, RuntimeObject*, intptr_t, const RuntimeMethod*))ArdkEventHandler_1__ctor_m3BB5E86F077CBC5F6FB0F7564554ACBB57DC0FBE_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PersistentKeyValueUpdatedArgs>::.ctor(System.Object,System.IntPtr)
inline void ArdkEventHandler_1__ctor_m0987D415ADF489B5C888126AF34713A0557C8862 (ArdkEventHandler_1_t819D1AD68903C22AD570015EF9413414DBCBC7E6* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ArdkEventHandler_1_t819D1AD68903C22AD570015EF9413414DBCBC7E6*, RuntimeObject*, intptr_t, const RuntimeMethod*))ArdkEventHandler_1__ctor_m0987D415ADF489B5C888126AF34713A0557C8862_gshared)(__this, ___object0, ___method1, method);
}
// System.Int32 Niantic.ARDK.Utilities.PlatformAgnosticInput::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlatformAgnosticInput_get_touchCount_m98EF58DF94ED26CBA0540AF60506983A12207178 (const RuntimeMethod* method) ;
// UnityEngine.Touch Niantic.ARDK.Utilities.PlatformAgnosticInput::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 PlatformAgnosticInput_GetTouch_mDE9A905C897DAADDED515FA41F95A3853FA1B971 (int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Random::ColorHSV()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Random_ColorHSV_m04ADED6D4527B089E658738A757222666BFF243C (const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinarySerializer__ctor_m45394DC0CB272B622A5B3E905F182625C49A6FF3 (BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<UnityEngine.Color>::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
inline void BaseItemSerializer_1_Serialize_m21CFA58C4660F7F737AAB8FE0456907846E0E5D1 (BaseItemSerializer_1_t7AC2BAF3D4DA1444C73B43FADDCA188D80767E98* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___item1, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_t7AC2BAF3D4DA1444C73B43FADDCA188D80767E98*, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, const RuntimeMethod*))BaseItemSerializer_1_Serialize_m21CFA58C4660F7F737AAB8FE0456907846E0E5D1_gshared)(__this, ___serializer0, ___item1, method);
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.String>::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
inline void BaseItemSerializer_1_Serialize_mAEF9084A1E9EB765C586F8D3A5DBC006C28AB9FB (BaseItemSerializer_1_t254BC814052F73D7946C911ED39D5A7254BEB42A* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, String_t* ___item1, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_t254BC814052F73D7946C911ED39D5A7254BEB42A*, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, String_t*, const RuntimeMethod*))BaseItemSerializer_1_Serialize_m812587A0D6ACF813EE896F5C12F336CBE4FA9E7A_gshared)(__this, ___serializer0, ___item1, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.UInt32 Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectionFailedArgs::get_ErrorCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t ConnectionFailedArgs_get_ErrorCode_m4D026D356ACA27B5048F3416EBBF5C7B12A791DC_inline (ConnectionFailedArgs_tA6F0384572A7AB910CD8D4779458D910A8591FBC* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.String Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PersistentKeyValueUpdatedArgs::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PersistentKeyValueUpdatedArgs_get_Key_m80E7E8E7489600E2AF2D5BCDBFA98E4D8A389236_inline (PersistentKeyValueUpdatedArgs_tBF5C837DBBB2FBBBEFE3592A869A0068135EBE6A* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.IO.MemoryStream Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PersistentKeyValueUpdatedArgs::CreateValueReader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* PersistentKeyValueUpdatedArgs_CreateValueReader_m58B48EC1E492D4CB3C4DD2C2496437A2098196B8 (PersistentKeyValueUpdatedArgs_tBF5C837DBBB2FBBBEFE3592A869A0068135EBE6A* __this, const RuntimeMethod* method) ;
// System.Void Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryDeserializer__ctor_mDD79DF6C7453224BEE20972579E565AA72533DEF (BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<UnityEngine.Color>::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F BaseItemSerializer_1_Deserialize_m3A4FB6C1C6273C537302137638DA87979EFCA69B (BaseItemSerializer_1_t7AC2BAF3D4DA1444C73B43FADDCA188D80767E98* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method)
{
	return ((  Color_tD001788D726C3A7F1379BEED0260B9591F440C1F (*) (BaseItemSerializer_1_t7AC2BAF3D4DA1444C73B43FADDCA188D80767E98*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1*, const RuntimeMethod*))BaseItemSerializer_1_Deserialize_m3A4FB6C1C6273C537302137638DA87979EFCA69B_gshared)(__this, ___deserializer0, method);
}
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.String>::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
inline String_t* BaseItemSerializer_1_Deserialize_m0DAC07DD13CC390BF791E29BCF331A3F7D4EE3E8 (BaseItemSerializer_1_t254BC814052F73D7946C911ED39D5A7254BEB42A* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (BaseItemSerializer_1_t254BC814052F73D7946C911ED39D5A7254BEB42A*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1*, const RuntimeMethod*))BaseItemSerializer_1_Deserialize_m7658951FF09BF782BFF9742317DA72016203DFEA_gshared)(__this, ___deserializer0, method);
}
// System.Void System.IO.MemoryStream::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m9E93692A2BB0E34119603FF6A5D44F6A132052E8 (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void Niantic.ARDKExamples.PersistentKeyValueChoice/<WaitForReset>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForResetU3Ed__11__ctor_mD06DD2EEE8C791ED3D15F0265FC0279F09769FF9 (U3CWaitForResetU3Ed__11_t67412F530C268FAEE8757D6065DCCAB58D1AF1F9* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Contains<Role>(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
inline bool Enumerable_Contains_TisRole_t053FF4A4C848D01EDA0F9F49F39A1BB5BB335A8C_m64BA73BDF7E453ABF9A0FA8266766DB4A4B73459 (RuntimeObject* ___source0, int32_t ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_Contains_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mCF235BF6055957FECC7BC52DB8F433FB3CE7C643_gshared)(___source0, ___value1, method);
}
// System.Void Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Int16>::Serialize(Niantic.ARDK.Utilities.BinarySerialization.BinarySerializer,T)
inline void BaseItemSerializer_1_Serialize_mA7702F1F6D4B6D8768B9451E1AD64855FC8B7DFD (BaseItemSerializer_1_tDB493E21405A4BB5BB42550A360158EE65D2F3E0* __this, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* ___serializer0, int16_t ___item1, const RuntimeMethod* method)
{
	((  void (*) (BaseItemSerializer_1_tDB493E21405A4BB5BB42550A360158EE65D2F3E0*, BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*, int16_t, const RuntimeMethod*))BaseItemSerializer_1_Serialize_mA7702F1F6D4B6D8768B9451E1AD64855FC8B7DFD_gshared)(__this, ___serializer0, ___item1, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Int32 TMPro.TMP_Dropdown::get_value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TMP_Dropdown_get_value_m5916A6D1897431E8ED789FEC24551A311D1B5C70_inline (TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Niantic.ARDKExamples.PersistentKeyValueChoice::WaitForReset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PersistentKeyValueChoice_WaitForReset_m7157A5A7AB21E6198BF1CDDFAD0E045C303B8D1A (PersistentKeyValueChoice_t265703E17D456F9DBAB63533333481BDE36F4314* __this, float ___sec0, const RuntimeMethod* method) ;
// T Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers.BaseItemSerializer`1<System.Int16>::Deserialize(Niantic.ARDK.Utilities.BinarySerialization.BinaryDeserializer)
inline int16_t BaseItemSerializer_1_Deserialize_m7A4F86FE6A3D9FACD34B7EE6999949140C978CA5 (BaseItemSerializer_1_tDB493E21405A4BB5BB42550A360158EE65D2F3E0* __this, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* ___deserializer0, const RuntimeMethod* method)
{
	return ((  int16_t (*) (BaseItemSerializer_1_tDB493E21405A4BB5BB42550A360158EE65D2F3E0*, BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1*, const RuntimeMethod*))BaseItemSerializer_1_Deserialize_m7A4F86FE6A3D9FACD34B7EE6999949140C978CA5_gshared)(__this, ___deserializer0, method);
}
// T UnityEngine.Component::GetComponentInChildren<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Void Niantic.ARDKExamples.PersistentKeyValueChoice::OnClickedReset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentKeyValueChoice_OnClickedReset_m076FD8608983E63117D99D8BBBFFD2C29CCEA672 (PersistentKeyValueChoice_t265703E17D456F9DBAB63533333481BDE36F4314* __this, const RuntimeMethod* method) ;
// System.Void Niantic.ARDKExamples.PersistentKeyValueTree/<WaitForReset>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForResetU3Ed__14__ctor_m8D0D52A838D937D652A27540A49533E6E580D826 (U3CWaitForResetU3Ed__14_t10D63D0A0BF1E7B4659C4840274457C038481D89* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Niantic.ARDKExamples.PersistentKeyValueTree::OnClickedReset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentKeyValueTree_OnClickedReset_m559EAC12928EC216B1C774048AA7E34BC2DEE8D4 (PersistentKeyValueTree_t97C18E58A7392FDB56B81D387EB07F0915B037A2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mBF0FA0B529C821F4733DDC3AD366B07CD27625F4_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
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
// System.Void GPS::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPS_Start_m1A862A601DE8567A4784509DA15584ED5A0101F9 (GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(Position());
		RuntimeObject* L_0;
		L_0 = GPS_Position_m8880CB63F97A6CD850651191687F3DE7C286A823(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void GPS::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPS_Update_mBE59FCFF4CC1929C672A8A56D5D78890FC268917 (GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* __this, const RuntimeMethod* method) 
{
	{
		// UpdateCompass();
		GPS_UpdateCompass_m0504FAC09EE02E7FE384B275B235E7E7DAFCAFA4(__this, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator GPS::Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GPS_Position_m8880CB63F97A6CD850651191687F3DE7C286A823 (GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPositionU3Ed__11_tEA95EBC793A717055CD4F609EDE730772065A147_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CPositionU3Ed__11_tEA95EBC793A717055CD4F609EDE730772065A147* L_0 = (U3CPositionU3Ed__11_tEA95EBC793A717055CD4F609EDE730772065A147*)il2cpp_codegen_object_new(U3CPositionU3Ed__11_tEA95EBC793A717055CD4F609EDE730772065A147_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CPositionU3Ed__11__ctor_mB72485B55A8A580939E835DA1E2402EEF15ECE29(L_0, 0, NULL);
		U3CPositionU3Ed__11_tEA95EBC793A717055CD4F609EDE730772065A147* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void GPS::UpdateGPSData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPS_UpdateGPSData_mD77FBB26480FEA8EEC3614379502DBB175C9E6F6 (GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2_ToString_m34799B0E95F3F60FEFB9F41941C93E09B214DD8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14ABB8CDC6A64C0A5B1F9ABE754570BF4B2C307E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral185AA134ECCBF006FD070C8D8574F859896EC215);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral675B8F443EDEEE4F4D0001FD46C9A15269493543);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B39CC30B2BD23CA2FC64019E9230509ADB2DAE8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB057A438444498A79A7724C7395556AB54E62FEC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB75EF3978C889705A28E76850DEBD30539262099);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFDD61812B195B7F0F9CD2AC1DD40589AB7AC237);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9BF22729544B5E920EAC9403A78D51B00B6B882);
		s_Il2CppMethodInitialized = true;
	}
	LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 V_0;
	memset((&V_0), 0, sizeof(V_0));
	double V_1 = 0.0;
	ValueTuple_2_t6535F6090E6D3C9A7A645F4BFD8ED400CBA8B14C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (Input.location.status == LocationServiceStatus.Running)
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_0;
		L_0 = Input_get_location_m6F753D9369213F07EC556FF6240D723DCF3C689D(NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = LocationService_get_status_m25B7C4012B9529265D9746BB73ED689737E9C9CD(L_0, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0178;
		}
	}
	{
		// positions[0].text = "Latitude: " + (double)Input.location.lastData.latitude;
		TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_2 = __this->___positions_4;
		NullCheck(L_2);
		int32_t L_3 = 0;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_5;
		L_5 = Input_get_location_m6F753D9369213F07EC556FF6240D723DCF3C689D(NULL);
		NullCheck(L_5);
		LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 L_6;
		L_6 = LocationService_get_lastData_m50C68F3DFB23894CF519F00BBA9D72146EE9345F(L_5, NULL);
		V_0 = L_6;
		float L_7;
		L_7 = LocationInfo_get_latitude_mAF0A46443555AF18EA3C516292CB92B1669CA863((&V_0), NULL);
		V_1 = ((double)L_7);
		String_t* L_8;
		L_8 = Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339((&V_1), NULL);
		String_t* L_9;
		L_9 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralE9BF22729544B5E920EAC9403A78D51B00B6B882, L_8, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_4, L_9);
		// positions[1].text = "Longitude: " + (double)Input.location.lastData.longitude;
		TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_10 = __this->___positions_4;
		NullCheck(L_10);
		int32_t L_11 = 1;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_13;
		L_13 = Input_get_location_m6F753D9369213F07EC556FF6240D723DCF3C689D(NULL);
		NullCheck(L_13);
		LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 L_14;
		L_14 = LocationService_get_lastData_m50C68F3DFB23894CF519F00BBA9D72146EE9345F(L_13, NULL);
		V_0 = L_14;
		float L_15;
		L_15 = LocationInfo_get_longitude_mCB720DD0E139B7C614F78D40595E1BBF1F5433A2((&V_0), NULL);
		V_1 = ((double)L_15);
		String_t* L_16;
		L_16 = Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339((&V_1), NULL);
		String_t* L_17;
		L_17 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral14ABB8CDC6A64C0A5B1F9ABE754570BF4B2C307E, L_16, NULL);
		NullCheck(L_12);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_12, L_17);
		// positions[2].text = "Altitude: " + (double)Input.location.lastData.altitude;
		TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_18 = __this->___positions_4;
		NullCheck(L_18);
		int32_t L_19 = 2;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_21;
		L_21 = Input_get_location_m6F753D9369213F07EC556FF6240D723DCF3C689D(NULL);
		NullCheck(L_21);
		LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 L_22;
		L_22 = LocationService_get_lastData_m50C68F3DFB23894CF519F00BBA9D72146EE9345F(L_21, NULL);
		V_0 = L_22;
		float L_23;
		L_23 = LocationInfo_get_altitude_m3B4BE2F447F3599F5677DD72A86C3A1A801ABAE0((&V_0), NULL);
		V_1 = ((double)L_23);
		String_t* L_24;
		L_24 = Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339((&V_1), NULL);
		String_t* L_25;
		L_25 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral185AA134ECCBF006FD070C8D8574F859896EC215, L_24, NULL);
		NullCheck(L_20);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_20, L_25);
		// positions[3].text = "HorizontalAccuracy: " + (double)Input.location.lastData.horizontalAccuracy;
		TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_26 = __this->___positions_4;
		NullCheck(L_26);
		int32_t L_27 = 3;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_29;
		L_29 = Input_get_location_m6F753D9369213F07EC556FF6240D723DCF3C689D(NULL);
		NullCheck(L_29);
		LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 L_30;
		L_30 = LocationService_get_lastData_m50C68F3DFB23894CF519F00BBA9D72146EE9345F(L_29, NULL);
		V_0 = L_30;
		float L_31;
		L_31 = LocationInfo_get_horizontalAccuracy_m3178154DD5F4F72B8743665F33CCAE5BEC6296F4((&V_0), NULL);
		V_1 = ((double)L_31);
		String_t* L_32;
		L_32 = Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339((&V_1), NULL);
		String_t* L_33;
		L_33 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral8B39CC30B2BD23CA2FC64019E9230509ADB2DAE8, L_32, NULL);
		NullCheck(L_28);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_28, L_33);
		// positions[4].text = "VerticalAccuracy: " + (double)Input.location.lastData.verticalAccuracy;
		TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_34 = __this->___positions_4;
		NullCheck(L_34);
		int32_t L_35 = 4;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_37;
		L_37 = Input_get_location_m6F753D9369213F07EC556FF6240D723DCF3C689D(NULL);
		NullCheck(L_37);
		LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 L_38;
		L_38 = LocationService_get_lastData_m50C68F3DFB23894CF519F00BBA9D72146EE9345F(L_37, NULL);
		V_0 = L_38;
		float L_39;
		L_39 = LocationInfo_get_verticalAccuracy_m90B3477474136BE858810B92C2C601BBB311A16B((&V_0), NULL);
		V_1 = ((double)L_39);
		String_t* L_40;
		L_40 = Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339((&V_1), NULL);
		String_t* L_41;
		L_41 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral675B8F443EDEEE4F4D0001FD46C9A15269493543, L_40, NULL);
		NullCheck(L_36);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_36, L_41);
		// positions[5].text = "Timestamp: " + (double)Input.location.lastData.timestamp;
		TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_42 = __this->___positions_4;
		NullCheck(L_42);
		int32_t L_43 = 5;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_45;
		L_45 = Input_get_location_m6F753D9369213F07EC556FF6240D723DCF3C689D(NULL);
		NullCheck(L_45);
		LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 L_46;
		L_46 = LocationService_get_lastData_m50C68F3DFB23894CF519F00BBA9D72146EE9345F(L_45, NULL);
		V_0 = L_46;
		double L_47;
		L_47 = LocationInfo_get_timestamp_mAD1095E60A61DF0FA66195AA06A0F801CF9BDC9F((&V_0), NULL);
		V_1 = ((double)L_47);
		String_t* L_48;
		L_48 = Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339((&V_1), NULL);
		String_t* L_49;
		L_49 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralB75EF3978C889705A28E76850DEBD30539262099, L_48, NULL);
		NullCheck(L_44);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_44, L_49);
		// YourPosition.X = Input.location.lastData.latitude;
		Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93* L_50 = __this->___YourPosition_10;
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_51;
		L_51 = Input_get_location_m6F753D9369213F07EC556FF6240D723DCF3C689D(NULL);
		NullCheck(L_51);
		LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 L_52;
		L_52 = LocationService_get_lastData_m50C68F3DFB23894CF519F00BBA9D72146EE9345F(L_51, NULL);
		V_0 = L_52;
		float L_53;
		L_53 = LocationInfo_get_latitude_mAF0A46443555AF18EA3C516292CB92B1669CA863((&V_0), NULL);
		NullCheck(L_50);
		L_50->___X_0 = ((double)L_53);
		// YourPosition.Y = Input.location.lastData.longitude;
		Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93* L_54 = __this->___YourPosition_10;
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_55;
		L_55 = Input_get_location_m6F753D9369213F07EC556FF6240D723DCF3C689D(NULL);
		NullCheck(L_55);
		LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 L_56;
		L_56 = LocationService_get_lastData_m50C68F3DFB23894CF519F00BBA9D72146EE9345F(L_55, NULL);
		V_0 = L_56;
		float L_57;
		L_57 = LocationInfo_get_longitude_mCB720DD0E139B7C614F78D40595E1BBF1F5433A2((&V_0), NULL);
		NullCheck(L_54);
		L_54->___Y_1 = ((double)L_57);
	}

IL_0178:
	{
		// Distance.text ="Distance: " + YourPosition.Distance(YourPosition, pointB);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_58 = __this->___Distance_5;
		Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93* L_59 = __this->___YourPosition_10;
		Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93* L_60 = __this->___YourPosition_10;
		Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93* L_61 = __this->___pointB_11;
		NullCheck(L_59);
		double L_62;
		L_62 = Point_Distance_m8370E6BBFD9D731CE8B8B80F87FD1F4279444298(L_59, L_60, L_61, NULL);
		V_1 = L_62;
		String_t* L_63;
		L_63 = Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339((&V_1), NULL);
		String_t* L_64;
		L_64 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralB057A438444498A79A7724C7395556AB54E62FEC, L_63, NULL);
		NullCheck(L_58);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_58, L_64);
		// DistanceAproximation.text = "DistanceAproximation: " + YourPosition.DistanceAproximation(YourPosition, pointB, Input.location.lastData.horizontalAccuracy, Input.location.lastData.verticalAccuracy);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_65 = __this->___DistanceAproximation_6;
		Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93* L_66 = __this->___YourPosition_10;
		Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93* L_67 = __this->___YourPosition_10;
		Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93* L_68 = __this->___pointB_11;
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_69;
		L_69 = Input_get_location_m6F753D9369213F07EC556FF6240D723DCF3C689D(NULL);
		NullCheck(L_69);
		LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 L_70;
		L_70 = LocationService_get_lastData_m50C68F3DFB23894CF519F00BBA9D72146EE9345F(L_69, NULL);
		V_0 = L_70;
		float L_71;
		L_71 = LocationInfo_get_horizontalAccuracy_m3178154DD5F4F72B8743665F33CCAE5BEC6296F4((&V_0), NULL);
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_72;
		L_72 = Input_get_location_m6F753D9369213F07EC556FF6240D723DCF3C689D(NULL);
		NullCheck(L_72);
		LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 L_73;
		L_73 = LocationService_get_lastData_m50C68F3DFB23894CF519F00BBA9D72146EE9345F(L_72, NULL);
		V_0 = L_73;
		float L_74;
		L_74 = LocationInfo_get_verticalAccuracy_m90B3477474136BE858810B92C2C601BBB311A16B((&V_0), NULL);
		NullCheck(L_66);
		ValueTuple_2_t6535F6090E6D3C9A7A645F4BFD8ED400CBA8B14C L_75;
		L_75 = Point_DistanceAproximation_m5B89299E134A852D5DDC91726CCC0C49C8F891B8(L_66, L_67, L_68, ((double)L_71), ((double)L_74), NULL);
		V_2 = L_75;
		String_t* L_76;
		L_76 = ValueTuple_2_ToString_m34799B0E95F3F60FEFB9F41941C93E09B214DD8E((&V_2), ValueTuple_2_ToString_m34799B0E95F3F60FEFB9F41941C93E09B214DD8E_RuntimeMethod_var);
		String_t* L_77;
		L_77 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralCFDD61812B195B7F0F9CD2AC1DD40589AB7AC237, L_76, NULL);
		NullCheck(L_65);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_65, L_77);
		// }
		return;
	}
}
// System.Void GPS::UpdateCompass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPS_UpdateCompass_m0504FAC09EE02E7FE384B275B235E7E7DAFCAFA4 (GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral513D64C8B35B515DA2E78656C4867BBC7D889694);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC180F5E54DA3264EB964930AB295F88592821846);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		// Boussole.text = "Angle from North: "  + Input.compass.magneticHeading.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___Boussole_7;
		Compass_t161CD14062E71ED7324FE12ED003EE0877EE546F* L_1;
		L_1 = Input_get_compass_m4CBF5D097BC0F70475D9CC08F2EEA5C2BFCF5F34(NULL);
		NullCheck(L_1);
		float L_2;
		L_2 = Compass_get_magneticHeading_m5052F97DD5B914F629B138956D250AE2EFFE1C55(L_1, NULL);
		V_3 = L_2;
		String_t* L_3;
		L_3 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_3), NULL);
		String_t* L_4;
		L_4 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral513D64C8B35B515DA2E78656C4867BBC7D889694, L_3, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_4);
		// Vector2 v1 = new Vector2((float)(pointB.X - YourPosition.X), (float)(pointB.Y - YourPosition.Y));
		Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93* L_5 = __this->___pointB_11;
		NullCheck(L_5);
		double L_6 = L_5->___X_0;
		Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93* L_7 = __this->___YourPosition_10;
		NullCheck(L_7);
		double L_8 = L_7->___X_0;
		Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93* L_9 = __this->___pointB_11;
		NullCheck(L_9);
		double L_10 = L_9->___Y_1;
		Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93* L_11 = __this->___YourPosition_10;
		NullCheck(L_11);
		double L_12 = L_11->___Y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), ((float)((double)il2cpp_codegen_subtract(L_6, L_8))), ((float)((double)il2cpp_codegen_subtract(L_10, L_12))), NULL);
		// Vector2 v2 = new Vector2(0, 1);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), (0.0f), (1.0f), NULL);
		// float sign = Mathf.Sign(v1.x * v2.y - v1.y * v2.x);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_0;
		float L_14 = L_13.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_1;
		float L_16 = L_15.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_0;
		float L_18 = L_17.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_1;
		float L_20 = L_19.___x_0;
		float L_21;
		L_21 = Mathf_Sign_m015249B312238B8DCA3493489FAFC3055E2FFEF8_inline(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_14, L_16)), ((float)il2cpp_codegen_multiply(L_18, L_20)))), NULL);
		V_2 = L_21;
		// AnglePlayerTarget =  - Vector2.Angle(v1, v2) * sign;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = V_1;
		float L_24;
		L_24 = Vector2_Angle_m9668B13074D1664DD192669C14B3A8FC01676299_inline(L_22, L_23, NULL);
		float L_25 = V_2;
		__this->___AnglePlayerTarget_12 = ((float)il2cpp_codegen_multiply(((-L_24)), L_25));
		// TargetAngle.text = "AnglePlayerTarget: " + AnglePlayerTarget.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_26 = __this->___TargetAngle_8;
		float* L_27 = (&__this->___AnglePlayerTarget_12);
		String_t* L_28;
		L_28 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_27, NULL);
		String_t* L_29;
		L_29 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralC180F5E54DA3264EB964930AB295F88592821846, L_28, NULL);
		NullCheck(L_26);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_26, L_29);
		// ImageBoussole.gameObject.transform.rotation = Quaternion.Euler(0, 0, (+Input.compass.magneticHeading + AnglePlayerTarget));
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_30 = __this->___ImageBoussole_9;
		NullCheck(L_30);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31;
		L_31 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_30, NULL);
		NullCheck(L_31);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_31, NULL);
		Compass_t161CD14062E71ED7324FE12ED003EE0877EE546F* L_33;
		L_33 = Input_get_compass_m4CBF5D097BC0F70475D9CC08F2EEA5C2BFCF5F34(NULL);
		NullCheck(L_33);
		float L_34;
		L_34 = Compass_get_magneticHeading_m5052F97DD5B914F629B138956D250AE2EFFE1C55(L_33, NULL);
		float L_35 = __this->___AnglePlayerTarget_12;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36;
		L_36 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (0.0f), ((float)il2cpp_codegen_add(L_34, L_35)), NULL);
		NullCheck(L_32);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_32, L_36, NULL);
		// }
		return;
	}
}
// System.Void GPS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPS__ctor_mD1DE1233CA5BBE1CB8BACA287B8594BF7B010F59 (GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* __this, const RuntimeMethod* method) 
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
// System.Void GPS/<Position>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPositionU3Ed__11__ctor_mB72485B55A8A580939E835DA1E2402EEF15ECE29 (U3CPositionU3Ed__11_tEA95EBC793A717055CD4F609EDE730772065A147* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GPS/<Position>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPositionU3Ed__11_System_IDisposable_Dispose_mBE5B3897A04A89D9C3CB582B9C6E5F1BA5EE8DAF (U3CPositionU3Ed__11_tEA95EBC793A717055CD4F609EDE730772065A147* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GPS/<Position>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPositionU3Ed__11_MoveNext_m715BF34559300BC10D5A1AF428141984F9281D6E (U3CPositionU3Ed__11_tEA95EBC793A717055CD4F609EDE730772065A147* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FB06859EF4BE17F95D098C6B4F616CBE9B6DEBA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74E3BB87021CE621B0756AC22746A4BC74568459);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9DB2115B51E0C5B47AC89B0FFD65E4F3497E1C40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA9A355B510B515024569E6C926AC3B4DBBBA6AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7E548AAC17AB2B8CA95B9C50EDCA8640D6598FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2EE8E73413D8C0EC384803067E74CF1A2A1AAFB);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_007a;
			}
			case 2:
			{
				goto IL_00ff;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Input.compass.enabled = true;
		Compass_t161CD14062E71ED7324FE12ED003EE0877EE546F* L_3;
		L_3 = Input_get_compass_m4CBF5D097BC0F70475D9CC08F2EEA5C2BFCF5F34(NULL);
		NullCheck(L_3);
		Compass_set_enabled_m26DFB64F789DA4B875359E8CE1C3E9E2270CFCA9(L_3, (bool)1, NULL);
		// Debug.LogFormat("Start");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE, L_4, NULL);
		// if (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
		bool L_5;
		L_5 = Permission_HasUserAuthorizedPermission_m2742B284815A87BA03E79B45CA8DB35CF6A78736(_stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333, NULL);
		if (L_5)
		{
			goto IL_008d;
		}
	}
	{
		// Debug.LogFormat("Ask Permission");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6;
		L_6 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteralCA9A355B510B515024569E6C926AC3B4DBBBA6AB, L_6, NULL);
		// Permission.RequestUserPermission(Permission.FineLocation);
		Permission_RequestUserPermission_mFB96123E7F4EAFB684C6E527830C892107EEDE21(_stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333, NULL);
		goto IL_0081;
	}

IL_006a:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_007a:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0081:
	{
		// while (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
		bool L_7;
		L_7 = Permission_HasUserAuthorizedPermission_m2742B284815A87BA03E79B45CA8DB35CF6A78736(_stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333, NULL);
		if (!L_7)
		{
			goto IL_006a;
		}
	}

IL_008d:
	{
		// Debug.LogFormat("Have Permission");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8;
		L_8 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteral74E3BB87021CE621B0756AC22746A4BC74568459, L_8, NULL);
		// if (!Input.location.isEnabledByUser)
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_9;
		L_9 = Input_get_location_m6F753D9369213F07EC556FF6240D723DCF3C689D(NULL);
		NullCheck(L_9);
		bool L_10;
		L_10 = LocationService_get_isEnabledByUser_m78FE3A38B1101BAF658E259C1A6B4CD9A008DCAE(L_9, NULL);
		if (L_10)
		{
			goto IL_00b9;
		}
	}
	{
		// Debug.LogFormat("No GPS on phone");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11;
		L_11 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteralD7E548AAC17AB2B8CA95B9C50EDCA8640D6598FE, L_11, NULL);
		// yield break;
		return (bool)0;
	}

IL_00b9:
	{
		// Input.location.Start(0.01f,0.01f);
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_12;
		L_12 = Input_get_location_m6F753D9369213F07EC556FF6240D723DCF3C689D(NULL);
		NullCheck(L_12);
		LocationService_Start_m5076FE201E96C086B0F9C2D8677DA69C98099F3D(L_12, (0.00999999978f), (0.00999999978f), NULL);
		// Debug.LogFormat("Start");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13;
		L_13 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE, L_13, NULL);
		// int maxWait = 20;
		__this->___U3CmaxWaitU3E5__2_3 = ((int32_t)20);
		goto IL_0116;
	}

IL_00e6:
	{
		// yield return new WaitForSeconds(1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_14 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_14, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_14);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00ff:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// maxWait--;
		int32_t L_15 = __this->___U3CmaxWaitU3E5__2_3;
		V_2 = L_15;
		int32_t L_16 = V_2;
		__this->___U3CmaxWaitU3E5__2_3 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
	}

IL_0116:
	{
		// while (Input.location.status == LocationServiceStatus.Initializing && maxWait > 0)
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_17;
		L_17 = Input_get_location_m6F753D9369213F07EC556FF6240D723DCF3C689D(NULL);
		NullCheck(L_17);
		int32_t L_18;
		L_18 = LocationService_get_status_m25B7C4012B9529265D9746BB73ED689737E9C9CD(L_17, NULL);
		if ((!(((uint32_t)L_18) == ((uint32_t)1))))
		{
			goto IL_012c;
		}
	}
	{
		int32_t L_19 = __this->___U3CmaxWaitU3E5__2_3;
		if ((((int32_t)L_19) > ((int32_t)0)))
		{
			goto IL_00e6;
		}
	}

IL_012c:
	{
		// if (maxWait < 1)
		int32_t L_20 = __this->___U3CmaxWaitU3E5__2_3;
		if ((((int32_t)L_20) >= ((int32_t)1)))
		{
			goto IL_0146;
		}
	}
	{
		// Debug.LogFormat("Timed out");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21;
		L_21 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteral9DB2115B51E0C5B47AC89B0FFD65E4F3497E1C40, L_21, NULL);
		// yield break;
		return (bool)0;
	}

IL_0146:
	{
		// if (Input.location.status == LocationServiceStatus.Failed)
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_22;
		L_22 = Input_get_location_m6F753D9369213F07EC556FF6240D723DCF3C689D(NULL);
		NullCheck(L_22);
		int32_t L_23;
		L_23 = LocationService_get_status_m25B7C4012B9529265D9746BB73ED689737E9C9CD(L_22, NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)3))))
		{
			goto IL_0164;
		}
	}
	{
		// Debug.LogFormat("Unable to determine device location");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24;
		L_24 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteralE2EE8E73413D8C0EC384803067E74CF1A2A1AAFB, L_24, NULL);
		// yield break;
		return (bool)0;
	}

IL_0164:
	{
		// InvokeRepeating("UpdateGPSData", 0.5f, 1f);
		GPS_t9C9F600CBDCEB78DE9B27572B3F849ABAB1B92B9* L_25 = V_1;
		NullCheck(L_25);
		MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D(L_25, _stringLiteral5FB06859EF4BE17F95D098C6B4F616CBE9B6DEBA, (0.5f), (1.0f), NULL);
		// }
		return (bool)0;
	}
}
// System.Object GPS/<Position>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPositionU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m485EE93369370E18DA4F8B4E9F3107E9B3A85978 (U3CPositionU3Ed__11_tEA95EBC793A717055CD4F609EDE730772065A147* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GPS/<Position>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPositionU3Ed__11_System_Collections_IEnumerator_Reset_m9A844276D905D549FC4D3DD8D63E018B869CC7EA (U3CPositionU3Ed__11_tEA95EBC793A717055CD4F609EDE730772065A147* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPositionU3Ed__11_System_Collections_IEnumerator_Reset_m9A844276D905D549FC4D3DD8D63E018B869CC7EA_RuntimeMethod_var)));
	}
}
// System.Object GPS/<Position>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPositionU3Ed__11_System_Collections_IEnumerator_get_Current_mDD9E244A9226B5E4087B57A157E871308DF61E22 (U3CPositionU3Ed__11_tEA95EBC793A717055CD4F609EDE730772065A147* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void GPStestPC::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPStestPC_Start_m4EBE49E6B99DEA0FF29B23A893F62A5EA0438A58 (GPStestPC_t21A132A3B277C06F4CFE79F2CE1728152CD61FAA* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void GPStestPC::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPStestPC_Update_m88FC50D4AE03A08C63010341460F549D26932C27 (GPStestPC_t21A132A3B277C06F4CFE79F2CE1728152CD61FAA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(pointA.isInCircle(pointA, pointB, distance));
		Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93* L_0 = __this->___pointA_4;
		Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93* L_1 = __this->___pointA_4;
		Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93* L_2 = __this->___pointB_5;
		float L_3 = __this->___distance_6;
		NullCheck(L_0);
		bool L_4;
		L_4 = Point_isInCircle_mAED3C862AE7EB289AD1348C3AD26D34687DC5368(L_0, L_1, L_2, L_3, NULL);
		bool L_5 = L_4;
		RuntimeObject* L_6 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_5);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_6, NULL);
		// }
		return;
	}
}
// System.Void GPStestPC::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPStestPC__ctor_m3F43E2239E1D42DF6FCF291608DE9434DA87BF2B (GPStestPC_t21A132A3B277C06F4CFE79F2CE1728152CD61FAA* __this, const RuntimeMethod* method) 
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
// System.Double Point::Distance(Point,Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Point_Distance_m8370E6BBFD9D731CE8B8B80F87FD1F4279444298 (Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93* __this, Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93* ___A0, Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93* ___B1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Math.Sqrt(Math.Pow(A.X - B.X, 2)+ Math.Pow(A.Y - B.Y, 2)) * Math.Pow(10,5);//en metre
		Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93* L_0 = ___A0;
		NullCheck(L_0);
		double L_1 = L_0->___X_0;
		Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93* L_2 = ___B1;
		NullCheck(L_2);
		double L_3 = L_2->___X_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3(((double)il2cpp_codegen_subtract(L_1, L_3)), (2.0), NULL);
		Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93* L_5 = ___A0;
		NullCheck(L_5);
		double L_6 = L_5->___Y_1;
		Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93* L_7 = ___B1;
		NullCheck(L_7);
		double L_8 = L_7->___Y_1;
		double L_9;
		L_9 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3(((double)il2cpp_codegen_subtract(L_6, L_8)), (2.0), NULL);
		double L_10;
		L_10 = sqrt(((double)il2cpp_codegen_add(L_4, L_9)));
		double L_11;
		L_11 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3((10.0), (5.0), NULL);
		return ((double)il2cpp_codegen_multiply(L_10, L_11));
	}
}
// System.Boolean Point::isInCircle(Point,Point,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Point_isInCircle_mAED3C862AE7EB289AD1348C3AD26D34687DC5368 (Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93* __this, Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93* ___A0, Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93* ___B1, float ___distance2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Mathf.Pow(distance, 2)  <=   Math.Pow(A.X - B.X, 2) + Math.Pow(A.Y - B.Y, 2))
		float L_0 = ___distance2;
		float L_1;
		L_1 = powf(L_0, (2.0f));
		Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93* L_2 = ___A0;
		NullCheck(L_2);
		double L_3 = L_2->___X_0;
		Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93* L_4 = ___B1;
		NullCheck(L_4);
		double L_5 = L_4->___X_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3(((double)il2cpp_codegen_subtract(L_3, L_5)), (2.0), NULL);
		Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93* L_7 = ___A0;
		NullCheck(L_7);
		double L_8 = L_7->___Y_1;
		Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93* L_9 = ___B1;
		NullCheck(L_9);
		double L_10 = L_9->___Y_1;
		double L_11;
		L_11 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3(((double)il2cpp_codegen_subtract(L_8, L_10)), (2.0), NULL);
		if ((!(((double)((double)L_1)) <= ((double)((double)il2cpp_codegen_add(L_6, L_11))))))
		{
			goto IL_0047;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0047:
	{
		// return true;
		return (bool)1;
	}
}
// System.ValueTuple`2<System.Double,System.Double> Point::DistanceAproximation(Point,Point,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t6535F6090E6D3C9A7A645F4BFD8ED400CBA8B14C Point_DistanceAproximation_m5B89299E134A852D5DDC91726CCC0C49C8F891B8 (Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93* __this, Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93* ___A0, Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93* ___B1, double ___aproximationH2, double ___aproximatioV3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_m07EDA6EDF9BDDD9DB44BAFD23DC7AB04E57428E1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double G_B3_0 = 0.0;
	{
		// double rayonAproximation = Math.Sqrt(Math.Pow(aproximationH, 2) + Math.Pow(aproximatioV, 2));
		double L_0 = ___aproximationH2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3(L_0, (2.0), NULL);
		double L_2 = ___aproximatioV3;
		double L_3;
		L_3 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3(L_2, (2.0), NULL);
		double L_4;
		L_4 = sqrt(((double)il2cpp_codegen_add(L_1, L_3)));
		V_0 = L_4;
		// double distance= Math.Sqrt(Math.Pow(A.X - B.X, 2) + Math.Pow(A.Y - B.Y, 2)) * Math.Pow(10, 5);
		Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93* L_5 = ___A0;
		NullCheck(L_5);
		double L_6 = L_5->___X_0;
		Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93* L_7 = ___B1;
		NullCheck(L_7);
		double L_8 = L_7->___X_0;
		double L_9;
		L_9 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3(((double)il2cpp_codegen_subtract(L_6, L_8)), (2.0), NULL);
		Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93* L_10 = ___A0;
		NullCheck(L_10);
		double L_11 = L_10->___Y_1;
		Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93* L_12 = ___B1;
		NullCheck(L_12);
		double L_13 = L_12->___Y_1;
		double L_14;
		L_14 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3(((double)il2cpp_codegen_subtract(L_11, L_13)), (2.0), NULL);
		double L_15;
		L_15 = sqrt(((double)il2cpp_codegen_add(L_9, L_14)));
		double L_16;
		L_16 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3((10.0), (5.0), NULL);
		V_1 = ((double)il2cpp_codegen_multiply(L_15, L_16));
		// double min = distance - rayonAproximation > 0 ? distance - rayonAproximation : 0;
		double L_17 = V_1;
		double L_18 = V_0;
		if ((((double)((double)il2cpp_codegen_subtract(L_17, L_18))) > ((double)(0.0))))
		{
			goto IL_0094;
		}
	}
	{
		G_B3_0 = (0.0);
		goto IL_0097;
	}

IL_0094:
	{
		double L_19 = V_1;
		double L_20 = V_0;
		G_B3_0 = ((double)il2cpp_codegen_subtract(L_19, L_20));
	}

IL_0097:
	{
		// double max = distance + rayonAproximation;
		double L_21 = V_1;
		double L_22 = V_0;
		V_2 = ((double)il2cpp_codegen_add(L_21, L_22));
		// return ( min        ,    max     );
		double L_23 = V_2;
		ValueTuple_2_t6535F6090E6D3C9A7A645F4BFD8ED400CBA8B14C L_24;
		memset((&L_24), 0, sizeof(L_24));
		ValueTuple_2__ctor_m07EDA6EDF9BDDD9DB44BAFD23DC7AB04E57428E1((&L_24), G_B3_0, L_23, /*hidden argument*/ValueTuple_2__ctor_m07EDA6EDF9BDDD9DB44BAFD23DC7AB04E57428E1_RuntimeMethod_var);
		return L_24;
	}
}
// System.Void Point::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point__ctor_m21FA262C838EFDA8BB37B15C5C9749F2D40973E8 (Point_t4F128496D336DF7AA8817608D59E72CEF8DBFB93* __this, const RuntimeMethod* method) 
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
// System.Void InputTest::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputTest_Update_m5B89BDED89B27048C08B6056A3FC45EA1C76B59C (InputTest_t7E37142ACC101267C13A2AC892569C03E47ABCBD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75FAF73308668FD490C851CC686D98C743D7461C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB14F2914CE5180DDDB0C1B32D64F5926B745964);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9F6B690E16E25915983F3E6C7BE53DDCC99D060);
		s_Il2CppMethodInitialized = true;
	}
	TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* V_0 = NULL;
	int32_t V_1 = 0;
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// foreach (Touch touch in Input.touches)
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_0;
		L_0 = Input_get_touches_m884B92DD9A389F7985AB275A9717AC629C258B6B(NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0094;
	}

IL_000d:
	{
		// foreach (Touch touch in Input.touches)
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// Debug.Log("Start");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE, NULL);
		// text1.text = "touch";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_5 = __this->___text1_5;
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_5, _stringLiteralD9F6B690E16E25915983F3E6C7BE53DDCC99D060);
		// if (touch.phase == TouchPhase.Began)
		int32_t L_6;
		L_6 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_2), NULL);
		if (L_6)
		{
			goto IL_0090;
		}
	}
	{
		// Debug.Log("Began");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralCB14F2914CE5180DDDB0C1B32D64F5926B745964, NULL);
		// Ray ray = Camera.main.ScreenPointToRay(touch.position);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7;
		L_7 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_2), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_8, NULL);
		NullCheck(L_7);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_10;
		L_10 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_7, L_9, NULL);
		// if (Physics.Raycast(ray,out hit))
		bool L_11;
		L_11 = Physics_Raycast_m07803863BB5A3896FA01061562532B21E1ED6D4A(L_10, (&V_3), NULL);
		if (!L_11)
		{
			goto IL_0090;
		}
	}
	{
		// Instantiate(cube, hit.point, hit.transform.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___cube_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_3), NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_3), NULL);
		NullCheck(L_14);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_12, L_13, L_15, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// text1.text = "create";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_17 = __this->___text1_5;
		NullCheck(L_17);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_17, _stringLiteral75FAF73308668FD490C851CC686D98C743D7461C);
	}

IL_0090:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0094:
	{
		// foreach (Touch touch in Input.touches)
		int32_t L_19 = V_1;
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_20 = V_0;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void InputTest::OnClickedButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputTest_OnClickedButton_m9042061CCE8DFE29A5421219AA7DE70E69843705 (InputTest_t7E37142ACC101267C13A2AC892569C03E47ABCBD* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(WaitAndPrint());
		RuntimeObject* L_0;
		L_0 = InputTest_WaitAndPrint_m1FE9AA7EA5D77033A12FAC792C19413DFCD2215E(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator InputTest::WaitAndPrint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputTest_WaitAndPrint_m1FE9AA7EA5D77033A12FAC792C19413DFCD2215E (InputTest_t7E37142ACC101267C13A2AC892569C03E47ABCBD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitAndPrintU3Ed__4_t8F8FB81EAAC148C8D6A9F6B0555D2A1ACB8D468C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitAndPrintU3Ed__4_t8F8FB81EAAC148C8D6A9F6B0555D2A1ACB8D468C* L_0 = (U3CWaitAndPrintU3Ed__4_t8F8FB81EAAC148C8D6A9F6B0555D2A1ACB8D468C*)il2cpp_codegen_object_new(U3CWaitAndPrintU3Ed__4_t8F8FB81EAAC148C8D6A9F6B0555D2A1ACB8D468C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CWaitAndPrintU3Ed__4__ctor_mDB406E187368F40F4A8D8E52C1D7D2ABDE069BBE(L_0, 0, NULL);
		U3CWaitAndPrintU3Ed__4_t8F8FB81EAAC148C8D6A9F6B0555D2A1ACB8D468C* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void InputTest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputTest__ctor_m460512F74E070DF321EEC1EA3F4D77C177EEFCF7 (InputTest_t7E37142ACC101267C13A2AC892569C03E47ABCBD* __this, const RuntimeMethod* method) 
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
// System.Void InputTest/<WaitAndPrint>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAndPrintU3Ed__4__ctor_mDB406E187368F40F4A8D8E52C1D7D2ABDE069BBE (U3CWaitAndPrintU3Ed__4_t8F8FB81EAAC148C8D6A9F6B0555D2A1ACB8D468C* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void InputTest/<WaitAndPrint>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAndPrintU3Ed__4_System_IDisposable_Dispose_m758C6E296835E62BABD4E4A73C5FE0E9A579B4F5 (U3CWaitAndPrintU3Ed__4_t8F8FB81EAAC148C8D6A9F6B0555D2A1ACB8D468C* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean InputTest/<WaitAndPrint>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitAndPrintU3Ed__4_MoveNext_m2A8DF6D1C82FD5340507852C9410C41399DA85FE (U3CWaitAndPrintU3Ed__4_t8F8FB81EAAC148C8D6A9F6B0555D2A1ACB8D468C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27F5AEF2EA3F86FEBADEC72F91210C2F3A8C2F89);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A23BFD06ECFD154AD092ED652B1B4111CD15FC);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	InputTest_t7E37142ACC101267C13A2AC892569C03E47ABCBD* V_1 = NULL;
	float V_2 = 0.0f;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		InputTest_t7E37142ACC101267C13A2AC892569C03E47ABCBD* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// text1.text = "Click";
		InputTest_t7E37142ACC101267C13A2AC892569C03E47ABCBD* L_5 = V_1;
		NullCheck(L_5);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_6 = L_5->___text1_5;
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_6, _stringLiteral47A23BFD06ECFD154AD092ED652B1B4111CD15FC);
		// print("WaitAndPrint " + Time.time);
		float L_7;
		L_7 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		V_2 = L_7;
		String_t* L_8;
		L_8 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_2), NULL);
		String_t* L_9;
		L_9 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral27F5AEF2EA3F86FEBADEC72F91210C2F3A8C2F89, L_8, NULL);
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(L_9, NULL);
		// }
		return (bool)0;
	}
}
// System.Object InputTest/<WaitAndPrint>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitAndPrintU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2834CAEC9422345FF1493BE2CFD89DAA27B599BF (U3CWaitAndPrintU3Ed__4_t8F8FB81EAAC148C8D6A9F6B0555D2A1ACB8D468C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void InputTest/<WaitAndPrint>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAndPrintU3Ed__4_System_Collections_IEnumerator_Reset_mC7FC753FF91247746F95AF9B6B0A46D8CBADD60B (U3CWaitAndPrintU3Ed__4_t8F8FB81EAAC148C8D6A9F6B0555D2A1ACB8D468C* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitAndPrintU3Ed__4_System_Collections_IEnumerator_Reset_mC7FC753FF91247746F95AF9B6B0A46D8CBADD60B_RuntimeMethod_var)));
	}
}
// System.Object InputTest/<WaitAndPrint>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitAndPrintU3Ed__4_System_Collections_IEnumerator_get_Current_m917961473778EFDA435D0C91A7CC28F32F7A6CF6 (U3CWaitAndPrintU3Ed__4_t8F8FB81EAAC148C8D6A9F6B0555D2A1ACB8D468C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void Node::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__ctor_m5DBFA7A6885EBEC3891ADE47E642413C0B376549 (Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* __this, const RuntimeMethod* method) 
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
// System.Void ChoiceClass1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChoiceClass1__ctor_m5480C27809BDB7F64876405C80477810A8219DF8 (ChoiceClass1_tE28590E2849F9AEE5894B71323BBD95F5C4B19A4* __this, const RuntimeMethod* method) 
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
// System.Void ChoiceClass2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChoiceClass2__ctor_mD8A1BDB2F63908D73E3CF8DB1A8538E29E76616F (ChoiceClass2_t9F6082C1E6C256B2EA9EB4F865FCD7F51B5250F6* __this, const RuntimeMethod* method) 
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
// System.Void ChoiceTest::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChoiceTest_Start_mD8A0D7270D0B7B3639851ABE99CD7DB9CD8FE519 (ChoiceTest_t5B34EE0F174CC0ECA14E4801CDC789164AA6E2F8* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ChoiceTest::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChoiceTest_Update_m9959D6D0F44FF1D7171F8BB6C46310DBFC220FFC (ChoiceTest_t5B34EE0F174CC0ECA14E4801CDC789164AA6E2F8* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ChoiceTest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChoiceTest__ctor_mEED446E27A813B06EBC3332EBBB38E488C1E0AB2 (ChoiceTest_t5B34EE0F174CC0ECA14E4801CDC789164AA6E2F8* __this, const RuntimeMethod* method) 
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
// System.Void ColorTest::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorTest_Start_m549989611ABE7A90B1511E5EFA1B7C40D368FE6B (ColorTest_t5B0303352CBC13E7105D6CC7A9DDF07FFD1F1E6E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(red.ToString());
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_0 = (&__this->___red_4);
		String_t* L_1;
		L_1 = Color_ToString_m0018DE2184B3377CCA6FBD72D5D47886DC669147(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_1, NULL);
		// }
		return;
	}
}
// System.Void ColorTest::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorTest_Update_m78E14F3F9391178B8BC67FA98B6B564875FEB3F9 (ColorTest_t5B0303352CBC13E7105D6CC7A9DDF07FFD1F1E6E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ColorTest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorTest__ctor_mAAE5D6EB030F9239725A2E5A0DFA23C1444B5A8A (ColorTest_t5B0303352CBC13E7105D6CC7A9DDF07FFD1F1E6E* __this, const RuntimeMethod* method) 
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
// System.Void Visibility::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Visibility__ctor_m8910EC4B04FA58078B84CD310245D02B7528E4FD (Visibility_t918BF48EBF5A0BFFBF654B3097341CAC5AA1788B* __this, const RuntimeMethod* method) 
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
// System.Void Niantic.ARDKExamples.NetworkObject::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkObject_Awake_mEE466E21DF9215BA09B92D50D9508BB764B6458C (NetworkObject_t9C9A3A74F9B000400F21C6D958C2687C315A012C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultipeerNetworkingFactory_tF258FAA4E989F1306DE3D55785C4A7201AE5C05C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkObject_OnNetworkingInitialized_mDC39973C92F37AC78C4D1977F0811D6381BA380B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MultipeerNetworkingFactory.NetworkingInitialized += OnNetworkingInitialized;
		ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727* L_0 = (ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727*)il2cpp_codegen_object_new(ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArdkEventHandler_1__ctor_m9FB2DC8CD3B72FE727B2855A1C3D4E0DE63CBDC0(L_0, __this, (intptr_t)((void*)NetworkObject_OnNetworkingInitialized_mDC39973C92F37AC78C4D1977F0811D6381BA380B_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(MultipeerNetworkingFactory_tF258FAA4E989F1306DE3D55785C4A7201AE5C05C_il2cpp_TypeInfo_var);
		MultipeerNetworkingFactory_add_NetworkingInitialized_m56CC71E74A195459B6975492F0F257EBF4C069E6(L_0, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.NetworkObject::OnNetworkingInitialized(Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.AnyMultipeerNetworkingInitializedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkObject_OnNetworkingInitialized_mDC39973C92F37AC78C4D1977F0811D6381BA380B (NetworkObject_t9C9A3A74F9B000400F21C6D958C2687C315A012C* __this, AnyMultipeerNetworkingInitializedArgs_t9E508F81618E02A064E5D69F39BF65F0C3E38FB2 ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t819D1AD68903C22AD570015EF9413414DBCBC7E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkObject_OnConnect_m037B57C1E590C5C0DD298E59FE532DF9DC5DA032_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkObject_OnConnectionFailed_m7AFF1A50AC0D7CD4FD28ED96FBE40D7AD3E72ADB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkObject_OnDisconnect_m995F7B0098C4BB2910D7F4525AA41091B16B1301_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkObject_OnKeyValueUpdated_m214BF34708C15FEC3F01DDEA740702D6D50AF4F1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _networking = args.Networking;
		AnyMultipeerNetworkingInitializedArgs_t9E508F81618E02A064E5D69F39BF65F0C3E38FB2 L_0 = ___args0;
		RuntimeObject* L_1 = L_0.___Networking_0;
		__this->____networking_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____networking_6), (void*)L_1);
		// _networking.Connected += OnConnect;
		RuntimeObject* L_2 = __this->____networking_6;
		ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB* L_3 = (ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB*)il2cpp_codegen_object_new(ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ArdkEventHandler_1__ctor_m22539F947DA2CBC7EA7478AF8B4A1DEB1EC5BB0E(L_3, __this, (intptr_t)((void*)NetworkObject_OnConnect_m037B57C1E590C5C0DD298E59FE532DF9DC5DA032_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB* >::Invoke(16 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::add_Connected(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_2, L_3);
		// _networking.Disconnected += OnDisconnect;
		RuntimeObject* L_4 = __this->____networking_6;
		ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF* L_5 = (ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF*)il2cpp_codegen_object_new(ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ArdkEventHandler_1__ctor_m606C96124A5303A0411B90E06609E41D1A96D034(L_5, __this, (intptr_t)((void*)NetworkObject_OnDisconnect_m995F7B0098C4BB2910D7F4525AA41091B16B1301_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF* >::Invoke(20 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::add_Disconnected(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.DisconnectedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_4, L_5);
		// _networking.ConnectionFailed += OnConnectionFailed;
		RuntimeObject* L_6 = __this->____networking_6;
		ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928* L_7 = (ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928*)il2cpp_codegen_object_new(ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		ArdkEventHandler_1__ctor_m3BB5E86F077CBC5F6FB0F7564554ACBB57DC0FBE(L_7, __this, (intptr_t)((void*)NetworkObject_OnConnectionFailed_m7AFF1A50AC0D7CD4FD28ED96FBE40D7AD3E72ADB_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928* >::Invoke(18 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::add_ConnectionFailed(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectionFailedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_6, L_7);
		// _networking.PersistentKeyValueUpdated += OnKeyValueUpdated;
		RuntimeObject* L_8 = __this->____networking_6;
		ArdkEventHandler_1_t819D1AD68903C22AD570015EF9413414DBCBC7E6* L_9 = (ArdkEventHandler_1_t819D1AD68903C22AD570015EF9413414DBCBC7E6*)il2cpp_codegen_object_new(ArdkEventHandler_1_t819D1AD68903C22AD570015EF9413414DBCBC7E6_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ArdkEventHandler_1__ctor_m0987D415ADF489B5C888126AF34713A0557C8862(L_9, __this, (intptr_t)((void*)NetworkObject_OnKeyValueUpdated_m214BF34708C15FEC3F01DDEA740702D6D50AF4F1_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		InterfaceActionInvoker1< ArdkEventHandler_1_t819D1AD68903C22AD570015EF9413414DBCBC7E6* >::Invoke(28 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::add_PersistentKeyValueUpdated(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PersistentKeyValueUpdatedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_8, L_9);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.NetworkObject::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkObject_OnDestroy_mDBF5FE218A79D7A24CD25BA50DACE40814DE17AC (NetworkObject_t9C9A3A74F9B000400F21C6D958C2687C315A012C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_networking != null)
		RuntimeObject* L_0 = __this->____networking_6;
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		// _networking.Leave();
		RuntimeObject* L_1 = __this->____networking_6;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(13 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::Leave() */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_1);
		// _networking.Dispose();
		RuntimeObject* L_2 = __this->____networking_6;
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
		// _networking = null;
		__this->____networking_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____networking_6), (void*)(RuntimeObject*)NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.NetworkObject::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkObject_Update_m06B6ECE1DE4C161DADEB6D46DB18822ABA9656B6 (NetworkObject_t9C9A3A74F9B000400F21C6D958C2687C315A012C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Serialize_m21CFA58C4660F7F737AAB8FE0456907846E0E5D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Serialize_mAEF9084A1E9EB765C586F8D3A5DBC006C28AB9FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorSerializer_tA90CE1FC18ACA6B0F16B821BAD357F797D4284ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformAgnosticInput_tA2741C9A9A85BC19A3FC0A000966ADEBAB901B0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringSerializer_t0D84EFD9B8788D4AE312379A22B751581AC98559_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19B7D722FFCBB1EBCC95DE76FB16F022050F3CC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F841ED2976F3423F3FED30E494E32CAA198B884);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral712BBA9190176846FD43949DC6500B24463A6E4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB9770DCA7FF4F0F27853F0DC794D0FA06AFD22D);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* V_4 = NULL;
	BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* V_5 = NULL;
	{
		// if (_networking == null || !_networking.IsConnected || PlatformAgnosticInput.touchCount <= 0)
		RuntimeObject* L_0 = __this->____networking_6;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_1 = __this->____networking_6;
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean Niantic.ARDK.Networking.IMultipeerNetworking::get_IsConnected() */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_1);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlatformAgnosticInput_tA2741C9A9A85BC19A3FC0A000966ADEBAB901B0C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = PlatformAgnosticInput_get_touchCount_m98EF58DF94ED26CBA0540AF60506983A12207178(NULL);
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_001e;
		}
	}

IL_001d:
	{
		// return;
		return;
	}

IL_001e:
	{
		// var touch = PlatformAgnosticInput.GetTouch(0);
		il2cpp_codegen_runtime_class_init_inline(PlatformAgnosticInput_tA2741C9A9A85BC19A3FC0A000966ADEBAB901B0C_il2cpp_TypeInfo_var);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_4;
		L_4 = PlatformAgnosticInput_GetTouch_mDE9A905C897DAADDED515FA41F95A3853FA1B971(0, NULL);
		V_0 = L_4;
		// if (touch.phase == TouchPhase.Began)
		int32_t L_5;
		L_5 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if (L_5)
		{
			goto IL_0147;
		}
	}
	{
		// Color newColor = Random.ColorHSV();
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Random_ColorHSV_m04ADED6D4527B089E658738A757222666BFF243C(NULL);
		V_1 = L_6;
		// _localBlob.color = newColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7 = __this->____localBlob_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = V_1;
		NullCheck(L_7);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_7, L_8);
		// _stream.Position = 0;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_9 = __this->____stream_7;
		NullCheck(L_9);
		VirtualActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_9, ((int64_t)0));
		// _stream.SetLength(0);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_10 = __this->____stream_7;
		NullCheck(L_10);
		VirtualActionInvoker1< int64_t >::Invoke(21 /* System.Void System.IO.Stream::SetLength(System.Int64) */, L_10, ((int64_t)0));
		// using (var binarySerializer = new BinarySerializer(_stream))
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_11 = __this->____stream_7;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_12 = (BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*)il2cpp_codegen_object_new(BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		BinarySerializer__ctor_m45394DC0CB272B622A5B3E905F182625C49A6FF3(L_12, L_11, NULL);
		V_4 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0079:
			{// begin finally (depth: 1)
				{
					BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_13 = V_4;
					if (!L_13)
					{
						goto IL_0084;
					}
				}
				{
					BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_14 = V_4;
					NullCheck(L_14);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_14);
				}

IL_0084:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// ColorSerializer.Instance.Serialize(binarySerializer, newColor);
			il2cpp_codegen_runtime_class_init_inline(ColorSerializer_tA90CE1FC18ACA6B0F16B821BAD357F797D4284ED_il2cpp_TypeInfo_var);
			ColorSerializer_tA90CE1FC18ACA6B0F16B821BAD357F797D4284ED* L_15 = ((ColorSerializer_tA90CE1FC18ACA6B0F16B821BAD357F797D4284ED_StaticFields*)il2cpp_codegen_static_fields_for(ColorSerializer_tA90CE1FC18ACA6B0F16B821BAD357F797D4284ED_il2cpp_TypeInfo_var))->___Instance_1;
			BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_16 = V_4;
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = V_1;
			NullCheck(L_15);
			BaseItemSerializer_1_Serialize_m21CFA58C4660F7F737AAB8FE0456907846E0E5D1(L_15, L_16, L_17, BaseItemSerializer_1_Serialize_m21CFA58C4660F7F737AAB8FE0456907846E0E5D1_RuntimeMethod_var);
			goto IL_0085;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0085:
	{
		// var value = _stream.ToArray();
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_18 = __this->____stream_7;
		NullCheck(L_18);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19;
		L_19 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(31 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_18);
		V_2 = L_19;
		// Debug.LogFormat("Inserting to persistent store <Color: {0}>", newColor);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_20;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = L_22;
		RuntimeObject* L_24 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_24);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteralDB9770DCA7FF4F0F27853F0DC794D0FA06AFD22D, L_21, NULL);
		// _networking.StorePersistentKeyValue("Color", value);
		RuntimeObject* L_25 = __this->____networking_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_2;
		NullCheck(L_25);
		InterfaceActionInvoker2< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(10 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::StorePersistentKeyValue(System.String,System.Byte[]) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_25, _stringLiteral19B7D722FFCBB1EBCC95DE76FB16F022050F3CC8, L_26);
		// _stream2.Position = 0;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_27 = __this->____stream2_8;
		NullCheck(L_27);
		VirtualActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_27, ((int64_t)0));
		// _stream2.SetLength(0);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_28 = __this->____stream2_8;
		NullCheck(L_28);
		VirtualActionInvoker1< int64_t >::Invoke(21 /* System.Void System.IO.Stream::SetLength(System.Int64) */, L_28, ((int64_t)0));
		// using (var binarySerializer2 = new BinarySerializer(_stream2))
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_29 = __this->____stream2_8;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_30 = (BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*)il2cpp_codegen_object_new(BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		BinarySerializer__ctor_m45394DC0CB272B622A5B3E905F182625C49A6FF3(L_30, L_29, NULL);
		V_5 = L_30;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00fd:
			{// begin finally (depth: 1)
				{
					BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_31 = V_5;
					if (!L_31)
					{
						goto IL_0108;
					}
				}
				{
					BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_32 = V_5;
					NullCheck(L_32);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_32);
				}

IL_0108:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// StringSerializer.Instance.Serialize(binarySerializer2, newColor.ToString());
			il2cpp_codegen_runtime_class_init_inline(StringSerializer_t0D84EFD9B8788D4AE312379A22B751581AC98559_il2cpp_TypeInfo_var);
			StringSerializer_t0D84EFD9B8788D4AE312379A22B751581AC98559* L_33 = ((StringSerializer_t0D84EFD9B8788D4AE312379A22B751581AC98559_StaticFields*)il2cpp_codegen_static_fields_for(StringSerializer_t0D84EFD9B8788D4AE312379A22B751581AC98559_il2cpp_TypeInfo_var))->___Instance_1;
			BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_34 = V_5;
			String_t* L_35;
			L_35 = Color_ToString_m0018DE2184B3377CCA6FBD72D5D47886DC669147((&V_1), NULL);
			NullCheck(L_33);
			BaseItemSerializer_1_Serialize_mAEF9084A1E9EB765C586F8D3A5DBC006C28AB9FB(L_33, L_34, L_35, BaseItemSerializer_1_Serialize_mAEF9084A1E9EB765C586F8D3A5DBC006C28AB9FB_RuntimeMethod_var);
			goto IL_0109;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0109:
	{
		// var value2 = _stream2.ToArray();
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_36 = __this->____stream2_8;
		NullCheck(L_36);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37;
		L_37 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(31 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_36);
		V_3 = L_37;
		// Debug.LogFormat("SendName : " + newColor.ToString());
		String_t* L_38;
		L_38 = Color_ToString_m0018DE2184B3377CCA6FBD72D5D47886DC669147((&V_1), NULL);
		String_t* L_39;
		L_39 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral712BBA9190176846FD43949DC6500B24463A6E4A, L_38, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40;
		L_40 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(L_39, L_40, NULL);
		// _networking.StorePersistentKeyValue("ColorName", value2);
		RuntimeObject* L_41 = __this->____networking_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = V_3;
		NullCheck(L_41);
		InterfaceActionInvoker2< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(10 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::StorePersistentKeyValue(System.String,System.Byte[]) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_41, _stringLiteral3F841ED2976F3423F3FED30E494E32CAA198B884, L_42);
	}

IL_0147:
	{
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.NetworkObject::OnConnect(Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkObject_OnConnect_m037B57C1E590C5C0DD298E59FE532DF9DC5DA032 (NetworkObject_t9C9A3A74F9B000400F21C6D958C2687C315A012C* __this, ConnectedArgs_t743850D611ABED06BEF37656F9878CA7FD852BFF ___args0, const RuntimeMethod* method) 
{
	{
		// _localBlob.gameObject.SetActive(true);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->____localBlob_5;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.NetworkObject::OnDisconnect(Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.DisconnectedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkObject_OnDisconnect_m995F7B0098C4BB2910D7F4525AA41091B16B1301 (NetworkObject_t9C9A3A74F9B000400F21C6D958C2687C315A012C* __this, DisconnectedArgs_t85B536918847AC525EAFB30C21179DDE41BCF462 ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_localBlob != null && _localBlob.gameObject != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->____localBlob_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->____localBlob_5;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// _localBlob.gameObject.SetActive(false);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = __this->____localBlob_5;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
	}

IL_0032:
	{
		// if (_serverBlob != null && _serverBlob != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7 = __this->____serverBlob_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_005f;
		}
	}
	{
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9 = __this->____serverBlob_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		// _serverBlob.gameObject.SetActive(false);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_11 = __this->____serverBlob_4;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_11, NULL);
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
	}

IL_005f:
	{
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.NetworkObject::OnConnectionFailed(Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectionFailedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkObject_OnConnectionFailed_m7AFF1A50AC0D7CD4FD28ED96FBE40D7AD3E72ADB (NetworkObject_t9C9A3A74F9B000400F21C6D958C2687C315A012C* __this, ConnectionFailedArgs_tA6F0384572A7AB910CD8D4779458D910A8591FBC ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F0359D8A221CBF3FF7A13A4AC038B30BFA09689);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogFormat("Connection failed (err code = {0})", args.ErrorCode);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		uint32_t L_2;
		L_2 = ConnectionFailedArgs_get_ErrorCode_m4D026D356ACA27B5048F3416EBBF5C7B12A791DC_inline((&___args0), NULL);
		uint32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteral9F0359D8A221CBF3FF7A13A4AC038B30BFA09689, L_1, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.NetworkObject::OnKeyValueUpdated(Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PersistentKeyValueUpdatedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkObject_OnKeyValueUpdated_m214BF34708C15FEC3F01DDEA740702D6D50AF4F1 (NetworkObject_t9C9A3A74F9B000400F21C6D958C2687C315A012C* __this, PersistentKeyValueUpdatedArgs_tBF5C837DBBB2FBBBEFE3592A869A0068135EBE6A ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Deserialize_m0DAC07DD13CC390BF791E29BCF331A3F7D4EE3E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Deserialize_m3A4FB6C1C6273C537302137638DA87979EFCA69B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorSerializer_tA90CE1FC18ACA6B0F16B821BAD357F797D4284ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringSerializer_t0D84EFD9B8788D4AE312379A22B751581AC98559_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19B7D722FFCBB1EBCC95DE76FB16F022050F3CC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F841ED2976F3423F3FED30E494E32CAA198B884);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C25A1F95ACADBA500A01BD2A901325EAA1A45FC);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* V_1 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_3 = NULL;
	BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* V_4 = NULL;
	String_t* V_5 = NULL;
	{
		// if (_serverBlob == null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->____serverBlob_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// _serverBlob.gameObject.SetActive(true);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->____serverBlob_4;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// if (args.Key == "Color")
		String_t* L_4;
		L_4 = PersistentKeyValueUpdatedArgs_get_Key_m80E7E8E7489600E2AF2D5BCDBFA98E4D8A389236_inline((&___args0), NULL);
		bool L_5;
		L_5 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_4, _stringLiteral19B7D722FFCBB1EBCC95DE76FB16F022050F3CC8, NULL);
		if (!L_5)
		{
			goto IL_0070;
		}
	}
	{
		// using (var stream = args.CreateValueReader())
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_6;
		L_6 = PersistentKeyValueUpdatedArgs_CreateValueReader_m58B48EC1E492D4CB3C4DD2C2496437A2098196B8((&___args0), NULL);
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0066:
			{// begin finally (depth: 1)
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_7 = V_0;
					if (!L_7)
					{
						goto IL_006f;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_8 = V_0;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_006f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// using (var binaryDeserializer = new BinaryDeserializer(stream))
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_9 = V_0;
				BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_10 = (BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1*)il2cpp_codegen_object_new(BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1_il2cpp_TypeInfo_var);
				NullCheck(L_10);
				BinaryDeserializer__ctor_mDD79DF6C7453224BEE20972579E565AA72533DEF(L_10, L_9, NULL);
				V_1 = L_10;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_005c_1:
					{// begin finally (depth: 2)
						{
							BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_11 = V_1;
							if (!L_11)
							{
								goto IL_0065_1;
							}
						}
						{
							BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_12 = V_1;
							NullCheck(L_12);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_12);
						}

IL_0065_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					// var color = ColorSerializer.Instance.Deserialize(binaryDeserializer);
					il2cpp_codegen_runtime_class_init_inline(ColorSerializer_tA90CE1FC18ACA6B0F16B821BAD357F797D4284ED_il2cpp_TypeInfo_var);
					ColorSerializer_tA90CE1FC18ACA6B0F16B821BAD357F797D4284ED* L_13 = ((ColorSerializer_tA90CE1FC18ACA6B0F16B821BAD357F797D4284ED_StaticFields*)il2cpp_codegen_static_fields_for(ColorSerializer_tA90CE1FC18ACA6B0F16B821BAD357F797D4284ED_il2cpp_TypeInfo_var))->___Instance_1;
					BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_14 = V_1;
					NullCheck(L_13);
					Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15;
					L_15 = BaseItemSerializer_1_Deserialize_m3A4FB6C1C6273C537302137638DA87979EFCA69B(L_13, L_14, BaseItemSerializer_1_Deserialize_m3A4FB6C1C6273C537302137638DA87979EFCA69B_RuntimeMethod_var);
					V_2 = L_15;
					// _serverBlob.color = color;
					Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->____serverBlob_4;
					Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = V_2;
					NullCheck(L_16);
					VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_16, L_17);
					// }
					goto IL_0070;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0070:
	{
		// if (args.Key == "ColorName")
		String_t* L_18;
		L_18 = PersistentKeyValueUpdatedArgs_get_Key_m80E7E8E7489600E2AF2D5BCDBFA98E4D8A389236_inline((&___args0), NULL);
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteral3F841ED2976F3423F3FED30E494E32CAA198B884, NULL);
		if (!L_19)
		{
			goto IL_00cf;
		}
	}
	{
		// using (var stream = args.CreateValueReader())
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_20;
		L_20 = PersistentKeyValueUpdatedArgs_CreateValueReader_m58B48EC1E492D4CB3C4DD2C2496437A2098196B8((&___args0), NULL);
		V_3 = L_20;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c5:
			{// begin finally (depth: 1)
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_21 = V_3;
					if (!L_21)
					{
						goto IL_00ce;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_22 = V_3;
					NullCheck(L_22);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_22);
				}

IL_00ce:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// using (var binaryDeserializer = new BinaryDeserializer(stream))
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_23 = V_3;
				BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_24 = (BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1*)il2cpp_codegen_object_new(BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1_il2cpp_TypeInfo_var);
				NullCheck(L_24);
				BinaryDeserializer__ctor_mDD79DF6C7453224BEE20972579E565AA72533DEF(L_24, L_23, NULL);
				V_4 = L_24;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00b9_1:
					{// begin finally (depth: 2)
						{
							BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_25 = V_4;
							if (!L_25)
							{
								goto IL_00c4_1;
							}
						}
						{
							BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_26 = V_4;
							NullCheck(L_26);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_26);
						}

IL_00c4_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					// var color = StringSerializer.Instance.Deserialize(binaryDeserializer);
					il2cpp_codegen_runtime_class_init_inline(StringSerializer_t0D84EFD9B8788D4AE312379A22B751581AC98559_il2cpp_TypeInfo_var);
					StringSerializer_t0D84EFD9B8788D4AE312379A22B751581AC98559* L_27 = ((StringSerializer_t0D84EFD9B8788D4AE312379A22B751581AC98559_StaticFields*)il2cpp_codegen_static_fields_for(StringSerializer_t0D84EFD9B8788D4AE312379A22B751581AC98559_il2cpp_TypeInfo_var))->___Instance_1;
					BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_28 = V_4;
					NullCheck(L_27);
					String_t* L_29;
					L_29 = BaseItemSerializer_1_Deserialize_m0DAC07DD13CC390BF791E29BCF331A3F7D4EE3E8(L_27, L_28, BaseItemSerializer_1_Deserialize_m0DAC07DD13CC390BF791E29BCF331A3F7D4EE3E8_RuntimeMethod_var);
					V_5 = L_29;
					// Debug.LogFormat("Receive Color Name : " + color);
					String_t* L_30 = V_5;
					String_t* L_31;
					L_31 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral8C25A1F95ACADBA500A01BD2A901325EAA1A45FC, L_30, NULL);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32;
					L_32 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
					il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
					Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(L_31, L_32, NULL);
					// }
					goto IL_00cf;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00cf:
	{
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.NetworkObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkObject__ctor_m20FF0C54306A462E6E5226A4DC1FB2B87CE23DAB (NetworkObject_t9C9A3A74F9B000400F21C6D958C2687C315A012C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly MemoryStream _stream = new MemoryStream(100);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MemoryStream__ctor_m9E93692A2BB0E34119603FF6A5D44F6A132052E8(L_0, ((int32_t)100), NULL);
		__this->____stream_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stream_7), (void*)L_0);
		// private readonly MemoryStream _stream2 = new MemoryStream(100);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MemoryStream__ctor_m9E93692A2BB0E34119603FF6A5D44F6A132052E8(L_1, ((int32_t)100), NULL);
		__this->____stream2_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stream2_8), (void*)L_1);
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
// System.Void Niantic.ARDKExamples.PersistentKeyValueChoice::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentKeyValueChoice_Awake_mBAB5480475209CA49FC21FCDAD6F01799C9664B0 (PersistentKeyValueChoice_t265703E17D456F9DBAB63533333481BDE36F4314* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultipeerNetworkingFactory_tF258FAA4E989F1306DE3D55785C4A7201AE5C05C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PersistentKeyValueChoice_OnNetworkingInitialized_m0357C75FD87B37D46F8B5FB21E877C593846AD85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PersistentKeyValueChoice_t265703E17D456F9DBAB63533333481BDE36F4314_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MultipeerNetworkingFactory.NetworkingInitialized += OnNetworkingInitialized;
		ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727* L_0 = (ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727*)il2cpp_codegen_object_new(ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArdkEventHandler_1__ctor_m9FB2DC8CD3B72FE727B2855A1C3D4E0DE63CBDC0(L_0, __this, (intptr_t)((void*)PersistentKeyValueChoice_OnNetworkingInitialized_m0357C75FD87B37D46F8B5FB21E877C593846AD85_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(MultipeerNetworkingFactory_tF258FAA4E989F1306DE3D55785C4A7201AE5C05C_il2cpp_TypeInfo_var);
		MultipeerNetworkingFactory_add_NetworkingInitialized_m56CC71E74A195459B6975492F0F257EBF4C069E6(L_0, NULL);
		// MemoryChoice = choice;
		ChoiceClass1_tE28590E2849F9AEE5894B71323BBD95F5C4B19A4* L_1 = __this->___choice_10;
		__this->___MemoryChoice_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MemoryChoice_11), (void*)L_1);
		// instance = this;
		((PersistentKeyValueChoice_t265703E17D456F9DBAB63533333481BDE36F4314_StaticFields*)il2cpp_codegen_static_fields_for(PersistentKeyValueChoice_t265703E17D456F9DBAB63533333481BDE36F4314_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((PersistentKeyValueChoice_t265703E17D456F9DBAB63533333481BDE36F4314_StaticFields*)il2cpp_codegen_static_fields_for(PersistentKeyValueChoice_t265703E17D456F9DBAB63533333481BDE36F4314_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Collections.IEnumerator Niantic.ARDKExamples.PersistentKeyValueChoice::WaitForReset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PersistentKeyValueChoice_WaitForReset_m7157A5A7AB21E6198BF1CDDFAD0E045C303B8D1A (PersistentKeyValueChoice_t265703E17D456F9DBAB63533333481BDE36F4314* __this, float ___sec0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitForResetU3Ed__11_t67412F530C268FAEE8757D6065DCCAB58D1AF1F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitForResetU3Ed__11_t67412F530C268FAEE8757D6065DCCAB58D1AF1F9* L_0 = (U3CWaitForResetU3Ed__11_t67412F530C268FAEE8757D6065DCCAB58D1AF1F9*)il2cpp_codegen_object_new(U3CWaitForResetU3Ed__11_t67412F530C268FAEE8757D6065DCCAB58D1AF1F9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CWaitForResetU3Ed__11__ctor_mD06DD2EEE8C791ED3D15F0265FC0279F09769FF9(L_0, 0, NULL);
		U3CWaitForResetU3Ed__11_t67412F530C268FAEE8757D6065DCCAB58D1AF1F9* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CWaitForResetU3Ed__11_t67412F530C268FAEE8757D6065DCCAB58D1AF1F9* L_2 = L_1;
		float L_3 = ___sec0;
		NullCheck(L_2);
		L_2->___sec_2 = L_3;
		return L_2;
	}
}
// System.Void Niantic.ARDKExamples.PersistentKeyValueChoice::OnNetworkingInitialized(Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.AnyMultipeerNetworkingInitializedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentKeyValueChoice_OnNetworkingInitialized_m0357C75FD87B37D46F8B5FB21E877C593846AD85 (PersistentKeyValueChoice_t265703E17D456F9DBAB63533333481BDE36F4314* __this, AnyMultipeerNetworkingInitializedArgs_t9E508F81618E02A064E5D69F39BF65F0C3E38FB2 ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t819D1AD68903C22AD570015EF9413414DBCBC7E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PersistentKeyValueChoice_OnConnect_m450E1B011272599BC25D87005A02C9006D191638_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PersistentKeyValueChoice_OnConnectionFailed_m1AEF7BEF2D3E3EDC874BD1FE374A89DCCB2B6B93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PersistentKeyValueChoice_OnDisconnect_m4858B62952A973D8F58A0884D5629747A683C9F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PersistentKeyValueChoice_OnKeyValueUpdated_m06C752D78209AEA2B10891E2A976B0DA0DC9215B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _networking = args.Networking;
		AnyMultipeerNetworkingInitializedArgs_t9E508F81618E02A064E5D69F39BF65F0C3E38FB2 L_0 = ___args0;
		RuntimeObject* L_1 = L_0.___Networking_0;
		__this->____networking_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____networking_12), (void*)L_1);
		// _networking.Connected += OnConnect;
		RuntimeObject* L_2 = __this->____networking_12;
		ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB* L_3 = (ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB*)il2cpp_codegen_object_new(ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ArdkEventHandler_1__ctor_m22539F947DA2CBC7EA7478AF8B4A1DEB1EC5BB0E(L_3, __this, (intptr_t)((void*)PersistentKeyValueChoice_OnConnect_m450E1B011272599BC25D87005A02C9006D191638_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB* >::Invoke(16 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::add_Connected(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_2, L_3);
		// _networking.Disconnected += OnDisconnect;
		RuntimeObject* L_4 = __this->____networking_12;
		ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF* L_5 = (ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF*)il2cpp_codegen_object_new(ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ArdkEventHandler_1__ctor_m606C96124A5303A0411B90E06609E41D1A96D034(L_5, __this, (intptr_t)((void*)PersistentKeyValueChoice_OnDisconnect_m4858B62952A973D8F58A0884D5629747A683C9F8_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF* >::Invoke(20 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::add_Disconnected(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.DisconnectedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_4, L_5);
		// _networking.ConnectionFailed += OnConnectionFailed;
		RuntimeObject* L_6 = __this->____networking_12;
		ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928* L_7 = (ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928*)il2cpp_codegen_object_new(ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		ArdkEventHandler_1__ctor_m3BB5E86F077CBC5F6FB0F7564554ACBB57DC0FBE(L_7, __this, (intptr_t)((void*)PersistentKeyValueChoice_OnConnectionFailed_m1AEF7BEF2D3E3EDC874BD1FE374A89DCCB2B6B93_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928* >::Invoke(18 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::add_ConnectionFailed(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectionFailedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_6, L_7);
		// _networking.PersistentKeyValueUpdated += OnKeyValueUpdated;
		RuntimeObject* L_8 = __this->____networking_12;
		ArdkEventHandler_1_t819D1AD68903C22AD570015EF9413414DBCBC7E6* L_9 = (ArdkEventHandler_1_t819D1AD68903C22AD570015EF9413414DBCBC7E6*)il2cpp_codegen_object_new(ArdkEventHandler_1_t819D1AD68903C22AD570015EF9413414DBCBC7E6_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ArdkEventHandler_1__ctor_m0987D415ADF489B5C888126AF34713A0557C8862(L_9, __this, (intptr_t)((void*)PersistentKeyValueChoice_OnKeyValueUpdated_m06C752D78209AEA2B10891E2A976B0DA0DC9215B_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		InterfaceActionInvoker1< ArdkEventHandler_1_t819D1AD68903C22AD570015EF9413414DBCBC7E6* >::Invoke(28 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::add_PersistentKeyValueUpdated(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PersistentKeyValueUpdatedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_8, L_9);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.PersistentKeyValueChoice::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentKeyValueChoice_OnDestroy_m00A1CC42D234BC92F0E1E2B46D9DEA37FEAF264A (PersistentKeyValueChoice_t265703E17D456F9DBAB63533333481BDE36F4314* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_networking != null)
		RuntimeObject* L_0 = __this->____networking_12;
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		// _networking.Leave();
		RuntimeObject* L_1 = __this->____networking_12;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(13 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::Leave() */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_1);
		// _networking.Dispose();
		RuntimeObject* L_2 = __this->____networking_12;
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
		// _networking = null;
		__this->____networking_12 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____networking_12), (void*)(RuntimeObject*)NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.PersistentKeyValueChoice::OnClickedButton1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentKeyValueChoice_OnClickedButton1_m0132C07C26DAD6466D3484142D6A6F4E4A844224 (PersistentKeyValueChoice_t265703E17D456F9DBAB63533333481BDE36F4314* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Serialize_mA7702F1F6D4B6D8768B9451E1AD64855FC8B7DFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Contains_TisRole_t053FF4A4C848D01EDA0F9F49F39A1BB5BB335A8C_m64BA73BDF7E453ABF9A0FA8266766DB4A4B73459_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16Serializer_t08895AEDFBC84DFB57677B812CFF6FF8D3993F27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformAgnosticInput_tA2741C9A9A85BC19A3FC0A000966ADEBAB901B0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C6E966011D7EE59D80D0B69AEAEE4683F646BF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral916F6B1D0AAD57876A2BCB38638F93F526C3901E);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// if (_networking == null || !_networking.IsConnected || PlatformAgnosticInput.touchCount <= 0)
		RuntimeObject* L_0 = __this->____networking_12;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_1 = __this->____networking_12;
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean Niantic.ARDK.Networking.IMultipeerNetworking::get_IsConnected() */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_1);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlatformAgnosticInput_tA2741C9A9A85BC19A3FC0A000966ADEBAB901B0C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = PlatformAgnosticInput_get_touchCount_m98EF58DF94ED26CBA0540AF60506983A12207178(NULL);
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_001e;
		}
	}

IL_001d:
	{
		// return;
		return;
	}

IL_001e:
	{
		// if (!choice.visibilitys.Decide.Contains(YourRole))
		ChoiceClass1_tE28590E2849F9AEE5894B71323BBD95F5C4B19A4* L_4 = __this->___choice_10;
		NullCheck(L_4);
		Visibility_t918BF48EBF5A0BFFBF654B3097341CAC5AA1788B* L_5 = L_4->___visibilitys_1;
		NullCheck(L_5);
		RoleU5BU5D_tC247448952C7237A189DBE274942E63D6BF79F4C* L_6 = L_5->___Decide_0;
		int32_t L_7 = __this->___YourRole_9;
		bool L_8;
		L_8 = Enumerable_Contains_TisRole_t053FF4A4C848D01EDA0F9F49F39A1BB5BB335A8C_m64BA73BDF7E453ABF9A0FA8266766DB4A4B73459((RuntimeObject*)L_6, L_7, Enumerable_Contains_TisRole_t053FF4A4C848D01EDA0F9F49F39A1BB5BB335A8C_m64BA73BDF7E453ABF9A0FA8266766DB4A4B73459_RuntimeMethod_var);
		if (L_8)
		{
			goto IL_003c;
		}
	}
	{
		// return;
		return;
	}

IL_003c:
	{
		// _stream.Position = 0;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_9 = __this->____stream_13;
		NullCheck(L_9);
		VirtualActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_9, ((int64_t)0));
		// _stream.SetLength(0);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_10 = __this->____stream_13;
		NullCheck(L_10);
		VirtualActionInvoker1< int64_t >::Invoke(21 /* System.Void System.IO.Stream::SetLength(System.Int64) */, L_10, ((int64_t)0));
		// using (var binarySerializer = new BinarySerializer(_stream))
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_11 = __this->____stream_13;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_12 = (BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*)il2cpp_codegen_object_new(BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		BinarySerializer__ctor_m45394DC0CB272B622A5B3E905F182625C49A6FF3(L_12, L_11, NULL);
		V_1 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0070:
			{// begin finally (depth: 1)
				{
					BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_13 = V_1;
					if (!L_13)
					{
						goto IL_0079;
					}
				}
				{
					BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_14 = V_1;
					NullCheck(L_14);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_14);
				}

IL_0079:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Int16Serializer.Instance.Serialize(binarySerializer, 1);
			il2cpp_codegen_runtime_class_init_inline(Int16Serializer_t08895AEDFBC84DFB57677B812CFF6FF8D3993F27_il2cpp_TypeInfo_var);
			Int16Serializer_t08895AEDFBC84DFB57677B812CFF6FF8D3993F27* L_15 = ((Int16Serializer_t08895AEDFBC84DFB57677B812CFF6FF8D3993F27_StaticFields*)il2cpp_codegen_static_fields_for(Int16Serializer_t08895AEDFBC84DFB57677B812CFF6FF8D3993F27_il2cpp_TypeInfo_var))->___Instance_1;
			BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_16 = V_1;
			NullCheck(L_15);
			BaseItemSerializer_1_Serialize_mA7702F1F6D4B6D8768B9451E1AD64855FC8B7DFD(L_15, L_16, (int16_t)1, BaseItemSerializer_1_Serialize_mA7702F1F6D4B6D8768B9451E1AD64855FC8B7DFD_RuntimeMethod_var);
			goto IL_007a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007a:
	{
		// var value = _stream.ToArray();
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_17 = __this->____stream_13;
		NullCheck(L_17);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18;
		L_18 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(31 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_17);
		V_0 = L_18;
		// Debug.LogFormat("Send : " + 1);
		V_2 = 1;
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_20;
		L_20 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral4C6E966011D7EE59D80D0B69AEAEE4683F646BF3, L_19, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21;
		L_21 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(L_20, L_21, NULL);
		// _networking.StorePersistentKeyValue("State", value);
		RuntimeObject* L_22 = __this->____networking_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_0;
		NullCheck(L_22);
		InterfaceActionInvoker2< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(10 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::StorePersistentKeyValue(System.String,System.Byte[]) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_22, _stringLiteral916F6B1D0AAD57876A2BCB38638F93F526C3901E, L_23);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.PersistentKeyValueChoice::OnClickedButton2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentKeyValueChoice_OnClickedButton2_m7ED2EE5EBA314A8568301E6FDC71749D5099406F (PersistentKeyValueChoice_t265703E17D456F9DBAB63533333481BDE36F4314* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Serialize_mA7702F1F6D4B6D8768B9451E1AD64855FC8B7DFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Contains_TisRole_t053FF4A4C848D01EDA0F9F49F39A1BB5BB335A8C_m64BA73BDF7E453ABF9A0FA8266766DB4A4B73459_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16Serializer_t08895AEDFBC84DFB57677B812CFF6FF8D3993F27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformAgnosticInput_tA2741C9A9A85BC19A3FC0A000966ADEBAB901B0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C6E966011D7EE59D80D0B69AEAEE4683F646BF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral916F6B1D0AAD57876A2BCB38638F93F526C3901E);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// if (_networking == null || !_networking.IsConnected || PlatformAgnosticInput.touchCount <= 0)
		RuntimeObject* L_0 = __this->____networking_12;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_1 = __this->____networking_12;
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean Niantic.ARDK.Networking.IMultipeerNetworking::get_IsConnected() */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_1);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlatformAgnosticInput_tA2741C9A9A85BC19A3FC0A000966ADEBAB901B0C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = PlatformAgnosticInput_get_touchCount_m98EF58DF94ED26CBA0540AF60506983A12207178(NULL);
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_001e;
		}
	}

IL_001d:
	{
		// return;
		return;
	}

IL_001e:
	{
		// if (!choice.visibilitys.Decide.Contains(YourRole))
		ChoiceClass1_tE28590E2849F9AEE5894B71323BBD95F5C4B19A4* L_4 = __this->___choice_10;
		NullCheck(L_4);
		Visibility_t918BF48EBF5A0BFFBF654B3097341CAC5AA1788B* L_5 = L_4->___visibilitys_1;
		NullCheck(L_5);
		RoleU5BU5D_tC247448952C7237A189DBE274942E63D6BF79F4C* L_6 = L_5->___Decide_0;
		int32_t L_7 = __this->___YourRole_9;
		bool L_8;
		L_8 = Enumerable_Contains_TisRole_t053FF4A4C848D01EDA0F9F49F39A1BB5BB335A8C_m64BA73BDF7E453ABF9A0FA8266766DB4A4B73459((RuntimeObject*)L_6, L_7, Enumerable_Contains_TisRole_t053FF4A4C848D01EDA0F9F49F39A1BB5BB335A8C_m64BA73BDF7E453ABF9A0FA8266766DB4A4B73459_RuntimeMethod_var);
		if (L_8)
		{
			goto IL_003c;
		}
	}
	{
		// return;
		return;
	}

IL_003c:
	{
		// _stream.Position = 0;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_9 = __this->____stream_13;
		NullCheck(L_9);
		VirtualActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_9, ((int64_t)0));
		// _stream.SetLength(0);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_10 = __this->____stream_13;
		NullCheck(L_10);
		VirtualActionInvoker1< int64_t >::Invoke(21 /* System.Void System.IO.Stream::SetLength(System.Int64) */, L_10, ((int64_t)0));
		// using (var binarySerializer = new BinarySerializer(_stream))
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_11 = __this->____stream_13;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_12 = (BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*)il2cpp_codegen_object_new(BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		BinarySerializer__ctor_m45394DC0CB272B622A5B3E905F182625C49A6FF3(L_12, L_11, NULL);
		V_1 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0070:
			{// begin finally (depth: 1)
				{
					BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_13 = V_1;
					if (!L_13)
					{
						goto IL_0079;
					}
				}
				{
					BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_14 = V_1;
					NullCheck(L_14);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_14);
				}

IL_0079:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Int16Serializer.Instance.Serialize(binarySerializer, 2);
			il2cpp_codegen_runtime_class_init_inline(Int16Serializer_t08895AEDFBC84DFB57677B812CFF6FF8D3993F27_il2cpp_TypeInfo_var);
			Int16Serializer_t08895AEDFBC84DFB57677B812CFF6FF8D3993F27* L_15 = ((Int16Serializer_t08895AEDFBC84DFB57677B812CFF6FF8D3993F27_StaticFields*)il2cpp_codegen_static_fields_for(Int16Serializer_t08895AEDFBC84DFB57677B812CFF6FF8D3993F27_il2cpp_TypeInfo_var))->___Instance_1;
			BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_16 = V_1;
			NullCheck(L_15);
			BaseItemSerializer_1_Serialize_mA7702F1F6D4B6D8768B9451E1AD64855FC8B7DFD(L_15, L_16, (int16_t)2, BaseItemSerializer_1_Serialize_mA7702F1F6D4B6D8768B9451E1AD64855FC8B7DFD_RuntimeMethod_var);
			goto IL_007a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007a:
	{
		// var value = _stream.ToArray();
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_17 = __this->____stream_13;
		NullCheck(L_17);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18;
		L_18 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(31 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_17);
		V_0 = L_18;
		// Debug.LogFormat("Send : " + 2);
		V_2 = 2;
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_20;
		L_20 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral4C6E966011D7EE59D80D0B69AEAEE4683F646BF3, L_19, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21;
		L_21 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(L_20, L_21, NULL);
		// _networking.StorePersistentKeyValue("State", value);
		RuntimeObject* L_22 = __this->____networking_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_0;
		NullCheck(L_22);
		InterfaceActionInvoker2< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(10 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::StorePersistentKeyValue(System.String,System.Byte[]) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_22, _stringLiteral916F6B1D0AAD57876A2BCB38638F93F526C3901E, L_23);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.PersistentKeyValueChoice::OnClickedReset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentKeyValueChoice_OnClickedReset_m076FD8608983E63117D99D8BBBFFD2C29CCEA672 (PersistentKeyValueChoice_t265703E17D456F9DBAB63533333481BDE36F4314* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Serialize_mA7702F1F6D4B6D8768B9451E1AD64855FC8B7DFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16Serializer_t08895AEDFBC84DFB57677B812CFF6FF8D3993F27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AC0F53BDC2368ECCEB10EFDAA1C5CE853AB51F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral916F6B1D0AAD57876A2BCB38638F93F526C3901E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA448BC9C846BA7E63B5E1343958878B4A69082F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA74ACAA1F61DE0EB348EC03946685B0B6270CB36);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* V_1 = NULL;
	{
		// Debug.Log("StartReset");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralA448BC9C846BA7E63B5E1343958878B4A69082F0, NULL);
		// if (_networking == null || !_networking.IsConnected) //   || PlatformAgnosticInput.touchCount <= 0
		RuntimeObject* L_0 = __this->____networking_12;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = __this->____networking_12;
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean Niantic.ARDK.Networking.IMultipeerNetworking::get_IsConnected() */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_1);
		if (L_2)
		{
			goto IL_0020;
		}
	}

IL_001f:
	{
		// return;
		return;
	}

IL_0020:
	{
		// Debug.Log("Reset");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralA74ACAA1F61DE0EB348EC03946685B0B6270CB36, NULL);
		// _stream.Position = 0;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = __this->____stream_13;
		NullCheck(L_3);
		VirtualActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_3, ((int64_t)0));
		// _stream.SetLength(0);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_4 = __this->____stream_13;
		NullCheck(L_4);
		VirtualActionInvoker1< int64_t >::Invoke(21 /* System.Void System.IO.Stream::SetLength(System.Int64) */, L_4, ((int64_t)0));
		// using (var binarySerializer = new BinarySerializer(_stream))
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_5 = __this->____stream_13;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_6 = (BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*)il2cpp_codegen_object_new(BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		BinarySerializer__ctor_m45394DC0CB272B622A5B3E905F182625C49A6FF3(L_6, L_5, NULL);
		V_1 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005e:
			{// begin finally (depth: 1)
				{
					BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_7 = V_1;
					if (!L_7)
					{
						goto IL_0067;
					}
				}
				{
					BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_8 = V_1;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_0067:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Int16Serializer.Instance.Serialize(binarySerializer, 3);
			il2cpp_codegen_runtime_class_init_inline(Int16Serializer_t08895AEDFBC84DFB57677B812CFF6FF8D3993F27_il2cpp_TypeInfo_var);
			Int16Serializer_t08895AEDFBC84DFB57677B812CFF6FF8D3993F27* L_9 = ((Int16Serializer_t08895AEDFBC84DFB57677B812CFF6FF8D3993F27_StaticFields*)il2cpp_codegen_static_fields_for(Int16Serializer_t08895AEDFBC84DFB57677B812CFF6FF8D3993F27_il2cpp_TypeInfo_var))->___Instance_1;
			BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_10 = V_1;
			NullCheck(L_9);
			BaseItemSerializer_1_Serialize_mA7702F1F6D4B6D8768B9451E1AD64855FC8B7DFD(L_9, L_10, (int16_t)3, BaseItemSerializer_1_Serialize_mA7702F1F6D4B6D8768B9451E1AD64855FC8B7DFD_RuntimeMethod_var);
			goto IL_0068;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0068:
	{
		// var value = _stream.ToArray();
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_11 = __this->____stream_13;
		NullCheck(L_11);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
		L_12 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(31 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_11);
		V_0 = L_12;
		// Debug.LogFormat("Send : " + "Reset");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13;
		L_13 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteral1AC0F53BDC2368ECCEB10EFDAA1C5CE853AB51F0, L_13, NULL);
		// _networking.StorePersistentKeyValue("State", value);
		RuntimeObject* L_14 = __this->____networking_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_0;
		NullCheck(L_14);
		InterfaceActionInvoker2< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(10 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::StorePersistentKeyValue(System.String,System.Byte[]) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_14, _stringLiteral916F6B1D0AAD57876A2BCB38638F93F526C3901E, L_15);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.PersistentKeyValueChoice::OnConnect(Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentKeyValueChoice_OnConnect_m450E1B011272599BC25D87005A02C9006D191638 (PersistentKeyValueChoice_t265703E17D456F9DBAB63533333481BDE36F4314* __this, ConnectedArgs_t743850D611ABED06BEF37656F9878CA7FD852BFF ___args0, const RuntimeMethod* method) 
{
	{
		// YourRole = (Role)RolesSelection.value;
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_0 = __this->___RolesSelection_8;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = TMP_Dropdown_get_value_m5916A6D1897431E8ED789FEC24551A311D1B5C70_inline(L_0, NULL);
		__this->___YourRole_9 = L_1;
		// RolesSelection.gameObject.SetActive(false);
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_2 = __this->___RolesSelection_8;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// StartCoroutine(WaitForReset(2));
		RuntimeObject* L_4;
		L_4 = PersistentKeyValueChoice_WaitForReset_m7157A5A7AB21E6198BF1CDDFAD0E045C303B8D1A(__this, (2.0f), NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.PersistentKeyValueChoice::OnDisconnect(Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.DisconnectedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentKeyValueChoice_OnDisconnect_m4858B62952A973D8F58A0884D5629747A683C9F8 (PersistentKeyValueChoice_t265703E17D456F9DBAB63533333481BDE36F4314* __this, DisconnectedArgs_t85B536918847AC525EAFB30C21179DDE41BCF462 ___args0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.PersistentKeyValueChoice::OnConnectionFailed(Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectionFailedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentKeyValueChoice_OnConnectionFailed_m1AEF7BEF2D3E3EDC874BD1FE374A89DCCB2B6B93 (PersistentKeyValueChoice_t265703E17D456F9DBAB63533333481BDE36F4314* __this, ConnectionFailedArgs_tA6F0384572A7AB910CD8D4779458D910A8591FBC ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F0359D8A221CBF3FF7A13A4AC038B30BFA09689);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogFormat("Connection failed (err code = {0})", args.ErrorCode);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		uint32_t L_2;
		L_2 = ConnectionFailedArgs_get_ErrorCode_m4D026D356ACA27B5048F3416EBBF5C7B12A791DC_inline((&___args0), NULL);
		uint32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteral9F0359D8A221CBF3FF7A13A4AC038B30BFA09689, L_1, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.PersistentKeyValueChoice::OnKeyValueUpdated(Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PersistentKeyValueUpdatedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentKeyValueChoice_OnKeyValueUpdated_m06C752D78209AEA2B10891E2A976B0DA0DC9215B (PersistentKeyValueChoice_t265703E17D456F9DBAB63533333481BDE36F4314* __this, PersistentKeyValueUpdatedArgs_tBF5C837DBBB2FBBBEFE3592A869A0068135EBE6A ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Deserialize_m7A4F86FE6A3D9FACD34B7EE6999949140C978CA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Contains_TisRole_t053FF4A4C848D01EDA0F9F49F39A1BB5BB335A8C_m64BA73BDF7E453ABF9A0FA8266766DB4A4B73459_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16Serializer_t08895AEDFBC84DFB57677B812CFF6FF8D3993F27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14652B2A6A161F42FC015E8CECDFB515D175761C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral916F6B1D0AAD57876A2BCB38638F93F526C3901E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA3EB2281C26DA4DD928082294669B22BE9EF168);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB6C1F66CC7E11F32F17E21E52D7FF100BE4B4D0);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* V_1 = NULL;
	int32_t V_2 = 0;
	int16_t G_B9_0 = 0;
	int16_t G_B4_0 = 0;
	int16_t G_B6_0 = 0;
	int16_t G_B5_0 = 0;
	int16_t G_B7_0 = 0;
	int16_t G_B8_0 = 0;
	int16_t G_B15_0 = 0;
	int16_t G_B10_0 = 0;
	int16_t G_B12_0 = 0;
	int16_t G_B11_0 = 0;
	int16_t G_B13_0 = 0;
	int16_t G_B14_0 = 0;
	{
		// if (args.Key == "State")
		String_t* L_0;
		L_0 = PersistentKeyValueUpdatedArgs_get_Key_m80E7E8E7489600E2AF2D5BCDBFA98E4D8A389236_inline((&___args0), NULL);
		bool L_1;
		L_1 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_0, _stringLiteral916F6B1D0AAD57876A2BCB38638F93F526C3901E, NULL);
		if (!L_1)
		{
			goto IL_02c0;
		}
	}
	{
		// using (var stream = args.CreateValueReader())
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2;
		L_2 = PersistentKeyValueUpdatedArgs_CreateValueReader_m58B48EC1E492D4CB3C4DD2C2496437A2098196B8((&___args0), NULL);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_02b6:
			{// begin finally (depth: 1)
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = V_0;
					if (!L_3)
					{
						goto IL_02bf;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_4 = V_0;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_02bf:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// using (var binaryDeserializer = new BinaryDeserializer(stream))
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_5 = V_0;
				BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_6 = (BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1*)il2cpp_codegen_object_new(BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1_il2cpp_TypeInfo_var);
				NullCheck(L_6);
				BinaryDeserializer__ctor_mDD79DF6C7453224BEE20972579E565AA72533DEF(L_6, L_5, NULL);
				V_1 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_02ac_1:
					{// begin finally (depth: 2)
						{
							BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_7 = V_1;
							if (!L_7)
							{
								goto IL_02b5_1;
							}
						}
						{
							BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_8 = V_1;
							NullCheck(L_8);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
						}

IL_02b5_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						// var number = Int16Serializer.Instance.Deserialize(binaryDeserializer);
						il2cpp_codegen_runtime_class_init_inline(Int16Serializer_t08895AEDFBC84DFB57677B812CFF6FF8D3993F27_il2cpp_TypeInfo_var);
						Int16Serializer_t08895AEDFBC84DFB57677B812CFF6FF8D3993F27* L_9 = ((Int16Serializer_t08895AEDFBC84DFB57677B812CFF6FF8D3993F27_StaticFields*)il2cpp_codegen_static_fields_for(Int16Serializer_t08895AEDFBC84DFB57677B812CFF6FF8D3993F27_il2cpp_TypeInfo_var))->___Instance_1;
						BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_10 = V_1;
						NullCheck(L_9);
						int16_t L_11;
						L_11 = BaseItemSerializer_1_Deserialize_m7A4F86FE6A3D9FACD34B7EE6999949140C978CA5(L_9, L_10, BaseItemSerializer_1_Deserialize_m7A4F86FE6A3D9FACD34B7EE6999949140C978CA5_RuntimeMethod_var);
						// if (number==1)
						int16_t L_12 = L_11;
						G_B4_0 = L_12;
						if ((!(((uint32_t)L_12) == ((uint32_t)1))))
						{
							G_B9_0 = L_12;
							goto IL_0138_2;
						}
					}
					{
						// choice = choice.Choice1.choice;
						ChoiceClass1_tE28590E2849F9AEE5894B71323BBD95F5C4B19A4* L_13 = __this->___choice_10;
						NullCheck(L_13);
						ChoiceClass2_t9F6082C1E6C256B2EA9EB4F865FCD7F51B5250F6* L_14 = L_13->___Choice1_4;
						NullCheck(L_14);
						ChoiceClass1_tE28590E2849F9AEE5894B71323BBD95F5C4B19A4* L_15 = L_14->___choice_0;
						__this->___choice_10 = L_15;
						Il2CppCodeGenWriteBarrier((void**)(&__this->___choice_10), (void*)L_15);
						// choice.isActiveChoice = true;
						ChoiceClass1_tE28590E2849F9AEE5894B71323BBD95F5C4B19A4* L_16 = __this->___choice_10;
						NullCheck(L_16);
						L_16->___isActiveChoice_0 = (bool)1;
						// if (choice.visibilitys.Decide.Contains(YourRole) || choice.visibilitys.See.Contains(YourRole))
						ChoiceClass1_tE28590E2849F9AEE5894B71323BBD95F5C4B19A4* L_17 = __this->___choice_10;
						NullCheck(L_17);
						Visibility_t918BF48EBF5A0BFFBF654B3097341CAC5AA1788B* L_18 = L_17->___visibilitys_1;
						NullCheck(L_18);
						RoleU5BU5D_tC247448952C7237A189DBE274942E63D6BF79F4C* L_19 = L_18->___Decide_0;
						int32_t L_20 = __this->___YourRole_9;
						bool L_21;
						L_21 = Enumerable_Contains_TisRole_t053FF4A4C848D01EDA0F9F49F39A1BB5BB335A8C_m64BA73BDF7E453ABF9A0FA8266766DB4A4B73459((RuntimeObject*)L_19, L_20, Enumerable_Contains_TisRole_t053FF4A4C848D01EDA0F9F49F39A1BB5BB335A8C_m64BA73BDF7E453ABF9A0FA8266766DB4A4B73459_RuntimeMethod_var);
						G_B5_0 = G_B4_0;
						if (L_21)
						{
							G_B6_0 = G_B4_0;
							goto IL_0093_2;
						}
					}
					{
						ChoiceClass1_tE28590E2849F9AEE5894B71323BBD95F5C4B19A4* L_22 = __this->___choice_10;
						NullCheck(L_22);
						Visibility_t918BF48EBF5A0BFFBF654B3097341CAC5AA1788B* L_23 = L_22->___visibilitys_1;
						NullCheck(L_23);
						RoleU5BU5D_tC247448952C7237A189DBE274942E63D6BF79F4C* L_24 = L_23->___See_1;
						int32_t L_25 = __this->___YourRole_9;
						bool L_26;
						L_26 = Enumerable_Contains_TisRole_t053FF4A4C848D01EDA0F9F49F39A1BB5BB335A8C_m64BA73BDF7E453ABF9A0FA8266766DB4A4B73459((RuntimeObject*)L_24, L_25, Enumerable_Contains_TisRole_t053FF4A4C848D01EDA0F9F49F39A1BB5BB335A8C_m64BA73BDF7E453ABF9A0FA8266766DB4A4B73459_RuntimeMethod_var);
						G_B6_0 = G_B5_0;
						if (!L_26)
						{
							G_B7_0 = G_B5_0;
							goto IL_00e1_2;
						}
					}

IL_0093_2:
					{
						// textDialogueText.text = choice.DialogueText;
						TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_27 = __this->___textDialogueText_5;
						ChoiceClass1_tE28590E2849F9AEE5894B71323BBD95F5C4B19A4* L_28 = __this->___choice_10;
						NullCheck(L_28);
						String_t* L_29 = L_28->___DialogueText_2;
						NullCheck(L_27);
						VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_27, L_29);
						// Button1.GetComponentInChildren<TextMeshProUGUI>().text = choice.Button1Text;
						Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_30 = __this->___Button1_6;
						NullCheck(L_30);
						TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_31;
						L_31 = Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC(L_30, Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
						ChoiceClass1_tE28590E2849F9AEE5894B71323BBD95F5C4B19A4* L_32 = __this->___choice_10;
						NullCheck(L_32);
						String_t* L_33 = L_32->___Button1Text_3;
						NullCheck(L_31);
						VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_31, L_33);
						// Button2.GetComponentInChildren<TextMeshProUGUI>().text = choice.Button2Text;
						Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_34 = __this->___Button2_7;
						NullCheck(L_34);
						TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_35;
						L_35 = Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC(L_34, Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
						ChoiceClass1_tE28590E2849F9AEE5894B71323BBD95F5C4B19A4* L_36 = __this->___choice_10;
						NullCheck(L_36);
						String_t* L_37 = L_36->___Button2Text_5;
						NullCheck(L_35);
						VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_35, L_37);
						G_B8_0 = G_B6_0;
						goto IL_011b_2;
					}

IL_00e1_2:
					{
						// textDialogueText.text = "Wait";
						TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_38 = __this->___textDialogueText_5;
						NullCheck(L_38);
						VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_38, _stringLiteralFB6C1F66CC7E11F32F17E21E52D7FF100BE4B4D0);
						// Button1.GetComponentInChildren<TextMeshProUGUI>().text = "Wait";
						Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_39 = __this->___Button1_6;
						NullCheck(L_39);
						TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_40;
						L_40 = Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC(L_39, Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
						NullCheck(L_40);
						VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_40, _stringLiteralFB6C1F66CC7E11F32F17E21E52D7FF100BE4B4D0);
						// Button2.GetComponentInChildren<TextMeshProUGUI>().text = "Wait";
						Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_41 = __this->___Button2_7;
						NullCheck(L_41);
						TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_42;
						L_42 = Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC(L_41, Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
						NullCheck(L_42);
						VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_42, _stringLiteralFB6C1F66CC7E11F32F17E21E52D7FF100BE4B4D0);
						G_B8_0 = G_B7_0;
					}

IL_011b_2:
					{
						// Debug.LogFormat("Receive : " + 1);
						V_2 = 1;
						String_t* L_43;
						L_43 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
						String_t* L_44;
						L_44 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral14652B2A6A161F42FC015E8CECDFB515D175761C, L_43, NULL);
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_45;
						L_45 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
						il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
						Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(L_44, L_45, NULL);
						G_B9_0 = G_B8_0;
					}

IL_0138_2:
					{
						// if (number == 2)
						int16_t L_46 = G_B9_0;
						G_B10_0 = L_46;
						if ((!(((uint32_t)L_46) == ((uint32_t)2))))
						{
							G_B15_0 = L_46;
							goto IL_0240_2;
						}
					}
					{
						// choice = choice.Choice2.choice;
						ChoiceClass1_tE28590E2849F9AEE5894B71323BBD95F5C4B19A4* L_47 = __this->___choice_10;
						NullCheck(L_47);
						ChoiceClass2_t9F6082C1E6C256B2EA9EB4F865FCD7F51B5250F6* L_48 = L_47->___Choice2_6;
						NullCheck(L_48);
						ChoiceClass1_tE28590E2849F9AEE5894B71323BBD95F5C4B19A4* L_49 = L_48->___choice_0;
						__this->___choice_10 = L_49;
						Il2CppCodeGenWriteBarrier((void**)(&__this->___choice_10), (void*)L_49);
						// choice.isActiveChoice = true;
						ChoiceClass1_tE28590E2849F9AEE5894B71323BBD95F5C4B19A4* L_50 = __this->___choice_10;
						NullCheck(L_50);
						L_50->___isActiveChoice_0 = (bool)1;
						// if (choice.visibilitys.Decide.Contains(YourRole) || choice.visibilitys.See.Contains(YourRole))
						ChoiceClass1_tE28590E2849F9AEE5894B71323BBD95F5C4B19A4* L_51 = __this->___choice_10;
						NullCheck(L_51);
						Visibility_t918BF48EBF5A0BFFBF654B3097341CAC5AA1788B* L_52 = L_51->___visibilitys_1;
						NullCheck(L_52);
						RoleU5BU5D_tC247448952C7237A189DBE274942E63D6BF79F4C* L_53 = L_52->___Decide_0;
						int32_t L_54 = __this->___YourRole_9;
						bool L_55;
						L_55 = Enumerable_Contains_TisRole_t053FF4A4C848D01EDA0F9F49F39A1BB5BB335A8C_m64BA73BDF7E453ABF9A0FA8266766DB4A4B73459((RuntimeObject*)L_53, L_54, Enumerable_Contains_TisRole_t053FF4A4C848D01EDA0F9F49F39A1BB5BB335A8C_m64BA73BDF7E453ABF9A0FA8266766DB4A4B73459_RuntimeMethod_var);
						G_B11_0 = G_B10_0;
						if (L_55)
						{
							G_B12_0 = G_B10_0;
							goto IL_019b_2;
						}
					}
					{
						ChoiceClass1_tE28590E2849F9AEE5894B71323BBD95F5C4B19A4* L_56 = __this->___choice_10;
						NullCheck(L_56);
						Visibility_t918BF48EBF5A0BFFBF654B3097341CAC5AA1788B* L_57 = L_56->___visibilitys_1;
						NullCheck(L_57);
						RoleU5BU5D_tC247448952C7237A189DBE274942E63D6BF79F4C* L_58 = L_57->___See_1;
						int32_t L_59 = __this->___YourRole_9;
						bool L_60;
						L_60 = Enumerable_Contains_TisRole_t053FF4A4C848D01EDA0F9F49F39A1BB5BB335A8C_m64BA73BDF7E453ABF9A0FA8266766DB4A4B73459((RuntimeObject*)L_58, L_59, Enumerable_Contains_TisRole_t053FF4A4C848D01EDA0F9F49F39A1BB5BB335A8C_m64BA73BDF7E453ABF9A0FA8266766DB4A4B73459_RuntimeMethod_var);
						G_B12_0 = G_B11_0;
						if (!L_60)
						{
							G_B13_0 = G_B11_0;
							goto IL_01e9_2;
						}
					}

IL_019b_2:
					{
						// textDialogueText.text = choice.DialogueText;
						TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_61 = __this->___textDialogueText_5;
						ChoiceClass1_tE28590E2849F9AEE5894B71323BBD95F5C4B19A4* L_62 = __this->___choice_10;
						NullCheck(L_62);
						String_t* L_63 = L_62->___DialogueText_2;
						NullCheck(L_61);
						VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_61, L_63);
						// Button1.GetComponentInChildren<TextMeshProUGUI>().text = choice.Button1Text;
						Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_64 = __this->___Button1_6;
						NullCheck(L_64);
						TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_65;
						L_65 = Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC(L_64, Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
						ChoiceClass1_tE28590E2849F9AEE5894B71323BBD95F5C4B19A4* L_66 = __this->___choice_10;
						NullCheck(L_66);
						String_t* L_67 = L_66->___Button1Text_3;
						NullCheck(L_65);
						VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_65, L_67);
						// Button2.GetComponentInChildren<TextMeshProUGUI>().text = choice.Button2Text;
						Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_68 = __this->___Button2_7;
						NullCheck(L_68);
						TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_69;
						L_69 = Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC(L_68, Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
						ChoiceClass1_tE28590E2849F9AEE5894B71323BBD95F5C4B19A4* L_70 = __this->___choice_10;
						NullCheck(L_70);
						String_t* L_71 = L_70->___Button2Text_5;
						NullCheck(L_69);
						VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_69, L_71);
						G_B14_0 = G_B12_0;
						goto IL_0223_2;
					}

IL_01e9_2:
					{
						// textDialogueText.text = "Wait";
						TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_72 = __this->___textDialogueText_5;
						NullCheck(L_72);
						VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_72, _stringLiteralFB6C1F66CC7E11F32F17E21E52D7FF100BE4B4D0);
						// Button1.GetComponentInChildren<TextMeshProUGUI>().text = "Wait";
						Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_73 = __this->___Button1_6;
						NullCheck(L_73);
						TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_74;
						L_74 = Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC(L_73, Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
						NullCheck(L_74);
						VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_74, _stringLiteralFB6C1F66CC7E11F32F17E21E52D7FF100BE4B4D0);
						// Button2.GetComponentInChildren<TextMeshProUGUI>().text = "Wait";
						Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_75 = __this->___Button2_7;
						NullCheck(L_75);
						TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_76;
						L_76 = Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC(L_75, Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
						NullCheck(L_76);
						VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_76, _stringLiteralFB6C1F66CC7E11F32F17E21E52D7FF100BE4B4D0);
						G_B14_0 = G_B13_0;
					}

IL_0223_2:
					{
						// Debug.LogFormat("Receive : " + 2);
						V_2 = 2;
						String_t* L_77;
						L_77 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
						String_t* L_78;
						L_78 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral14652B2A6A161F42FC015E8CECDFB515D175761C, L_77, NULL);
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_79;
						L_79 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
						il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
						Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(L_78, L_79, NULL);
						G_B15_0 = G_B14_0;
					}

IL_0240_2:
					{
						// if (number == 3)
						if ((!(((uint32_t)G_B15_0) == ((uint32_t)3))))
						{
							goto IL_02aa_2;
						}
					}
					{
						// choice = MemoryChoice;
						ChoiceClass1_tE28590E2849F9AEE5894B71323BBD95F5C4B19A4* L_80 = __this->___MemoryChoice_11;
						__this->___choice_10 = L_80;
						Il2CppCodeGenWriteBarrier((void**)(&__this->___choice_10), (void*)L_80);
						// textDialogueText.text = choice.DialogueText;
						TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_81 = __this->___textDialogueText_5;
						ChoiceClass1_tE28590E2849F9AEE5894B71323BBD95F5C4B19A4* L_82 = __this->___choice_10;
						NullCheck(L_82);
						String_t* L_83 = L_82->___DialogueText_2;
						NullCheck(L_81);
						VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_81, L_83);
						// Button1.GetComponentInChildren<TextMeshProUGUI>().text = choice.Button1Text;
						Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_84 = __this->___Button1_6;
						NullCheck(L_84);
						TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_85;
						L_85 = Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC(L_84, Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
						ChoiceClass1_tE28590E2849F9AEE5894B71323BBD95F5C4B19A4* L_86 = __this->___choice_10;
						NullCheck(L_86);
						String_t* L_87 = L_86->___Button1Text_3;
						NullCheck(L_85);
						VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_85, L_87);
						// Button2.GetComponentInChildren<TextMeshProUGUI>().text = choice.Button2Text;
						Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_88 = __this->___Button2_7;
						NullCheck(L_88);
						TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_89;
						L_89 = Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC(L_88, Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
						ChoiceClass1_tE28590E2849F9AEE5894B71323BBD95F5C4B19A4* L_90 = __this->___choice_10;
						NullCheck(L_90);
						String_t* L_91 = L_90->___Button2Text_5;
						NullCheck(L_89);
						VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_89, L_91);
						// Debug.LogFormat("Receive : " + "Reset");
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_92;
						L_92 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
						il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
						Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteralCA3EB2281C26DA4DD928082294669B22BE9EF168, L_92, NULL);
					}

IL_02aa_2:
					{
						// }
						goto IL_02c0;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_02c0:
	{
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.PersistentKeyValueChoice::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentKeyValueChoice__ctor_m989F9EACADB676A606B02EE32F084B09659E6C0A (PersistentKeyValueChoice_t265703E17D456F9DBAB63533333481BDE36F4314* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly MemoryStream _stream = new MemoryStream(100);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MemoryStream__ctor_m9E93692A2BB0E34119603FF6A5D44F6A132052E8(L_0, ((int32_t)100), NULL);
		__this->____stream_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stream_13), (void*)L_0);
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
// System.Void Niantic.ARDKExamples.PersistentKeyValueChoice/<WaitForReset>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForResetU3Ed__11__ctor_mD06DD2EEE8C791ED3D15F0265FC0279F09769FF9 (U3CWaitForResetU3Ed__11_t67412F530C268FAEE8757D6065DCCAB58D1AF1F9* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Niantic.ARDKExamples.PersistentKeyValueChoice/<WaitForReset>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForResetU3Ed__11_System_IDisposable_Dispose_m04D5EE72A0E80DEC2169ADBED080A40DB191CF19 (U3CWaitForResetU3Ed__11_t67412F530C268FAEE8757D6065DCCAB58D1AF1F9* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Niantic.ARDKExamples.PersistentKeyValueChoice/<WaitForReset>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitForResetU3Ed__11_MoveNext_m446BABBE46F3EDE955F69A417BCD0788D255A458 (U3CWaitForResetU3Ed__11_t67412F530C268FAEE8757D6065DCCAB58D1AF1F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PersistentKeyValueChoice_t265703E17D456F9DBAB63533333481BDE36F4314* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PersistentKeyValueChoice_t265703E17D456F9DBAB63533333481BDE36F4314* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(sec);
		float L_4 = __this->___sec_2;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_5 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_5, L_4, NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0038:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// OnClickedReset();
		PersistentKeyValueChoice_t265703E17D456F9DBAB63533333481BDE36F4314* L_6 = V_1;
		NullCheck(L_6);
		PersistentKeyValueChoice_OnClickedReset_m076FD8608983E63117D99D8BBBFFD2C29CCEA672(L_6, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Niantic.ARDKExamples.PersistentKeyValueChoice/<WaitForReset>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitForResetU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m7FAADA31FA24C31CC2EFC8CA60F21572099DA0DC (U3CWaitForResetU3Ed__11_t67412F530C268FAEE8757D6065DCCAB58D1AF1F9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Niantic.ARDKExamples.PersistentKeyValueChoice/<WaitForReset>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForResetU3Ed__11_System_Collections_IEnumerator_Reset_m1AF7C10B6528B054435851D997593C6AE262EED7 (U3CWaitForResetU3Ed__11_t67412F530C268FAEE8757D6065DCCAB58D1AF1F9* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitForResetU3Ed__11_System_Collections_IEnumerator_Reset_m1AF7C10B6528B054435851D997593C6AE262EED7_RuntimeMethod_var)));
	}
}
// System.Object Niantic.ARDKExamples.PersistentKeyValueChoice/<WaitForReset>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitForResetU3Ed__11_System_Collections_IEnumerator_get_Current_m3E245C35D4644A53F3D7DEC9D40D5404D96DA57F (U3CWaitForResetU3Ed__11_t67412F530C268FAEE8757D6065DCCAB58D1AF1F9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void Niantic.ARDKExamples.PersistentKeyValueExampleManagerVisualDimension::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentKeyValueExampleManagerVisualDimension_Awake_mFECE499113870708E32E61025E4AA183E0CF52A1 (PersistentKeyValueExampleManagerVisualDimension_tF89D92A17C48602D5492D950C62084E1F2D9F71F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultipeerNetworkingFactory_tF258FAA4E989F1306DE3D55785C4A7201AE5C05C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PersistentKeyValueExampleManagerVisualDimension_OnNetworkingInitialized_m9AD420B3A19024110582BC1222B8E5CB250E2BCD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MultipeerNetworkingFactory.NetworkingInitialized += OnNetworkingInitialized;
		ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727* L_0 = (ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727*)il2cpp_codegen_object_new(ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArdkEventHandler_1__ctor_m9FB2DC8CD3B72FE727B2855A1C3D4E0DE63CBDC0(L_0, __this, (intptr_t)((void*)PersistentKeyValueExampleManagerVisualDimension_OnNetworkingInitialized_m9AD420B3A19024110582BC1222B8E5CB250E2BCD_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(MultipeerNetworkingFactory_tF258FAA4E989F1306DE3D55785C4A7201AE5C05C_il2cpp_TypeInfo_var);
		MultipeerNetworkingFactory_add_NetworkingInitialized_m56CC71E74A195459B6975492F0F257EBF4C069E6(L_0, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.PersistentKeyValueExampleManagerVisualDimension::OnNetworkingInitialized(Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.AnyMultipeerNetworkingInitializedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentKeyValueExampleManagerVisualDimension_OnNetworkingInitialized_m9AD420B3A19024110582BC1222B8E5CB250E2BCD (PersistentKeyValueExampleManagerVisualDimension_tF89D92A17C48602D5492D950C62084E1F2D9F71F* __this, AnyMultipeerNetworkingInitializedArgs_t9E508F81618E02A064E5D69F39BF65F0C3E38FB2 ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t819D1AD68903C22AD570015EF9413414DBCBC7E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PersistentKeyValueExampleManagerVisualDimension_OnConnect_m26941BB70B1955E9024979874478213BD2720697_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PersistentKeyValueExampleManagerVisualDimension_OnConnectionFailed_m18332D59C39531DE5A6F82541E4A0E5A548E4EEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PersistentKeyValueExampleManagerVisualDimension_OnDisconnect_m5C9C885596AFDC25B525D3980B5132C2D183A5B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PersistentKeyValueExampleManagerVisualDimension_OnKeyValueUpdated_mB7FDB5B88DD09CA473C1984D01711DDDFE2E7DB4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _networking = args.Networking;
		AnyMultipeerNetworkingInitializedArgs_t9E508F81618E02A064E5D69F39BF65F0C3E38FB2 L_0 = ___args0;
		RuntimeObject* L_1 = L_0.___Networking_0;
		__this->____networking_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____networking_6), (void*)L_1);
		// _networking.Connected += OnConnect;
		RuntimeObject* L_2 = __this->____networking_6;
		ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB* L_3 = (ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB*)il2cpp_codegen_object_new(ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ArdkEventHandler_1__ctor_m22539F947DA2CBC7EA7478AF8B4A1DEB1EC5BB0E(L_3, __this, (intptr_t)((void*)PersistentKeyValueExampleManagerVisualDimension_OnConnect_m26941BB70B1955E9024979874478213BD2720697_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB* >::Invoke(16 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::add_Connected(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_2, L_3);
		// _networking.Disconnected += OnDisconnect;
		RuntimeObject* L_4 = __this->____networking_6;
		ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF* L_5 = (ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF*)il2cpp_codegen_object_new(ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ArdkEventHandler_1__ctor_m606C96124A5303A0411B90E06609E41D1A96D034(L_5, __this, (intptr_t)((void*)PersistentKeyValueExampleManagerVisualDimension_OnDisconnect_m5C9C885596AFDC25B525D3980B5132C2D183A5B5_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF* >::Invoke(20 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::add_Disconnected(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.DisconnectedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_4, L_5);
		// _networking.ConnectionFailed += OnConnectionFailed;
		RuntimeObject* L_6 = __this->____networking_6;
		ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928* L_7 = (ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928*)il2cpp_codegen_object_new(ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		ArdkEventHandler_1__ctor_m3BB5E86F077CBC5F6FB0F7564554ACBB57DC0FBE(L_7, __this, (intptr_t)((void*)PersistentKeyValueExampleManagerVisualDimension_OnConnectionFailed_m18332D59C39531DE5A6F82541E4A0E5A548E4EEA_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928* >::Invoke(18 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::add_ConnectionFailed(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectionFailedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_6, L_7);
		// _networking.PersistentKeyValueUpdated += OnKeyValueUpdated;
		RuntimeObject* L_8 = __this->____networking_6;
		ArdkEventHandler_1_t819D1AD68903C22AD570015EF9413414DBCBC7E6* L_9 = (ArdkEventHandler_1_t819D1AD68903C22AD570015EF9413414DBCBC7E6*)il2cpp_codegen_object_new(ArdkEventHandler_1_t819D1AD68903C22AD570015EF9413414DBCBC7E6_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ArdkEventHandler_1__ctor_m0987D415ADF489B5C888126AF34713A0557C8862(L_9, __this, (intptr_t)((void*)PersistentKeyValueExampleManagerVisualDimension_OnKeyValueUpdated_mB7FDB5B88DD09CA473C1984D01711DDDFE2E7DB4_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		InterfaceActionInvoker1< ArdkEventHandler_1_t819D1AD68903C22AD570015EF9413414DBCBC7E6* >::Invoke(28 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::add_PersistentKeyValueUpdated(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PersistentKeyValueUpdatedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_8, L_9);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.PersistentKeyValueExampleManagerVisualDimension::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentKeyValueExampleManagerVisualDimension_OnDestroy_m11B37E40135C18C6C8BA1FDF2BE46612FFDE21B0 (PersistentKeyValueExampleManagerVisualDimension_tF89D92A17C48602D5492D950C62084E1F2D9F71F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_networking != null)
		RuntimeObject* L_0 = __this->____networking_6;
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		// _networking.Leave();
		RuntimeObject* L_1 = __this->____networking_6;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(13 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::Leave() */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_1);
		// _networking.Dispose();
		RuntimeObject* L_2 = __this->____networking_6;
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
		// _networking = null;
		__this->____networking_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____networking_6), (void*)(RuntimeObject*)NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.PersistentKeyValueExampleManagerVisualDimension::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentKeyValueExampleManagerVisualDimension_Update_m358A58BEE062EEFA23C0BFEC0AABF5C896F58B91 (PersistentKeyValueExampleManagerVisualDimension_tF89D92A17C48602D5492D950C62084E1F2D9F71F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Serialize_m21CFA58C4660F7F737AAB8FE0456907846E0E5D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Serialize_mAEF9084A1E9EB765C586F8D3A5DBC006C28AB9FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorSerializer_tA90CE1FC18ACA6B0F16B821BAD357F797D4284ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformAgnosticInput_tA2741C9A9A85BC19A3FC0A000966ADEBAB901B0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringSerializer_t0D84EFD9B8788D4AE312379A22B751581AC98559_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19B7D722FFCBB1EBCC95DE76FB16F022050F3CC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F841ED2976F3423F3FED30E494E32CAA198B884);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral712BBA9190176846FD43949DC6500B24463A6E4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB9770DCA7FF4F0F27853F0DC794D0FA06AFD22D);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* V_4 = NULL;
	BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* V_5 = NULL;
	{
		// if (_networking == null || !_networking.IsConnected || PlatformAgnosticInput.touchCount <= 0)
		RuntimeObject* L_0 = __this->____networking_6;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_1 = __this->____networking_6;
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean Niantic.ARDK.Networking.IMultipeerNetworking::get_IsConnected() */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_1);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlatformAgnosticInput_tA2741C9A9A85BC19A3FC0A000966ADEBAB901B0C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = PlatformAgnosticInput_get_touchCount_m98EF58DF94ED26CBA0540AF60506983A12207178(NULL);
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_001e;
		}
	}

IL_001d:
	{
		// return;
		return;
	}

IL_001e:
	{
		// var touch = PlatformAgnosticInput.GetTouch(0);
		il2cpp_codegen_runtime_class_init_inline(PlatformAgnosticInput_tA2741C9A9A85BC19A3FC0A000966ADEBAB901B0C_il2cpp_TypeInfo_var);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_4;
		L_4 = PlatformAgnosticInput_GetTouch_mDE9A905C897DAADDED515FA41F95A3853FA1B971(0, NULL);
		V_0 = L_4;
		// if (touch.phase == TouchPhase.Began)
		int32_t L_5;
		L_5 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if (L_5)
		{
			goto IL_0147;
		}
	}
	{
		// Color newColor = Random.ColorHSV();
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Random_ColorHSV_m04ADED6D4527B089E658738A757222666BFF243C(NULL);
		V_1 = L_6;
		// _localBlob.color = newColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7 = __this->____localBlob_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = V_1;
		NullCheck(L_7);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_7, L_8);
		// _stream.Position = 0;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_9 = __this->____stream_7;
		NullCheck(L_9);
		VirtualActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_9, ((int64_t)0));
		// _stream.SetLength(0);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_10 = __this->____stream_7;
		NullCheck(L_10);
		VirtualActionInvoker1< int64_t >::Invoke(21 /* System.Void System.IO.Stream::SetLength(System.Int64) */, L_10, ((int64_t)0));
		// using (var binarySerializer = new BinarySerializer(_stream))
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_11 = __this->____stream_7;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_12 = (BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*)il2cpp_codegen_object_new(BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		BinarySerializer__ctor_m45394DC0CB272B622A5B3E905F182625C49A6FF3(L_12, L_11, NULL);
		V_4 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0079:
			{// begin finally (depth: 1)
				{
					BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_13 = V_4;
					if (!L_13)
					{
						goto IL_0084;
					}
				}
				{
					BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_14 = V_4;
					NullCheck(L_14);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_14);
				}

IL_0084:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// ColorSerializer.Instance.Serialize(binarySerializer, newColor);
			il2cpp_codegen_runtime_class_init_inline(ColorSerializer_tA90CE1FC18ACA6B0F16B821BAD357F797D4284ED_il2cpp_TypeInfo_var);
			ColorSerializer_tA90CE1FC18ACA6B0F16B821BAD357F797D4284ED* L_15 = ((ColorSerializer_tA90CE1FC18ACA6B0F16B821BAD357F797D4284ED_StaticFields*)il2cpp_codegen_static_fields_for(ColorSerializer_tA90CE1FC18ACA6B0F16B821BAD357F797D4284ED_il2cpp_TypeInfo_var))->___Instance_1;
			BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_16 = V_4;
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = V_1;
			NullCheck(L_15);
			BaseItemSerializer_1_Serialize_m21CFA58C4660F7F737AAB8FE0456907846E0E5D1(L_15, L_16, L_17, BaseItemSerializer_1_Serialize_m21CFA58C4660F7F737AAB8FE0456907846E0E5D1_RuntimeMethod_var);
			goto IL_0085;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0085:
	{
		// var value = _stream.ToArray();
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_18 = __this->____stream_7;
		NullCheck(L_18);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19;
		L_19 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(31 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_18);
		V_2 = L_19;
		// Debug.LogFormat("Inserting to persistent store <Color: {0}>", newColor);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_20;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = L_22;
		RuntimeObject* L_24 = Box(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_24);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteralDB9770DCA7FF4F0F27853F0DC794D0FA06AFD22D, L_21, NULL);
		// _networking.StorePersistentKeyValue("Color", value);
		RuntimeObject* L_25 = __this->____networking_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_2;
		NullCheck(L_25);
		InterfaceActionInvoker2< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(10 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::StorePersistentKeyValue(System.String,System.Byte[]) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_25, _stringLiteral19B7D722FFCBB1EBCC95DE76FB16F022050F3CC8, L_26);
		// _stream2.Position = 0;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_27 = __this->____stream2_8;
		NullCheck(L_27);
		VirtualActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_27, ((int64_t)0));
		// _stream2.SetLength(0);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_28 = __this->____stream2_8;
		NullCheck(L_28);
		VirtualActionInvoker1< int64_t >::Invoke(21 /* System.Void System.IO.Stream::SetLength(System.Int64) */, L_28, ((int64_t)0));
		// using (var binarySerializer2 = new BinarySerializer(_stream2))
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_29 = __this->____stream2_8;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_30 = (BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*)il2cpp_codegen_object_new(BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		BinarySerializer__ctor_m45394DC0CB272B622A5B3E905F182625C49A6FF3(L_30, L_29, NULL);
		V_5 = L_30;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00fd:
			{// begin finally (depth: 1)
				{
					BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_31 = V_5;
					if (!L_31)
					{
						goto IL_0108;
					}
				}
				{
					BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_32 = V_5;
					NullCheck(L_32);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_32);
				}

IL_0108:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// StringSerializer.Instance.Serialize(binarySerializer2, newColor.ToString());
			il2cpp_codegen_runtime_class_init_inline(StringSerializer_t0D84EFD9B8788D4AE312379A22B751581AC98559_il2cpp_TypeInfo_var);
			StringSerializer_t0D84EFD9B8788D4AE312379A22B751581AC98559* L_33 = ((StringSerializer_t0D84EFD9B8788D4AE312379A22B751581AC98559_StaticFields*)il2cpp_codegen_static_fields_for(StringSerializer_t0D84EFD9B8788D4AE312379A22B751581AC98559_il2cpp_TypeInfo_var))->___Instance_1;
			BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_34 = V_5;
			String_t* L_35;
			L_35 = Color_ToString_m0018DE2184B3377CCA6FBD72D5D47886DC669147((&V_1), NULL);
			NullCheck(L_33);
			BaseItemSerializer_1_Serialize_mAEF9084A1E9EB765C586F8D3A5DBC006C28AB9FB(L_33, L_34, L_35, BaseItemSerializer_1_Serialize_mAEF9084A1E9EB765C586F8D3A5DBC006C28AB9FB_RuntimeMethod_var);
			goto IL_0109;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0109:
	{
		// var value2 = _stream2.ToArray();
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_36 = __this->____stream2_8;
		NullCheck(L_36);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37;
		L_37 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(31 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_36);
		V_3 = L_37;
		// Debug.LogFormat("SendName : "+ newColor.ToString());
		String_t* L_38;
		L_38 = Color_ToString_m0018DE2184B3377CCA6FBD72D5D47886DC669147((&V_1), NULL);
		String_t* L_39;
		L_39 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral712BBA9190176846FD43949DC6500B24463A6E4A, L_38, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40;
		L_40 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(L_39, L_40, NULL);
		// _networking.StorePersistentKeyValue("ColorName", value2);
		RuntimeObject* L_41 = __this->____networking_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = V_3;
		NullCheck(L_41);
		InterfaceActionInvoker2< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(10 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::StorePersistentKeyValue(System.String,System.Byte[]) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_41, _stringLiteral3F841ED2976F3423F3FED30E494E32CAA198B884, L_42);
	}

IL_0147:
	{
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.PersistentKeyValueExampleManagerVisualDimension::OnConnect(Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentKeyValueExampleManagerVisualDimension_OnConnect_m26941BB70B1955E9024979874478213BD2720697 (PersistentKeyValueExampleManagerVisualDimension_tF89D92A17C48602D5492D950C62084E1F2D9F71F* __this, ConnectedArgs_t743850D611ABED06BEF37656F9878CA7FD852BFF ___args0, const RuntimeMethod* method) 
{
	{
		// _localBlob.gameObject.SetActive(true);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->____localBlob_5;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.PersistentKeyValueExampleManagerVisualDimension::OnDisconnect(Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.DisconnectedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentKeyValueExampleManagerVisualDimension_OnDisconnect_m5C9C885596AFDC25B525D3980B5132C2D183A5B5 (PersistentKeyValueExampleManagerVisualDimension_tF89D92A17C48602D5492D950C62084E1F2D9F71F* __this, DisconnectedArgs_t85B536918847AC525EAFB30C21179DDE41BCF462 ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_localBlob != null && _localBlob.gameObject != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->____localBlob_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->____localBlob_5;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// _localBlob.gameObject.SetActive(false);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = __this->____localBlob_5;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
	}

IL_0032:
	{
		// if (_serverBlob != null && _serverBlob != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7 = __this->____serverBlob_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_005f;
		}
	}
	{
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9 = __this->____serverBlob_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		// _serverBlob.gameObject.SetActive(false);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_11 = __this->____serverBlob_4;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_11, NULL);
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
	}

IL_005f:
	{
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.PersistentKeyValueExampleManagerVisualDimension::OnConnectionFailed(Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectionFailedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentKeyValueExampleManagerVisualDimension_OnConnectionFailed_m18332D59C39531DE5A6F82541E4A0E5A548E4EEA (PersistentKeyValueExampleManagerVisualDimension_tF89D92A17C48602D5492D950C62084E1F2D9F71F* __this, ConnectionFailedArgs_tA6F0384572A7AB910CD8D4779458D910A8591FBC ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F0359D8A221CBF3FF7A13A4AC038B30BFA09689);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogFormat("Connection failed (err code = {0})", args.ErrorCode);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		uint32_t L_2;
		L_2 = ConnectionFailedArgs_get_ErrorCode_m4D026D356ACA27B5048F3416EBBF5C7B12A791DC_inline((&___args0), NULL);
		uint32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteral9F0359D8A221CBF3FF7A13A4AC038B30BFA09689, L_1, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.PersistentKeyValueExampleManagerVisualDimension::OnKeyValueUpdated(Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PersistentKeyValueUpdatedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentKeyValueExampleManagerVisualDimension_OnKeyValueUpdated_mB7FDB5B88DD09CA473C1984D01711DDDFE2E7DB4 (PersistentKeyValueExampleManagerVisualDimension_tF89D92A17C48602D5492D950C62084E1F2D9F71F* __this, PersistentKeyValueUpdatedArgs_tBF5C837DBBB2FBBBEFE3592A869A0068135EBE6A ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Deserialize_m0DAC07DD13CC390BF791E29BCF331A3F7D4EE3E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Deserialize_m3A4FB6C1C6273C537302137638DA87979EFCA69B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorSerializer_tA90CE1FC18ACA6B0F16B821BAD357F797D4284ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringSerializer_t0D84EFD9B8788D4AE312379A22B751581AC98559_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19B7D722FFCBB1EBCC95DE76FB16F022050F3CC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F841ED2976F3423F3FED30E494E32CAA198B884);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C25A1F95ACADBA500A01BD2A901325EAA1A45FC);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* V_1 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_3 = NULL;
	BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* V_4 = NULL;
	String_t* V_5 = NULL;
	{
		// if (_serverBlob == null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->____serverBlob_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// _serverBlob.gameObject.SetActive(true);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->____serverBlob_4;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// if (args.Key == "Color")
		String_t* L_4;
		L_4 = PersistentKeyValueUpdatedArgs_get_Key_m80E7E8E7489600E2AF2D5BCDBFA98E4D8A389236_inline((&___args0), NULL);
		bool L_5;
		L_5 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_4, _stringLiteral19B7D722FFCBB1EBCC95DE76FB16F022050F3CC8, NULL);
		if (!L_5)
		{
			goto IL_0070;
		}
	}
	{
		// using (var stream = args.CreateValueReader())
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_6;
		L_6 = PersistentKeyValueUpdatedArgs_CreateValueReader_m58B48EC1E492D4CB3C4DD2C2496437A2098196B8((&___args0), NULL);
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0066:
			{// begin finally (depth: 1)
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_7 = V_0;
					if (!L_7)
					{
						goto IL_006f;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_8 = V_0;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_006f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// using (var binaryDeserializer = new BinaryDeserializer(stream))
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_9 = V_0;
				BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_10 = (BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1*)il2cpp_codegen_object_new(BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1_il2cpp_TypeInfo_var);
				NullCheck(L_10);
				BinaryDeserializer__ctor_mDD79DF6C7453224BEE20972579E565AA72533DEF(L_10, L_9, NULL);
				V_1 = L_10;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_005c_1:
					{// begin finally (depth: 2)
						{
							BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_11 = V_1;
							if (!L_11)
							{
								goto IL_0065_1;
							}
						}
						{
							BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_12 = V_1;
							NullCheck(L_12);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_12);
						}

IL_0065_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					// var color = ColorSerializer.Instance.Deserialize(binaryDeserializer);
					il2cpp_codegen_runtime_class_init_inline(ColorSerializer_tA90CE1FC18ACA6B0F16B821BAD357F797D4284ED_il2cpp_TypeInfo_var);
					ColorSerializer_tA90CE1FC18ACA6B0F16B821BAD357F797D4284ED* L_13 = ((ColorSerializer_tA90CE1FC18ACA6B0F16B821BAD357F797D4284ED_StaticFields*)il2cpp_codegen_static_fields_for(ColorSerializer_tA90CE1FC18ACA6B0F16B821BAD357F797D4284ED_il2cpp_TypeInfo_var))->___Instance_1;
					BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_14 = V_1;
					NullCheck(L_13);
					Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15;
					L_15 = BaseItemSerializer_1_Deserialize_m3A4FB6C1C6273C537302137638DA87979EFCA69B(L_13, L_14, BaseItemSerializer_1_Deserialize_m3A4FB6C1C6273C537302137638DA87979EFCA69B_RuntimeMethod_var);
					V_2 = L_15;
					// _serverBlob.color = color;
					Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->____serverBlob_4;
					Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = V_2;
					NullCheck(L_16);
					VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_16, L_17);
					// }
					goto IL_0070;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0070:
	{
		// if (args.Key == "ColorName")
		String_t* L_18;
		L_18 = PersistentKeyValueUpdatedArgs_get_Key_m80E7E8E7489600E2AF2D5BCDBFA98E4D8A389236_inline((&___args0), NULL);
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteral3F841ED2976F3423F3FED30E494E32CAA198B884, NULL);
		if (!L_19)
		{
			goto IL_00cf;
		}
	}
	{
		// using (var stream = args.CreateValueReader())
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_20;
		L_20 = PersistentKeyValueUpdatedArgs_CreateValueReader_m58B48EC1E492D4CB3C4DD2C2496437A2098196B8((&___args0), NULL);
		V_3 = L_20;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c5:
			{// begin finally (depth: 1)
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_21 = V_3;
					if (!L_21)
					{
						goto IL_00ce;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_22 = V_3;
					NullCheck(L_22);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_22);
				}

IL_00ce:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// using (var binaryDeserializer = new BinaryDeserializer(stream))
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_23 = V_3;
				BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_24 = (BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1*)il2cpp_codegen_object_new(BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1_il2cpp_TypeInfo_var);
				NullCheck(L_24);
				BinaryDeserializer__ctor_mDD79DF6C7453224BEE20972579E565AA72533DEF(L_24, L_23, NULL);
				V_4 = L_24;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00b9_1:
					{// begin finally (depth: 2)
						{
							BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_25 = V_4;
							if (!L_25)
							{
								goto IL_00c4_1;
							}
						}
						{
							BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_26 = V_4;
							NullCheck(L_26);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_26);
						}

IL_00c4_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					// var color = StringSerializer.Instance.Deserialize(binaryDeserializer);
					il2cpp_codegen_runtime_class_init_inline(StringSerializer_t0D84EFD9B8788D4AE312379A22B751581AC98559_il2cpp_TypeInfo_var);
					StringSerializer_t0D84EFD9B8788D4AE312379A22B751581AC98559* L_27 = ((StringSerializer_t0D84EFD9B8788D4AE312379A22B751581AC98559_StaticFields*)il2cpp_codegen_static_fields_for(StringSerializer_t0D84EFD9B8788D4AE312379A22B751581AC98559_il2cpp_TypeInfo_var))->___Instance_1;
					BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_28 = V_4;
					NullCheck(L_27);
					String_t* L_29;
					L_29 = BaseItemSerializer_1_Deserialize_m0DAC07DD13CC390BF791E29BCF331A3F7D4EE3E8(L_27, L_28, BaseItemSerializer_1_Deserialize_m0DAC07DD13CC390BF791E29BCF331A3F7D4EE3E8_RuntimeMethod_var);
					V_5 = L_29;
					// Debug.LogFormat("Receive Color Name : " + color);
					String_t* L_30 = V_5;
					String_t* L_31;
					L_31 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral8C25A1F95ACADBA500A01BD2A901325EAA1A45FC, L_30, NULL);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32;
					L_32 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
					il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
					Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(L_31, L_32, NULL);
					// }
					goto IL_00cf;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00cf:
	{
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.PersistentKeyValueExampleManagerVisualDimension::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentKeyValueExampleManagerVisualDimension__ctor_m869AFC8DCD88187D8F96BBE39A9DD0C40935A31C (PersistentKeyValueExampleManagerVisualDimension_tF89D92A17C48602D5492D950C62084E1F2D9F71F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly MemoryStream _stream = new MemoryStream(100);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MemoryStream__ctor_m9E93692A2BB0E34119603FF6A5D44F6A132052E8(L_0, ((int32_t)100), NULL);
		__this->____stream_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stream_7), (void*)L_0);
		// private readonly MemoryStream _stream2 = new MemoryStream(100);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MemoryStream__ctor_m9E93692A2BB0E34119603FF6A5D44F6A132052E8(L_1, ((int32_t)100), NULL);
		__this->____stream2_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stream2_8), (void*)L_1);
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
// System.Void Niantic.ARDKExamples.PersistentKeyValueTree::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentKeyValueTree_Awake_mDAFF743A65636A1361580E3283E62F4A04E49500 (PersistentKeyValueTree_t97C18E58A7392FDB56B81D387EB07F0915B037A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultipeerNetworkingFactory_tF258FAA4E989F1306DE3D55785C4A7201AE5C05C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PersistentKeyValueTree_OnNetworkingInitialized_mDD3E1540A3A5F8B7DB74B094E1CE4294FB541C20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PersistentKeyValueTree_t97C18E58A7392FDB56B81D387EB07F0915B037A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MultipeerNetworkingFactory.NetworkingInitialized += OnNetworkingInitialized;
		ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727* L_0 = (ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727*)il2cpp_codegen_object_new(ArdkEventHandler_1_t17C57C9C29B15D9C3CBAF0C45B393803EF87B727_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArdkEventHandler_1__ctor_m9FB2DC8CD3B72FE727B2855A1C3D4E0DE63CBDC0(L_0, __this, (intptr_t)((void*)PersistentKeyValueTree_OnNetworkingInitialized_mDD3E1540A3A5F8B7DB74B094E1CE4294FB541C20_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(MultipeerNetworkingFactory_tF258FAA4E989F1306DE3D55785C4A7201AE5C05C_il2cpp_TypeInfo_var);
		MultipeerNetworkingFactory_add_NetworkingInitialized_m56CC71E74A195459B6975492F0F257EBF4C069E6(L_0, NULL);
		// MemoryNode = Node;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_1 = __this->___Node_12;
		__this->___MemoryNode_13 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MemoryNode_13), (void*)L_1);
		// instance = this;
		((PersistentKeyValueTree_t97C18E58A7392FDB56B81D387EB07F0915B037A2_StaticFields*)il2cpp_codegen_static_fields_for(PersistentKeyValueTree_t97C18E58A7392FDB56B81D387EB07F0915B037A2_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((PersistentKeyValueTree_t97C18E58A7392FDB56B81D387EB07F0915B037A2_StaticFields*)il2cpp_codegen_static_fields_for(PersistentKeyValueTree_t97C18E58A7392FDB56B81D387EB07F0915B037A2_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// JoinButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___JoinButton_5;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// Button1.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = __this->___Button1_7;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// Button2.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_6 = __this->___Button2_8;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// Reset.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_8 = __this->___Reset_9;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.PersistentKeyValueTree::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentKeyValueTree_Update_m065C05D6E6660E015AB3369552CBB4A30A0C488C (PersistentKeyValueTree_t97C18E58A7392FDB56B81D387EB07F0915B037A2* __this, const RuntimeMethod* method) 
{
	{
		// if ((Role)RolesSelection.value != Role.None)
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_0 = __this->___RolesSelection_10;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = TMP_Dropdown_get_value_m5916A6D1897431E8ED789FEC24551A311D1B5C70_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// JoinButton.gameObject.SetActive(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___JoinButton_5;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		return;
	}

IL_001f:
	{
		// JoinButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = __this->___JoinButton_5;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Niantic.ARDKExamples.PersistentKeyValueTree::WaitForReset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PersistentKeyValueTree_WaitForReset_m119100A0E0B401D706852AAF1252E320A49A05FB (PersistentKeyValueTree_t97C18E58A7392FDB56B81D387EB07F0915B037A2* __this, float ___sec0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitForResetU3Ed__14_t10D63D0A0BF1E7B4659C4840274457C038481D89_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitForResetU3Ed__14_t10D63D0A0BF1E7B4659C4840274457C038481D89* L_0 = (U3CWaitForResetU3Ed__14_t10D63D0A0BF1E7B4659C4840274457C038481D89*)il2cpp_codegen_object_new(U3CWaitForResetU3Ed__14_t10D63D0A0BF1E7B4659C4840274457C038481D89_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CWaitForResetU3Ed__14__ctor_m8D0D52A838D937D652A27540A49533E6E580D826(L_0, 0, NULL);
		U3CWaitForResetU3Ed__14_t10D63D0A0BF1E7B4659C4840274457C038481D89* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CWaitForResetU3Ed__14_t10D63D0A0BF1E7B4659C4840274457C038481D89* L_2 = L_1;
		float L_3 = ___sec0;
		NullCheck(L_2);
		L_2->___sec_2 = L_3;
		return L_2;
	}
}
// System.Void Niantic.ARDKExamples.PersistentKeyValueTree::OnNetworkingInitialized(Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.AnyMultipeerNetworkingInitializedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentKeyValueTree_OnNetworkingInitialized_mDD3E1540A3A5F8B7DB74B094E1CE4294FB541C20 (PersistentKeyValueTree_t97C18E58A7392FDB56B81D387EB07F0915B037A2* __this, AnyMultipeerNetworkingInitializedArgs_t9E508F81618E02A064E5D69F39BF65F0C3E38FB2 ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_t819D1AD68903C22AD570015EF9413414DBCBC7E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PersistentKeyValueTree_OnConnect_m5AB242003854032CA253797AAED780DF98F54807_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PersistentKeyValueTree_OnConnectionFailed_m3F35F6290F6EF4D973E69D06E83306C85FEFF33C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PersistentKeyValueTree_OnDisconnect_m57EDBA26734E5712F25B5ECB690F42DEEBB9C637_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PersistentKeyValueTree_OnKeyValueUpdated_mF580012CD0675CCB0727362C02E866E59C988881_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _networking = args.Networking;
		AnyMultipeerNetworkingInitializedArgs_t9E508F81618E02A064E5D69F39BF65F0C3E38FB2 L_0 = ___args0;
		RuntimeObject* L_1 = L_0.___Networking_0;
		__this->____networking_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____networking_14), (void*)L_1);
		// _networking.Connected += OnConnect;
		RuntimeObject* L_2 = __this->____networking_14;
		ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB* L_3 = (ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB*)il2cpp_codegen_object_new(ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ArdkEventHandler_1__ctor_m22539F947DA2CBC7EA7478AF8B4A1DEB1EC5BB0E(L_3, __this, (intptr_t)((void*)PersistentKeyValueTree_OnConnect_m5AB242003854032CA253797AAED780DF98F54807_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< ArdkEventHandler_1_t424C0962EF135DC670958B9BC5F93EDFF93AF2DB* >::Invoke(16 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::add_Connected(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_2, L_3);
		// _networking.Disconnected += OnDisconnect;
		RuntimeObject* L_4 = __this->____networking_14;
		ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF* L_5 = (ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF*)il2cpp_codegen_object_new(ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ArdkEventHandler_1__ctor_m606C96124A5303A0411B90E06609E41D1A96D034(L_5, __this, (intptr_t)((void*)PersistentKeyValueTree_OnDisconnect_m57EDBA26734E5712F25B5ECB690F42DEEBB9C637_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< ArdkEventHandler_1_tBC9D65BAFF11DF1082BD86CB2B6C98D0A857FDBF* >::Invoke(20 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::add_Disconnected(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.DisconnectedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_4, L_5);
		// _networking.ConnectionFailed += OnConnectionFailed;
		RuntimeObject* L_6 = __this->____networking_14;
		ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928* L_7 = (ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928*)il2cpp_codegen_object_new(ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		ArdkEventHandler_1__ctor_m3BB5E86F077CBC5F6FB0F7564554ACBB57DC0FBE(L_7, __this, (intptr_t)((void*)PersistentKeyValueTree_OnConnectionFailed_m3F35F6290F6EF4D973E69D06E83306C85FEFF33C_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< ArdkEventHandler_1_t05E81D0FC5FB36B111453026177A954F23BA0928* >::Invoke(18 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::add_ConnectionFailed(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectionFailedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_6, L_7);
		// _networking.PersistentKeyValueUpdated += OnKeyValueUpdated;
		RuntimeObject* L_8 = __this->____networking_14;
		ArdkEventHandler_1_t819D1AD68903C22AD570015EF9413414DBCBC7E6* L_9 = (ArdkEventHandler_1_t819D1AD68903C22AD570015EF9413414DBCBC7E6*)il2cpp_codegen_object_new(ArdkEventHandler_1_t819D1AD68903C22AD570015EF9413414DBCBC7E6_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ArdkEventHandler_1__ctor_m0987D415ADF489B5C888126AF34713A0557C8862(L_9, __this, (intptr_t)((void*)PersistentKeyValueTree_OnKeyValueUpdated_mF580012CD0675CCB0727362C02E866E59C988881_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		InterfaceActionInvoker1< ArdkEventHandler_1_t819D1AD68903C22AD570015EF9413414DBCBC7E6* >::Invoke(28 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::add_PersistentKeyValueUpdated(Niantic.ARDK.Utilities.ArdkEventHandler`1<Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PersistentKeyValueUpdatedArgs>) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_8, L_9);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.PersistentKeyValueTree::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentKeyValueTree_OnDestroy_mFEE6C546BC8ECB269190C6BA848E85A3FC1A660A (PersistentKeyValueTree_t97C18E58A7392FDB56B81D387EB07F0915B037A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_networking != null)
		RuntimeObject* L_0 = __this->____networking_14;
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		// _networking.Leave();
		RuntimeObject* L_1 = __this->____networking_14;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(13 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::Leave() */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_1);
		// _networking.Dispose();
		RuntimeObject* L_2 = __this->____networking_14;
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
		// _networking = null;
		__this->____networking_14 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____networking_14), (void*)(RuntimeObject*)NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.PersistentKeyValueTree::OnClickedButton1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentKeyValueTree_OnClickedButton1_m221A75CD852799BBB1DF6AEE6D02AF91AC13CAE6 (PersistentKeyValueTree_t97C18E58A7392FDB56B81D387EB07F0915B037A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Serialize_mA7702F1F6D4B6D8768B9451E1AD64855FC8B7DFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Contains_TisRole_t053FF4A4C848D01EDA0F9F49F39A1BB5BB335A8C_m64BA73BDF7E453ABF9A0FA8266766DB4A4B73459_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16Serializer_t08895AEDFBC84DFB57677B812CFF6FF8D3993F27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformAgnosticInput_tA2741C9A9A85BC19A3FC0A000966ADEBAB901B0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C6E966011D7EE59D80D0B69AEAEE4683F646BF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral916F6B1D0AAD57876A2BCB38638F93F526C3901E);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// if (_networking == null || !_networking.IsConnected || PlatformAgnosticInput.touchCount <= 0)
		RuntimeObject* L_0 = __this->____networking_14;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_1 = __this->____networking_14;
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean Niantic.ARDK.Networking.IMultipeerNetworking::get_IsConnected() */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_1);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlatformAgnosticInput_tA2741C9A9A85BC19A3FC0A000966ADEBAB901B0C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = PlatformAgnosticInput_get_touchCount_m98EF58DF94ED26CBA0540AF60506983A12207178(NULL);
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_001e;
		}
	}

IL_001d:
	{
		// return;
		return;
	}

IL_001e:
	{
		// if (!Node.visibilitys.Decide.Contains(YourRole))
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_4 = __this->___Node_12;
		NullCheck(L_4);
		Visibility_t918BF48EBF5A0BFFBF654B3097341CAC5AA1788B* L_5 = L_4->___visibilitys_5;
		NullCheck(L_5);
		RoleU5BU5D_tC247448952C7237A189DBE274942E63D6BF79F4C* L_6 = L_5->___Decide_0;
		int32_t L_7 = __this->___YourRole_11;
		bool L_8;
		L_8 = Enumerable_Contains_TisRole_t053FF4A4C848D01EDA0F9F49F39A1BB5BB335A8C_m64BA73BDF7E453ABF9A0FA8266766DB4A4B73459((RuntimeObject*)L_6, L_7, Enumerable_Contains_TisRole_t053FF4A4C848D01EDA0F9F49F39A1BB5BB335A8C_m64BA73BDF7E453ABF9A0FA8266766DB4A4B73459_RuntimeMethod_var);
		if (L_8)
		{
			goto IL_003c;
		}
	}
	{
		// return;
		return;
	}

IL_003c:
	{
		// _stream.Position = 0;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_9 = __this->____stream_15;
		NullCheck(L_9);
		VirtualActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_9, ((int64_t)0));
		// _stream.SetLength(0);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_10 = __this->____stream_15;
		NullCheck(L_10);
		VirtualActionInvoker1< int64_t >::Invoke(21 /* System.Void System.IO.Stream::SetLength(System.Int64) */, L_10, ((int64_t)0));
		// using (var binarySerializer = new BinarySerializer(_stream))
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_11 = __this->____stream_15;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_12 = (BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*)il2cpp_codegen_object_new(BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		BinarySerializer__ctor_m45394DC0CB272B622A5B3E905F182625C49A6FF3(L_12, L_11, NULL);
		V_1 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0070:
			{// begin finally (depth: 1)
				{
					BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_13 = V_1;
					if (!L_13)
					{
						goto IL_0079;
					}
				}
				{
					BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_14 = V_1;
					NullCheck(L_14);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_14);
				}

IL_0079:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Int16Serializer.Instance.Serialize(binarySerializer, 1);
			il2cpp_codegen_runtime_class_init_inline(Int16Serializer_t08895AEDFBC84DFB57677B812CFF6FF8D3993F27_il2cpp_TypeInfo_var);
			Int16Serializer_t08895AEDFBC84DFB57677B812CFF6FF8D3993F27* L_15 = ((Int16Serializer_t08895AEDFBC84DFB57677B812CFF6FF8D3993F27_StaticFields*)il2cpp_codegen_static_fields_for(Int16Serializer_t08895AEDFBC84DFB57677B812CFF6FF8D3993F27_il2cpp_TypeInfo_var))->___Instance_1;
			BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_16 = V_1;
			NullCheck(L_15);
			BaseItemSerializer_1_Serialize_mA7702F1F6D4B6D8768B9451E1AD64855FC8B7DFD(L_15, L_16, (int16_t)1, BaseItemSerializer_1_Serialize_mA7702F1F6D4B6D8768B9451E1AD64855FC8B7DFD_RuntimeMethod_var);
			goto IL_007a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007a:
	{
		// var value = _stream.ToArray();
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_17 = __this->____stream_15;
		NullCheck(L_17);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18;
		L_18 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(31 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_17);
		V_0 = L_18;
		// Debug.LogFormat("Send : " + 1);
		V_2 = 1;
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_20;
		L_20 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral4C6E966011D7EE59D80D0B69AEAEE4683F646BF3, L_19, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21;
		L_21 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(L_20, L_21, NULL);
		// _networking.StorePersistentKeyValue("State", value);
		RuntimeObject* L_22 = __this->____networking_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_0;
		NullCheck(L_22);
		InterfaceActionInvoker2< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(10 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::StorePersistentKeyValue(System.String,System.Byte[]) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_22, _stringLiteral916F6B1D0AAD57876A2BCB38638F93F526C3901E, L_23);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.PersistentKeyValueTree::OnClickedButton2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentKeyValueTree_OnClickedButton2_mF3476F622DAE55686D02CDFC55DA837E0DF9DCFC (PersistentKeyValueTree_t97C18E58A7392FDB56B81D387EB07F0915B037A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Serialize_mA7702F1F6D4B6D8768B9451E1AD64855FC8B7DFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Contains_TisRole_t053FF4A4C848D01EDA0F9F49F39A1BB5BB335A8C_m64BA73BDF7E453ABF9A0FA8266766DB4A4B73459_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16Serializer_t08895AEDFBC84DFB57677B812CFF6FF8D3993F27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformAgnosticInput_tA2741C9A9A85BC19A3FC0A000966ADEBAB901B0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C6E966011D7EE59D80D0B69AEAEE4683F646BF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral916F6B1D0AAD57876A2BCB38638F93F526C3901E);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// if (_networking == null || !_networking.IsConnected || PlatformAgnosticInput.touchCount <= 0)
		RuntimeObject* L_0 = __this->____networking_14;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_1 = __this->____networking_14;
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean Niantic.ARDK.Networking.IMultipeerNetworking::get_IsConnected() */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_1);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlatformAgnosticInput_tA2741C9A9A85BC19A3FC0A000966ADEBAB901B0C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = PlatformAgnosticInput_get_touchCount_m98EF58DF94ED26CBA0540AF60506983A12207178(NULL);
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_001e;
		}
	}

IL_001d:
	{
		// return;
		return;
	}

IL_001e:
	{
		// if (!Node.visibilitys.Decide.Contains(YourRole))
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_4 = __this->___Node_12;
		NullCheck(L_4);
		Visibility_t918BF48EBF5A0BFFBF654B3097341CAC5AA1788B* L_5 = L_4->___visibilitys_5;
		NullCheck(L_5);
		RoleU5BU5D_tC247448952C7237A189DBE274942E63D6BF79F4C* L_6 = L_5->___Decide_0;
		int32_t L_7 = __this->___YourRole_11;
		bool L_8;
		L_8 = Enumerable_Contains_TisRole_t053FF4A4C848D01EDA0F9F49F39A1BB5BB335A8C_m64BA73BDF7E453ABF9A0FA8266766DB4A4B73459((RuntimeObject*)L_6, L_7, Enumerable_Contains_TisRole_t053FF4A4C848D01EDA0F9F49F39A1BB5BB335A8C_m64BA73BDF7E453ABF9A0FA8266766DB4A4B73459_RuntimeMethod_var);
		if (L_8)
		{
			goto IL_003c;
		}
	}
	{
		// return;
		return;
	}

IL_003c:
	{
		// _stream.Position = 0;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_9 = __this->____stream_15;
		NullCheck(L_9);
		VirtualActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_9, ((int64_t)0));
		// _stream.SetLength(0);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_10 = __this->____stream_15;
		NullCheck(L_10);
		VirtualActionInvoker1< int64_t >::Invoke(21 /* System.Void System.IO.Stream::SetLength(System.Int64) */, L_10, ((int64_t)0));
		// using (var binarySerializer = new BinarySerializer(_stream))
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_11 = __this->____stream_15;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_12 = (BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*)il2cpp_codegen_object_new(BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		BinarySerializer__ctor_m45394DC0CB272B622A5B3E905F182625C49A6FF3(L_12, L_11, NULL);
		V_1 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0070:
			{// begin finally (depth: 1)
				{
					BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_13 = V_1;
					if (!L_13)
					{
						goto IL_0079;
					}
				}
				{
					BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_14 = V_1;
					NullCheck(L_14);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_14);
				}

IL_0079:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Int16Serializer.Instance.Serialize(binarySerializer, 2);
			il2cpp_codegen_runtime_class_init_inline(Int16Serializer_t08895AEDFBC84DFB57677B812CFF6FF8D3993F27_il2cpp_TypeInfo_var);
			Int16Serializer_t08895AEDFBC84DFB57677B812CFF6FF8D3993F27* L_15 = ((Int16Serializer_t08895AEDFBC84DFB57677B812CFF6FF8D3993F27_StaticFields*)il2cpp_codegen_static_fields_for(Int16Serializer_t08895AEDFBC84DFB57677B812CFF6FF8D3993F27_il2cpp_TypeInfo_var))->___Instance_1;
			BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_16 = V_1;
			NullCheck(L_15);
			BaseItemSerializer_1_Serialize_mA7702F1F6D4B6D8768B9451E1AD64855FC8B7DFD(L_15, L_16, (int16_t)2, BaseItemSerializer_1_Serialize_mA7702F1F6D4B6D8768B9451E1AD64855FC8B7DFD_RuntimeMethod_var);
			goto IL_007a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007a:
	{
		// var value = _stream.ToArray();
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_17 = __this->____stream_15;
		NullCheck(L_17);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18;
		L_18 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(31 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_17);
		V_0 = L_18;
		// Debug.LogFormat("Send : " + 2);
		V_2 = 2;
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_20;
		L_20 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral4C6E966011D7EE59D80D0B69AEAEE4683F646BF3, L_19, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21;
		L_21 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(L_20, L_21, NULL);
		// _networking.StorePersistentKeyValue("State", value);
		RuntimeObject* L_22 = __this->____networking_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_0;
		NullCheck(L_22);
		InterfaceActionInvoker2< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(10 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::StorePersistentKeyValue(System.String,System.Byte[]) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_22, _stringLiteral916F6B1D0AAD57876A2BCB38638F93F526C3901E, L_23);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.PersistentKeyValueTree::OnClickedReset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentKeyValueTree_OnClickedReset_m559EAC12928EC216B1C774048AA7E34BC2DEE8D4 (PersistentKeyValueTree_t97C18E58A7392FDB56B81D387EB07F0915B037A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Serialize_mA7702F1F6D4B6D8768B9451E1AD64855FC8B7DFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16Serializer_t08895AEDFBC84DFB57677B812CFF6FF8D3993F27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AC0F53BDC2368ECCEB10EFDAA1C5CE853AB51F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral916F6B1D0AAD57876A2BCB38638F93F526C3901E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA448BC9C846BA7E63B5E1343958878B4A69082F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA74ACAA1F61DE0EB348EC03946685B0B6270CB36);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* V_1 = NULL;
	{
		// Debug.Log("StartReset");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralA448BC9C846BA7E63B5E1343958878B4A69082F0, NULL);
		// if (_networking == null || !_networking.IsConnected) //   || PlatformAgnosticInput.touchCount <= 0
		RuntimeObject* L_0 = __this->____networking_14;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = __this->____networking_14;
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean Niantic.ARDK.Networking.IMultipeerNetworking::get_IsConnected() */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_1);
		if (L_2)
		{
			goto IL_0020;
		}
	}

IL_001f:
	{
		// return;
		return;
	}

IL_0020:
	{
		// Debug.Log("Reset");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralA74ACAA1F61DE0EB348EC03946685B0B6270CB36, NULL);
		// _stream.Position = 0;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = __this->____stream_15;
		NullCheck(L_3);
		VirtualActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_3, ((int64_t)0));
		// _stream.SetLength(0);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_4 = __this->____stream_15;
		NullCheck(L_4);
		VirtualActionInvoker1< int64_t >::Invoke(21 /* System.Void System.IO.Stream::SetLength(System.Int64) */, L_4, ((int64_t)0));
		// using (var binarySerializer = new BinarySerializer(_stream))
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_5 = __this->____stream_15;
		BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_6 = (BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4*)il2cpp_codegen_object_new(BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		BinarySerializer__ctor_m45394DC0CB272B622A5B3E905F182625C49A6FF3(L_6, L_5, NULL);
		V_1 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005e:
			{// begin finally (depth: 1)
				{
					BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_7 = V_1;
					if (!L_7)
					{
						goto IL_0067;
					}
				}
				{
					BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_8 = V_1;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_0067:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Int16Serializer.Instance.Serialize(binarySerializer, 3);
			il2cpp_codegen_runtime_class_init_inline(Int16Serializer_t08895AEDFBC84DFB57677B812CFF6FF8D3993F27_il2cpp_TypeInfo_var);
			Int16Serializer_t08895AEDFBC84DFB57677B812CFF6FF8D3993F27* L_9 = ((Int16Serializer_t08895AEDFBC84DFB57677B812CFF6FF8D3993F27_StaticFields*)il2cpp_codegen_static_fields_for(Int16Serializer_t08895AEDFBC84DFB57677B812CFF6FF8D3993F27_il2cpp_TypeInfo_var))->___Instance_1;
			BinarySerializer_t5C1A122A248E9CA04C105DB5504905E4B72A53E4* L_10 = V_1;
			NullCheck(L_9);
			BaseItemSerializer_1_Serialize_mA7702F1F6D4B6D8768B9451E1AD64855FC8B7DFD(L_9, L_10, (int16_t)3, BaseItemSerializer_1_Serialize_mA7702F1F6D4B6D8768B9451E1AD64855FC8B7DFD_RuntimeMethod_var);
			goto IL_0068;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0068:
	{
		// var value = _stream.ToArray();
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_11 = __this->____stream_15;
		NullCheck(L_11);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
		L_12 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(31 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_11);
		V_0 = L_12;
		// Debug.LogFormat("Send : " + "Reset");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13;
		L_13 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteral1AC0F53BDC2368ECCEB10EFDAA1C5CE853AB51F0, L_13, NULL);
		// _networking.StorePersistentKeyValue("State", value);
		RuntimeObject* L_14 = __this->____networking_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_0;
		NullCheck(L_14);
		InterfaceActionInvoker2< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(10 /* System.Void Niantic.ARDK.Networking.IMultipeerNetworking::StorePersistentKeyValue(System.String,System.Byte[]) */, IMultipeerNetworking_tA5B22EB4EDF24C862318C8A807E5165F8E8E3F5F_il2cpp_TypeInfo_var, L_14, _stringLiteral916F6B1D0AAD57876A2BCB38638F93F526C3901E, L_15);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.PersistentKeyValueTree::OnConnect(Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentKeyValueTree_OnConnect_m5AB242003854032CA253797AAED780DF98F54807 (PersistentKeyValueTree_t97C18E58A7392FDB56B81D387EB07F0915B037A2* __this, ConnectedArgs_t743850D611ABED06BEF37656F9878CA7FD852BFF ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// YourRole = (Role)RolesSelection.value;
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_0 = __this->___RolesSelection_10;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = TMP_Dropdown_get_value_m5916A6D1897431E8ED789FEC24551A311D1B5C70_inline(L_0, NULL);
		__this->___YourRole_11 = L_1;
		// RolesSelection.gameObject.SetActive(false);
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_2 = __this->___RolesSelection_10;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// Button1.gameObject.SetActive(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = __this->___Button1_7;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// Button2.gameObject.SetActive(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_6 = __this->___Button2_8;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		// Reset.gameObject.SetActive(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_8 = __this->___Reset_9;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
		// textDialogueText.text = Node.DialogueText;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_10 = __this->___textDialogueText_6;
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_11 = __this->___Node_12;
		NullCheck(L_11);
		String_t* L_12 = L_11->___DialogueText_6;
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_10, L_12);
		// Button1.GetComponentInChildren<TextMeshProUGUI>().text = Node.Button1Text;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_13 = __this->___Button1_7;
		NullCheck(L_13);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_14;
		L_14 = Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC(L_13, Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_15 = __this->___Node_12;
		NullCheck(L_15);
		String_t* L_16 = L_15->___Button1Text_7;
		NullCheck(L_14);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_14, L_16);
		// Button2.GetComponentInChildren<TextMeshProUGUI>().text = Node.Button2Text;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_17 = __this->___Button2_8;
		NullCheck(L_17);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_18;
		L_18 = Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC(L_17, Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
		Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_19 = __this->___Node_12;
		NullCheck(L_19);
		String_t* L_20 = L_19->___Button2Text_9;
		NullCheck(L_18);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_18, L_20);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.PersistentKeyValueTree::OnDisconnect(Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.DisconnectedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentKeyValueTree_OnDisconnect_m57EDBA26734E5712F25B5ECB690F42DEEBB9C637 (PersistentKeyValueTree_t97C18E58A7392FDB56B81D387EB07F0915B037A2* __this, DisconnectedArgs_t85B536918847AC525EAFB30C21179DDE41BCF462 ___args0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.PersistentKeyValueTree::OnConnectionFailed(Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.ConnectionFailedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentKeyValueTree_OnConnectionFailed_m3F35F6290F6EF4D973E69D06E83306C85FEFF33C (PersistentKeyValueTree_t97C18E58A7392FDB56B81D387EB07F0915B037A2* __this, ConnectionFailedArgs_tA6F0384572A7AB910CD8D4779458D910A8591FBC ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F0359D8A221CBF3FF7A13A4AC038B30BFA09689);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogFormat("Connection failed (err code = {0})", args.ErrorCode);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		uint32_t L_2;
		L_2 = ConnectionFailedArgs_get_ErrorCode_m4D026D356ACA27B5048F3416EBBF5C7B12A791DC_inline((&___args0), NULL);
		uint32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteral9F0359D8A221CBF3FF7A13A4AC038B30BFA09689, L_1, NULL);
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.PersistentKeyValueTree::OnKeyValueUpdated(Niantic.ARDK.Networking.MultipeerNetworkingEventArgs.PersistentKeyValueUpdatedArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentKeyValueTree_OnKeyValueUpdated_mF580012CD0675CCB0727362C02E866E59C988881 (PersistentKeyValueTree_t97C18E58A7392FDB56B81D387EB07F0915B037A2* __this, PersistentKeyValueUpdatedArgs_tBF5C837DBBB2FBBBEFE3592A869A0068135EBE6A ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseItemSerializer_1_Deserialize_m7A4F86FE6A3D9FACD34B7EE6999949140C978CA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Contains_TisRole_t053FF4A4C848D01EDA0F9F49F39A1BB5BB335A8C_m64BA73BDF7E453ABF9A0FA8266766DB4A4B73459_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16Serializer_t08895AEDFBC84DFB57677B812CFF6FF8D3993F27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14652B2A6A161F42FC015E8CECDFB515D175761C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D171A4CACA4D064A038F731E191F541989E01DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral916F6B1D0AAD57876A2BCB38638F93F526C3901E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA3EB2281C26DA4DD928082294669B22BE9EF168);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB6C1F66CC7E11F32F17E21E52D7FF100BE4B4D0);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* V_1 = NULL;
	int32_t V_2 = 0;
	int16_t G_B12_0 = 0;
	int16_t G_B4_0 = 0;
	int16_t G_B6_0 = 0;
	int16_t G_B5_0 = 0;
	int16_t G_B7_0 = 0;
	int16_t G_B9_0 = 0;
	int16_t G_B8_0 = 0;
	int16_t G_B10_0 = 0;
	int16_t G_B11_0 = 0;
	int16_t G_B21_0 = 0;
	int16_t G_B13_0 = 0;
	int16_t G_B15_0 = 0;
	int16_t G_B14_0 = 0;
	int16_t G_B16_0 = 0;
	int16_t G_B18_0 = 0;
	int16_t G_B17_0 = 0;
	int16_t G_B19_0 = 0;
	int16_t G_B20_0 = 0;
	{
		// if (args.Key == "State")
		String_t* L_0;
		L_0 = PersistentKeyValueUpdatedArgs_get_Key_m80E7E8E7489600E2AF2D5BCDBFA98E4D8A389236_inline((&___args0), NULL);
		bool L_1;
		L_1 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_0, _stringLiteral916F6B1D0AAD57876A2BCB38638F93F526C3901E, NULL);
		if (!L_1)
		{
			goto IL_02fe;
		}
	}
	{
		// using (var stream = args.CreateValueReader())
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2;
		L_2 = PersistentKeyValueUpdatedArgs_CreateValueReader_m58B48EC1E492D4CB3C4DD2C2496437A2098196B8((&___args0), NULL);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_02f4:
			{// begin finally (depth: 1)
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = V_0;
					if (!L_3)
					{
						goto IL_02fd;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_4 = V_0;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_02fd:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// using (var binaryDeserializer = new BinaryDeserializer(stream))
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_5 = V_0;
				BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_6 = (BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1*)il2cpp_codegen_object_new(BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1_il2cpp_TypeInfo_var);
				NullCheck(L_6);
				BinaryDeserializer__ctor_mDD79DF6C7453224BEE20972579E565AA72533DEF(L_6, L_5, NULL);
				V_1 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_02ea_1:
					{// begin finally (depth: 2)
						{
							BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_7 = V_1;
							if (!L_7)
							{
								goto IL_02f3_1;
							}
						}
						{
							BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_8 = V_1;
							NullCheck(L_8);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
						}

IL_02f3_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						// var number = Int16Serializer.Instance.Deserialize(binaryDeserializer);
						il2cpp_codegen_runtime_class_init_inline(Int16Serializer_t08895AEDFBC84DFB57677B812CFF6FF8D3993F27_il2cpp_TypeInfo_var);
						Int16Serializer_t08895AEDFBC84DFB57677B812CFF6FF8D3993F27* L_9 = ((Int16Serializer_t08895AEDFBC84DFB57677B812CFF6FF8D3993F27_StaticFields*)il2cpp_codegen_static_fields_for(Int16Serializer_t08895AEDFBC84DFB57677B812CFF6FF8D3993F27_il2cpp_TypeInfo_var))->___Instance_1;
						BinaryDeserializer_t24675039602523794BE4E4ADFFFC26F66145F0C1* L_10 = V_1;
						NullCheck(L_9);
						int16_t L_11;
						L_11 = BaseItemSerializer_1_Deserialize_m7A4F86FE6A3D9FACD34B7EE6999949140C978CA5(L_9, L_10, BaseItemSerializer_1_Deserialize_m7A4F86FE6A3D9FACD34B7EE6999949140C978CA5_RuntimeMethod_var);
						// if (number == 1)
						int16_t L_12 = L_11;
						G_B4_0 = L_12;
						if ((!(((uint32_t)L_12) == ((uint32_t)1))))
						{
							G_B12_0 = L_12;
							goto IL_0157_2;
						}
					}
					{
						// if (Node.Choice1 != null )
						Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_13 = __this->___Node_12;
						NullCheck(L_13);
						Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_14 = L_13->___Choice1_8;
						il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
						bool L_15;
						L_15 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
						G_B5_0 = G_B4_0;
						if (!L_15)
						{
							G_B6_0 = G_B4_0;
							goto IL_005d_2;
						}
					}
					{
						// Node = Node.Choice1;
						Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_16 = __this->___Node_12;
						NullCheck(L_16);
						Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_17 = L_16->___Choice1_8;
						__this->___Node_12 = L_17;
						Il2CppCodeGenWriteBarrier((void**)(&__this->___Node_12), (void*)L_17);
						G_B7_0 = G_B5_0;
						goto IL_006c_2;
					}

IL_005d_2:
					{
						// Debug.LogFormat("Node null");
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18;
						L_18 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
						il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
						Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteral1D171A4CACA4D064A038F731E191F541989E01DD, L_18, NULL);
						G_B7_0 = G_B6_0;
					}

IL_006c_2:
					{
						// Node.isActiveChoice = true;
						Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_19 = __this->___Node_12;
						NullCheck(L_19);
						L_19->___isActiveChoice_4 = (bool)1;
						// if (Node.visibilitys.Decide.Contains(YourRole) || Node.visibilitys.See.Contains(YourRole))
						Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_20 = __this->___Node_12;
						NullCheck(L_20);
						Visibility_t918BF48EBF5A0BFFBF654B3097341CAC5AA1788B* L_21 = L_20->___visibilitys_5;
						NullCheck(L_21);
						RoleU5BU5D_tC247448952C7237A189DBE274942E63D6BF79F4C* L_22 = L_21->___Decide_0;
						int32_t L_23 = __this->___YourRole_11;
						bool L_24;
						L_24 = Enumerable_Contains_TisRole_t053FF4A4C848D01EDA0F9F49F39A1BB5BB335A8C_m64BA73BDF7E453ABF9A0FA8266766DB4A4B73459((RuntimeObject*)L_22, L_23, Enumerable_Contains_TisRole_t053FF4A4C848D01EDA0F9F49F39A1BB5BB335A8C_m64BA73BDF7E453ABF9A0FA8266766DB4A4B73459_RuntimeMethod_var);
						G_B8_0 = G_B7_0;
						if (L_24)
						{
							G_B9_0 = G_B7_0;
							goto IL_00b2_2;
						}
					}
					{
						Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_25 = __this->___Node_12;
						NullCheck(L_25);
						Visibility_t918BF48EBF5A0BFFBF654B3097341CAC5AA1788B* L_26 = L_25->___visibilitys_5;
						NullCheck(L_26);
						RoleU5BU5D_tC247448952C7237A189DBE274942E63D6BF79F4C* L_27 = L_26->___See_1;
						int32_t L_28 = __this->___YourRole_11;
						bool L_29;
						L_29 = Enumerable_Contains_TisRole_t053FF4A4C848D01EDA0F9F49F39A1BB5BB335A8C_m64BA73BDF7E453ABF9A0FA8266766DB4A4B73459((RuntimeObject*)L_27, L_28, Enumerable_Contains_TisRole_t053FF4A4C848D01EDA0F9F49F39A1BB5BB335A8C_m64BA73BDF7E453ABF9A0FA8266766DB4A4B73459_RuntimeMethod_var);
						G_B9_0 = G_B8_0;
						if (!L_29)
						{
							G_B10_0 = G_B8_0;
							goto IL_0100_2;
						}
					}

IL_00b2_2:
					{
						// textDialogueText.text = Node.DialogueText;
						TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_30 = __this->___textDialogueText_6;
						Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_31 = __this->___Node_12;
						NullCheck(L_31);
						String_t* L_32 = L_31->___DialogueText_6;
						NullCheck(L_30);
						VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_30, L_32);
						// Button1.GetComponentInChildren<TextMeshProUGUI>().text = Node.Button1Text;
						Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_33 = __this->___Button1_7;
						NullCheck(L_33);
						TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_34;
						L_34 = Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC(L_33, Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
						Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_35 = __this->___Node_12;
						NullCheck(L_35);
						String_t* L_36 = L_35->___Button1Text_7;
						NullCheck(L_34);
						VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_34, L_36);
						// Button2.GetComponentInChildren<TextMeshProUGUI>().text = Node.Button2Text;
						Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_37 = __this->___Button2_8;
						NullCheck(L_37);
						TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_38;
						L_38 = Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC(L_37, Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
						Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_39 = __this->___Node_12;
						NullCheck(L_39);
						String_t* L_40 = L_39->___Button2Text_9;
						NullCheck(L_38);
						VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_38, L_40);
						G_B11_0 = G_B9_0;
						goto IL_013a_2;
					}

IL_0100_2:
					{
						// textDialogueText.text = "Wait";
						TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_41 = __this->___textDialogueText_6;
						NullCheck(L_41);
						VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_41, _stringLiteralFB6C1F66CC7E11F32F17E21E52D7FF100BE4B4D0);
						// Button1.GetComponentInChildren<TextMeshProUGUI>().text = "Wait";
						Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_42 = __this->___Button1_7;
						NullCheck(L_42);
						TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_43;
						L_43 = Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC(L_42, Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
						NullCheck(L_43);
						VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_43, _stringLiteralFB6C1F66CC7E11F32F17E21E52D7FF100BE4B4D0);
						// Button2.GetComponentInChildren<TextMeshProUGUI>().text = "Wait";
						Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_44 = __this->___Button2_8;
						NullCheck(L_44);
						TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_45;
						L_45 = Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC(L_44, Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
						NullCheck(L_45);
						VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_45, _stringLiteralFB6C1F66CC7E11F32F17E21E52D7FF100BE4B4D0);
						G_B11_0 = G_B10_0;
					}

IL_013a_2:
					{
						// Debug.LogFormat("Receive : " + 1);
						V_2 = 1;
						String_t* L_46;
						L_46 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
						String_t* L_47;
						L_47 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral14652B2A6A161F42FC015E8CECDFB515D175761C, L_46, NULL);
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_48;
						L_48 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
						il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
						Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(L_47, L_48, NULL);
						G_B12_0 = G_B11_0;
					}

IL_0157_2:
					{
						// if (number == 2)
						int16_t L_49 = G_B12_0;
						G_B13_0 = L_49;
						if ((!(((uint32_t)L_49) == ((uint32_t)2))))
						{
							G_B21_0 = L_49;
							goto IL_027e_2;
						}
					}
					{
						// if (Node.Choice2 != null)
						Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_50 = __this->___Node_12;
						NullCheck(L_50);
						Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_51 = L_50->___Choice2_10;
						il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
						bool L_52;
						L_52 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_51, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
						G_B14_0 = G_B13_0;
						if (!L_52)
						{
							G_B15_0 = G_B13_0;
							goto IL_0184_2;
						}
					}
					{
						// Node = Node.Choice2;
						Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_53 = __this->___Node_12;
						NullCheck(L_53);
						Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_54 = L_53->___Choice2_10;
						__this->___Node_12 = L_54;
						Il2CppCodeGenWriteBarrier((void**)(&__this->___Node_12), (void*)L_54);
						G_B16_0 = G_B14_0;
						goto IL_0193_2;
					}

IL_0184_2:
					{
						// Debug.LogFormat("Node null");
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_55;
						L_55 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
						il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
						Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteral1D171A4CACA4D064A038F731E191F541989E01DD, L_55, NULL);
						G_B16_0 = G_B15_0;
					}

IL_0193_2:
					{
						// Node.isActiveChoice = true;
						Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_56 = __this->___Node_12;
						NullCheck(L_56);
						L_56->___isActiveChoice_4 = (bool)1;
						// if (Node.visibilitys.Decide.Contains(YourRole) || Node.visibilitys.See.Contains(YourRole))
						Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_57 = __this->___Node_12;
						NullCheck(L_57);
						Visibility_t918BF48EBF5A0BFFBF654B3097341CAC5AA1788B* L_58 = L_57->___visibilitys_5;
						NullCheck(L_58);
						RoleU5BU5D_tC247448952C7237A189DBE274942E63D6BF79F4C* L_59 = L_58->___Decide_0;
						int32_t L_60 = __this->___YourRole_11;
						bool L_61;
						L_61 = Enumerable_Contains_TisRole_t053FF4A4C848D01EDA0F9F49F39A1BB5BB335A8C_m64BA73BDF7E453ABF9A0FA8266766DB4A4B73459((RuntimeObject*)L_59, L_60, Enumerable_Contains_TisRole_t053FF4A4C848D01EDA0F9F49F39A1BB5BB335A8C_m64BA73BDF7E453ABF9A0FA8266766DB4A4B73459_RuntimeMethod_var);
						G_B17_0 = G_B16_0;
						if (L_61)
						{
							G_B18_0 = G_B16_0;
							goto IL_01d9_2;
						}
					}
					{
						Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_62 = __this->___Node_12;
						NullCheck(L_62);
						Visibility_t918BF48EBF5A0BFFBF654B3097341CAC5AA1788B* L_63 = L_62->___visibilitys_5;
						NullCheck(L_63);
						RoleU5BU5D_tC247448952C7237A189DBE274942E63D6BF79F4C* L_64 = L_63->___See_1;
						int32_t L_65 = __this->___YourRole_11;
						bool L_66;
						L_66 = Enumerable_Contains_TisRole_t053FF4A4C848D01EDA0F9F49F39A1BB5BB335A8C_m64BA73BDF7E453ABF9A0FA8266766DB4A4B73459((RuntimeObject*)L_64, L_65, Enumerable_Contains_TisRole_t053FF4A4C848D01EDA0F9F49F39A1BB5BB335A8C_m64BA73BDF7E453ABF9A0FA8266766DB4A4B73459_RuntimeMethod_var);
						G_B18_0 = G_B17_0;
						if (!L_66)
						{
							G_B19_0 = G_B17_0;
							goto IL_0227_2;
						}
					}

IL_01d9_2:
					{
						// textDialogueText.text = Node.DialogueText;
						TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_67 = __this->___textDialogueText_6;
						Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_68 = __this->___Node_12;
						NullCheck(L_68);
						String_t* L_69 = L_68->___DialogueText_6;
						NullCheck(L_67);
						VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_67, L_69);
						// Button1.GetComponentInChildren<TextMeshProUGUI>().text = Node.Button1Text;
						Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_70 = __this->___Button1_7;
						NullCheck(L_70);
						TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_71;
						L_71 = Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC(L_70, Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
						Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_72 = __this->___Node_12;
						NullCheck(L_72);
						String_t* L_73 = L_72->___Button1Text_7;
						NullCheck(L_71);
						VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_71, L_73);
						// Button2.GetComponentInChildren<TextMeshProUGUI>().text = Node.Button2Text;
						Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_74 = __this->___Button2_8;
						NullCheck(L_74);
						TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_75;
						L_75 = Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC(L_74, Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
						Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_76 = __this->___Node_12;
						NullCheck(L_76);
						String_t* L_77 = L_76->___Button2Text_9;
						NullCheck(L_75);
						VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_75, L_77);
						G_B20_0 = G_B18_0;
						goto IL_0261_2;
					}

IL_0227_2:
					{
						// textDialogueText.text = "Wait";
						TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_78 = __this->___textDialogueText_6;
						NullCheck(L_78);
						VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_78, _stringLiteralFB6C1F66CC7E11F32F17E21E52D7FF100BE4B4D0);
						// Button1.GetComponentInChildren<TextMeshProUGUI>().text = "Wait";
						Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_79 = __this->___Button1_7;
						NullCheck(L_79);
						TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_80;
						L_80 = Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC(L_79, Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
						NullCheck(L_80);
						VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_80, _stringLiteralFB6C1F66CC7E11F32F17E21E52D7FF100BE4B4D0);
						// Button2.GetComponentInChildren<TextMeshProUGUI>().text = "Wait";
						Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_81 = __this->___Button2_8;
						NullCheck(L_81);
						TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_82;
						L_82 = Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC(L_81, Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
						NullCheck(L_82);
						VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_82, _stringLiteralFB6C1F66CC7E11F32F17E21E52D7FF100BE4B4D0);
						G_B20_0 = G_B19_0;
					}

IL_0261_2:
					{
						// Debug.LogFormat("Receive : " + 2);
						V_2 = 2;
						String_t* L_83;
						L_83 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
						String_t* L_84;
						L_84 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral14652B2A6A161F42FC015E8CECDFB515D175761C, L_83, NULL);
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_85;
						L_85 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
						il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
						Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(L_84, L_85, NULL);
						G_B21_0 = G_B20_0;
					}

IL_027e_2:
					{
						// if (number == 3)
						if ((!(((uint32_t)G_B21_0) == ((uint32_t)3))))
						{
							goto IL_02e8_2;
						}
					}
					{
						// Node = MemoryNode;
						Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_86 = __this->___MemoryNode_13;
						__this->___Node_12 = L_86;
						Il2CppCodeGenWriteBarrier((void**)(&__this->___Node_12), (void*)L_86);
						// textDialogueText.text = Node.DialogueText;
						TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_87 = __this->___textDialogueText_6;
						Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_88 = __this->___Node_12;
						NullCheck(L_88);
						String_t* L_89 = L_88->___DialogueText_6;
						NullCheck(L_87);
						VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_87, L_89);
						// Button1.GetComponentInChildren<TextMeshProUGUI>().text = Node.Button1Text;
						Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_90 = __this->___Button1_7;
						NullCheck(L_90);
						TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_91;
						L_91 = Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC(L_90, Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
						Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_92 = __this->___Node_12;
						NullCheck(L_92);
						String_t* L_93 = L_92->___Button1Text_7;
						NullCheck(L_91);
						VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_91, L_93);
						// Button2.GetComponentInChildren<TextMeshProUGUI>().text = Node.Button2Text;
						Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_94 = __this->___Button2_8;
						NullCheck(L_94);
						TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_95;
						L_95 = Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC(L_94, Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
						Node_t57844ECC7CF612576F59B7B01DCFBEA47F42ACB5* L_96 = __this->___Node_12;
						NullCheck(L_96);
						String_t* L_97 = L_96->___Button2Text_9;
						NullCheck(L_95);
						VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_95, L_97);
						// Debug.LogFormat("Receive : " + "Reset");
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_98;
						L_98 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
						il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
						Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteralCA3EB2281C26DA4DD928082294669B22BE9EF168, L_98, NULL);
					}

IL_02e8_2:
					{
						// }
						goto IL_02fe;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_02fe:
	{
		// }
		return;
	}
}
// System.Void Niantic.ARDKExamples.PersistentKeyValueTree::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentKeyValueTree__ctor_m633450DDC5FC06F3385CC6B2988DA44CFD2BF79C (PersistentKeyValueTree_t97C18E58A7392FDB56B81D387EB07F0915B037A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly MemoryStream _stream = new MemoryStream(100);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MemoryStream__ctor_m9E93692A2BB0E34119603FF6A5D44F6A132052E8(L_0, ((int32_t)100), NULL);
		__this->____stream_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stream_15), (void*)L_0);
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
// System.Void Niantic.ARDKExamples.PersistentKeyValueTree/<WaitForReset>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForResetU3Ed__14__ctor_m8D0D52A838D937D652A27540A49533E6E580D826 (U3CWaitForResetU3Ed__14_t10D63D0A0BF1E7B4659C4840274457C038481D89* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Niantic.ARDKExamples.PersistentKeyValueTree/<WaitForReset>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForResetU3Ed__14_System_IDisposable_Dispose_m6B797FE0A4C98F1B5F51FB2EB69A0CCFFAD6BD82 (U3CWaitForResetU3Ed__14_t10D63D0A0BF1E7B4659C4840274457C038481D89* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Niantic.ARDKExamples.PersistentKeyValueTree/<WaitForReset>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitForResetU3Ed__14_MoveNext_m3C3FAB916AD9748BF8F801DD338072FD80C6D1B2 (U3CWaitForResetU3Ed__14_t10D63D0A0BF1E7B4659C4840274457C038481D89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PersistentKeyValueTree_t97C18E58A7392FDB56B81D387EB07F0915B037A2* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PersistentKeyValueTree_t97C18E58A7392FDB56B81D387EB07F0915B037A2* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(sec);
		float L_4 = __this->___sec_2;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_5 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_5, L_4, NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0038:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// OnClickedReset();
		PersistentKeyValueTree_t97C18E58A7392FDB56B81D387EB07F0915B037A2* L_6 = V_1;
		NullCheck(L_6);
		PersistentKeyValueTree_OnClickedReset_m559EAC12928EC216B1C774048AA7E34BC2DEE8D4(L_6, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Niantic.ARDKExamples.PersistentKeyValueTree/<WaitForReset>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitForResetU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m91265EEC2033762F2BAF4995EA911600E9DBC76A (U3CWaitForResetU3Ed__14_t10D63D0A0BF1E7B4659C4840274457C038481D89* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Niantic.ARDKExamples.PersistentKeyValueTree/<WaitForReset>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForResetU3Ed__14_System_Collections_IEnumerator_Reset_m914952990D0F71DDC09E6AFE90756D6FE2A4EDAE (U3CWaitForResetU3Ed__14_t10D63D0A0BF1E7B4659C4840274457C038481D89* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitForResetU3Ed__14_System_Collections_IEnumerator_Reset_m914952990D0F71DDC09E6AFE90756D6FE2A4EDAE_RuntimeMethod_var)));
	}
}
// System.Object Niantic.ARDKExamples.PersistentKeyValueTree/<WaitForReset>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitForResetU3Ed__14_System_Collections_IEnumerator_get_Current_m53DDD0A57B53B6BE79EDC20C1274552894FE060D (U3CWaitForResetU3Ed__14_t10D63D0A0BF1E7B4659C4840274457C038481D89* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m015249B312238B8DCA3493489FAFC3055E2FFEF8_inline (float ___f0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___f0;
		if ((((float)L_0) >= ((float)(0.0f))))
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (-1.0f);
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = (1.0f);
	}

IL_0015:
	{
		V_0 = G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Angle_m9668B13074D1664DD192669C14B3A8FC01676299_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___from0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___to1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		float L_0;
		L_0 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&___from0), NULL);
		float L_1;
		L_1 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&___to1), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = sqrt(((double)((float)il2cpp_codegen_multiply(L_0, L_1))));
		V_0 = ((float)L_2);
		float L_3 = V_0;
		V_2 = (bool)((((float)L_3) < ((float)(1.0E-15f)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0056;
	}

IL_002c:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___from0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___to1;
		float L_7;
		L_7 = Vector2_Dot_mBF0FA0B529C821F4733DDC3AD366B07CD27625F4_inline(L_5, L_6, NULL);
		float L_8 = V_0;
		float L_9;
		L_9 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(((float)(L_7/L_8)), (-1.0f), (1.0f), NULL);
		V_1 = L_9;
		float L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = acos(((double)L_10));
		V_3 = ((float)il2cpp_codegen_multiply(((float)L_11), (57.2957802f)));
		goto IL_0056;
	}

IL_0056:
	{
		float L_12 = V_3;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
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
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t ConnectionFailedArgs_get_ErrorCode_m4D026D356ACA27B5048F3416EBBF5C7B12A791DC_inline (ConnectionFailedArgs_tA6F0384572A7AB910CD8D4779458D910A8591FBC* __this, const RuntimeMethod* method) 
{
	{
		// public uint ErrorCode { get; private set; }
		uint32_t L_0 = __this->___U3CErrorCodeU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PersistentKeyValueUpdatedArgs_get_Key_m80E7E8E7489600E2AF2D5BCDBFA98E4D8A389236_inline (PersistentKeyValueUpdatedArgs_tBF5C837DBBB2FBBBEFE3592A869A0068135EBE6A* __this, const RuntimeMethod* method) 
{
	{
		// public string Key { get; private set; }
		String_t* L_0 = __this->___U3CKeyU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TMP_Dropdown_get_value_m5916A6D1897431E8ED789FEC24551A311D1B5C70_inline (TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* __this, const RuntimeMethod* method) 
{
	{
		// return m_Value;
		int32_t L_0 = __this->___m_Value_26;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mBF0FA0B529C821F4733DDC3AD366B07CD27625F4_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_8 = V_0;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
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
