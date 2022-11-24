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

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Queue`1<UnityEngine.GameObject>>
struct Dictionary_2_tAF663DB1BC1533CFF1E5FB6E311E54F7AC5CD522;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Collections.Generic.Queue`1<UnityEngine.GameObject>>
struct KeyCollection_t92C3F0829D5B8F62CEF6737C0F3FACFDD9D00F71;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Unit>
struct List_1_tC861EE71B27D4135EB3A181D6DFD72879B5394A0;
// System.Collections.Generic.Queue`1<UnityEngine.GameObject>
struct Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.Queue`1<UnityEngine.GameObject>>
struct ValueCollection_tF43BBE67AD0B445F0BABD62352E2A497A28F75B2;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Collections.Generic.Queue`1<UnityEngine.GameObject>>[]
struct EntryU5BU5D_t154965BF132E6DF572960D3753775386E5623D19;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// ARMORTYPE[]
struct ARMORTYPEU5BU5D_tFF5F6ABB9E555580015F6C0D71299A580A03093A;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Collider2D[]
struct Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
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
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
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
// TMPro.TextMeshProUGUI[]
struct TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// Unit[]
struct UnitU5BU5D_tDDDF9ECC9B2C425E4BDE29B6A85BCCA72C9BEB01;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// EffectDespawn
struct EffectDespawn_t1FF4773D6837A0ADF9E2F75FE2AFE186276C6873;
// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Monster
struct Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE;
// MonsterSO
struct MonsterSO_tA176F859E18EBBAC5296DF1F3A559465C2FEC2BF;
// MonsterSpawnManager
struct MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// ObjectPoolingManager
struct ObjectPoolingManager_t33FF87AC48390D80D5C87B47A82A53AD0DEA2E35;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// SellButton
struct SellButton_t46919321F58E53B0518E36E72C9F1D4058947E2D;
// SoundManager
struct SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// StartUI
struct StartUI_t295CC9E82D1C992D2E35406C47CE0A589B2BA13E;
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
// Tile
struct Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// Unit
struct Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867;
// UnitSO
struct UnitSO_tBF9EFA428299727D7511EA3D8D33C8C7B110B6CC;
// UnitSpawnManager
struct UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B;
// UnitTier0
struct UnitTier0_tB13DBEA7BA5F4B9275A17FFDCC0A5156E9EB4DB3;
// UnitTier1
struct UnitTier1_t695C9CB922B71AB73B1BA1E5BE4ECFAFE33C97A4;
// UnitTier2
struct UnitTier2_tB529508144B802AFB1ED3CD028E0B418C0D26EB1;
// UnitTier3
struct UnitTier3_t4B959B8C2B81A3ACB2ACAB1A7960D37CD7890B3D;
// UnitTier4
struct UnitTier4_tA9DA2C58499A6558FD4C57CA8FEE41BB2D5EB5A0;
// UnitTier5
struct UnitTier5_t86D2280E503224D50BA7FBA1C160A87995748B4A;
// UnitTier6
struct UnitTier6_t025237B7F507174AB372965E8609A7B991A43F9B;
// UnitTier7
struct UnitTier7_tB552A9A0D446C556D673ED4087263FC382EDAEDB;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// EffectDespawn/<DespawnCoroutine>d__1
struct U3CDespawnCoroutineU3Ed__1_tA0F90DDD44AA1B306E1FD1C99432AE5E5F504166;
// GameManager/<GameClearCoroutine>d__14
struct U3CGameClearCoroutineU3Ed__14_tFF89EC0D12C6605AE3010E2E7DC786E5C4431308;
// GameManager/<GameOverCoroutine>d__12
struct U3CGameOverCoroutineU3Ed__12_tC719543644596FBA30B944DD95218D1D834FD155;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Monster/<MonsterMoveCoroutine>d__17
struct U3CMonsterMoveCoroutineU3Ed__17_tCED21B51FE2667562689AAD54A02802B88F06011;
// Monster/<OnDamageEffect>d__20
struct U3COnDamageEffectU3Ed__20_t38970314892195F27071F8C96915D70A4348A312;
// MonsterSpawnManager/<MonsterSpawnCoroutine>d__9
struct U3CMonsterSpawnCoroutineU3Ed__9_tC761EC19BB19EFAD115E9ABF2C06C8B717451040;
// MonsterSpawnManager/<Spawn>d__11
struct U3CSpawnU3Ed__11_t97082D7B48076F037180CF22C194149A0D70919F;
// Unit/<Attack>d__13
struct U3CAttackU3Ed__13_t4B6124F7D3D86096A8386FBD39968DB70F153EBB;
// UnitTier5/<Attack>d__1
struct U3CAttackU3Ed__1_tF0E11FBB3E498E44A6E4959A8AC4EC8AD9E28EEC;
// UnitTier6/<Attack>d__1
struct U3CAttackU3Ed__1_t004680985B683F5EA5192615227521238C8F356C;
// UnitTier7/<AllAttack>d__3
struct U3CAllAttackU3Ed__3_t5CBE95EDD500FA5A1DF0D703451B8AB00691FBDE;
// UnitTier7/<Attack>d__2
struct U3CAttackU3Ed__2_t98CC6B9C49F5C9C91D899605878D04FED1CCC917;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tAF663DB1BC1533CFF1E5FB6E311E54F7AC5CD522_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC861EE71B27D4135EB3A181D6DFD72879B5394A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectPoolingManager_t33FF87AC48390D80D5C87B47A82A53AD0DEA2E35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAllAttackU3Ed__3_t5CBE95EDD500FA5A1DF0D703451B8AB00691FBDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAttackU3Ed__13_t4B6124F7D3D86096A8386FBD39968DB70F153EBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAttackU3Ed__1_t004680985B683F5EA5192615227521238C8F356C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAttackU3Ed__1_tF0E11FBB3E498E44A6E4959A8AC4EC8AD9E28EEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAttackU3Ed__2_t98CC6B9C49F5C9C91D899605878D04FED1CCC917_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDespawnCoroutineU3Ed__1_tA0F90DDD44AA1B306E1FD1C99432AE5E5F504166_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGameClearCoroutineU3Ed__14_tFF89EC0D12C6605AE3010E2E7DC786E5C4431308_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGameOverCoroutineU3Ed__12_tC719543644596FBA30B944DD95218D1D834FD155_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMonsterMoveCoroutineU3Ed__17_tCED21B51FE2667562689AAD54A02802B88F06011_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMonsterSpawnCoroutineU3Ed__9_tC761EC19BB19EFAD115E9ABF2C06C8B717451040_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COnDamageEffectU3Ed__20_t38970314892195F27071F8C96915D70A4348A312_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSpawnU3Ed__11_t97082D7B48076F037180CF22C194149A0D70919F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral08AC315CD3927210BCE192687128EE8799AD5109;
IL2CPP_EXTERN_C String_t* _stringLiteral09A9178C1DD9D19D86D4A5F7AE6CDC33CF478C90;
IL2CPP_EXTERN_C String_t* _stringLiteral0BE96F91D362B124A36CAAFDB49DF0928F559EEE;
IL2CPP_EXTERN_C String_t* _stringLiteral15CF6F769B0EB2F2E90C1E65CE61C1FE2C0478AF;
IL2CPP_EXTERN_C String_t* _stringLiteral15E22EBD4601BB439242B50117FCF4E18DADB9A8;
IL2CPP_EXTERN_C String_t* _stringLiteral17E14946D350F28E3AE48F523EB7CE917BD41771;
IL2CPP_EXTERN_C String_t* _stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94;
IL2CPP_EXTERN_C String_t* _stringLiteral2A54DA33F23E63D9B035612A31E866A80DBBC6A5;
IL2CPP_EXTERN_C String_t* _stringLiteral2CD57048DDB52A3B28D25AEE3E6CBF2D8D6DBC32;
IL2CPP_EXTERN_C String_t* _stringLiteral3905B990E856C096FE4CA5D65FA83700E2DFC4E5;
IL2CPP_EXTERN_C String_t* _stringLiteral3A0EAD2BEA5309DBCD0F29E73D4F902FF1F4C748;
IL2CPP_EXTERN_C String_t* _stringLiteral44BD532DF32E35E637F92D3ADE4050C9B9A140BD;
IL2CPP_EXTERN_C String_t* _stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91;
IL2CPP_EXTERN_C String_t* _stringLiteral51DD32CDD54F6632DA2CC498F0365D916AF5774F;
IL2CPP_EXTERN_C String_t* _stringLiteral61F396F9F12CAE176D671D45D33361A94F158579;
IL2CPP_EXTERN_C String_t* _stringLiteral710A0E4915EEF679DC0983092857591DB7AD8D73;
IL2CPP_EXTERN_C String_t* _stringLiteral71319790C6E2C7DE8A487B82A0D722DD8DF39E23;
IL2CPP_EXTERN_C String_t* _stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11;
IL2CPP_EXTERN_C String_t* _stringLiteral76B8B4AAC02D1E1702799D5B99B8AA0E02FCD41D;
IL2CPP_EXTERN_C String_t* _stringLiteral7BABE1837A587306A326029BD798695E074D9F58;
IL2CPP_EXTERN_C String_t* _stringLiteral851445DA7EB0740893C9067B75E2484E7538452A;
IL2CPP_EXTERN_C String_t* _stringLiteral87E218A4292CBF0785B5F12B999ABB348822AA6B;
IL2CPP_EXTERN_C String_t* _stringLiteral8AD043B7BA7FE36DDC7A4374175E67B5506980F7;
IL2CPP_EXTERN_C String_t* _stringLiteral901BE6CEC88A8B9E5C2116D7946EFE53CD95B815;
IL2CPP_EXTERN_C String_t* _stringLiteral9668BDDF183F0261F0A2FBF89952C606EAFAB671;
IL2CPP_EXTERN_C String_t* _stringLiteral978CFADA582FD168A79B99EB3A526E1E05A009A5;
IL2CPP_EXTERN_C String_t* _stringLiteralB564AFFCD774E27144664AED17BE85637DF02394;
IL2CPP_EXTERN_C String_t* _stringLiteralBFD6B087B67695D0771F6B24808659F4F93B6D31;
IL2CPP_EXTERN_C String_t* _stringLiteralCA707F17E1EC46A9E6CA5AF00670E3C27D88A000;
IL2CPP_EXTERN_C String_t* _stringLiteralCBC925EF350BBAA22312541D1E60F601FCFFDD3D;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE022278B309BA51D59FE123CF784D085D9BD4B08;
IL2CPP_EXTERN_C String_t* _stringLiteralEAFE3A8BDC39C1AC4F5C4A3B8EA0E076E441425B;
IL2CPP_EXTERN_C String_t* _stringLiteralEB708CCF27979179779A366696CB33A864C96C72;
IL2CPP_EXTERN_C String_t* _stringLiteralF860C545C12661BE4FCD9E4D9CDAA95D2101F03B;
IL2CPP_EXTERN_C String_t* _stringLiteralF94277228CA967FC150E197852FED5F93C1AF428;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMonster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE_m52812A043587F8679E56985844430E6C9E9A89A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponents_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m2C6D82D3DE7BFC234CEA24B6AC1EF7A3035F2D21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m6BF4B11A7F6CBF1D0ECCA77A49C68DAAC670B856_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m4A1035B662F92EA1964B49DE31719197C6741492_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB97B25C1524DDA1E1B6F885757A16119F4E1DA81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMonster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE_m46917FD3137D7AFBDFECFE97536B7B61FBC5035E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisUnit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867_m591861E25547FC556BBAB6E97DF3D27DF07D6E09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB6634EF9B6B7477FFC7B715B0D3E94BCECF87FD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mCA2B3E7B89876B935DDA05AB4813E52DFA534768_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6C18F06752CF7E3457B8BB667038FD44D1DA4B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m124DD70AF8D41A0266C29E8F486E8973B142C5E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m77D35315A4CF3129B19ADABD2F36602443BB8593_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisMonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2_m114C2882C83E3726CAD84BA6DDABE8EC8283B2FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisUnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B_m9A7F3EC7F143EAFB276065B2E85CF4B01B84BB84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m11F75D84C5BAC39C7B433215A25DFC2818603B24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m5A435FDDADE10BC9599E175F9B600C40ECFE3C1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m6C30DC4D1D969EDB9CB65C30AD26D6263B66DB82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m63EB352CDC9F12E3141775BB74938A69685DE1D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAllAttackU3Ed__3_System_Collections_IEnumerator_Reset_m73E9041BA3946C0E7FFAA114AC2719B6A26A26A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAttackU3Ed__13_System_Collections_IEnumerator_Reset_m3DDACA9D13E55A454A47F77F9E53E64C8D64021D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAttackU3Ed__1_System_Collections_IEnumerator_Reset_m7853459A0528CCA86DCD8642A0BC1882E16C2F2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAttackU3Ed__1_System_Collections_IEnumerator_Reset_m7EE1055F5634720DAFD82A45D7A25FE9561970D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAttackU3Ed__2_System_Collections_IEnumerator_Reset_m42A19540700279FE9B79AB5E52296E8003E1AAA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDespawnCoroutineU3Ed__1_System_Collections_IEnumerator_Reset_m640C8694C9B7169F86CF7B666CA2AC372DE60BE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGameClearCoroutineU3Ed__14_System_Collections_IEnumerator_Reset_mF5B75435512C6A0E6E6D92DF49C2C6E2FA0BB1C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGameOverCoroutineU3Ed__12_System_Collections_IEnumerator_Reset_mB0908CD50D2651F80A39EC375FA4CAC364C60B9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMonsterMoveCoroutineU3Ed__17_System_Collections_IEnumerator_Reset_m56772A847AA3F92C2F184316503FBDA2D4B7F04D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMonsterSpawnCoroutineU3Ed__9_System_Collections_IEnumerator_Reset_mED1F7405F1D631E78A8FA0C5E4FA51AF22FFFB9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COnDamageEffectU3Ed__20_System_Collections_IEnumerator_Reset_m10612D79F45CC6BF043832DD3206477E059DBB6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpawnU3Ed__11_System_Collections_IEnumerator_Reset_m6F43017BB00425D4019B85F3C299EB16E434751E_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ARMORTYPEU5BU5D_tFF5F6ABB9E555580015F6C0D71299A580A03093A;
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
struct AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;

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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Queue`1<UnityEngine.GameObject>>
struct Dictionary_2_tAF663DB1BC1533CFF1E5FB6E311E54F7AC5CD522  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t154965BF132E6DF572960D3753775386E5623D19* ____entries_1;
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
	KeyCollection_t92C3F0829D5B8F62CEF6737C0F3FACFDD9D00F71* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tF43BBE67AD0B445F0BABD62352E2A497A28F75B2* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
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

// System.Collections.Generic.List`1<Unit>
struct List_1_tC861EE71B27D4135EB3A181D6DFD72879B5394A0  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	UnitU5BU5D_tDDDF9ECC9B2C425E4BDE29B6A85BCCA72C9BEB01* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tC861EE71B27D4135EB3A181D6DFD72879B5394A0_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	UnitU5BU5D_tDDDF9ECC9B2C425E4BDE29B6A85BCCA72C9BEB01* ___s_emptyArray_5;
};

// System.Collections.Generic.Queue`1<UnityEngine.GameObject>
struct Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};
struct Il2CppArrayBounds;

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
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

// EffectDespawn/<DespawnCoroutine>d__1
struct U3CDespawnCoroutineU3Ed__1_tA0F90DDD44AA1B306E1FD1C99432AE5E5F504166  : public RuntimeObject
{
	// System.Int32 EffectDespawn/<DespawnCoroutine>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EffectDespawn/<DespawnCoroutine>d__1::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// EffectDespawn EffectDespawn/<DespawnCoroutine>d__1::<>4__this
	EffectDespawn_t1FF4773D6837A0ADF9E2F75FE2AFE186276C6873* ___U3CU3E4__this_2;
};

// GameManager/<GameClearCoroutine>d__14
struct U3CGameClearCoroutineU3Ed__14_tFF89EC0D12C6605AE3010E2E7DC786E5C4431308  : public RuntimeObject
{
	// System.Int32 GameManager/<GameClearCoroutine>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<GameClearCoroutine>d__14::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GameManager GameManager/<GameClearCoroutine>d__14::<>4__this
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___U3CU3E4__this_2;
};

// GameManager/<GameOverCoroutine>d__12
struct U3CGameOverCoroutineU3Ed__12_tC719543644596FBA30B944DD95218D1D834FD155  : public RuntimeObject
{
	// System.Int32 GameManager/<GameOverCoroutine>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<GameOverCoroutine>d__12::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GameManager GameManager/<GameOverCoroutine>d__12::<>4__this
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___U3CU3E4__this_2;
};

// Monster/<MonsterMoveCoroutine>d__17
struct U3CMonsterMoveCoroutineU3Ed__17_tCED21B51FE2667562689AAD54A02802B88F06011  : public RuntimeObject
{
	// System.Int32 Monster/<MonsterMoveCoroutine>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Monster/<MonsterMoveCoroutine>d__17::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Monster Monster/<MonsterMoveCoroutine>d__17::<>4__this
	Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* ___U3CU3E4__this_2;
};

// Monster/<OnDamageEffect>d__20
struct U3COnDamageEffectU3Ed__20_t38970314892195F27071F8C96915D70A4348A312  : public RuntimeObject
{
	// System.Int32 Monster/<OnDamageEffect>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Monster/<OnDamageEffect>d__20::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Monster Monster/<OnDamageEffect>d__20::<>4__this
	Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* ___U3CU3E4__this_2;
};

// MonsterSpawnManager/<MonsterSpawnCoroutine>d__9
struct U3CMonsterSpawnCoroutineU3Ed__9_tC761EC19BB19EFAD115E9ABF2C06C8B717451040  : public RuntimeObject
{
	// System.Int32 MonsterSpawnManager/<MonsterSpawnCoroutine>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MonsterSpawnManager/<MonsterSpawnCoroutine>d__9::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// MonsterSpawnManager MonsterSpawnManager/<MonsterSpawnCoroutine>d__9::<>4__this
	MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2* ___U3CU3E4__this_2;
	// System.Int32 MonsterSpawnManager/<MonsterSpawnCoroutine>d__9::<i>5__2
	int32_t ___U3CiU3E5__2_3;
};

// MonsterSpawnManager/<Spawn>d__11
struct U3CSpawnU3Ed__11_t97082D7B48076F037180CF22C194149A0D70919F  : public RuntimeObject
{
	// System.Int32 MonsterSpawnManager/<Spawn>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MonsterSpawnManager/<Spawn>d__11::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// MonsterSpawnManager MonsterSpawnManager/<Spawn>d__11::<>4__this
	MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2* ___U3CU3E4__this_2;
	// System.Int32 MonsterSpawnManager/<Spawn>d__11::<i>5__2
	int32_t ___U3CiU3E5__2_3;
};

// Unit/<Attack>d__13
struct U3CAttackU3Ed__13_t4B6124F7D3D86096A8386FBD39968DB70F153EBB  : public RuntimeObject
{
	// System.Int32 Unit/<Attack>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Unit/<Attack>d__13::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Unit Unit/<Attack>d__13::<>4__this
	Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* ___U3CU3E4__this_2;
};

// UnitTier5/<Attack>d__1
struct U3CAttackU3Ed__1_tF0E11FBB3E498E44A6E4959A8AC4EC8AD9E28EEC  : public RuntimeObject
{
	// System.Int32 UnitTier5/<Attack>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnitTier5/<Attack>d__1::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnitTier5 UnitTier5/<Attack>d__1::<>4__this
	UnitTier5_t86D2280E503224D50BA7FBA1C160A87995748B4A* ___U3CU3E4__this_2;
};

// UnitTier6/<Attack>d__1
struct U3CAttackU3Ed__1_t004680985B683F5EA5192615227521238C8F356C  : public RuntimeObject
{
	// System.Int32 UnitTier6/<Attack>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnitTier6/<Attack>d__1::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnitTier6 UnitTier6/<Attack>d__1::<>4__this
	UnitTier6_t025237B7F507174AB372965E8609A7B991A43F9B* ___U3CU3E4__this_2;
};

// UnitTier7/<AllAttack>d__3
struct U3CAllAttackU3Ed__3_t5CBE95EDD500FA5A1DF0D703451B8AB00691FBDE  : public RuntimeObject
{
	// System.Int32 UnitTier7/<AllAttack>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnitTier7/<AllAttack>d__3::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnitTier7 UnitTier7/<AllAttack>d__3::<>4__this
	UnitTier7_tB552A9A0D446C556D673ED4087263FC382EDAEDB* ___U3CU3E4__this_2;
};

// UnitTier7/<Attack>d__2
struct U3CAttackU3Ed__2_t98CC6B9C49F5C9C91D899605878D04FED1CCC917  : public RuntimeObject
{
	// System.Int32 UnitTier7/<Attack>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnitTier7/<Attack>d__2::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnitTier7 UnitTier7/<Attack>d__2::<>4__this
	UnitTier7_tB552A9A0D446C556D673ED4087263FC382EDAEDB* ___U3CU3E4__this_2;
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

// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Single UnityEngine.WaitForSecondsRealtime::<waitTime>k__BackingField
	float ___U3CwaitTimeU3Ek__BackingField_0;
	// System.Single UnityEngine.WaitForSecondsRealtime::m_WaitUntilTime
	float ___m_WaitUntilTime_1;
};

// UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/MainModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
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

// ARMORTYPE
struct ARMORTYPE_t35636450609199AD716CE25741B3307C5FDD495B 
{
	// System.Int32 ARMORTYPE::value__
	int32_t ___value___2;
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

// UnityEngine.ParticleSystem/MinMaxGradient
struct MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 
{
	// UnityEngine.ParticleSystemGradientMode UnityEngine.ParticleSystem/MinMaxGradient::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.Gradient UnityEngine.ParticleSystem/MinMaxGradient::m_GradientMin
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___m_GradientMin_1;
	// UnityEngine.Gradient UnityEngine.ParticleSystem/MinMaxGradient::m_GradientMax
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___m_GradientMax_2;
	// UnityEngine.Color UnityEngine.ParticleSystem/MinMaxGradient::m_ColorMin
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_ColorMin_3;
	// UnityEngine.Color UnityEngine.ParticleSystem/MinMaxGradient::m_ColorMax
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_ColorMax_4;
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

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// MonsterSO
struct MonsterSO_tA176F859E18EBBAC5296DF1F3A559465C2FEC2BF  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Int32[] MonsterSO::m_HP
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_HP_4;
	// System.Int32[] MonsterSO::m_Armor
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_Armor_5;
	// System.Int32[] MonsterSO::m_Gold
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_Gold_6;
	// System.Single[] MonsterSO::m_MoveSpeed
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_MoveSpeed_7;
	// ARMORTYPE[] MonsterSO::m_type
	ARMORTYPEU5BU5D_tFF5F6ABB9E555580015F6C0D71299A580A03093A* ___m_type_8;
	// System.Boolean[] MonsterSO::m_IsBoss
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___m_IsBoss_9;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnitSO
struct UnitSO_tBF9EFA428299727D7511EA3D8D33C8C7B110B6CC  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Sprite[] UnitSO::m_Sprites
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___m_Sprites_4;
	// System.String[] UnitSO::m_Names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_Names_5;
	// System.Int32[] UnitSO::m_Damages
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_Damages_6;
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

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// EffectDespawn
struct EffectDespawn_t1FF4773D6837A0ADF9E2F75FE2AFE186276C6873  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 GameManager::m_Stage
	int32_t ___m_Stage_5;
	// System.Int32 GameManager::m_Gold
	int32_t ___m_Gold_6;
	// TMPro.TextMeshProUGUI GameManager::m_GoldText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___m_GoldText_7;
	// UnityEngine.GameObject GameManager::m_GameOverObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameOverObj_8;
	// TMPro.TextMeshProUGUI GameManager::m_GameOverText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___m_GameOverText_9;
	// UnityEngine.GameObject GameManager::m_GameClearObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameClearObj_10;
	// TMPro.TextMeshProUGUI GameManager::m_TimeScaleText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___m_TimeScaleText_11;
};

struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields
{
	// GameManager GameManager::instance
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___instance_4;
};

// Monster
struct Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Monster::m_Stage
	int32_t ___m_Stage_4;
	// System.Int32 Monster::m_HP
	int32_t ___m_HP_5;
	// System.Int32 Monster::m_Armor
	int32_t ___m_Armor_6;
	// System.Int32 Monster::m_Gold
	int32_t ___m_Gold_7;
	// System.Int32 Monster::m_NextPoint
	int32_t ___m_NextPoint_8;
	// System.Single Monster::m_MoveSpeed
	float ___m_MoveSpeed_9;
	// System.Boolean Monster::m_IsBoss
	bool ___m_IsBoss_10;
	// ARMORTYPE Monster::m_type
	int32_t ___m_type_11;
	// UnityEngine.WaitForSeconds Monster::m_OnDamageEffectSec
	WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* ___m_OnDamageEffectSec_12;
	// UnityEngine.SpriteRenderer Monster::m_Spren
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___m_Spren_13;
	// UnityEngine.Transform[] Monster::m_Point
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___m_Point_14;
	// UnitSpawnManager Monster::m_UnitManager
	UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* ___m_UnitManager_15;
	// UnityEngine.GameObject Monster::m_FocusObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FocusObj_16;
	// MonsterSO Monster::m_MonsterSO
	MonsterSO_tA176F859E18EBBAC5296DF1F3A559465C2FEC2BF* ___m_MonsterSO_17;
};

// MonsterSpawnManager
struct MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 MonsterSpawnManager::m_MonsterSpawnCount
	int32_t ___m_MonsterSpawnCount_5;
	// System.Int32 MonsterSpawnManager::m_Timer
	int32_t ___m_Timer_6;
	// UnityEngine.Transform[] MonsterSpawnManager::m_Point
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___m_Point_7;
	// UnityEngine.WaitForSeconds MonsterSpawnManager::m_Second
	WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* ___m_Second_8;
	// MonsterSO MonsterSpawnManager::m_MonsterSO
	MonsterSO_tA176F859E18EBBAC5296DF1F3A559465C2FEC2BF* ___m_MonsterSO_9;
	// TMPro.TextMeshProUGUI MonsterSpawnManager::m_TimerText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___m_TimerText_10;
	// TMPro.TextMeshProUGUI MonsterSpawnManager::m_CountText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___m_CountText_11;
};

struct MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2_StaticFields
{
	// System.Int32 MonsterSpawnManager::m_MonsterCount
	int32_t ___m_MonsterCount_4;
};

// ObjectPoolingManager
struct ObjectPoolingManager_t33FF87AC48390D80D5C87B47A82A53AD0DEA2E35  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ObjectPoolingManager::m_Monster00
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Monster00_4;
	// UnityEngine.GameObject ObjectPoolingManager::m_Effect00
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Effect00_5;
	// System.Collections.Generic.Queue`1<UnityEngine.GameObject> ObjectPoolingManager::m_Monster00Queue
	Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* ___m_Monster00Queue_8;
	// System.Collections.Generic.Queue`1<UnityEngine.GameObject> ObjectPoolingManager::m_Effect00Queue
	Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* ___m_Effect00Queue_9;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Queue`1<UnityEngine.GameObject>> ObjectPoolingManager::m_queueDic
	Dictionary_2_tAF663DB1BC1533CFF1E5FB6E311E54F7AC5CD522* ___m_queueDic_10;
};

struct ObjectPoolingManager_t33FF87AC48390D80D5C87B47A82A53AD0DEA2E35_StaticFields
{
	// ObjectPoolingManager ObjectPoolingManager::instance
	ObjectPoolingManager_t33FF87AC48390D80D5C87B47A82A53AD0DEA2E35* ___instance_11;
};

// SellButton
struct SellButton_t46919321F58E53B0518E36E72C9F1D4058947E2D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnitSpawnManager SellButton::m_UnitManager
	UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* ___m_UnitManager_4;
};

// SoundManager
struct SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioClip[] SoundManager::m_Clips
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ___m_Clips_5;
	// UnityEngine.AudioSource[] SoundManager::m_Audio
	AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* ___m_Audio_6;
};

struct SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields
{
	// SoundManager SoundManager::instance
	SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* ___instance_4;
};

// StartUI
struct StartUI_t295CC9E82D1C992D2E35406C47CE0A589B2BA13E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject StartUI::m_DescriptionObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_DescriptionObj_4;
	// UnityEngine.GameObject StartUI::m_TableObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_TableObj_5;
};

// Tile
struct Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Unit Tile::m_Unit
	Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* ___m_Unit_4;
	// UnitSpawnManager Tile::m_UnitManager
	UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* ___m_UnitManager_5;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Unit
struct Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UNITTIER Unit::m_Tier
	int32_t ___m_Tier_4;
	// ATTACKTYPE Unit::m_Type
	int32_t ___m_Type_5;
	// System.Int32 Unit::m_Damage
	int32_t ___m_Damage_6;
	// System.Int32 Unit::m_Level
	int32_t ___m_Level_7;
	// System.Single Unit::m_Range
	float ___m_Range_8;
	// System.Single Unit::m_AttackDelay
	float ___m_AttackDelay_9;
	// System.String Unit::m_Name
	String_t* ___m_Name_10;
	// UnityEngine.SpriteRenderer Unit::m_Halo
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___m_Halo_11;
	// UnityEngine.WaitForSeconds Unit::m_AttackDelaySec
	WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* ___m_AttackDelaySec_12;
	// TMPro.TextMeshProUGUI Unit::m_NameText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___m_NameText_13;
	// UnityEngine.Animator Unit::m_Ani
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___m_Ani_14;
	// UnitSO Unit::m_UnitSO
	UnitSO_tBF9EFA428299727D7511EA3D8D33C8C7B110B6CC* ___m_UnitSO_15;
};

// UnitSpawnManager
struct UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] UnitSpawnManager::m_UnitObj
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___m_UnitObj_12;
	// UnityEngine.GameObject UnitSpawnManager::m_UnitSet
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_UnitSet_13;
	// UnityEngine.GameObject UnitSpawnManager::m_MonsterSet
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_MonsterSet_14;
	// TMPro.TextMeshProUGUI UnitSpawnManager::m_UnitNameText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___m_UnitNameText_15;
	// TMPro.TextMeshProUGUI UnitSpawnManager::m_UnitTypeText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___m_UnitTypeText_16;
	// TMPro.TextMeshProUGUI UnitSpawnManager::m_UnitTierText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___m_UnitTierText_17;
	// TMPro.TextMeshProUGUI UnitSpawnManager::m_UnitDamageText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___m_UnitDamageText_18;
	// TMPro.TextMeshProUGUI UnitSpawnManager::m_UnitRangeText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___m_UnitRangeText_19;
	// UnityEngine.UI.Image UnitSpawnManager::m_UnitSprite
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_UnitSprite_20;
	// TMPro.TextMeshProUGUI UnitSpawnManager::m_MonsterHPText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___m_MonsterHPText_21;
	// TMPro.TextMeshProUGUI UnitSpawnManager::m_MonsterTypeText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___m_MonsterTypeText_22;
	// TMPro.TextMeshProUGUI UnitSpawnManager::m_MonsterStageText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___m_MonsterStageText_23;
	// TMPro.TextMeshProUGUI UnitSpawnManager::m_MonsterArmorText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___m_MonsterArmorText_24;
	// UnityEngine.UI.Image UnitSpawnManager::m_MonsterSprite
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_MonsterSprite_25;
	// TMPro.TextMeshProUGUI[] UnitSpawnManager::m_PriceTexts
	TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* ___m_PriceTexts_26;
	// TMPro.TextMeshProUGUI[] UnitSpawnManager::m_LevelTexts
	TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* ___m_LevelTexts_27;
	// System.Int32[] UnitSpawnManager::m_Levels
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_Levels_28;
	// System.Collections.Generic.List`1<Unit> UnitSpawnManager::m_Type0Unit
	List_1_tC861EE71B27D4135EB3A181D6DFD72879B5394A0* ___m_Type0Unit_29;
	// System.Collections.Generic.List`1<Unit> UnitSpawnManager::m_Type1Unit
	List_1_tC861EE71B27D4135EB3A181D6DFD72879B5394A0* ___m_Type1Unit_30;
	// System.Collections.Generic.List`1<Unit> UnitSpawnManager::m_Type2Unit
	List_1_tC861EE71B27D4135EB3A181D6DFD72879B5394A0* ___m_Type2Unit_31;
	// Tile UnitSpawnManager::m_FocusTile
	Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* ___m_FocusTile_32;
	// Monster UnitSpawnManager::m_FocusMonster
	Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* ___m_FocusMonster_33;
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

// UnitTier0
struct UnitTier0_tB13DBEA7BA5F4B9275A17FFDCC0A5156E9EB4DB3  : public Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867
{
};

// UnitTier1
struct UnitTier1_t695C9CB922B71AB73B1BA1E5BE4ECFAFE33C97A4  : public Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867
{
};

// UnitTier2
struct UnitTier2_tB529508144B802AFB1ED3CD028E0B418C0D26EB1  : public Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867
{
};

// UnitTier3
struct UnitTier3_t4B959B8C2B81A3ACB2ACAB1A7960D37CD7890B3D  : public Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867
{
};

// UnitTier4
struct UnitTier4_tA9DA2C58499A6558FD4C57CA8FEE41BB2D5EB5A0  : public Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867
{
};

// UnitTier5
struct UnitTier5_t86D2280E503224D50BA7FBA1C160A87995748B4A  : public Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867
{
};

// UnitTier6
struct UnitTier6_t025237B7F507174AB372965E8609A7B991A43F9B  : public Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867
{
};

// UnitTier7
struct UnitTier7_tB552A9A0D446C556D673ED4087263FC382EDAEDB  : public Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867
{
	// UnityEngine.WaitForSeconds UnitTier7::m_AllAttackDelaySec
	WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* ___m_AllAttackDelaySec_16;
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
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
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
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// ARMORTYPE[]
struct ARMORTYPEU5BU5D_tFF5F6ABB9E555580015F6C0D71299A580A03093A  : public RuntimeArray
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
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B  : public RuntimeArray
{
	ALIGN_FIELD (8) Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* m_Items[1];

	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* value)
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
// UnityEngine.Collider2D[]
struct Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034  : public RuntimeArray
{
	ALIGN_FIELD (8) Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* m_Items[1];

	inline Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* value)
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


// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponents_TisRuntimeObject_m35447B0B07F9C06A1AF846E482EC6FEB09D2436F_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// System.Collections.IEnumerator EffectDespawn::DespawnCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EffectDespawn_DespawnCoroutine_mFDC1C608DD1552CAAFD8633BDC17F831C09065A3 (EffectDespawn_t1FF4773D6837A0ADF9E2F75FE2AFE186276C6873* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void EffectDespawn/<DespawnCoroutine>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDespawnCoroutineU3Ed__1__ctor_m045780DBB7A4FC61E8EE347FF0D530D214AAA6CD (U3CDespawnCoroutineU3Ed__1_tA0F90DDD44AA1B306E1FD1C99432AE5E5F504166* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// ObjectPoolingManager ObjectPoolingManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectPoolingManager_t33FF87AC48390D80D5C87B47A82A53AD0DEA2E35* ObjectPoolingManager_get_Instance_m725C062C2C3EA1FCA849EA3B708B8BC726D6093A (const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void ObjectPoolingManager::InsertQueue(UnityEngine.GameObject,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPoolingManager_InsertQueue_m3662D38D31CA5071957D0E03E19BAB28AEFB13F8 (ObjectPoolingManager_t33FF87AC48390D80D5C87B47A82A53AD0DEA2E35* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____obj0, int32_t ____queueKey1, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void GameManager::GoldTextUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GoldTextUpdate_m2C771B7D836456F102A202CC0BC7626A68724663 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void GameManager::SetResolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SetResolution_m89B5A018740F3C3347FC468A5D6E43A40B9B1EE6 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331 (float ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GameManager::GameOverCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_GameOverCoroutine_m6A1359FC04E4E4FC33FC9B35BB06BF9152F84537 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void GameManager/<GameOverCoroutine>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGameOverCoroutineU3Ed__12__ctor_m4ED42B3C42D4578696A3D8053A54F0DEB1219D6E (U3CGameOverCoroutineU3Ed__12_tC719543644596FBA30B944DD95218D1D834FD155* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GameManager::GameClearCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_GameClearCoroutine_mF9A6814744174D5B2895A9A0E9C9F1F5A9E67AD5 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void GameManager/<GameClearCoroutine>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGameClearCoroutineU3Ed__14__ctor_m8A4C772E78EAA9D5BFDDA957BFA0B6092437FA84 (U3CGameClearCoroutineU3Ed__14_tFF89EC0D12C6605AE3010E2E7DC786E5C4431308* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::SetResolution(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_SetResolution_m8EDEB77BD1220D9836020BA4FA26D77A10771100 (int32_t ___width0, int32_t ___height1, bool ___fullscreen2, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_rect(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_rect_mA81158BC169AF8674DE240AE9460FC5A0EADBB19 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_timeScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeScale_m1F45A413D4EEA08B1E0988022512C137F6C1E616 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSecondsRealtime::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* __this, float ___time0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator MonsterSpawnManager::MonsterSpawnCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MonsterSpawnManager_MonsterSpawnCoroutine_mDA3F13234B7928D74CA06FF717C4F945A4F69CA7 (MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2* __this, const RuntimeMethod* method) ;
// System.Void MonsterSpawnManager/<MonsterSpawnCoroutine>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMonsterSpawnCoroutineU3Ed__9__ctor_mDE52779F9BCD6626F7A450980BCB40F9A5A961B8 (U3CMonsterSpawnCoroutineU3Ed__9_tC761EC19BB19EFAD115E9ABF2C06C8B717451040* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void MonsterSpawnManager/<Spawn>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnU3Ed__11__ctor_m93CA31F1F27F60FB38AB2CD678D01A3232017B34 (U3CSpawnU3Ed__11_t97082D7B48076F037180CF22C194149A0D70919F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// GameManager GameManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0 (const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// System.Void MonsterSpawnManager::MonsterSpawnCountCal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonsterSpawnManager_MonsterSpawnCountCal_m50343BAC3650DDD92169A59CFCBD8B35F995D374 (MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2* __this, int32_t ____stage0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator MonsterSpawnManager::Spawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MonsterSpawnManager_Spawn_m3F3B718FEB4159396B55704DFE08AA3DA1309C32 (MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void GameManager::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameOver_mF1BD400E7F84A0B533A58E80ADA7CCB89C964625 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void MonsterSpawnManager::TimerCountTextUpdate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonsterSpawnManager_TimerCountTextUpdate_m8942220DEE10365AC5787DFA4D215363185FFB50 (MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2* __this, int32_t ____num0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject ObjectPoolingManager::GetQueue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ObjectPoolingManager_GetQueue_mA1BF9775AA433479E7DFA82B1C84A3767BECAE64 (ObjectPoolingManager_t33FF87AC48390D80D5C87B47A82A53AD0DEA2E35* __this, int32_t ____queueKey0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Queue`1<UnityEngine.GameObject>>::Add(TKey,TValue)
inline void Dictionary_2_Add_m6BF4B11A7F6CBF1D0ECCA77A49C68DAAC670B856 (Dictionary_2_tAF663DB1BC1533CFF1E5FB6E311E54F7AC5CD522* __this, int32_t ___key0, Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAF663DB1BC1533CFF1E5FB6E311E54F7AC5CD522*, int32_t, Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void ObjectPoolingManager::InitQueue(UnityEngine.GameObject,System.Collections.Generic.Queue`1<UnityEngine.GameObject>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPoolingManager_InitQueue_m5A295C4303FA6FDE24E1E561C5F444B89B575DB9 (ObjectPoolingManager_t33FF87AC48390D80D5C87B47A82A53AD0DEA2E35* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____obj0, Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* ____queue1, int32_t ____count2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void System.Collections.Generic.Queue`1<UnityEngine.GameObject>::Enqueue(T)
inline void Queue_1_Enqueue_m5A435FDDADE10BC9599E175F9B600C40ECFE3C1B (Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___item0, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_angularVelocity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_angularVelocity_mFC06FB14E69DD4847F27E614900D22317AA5A390 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Queue`1<UnityEngine.GameObject>>::get_Item(TKey)
inline Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* Dictionary_2_get_Item_mB97B25C1524DDA1E1B6F885757A16119F4E1DA81 (Dictionary_2_tAF663DB1BC1533CFF1E5FB6E311E54F7AC5CD522* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* (*) (Dictionary_2_tAF663DB1BC1533CFF1E5FB6E311E54F7AC5CD522*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared)(__this, ___key0, method);
}
// T System.Collections.Generic.Queue`1<UnityEngine.GameObject>::Dequeue()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Queue_1_Dequeue_m11F75D84C5BAC39C7B433215A25DFC2818603B24 (Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Queue`1<UnityEngine.GameObject>::get_Count()
inline int32_t Queue_1_get_Count_m63EB352CDC9F12E3141775BB74938A69685DE1D7_inline (Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<UnityEngine.GameObject>::.ctor()
inline void Queue_1__ctor_m6C30DC4D1D969EDB9CB65C30AD26D6263B66DB82 (Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4*, const RuntimeMethod*))Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Queue`1<UnityEngine.GameObject>>::.ctor()
inline void Dictionary_2__ctor_m4A1035B662F92EA1964B49DE31719197C6741492 (Dictionary_2_tAF663DB1BC1533CFF1E5FB6E311E54F7AC5CD522* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAF663DB1BC1533CFF1E5FB6E311E54F7AC5CD522*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// T[] UnityEngine.Component::GetComponents<UnityEngine.AudioSource>()
inline AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* Component_GetComponents_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m2C6D82D3DE7BFC234CEA24B6AC1EF7A3035F2D21 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponents_TisRuntimeObject_m35447B0B07F9C06A1AF846E482EC6FEB09D2436F_gshared)(__this, method);
}
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___value0, const RuntimeMethod* method) ;
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnitSpawnManager::UpgradeTextUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitSpawnManager_UpgradeTextUpdate_mE15B6F9AB77FAD39C6E3214FAFAC74DBB2F144EF (UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Int32 UnitSpawnManager::CheckTier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnitSpawnManager_CheckTier_m0156BEC07235C4F4952811780DF546BA1BFD4E0C (UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* __this, float ____ran0, const RuntimeMethod* method) ;
// ATTACKTYPE UnitSpawnManager::CheckType(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnitSpawnManager_CheckType_m90A580878BF185D514D75730E3D71DA0D94AE125 (UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* __this, int32_t ____ran0, const RuntimeMethod* method) ;
// System.Int32 UnitSpawnManager::CheckIndex(System.Int32,ATTACKTYPE)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnitSpawnManager_CheckIndex_m132B572A54C031EE635BE1420C71663646CA16D0 (UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* __this, int32_t ____tier0, int32_t ____type1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnitSpawnManager::Spawn(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* UnitSpawnManager_Spawn_m4D8A18C3C906B308DFFA9498226A36A8999C011C (UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* __this, int32_t ____tier0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Unit>()
inline Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* GameObject_GetComponent_TisUnit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867_m591861E25547FC556BBAB6E97DF3D27DF07D6E09 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Unit::SetStatus(ATTACKTYPE,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_SetStatus_m819DB31B73DEB2D895F829B00E38F35906E760E5 (Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* __this, int32_t ____type0, int32_t ____index1, const RuntimeMethod* method) ;
// System.Void Unit::SetLevel(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Unit_SetLevel_m413CB9A36FA20D06210D8A6F7A81DC52572E039D_inline (Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* __this, int32_t ____level0, const RuntimeMethod* method) ;
// System.Void UnitSpawnManager::InsertList(ATTACKTYPE,Unit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitSpawnManager_InsertList_mFFF17CBA6DD6C078EA629B24CF573DAFE3113271 (UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* __this, int32_t ____type0, Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* ___unit1, const RuntimeMethod* method) ;
// System.Void UnitSpawnManager::SpawnSoundPlay(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitSpawnManager_SpawnSoundPlay_m12907769677C6089AFA4969492B1E83DB2413800 (UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* __this, int32_t ____tier0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unit>::Add(T)
inline void List_1_Add_mB6634EF9B6B7477FFC7B715B0D3E94BCECF87FD1_inline (List_1_tC861EE71B27D4135EB3A181D6DFD72879B5394A0* __this, Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC861EE71B27D4135EB3A181D6DFD72879B5394A0*, Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T System.Collections.Generic.List`1<Unit>::get_Item(System.Int32)
inline Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* List_1_get_Item_m77D35315A4CF3129B19ADABD2F36602443BB8593 (List_1_tC861EE71B27D4135EB3A181D6DFD72879B5394A0* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* (*) (List_1_tC861EE71B27D4135EB3A181D6DFD72879B5394A0*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<Unit>::get_Count()
inline int32_t List_1_get_Count_m124DD70AF8D41A0266C29E8F486E8973B142C5E4_inline (List_1_tC861EE71B27D4135EB3A181D6DFD72879B5394A0* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC861EE71B27D4135EB3A181D6DFD72879B5394A0*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void UnitSpawnManager::UnitTextUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitSpawnManager_UnitTextUpdate_mFAB7A269B6F7AA39FB556C64C948CC4C2E389073 (UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* __this, const RuntimeMethod* method) ;
// System.Void UnitSpawnManager::Upgrade(ATTACKTYPE)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitSpawnManager_Upgrade_m6A06ED06D095C70F64E166B0DF705120E1B08DD9 (UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* __this, int32_t ____type0, const RuntimeMethod* method) ;
// UnityEngine.Sprite Unit::GetSprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Unit_GetSprite_mC4A9D9742AFA004501AAF6BF281037513D125338 (Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.String Unit::GetNameText()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Unit_GetNameText_m1C7C0F20DA4CC04A22D7706864ACAD9210D4E0FD_inline (Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* __this, const RuntimeMethod* method) ;
// System.String Unit::GetTypeText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Unit_GetTypeText_mBD9F27E4BAFB30063749FF2A8C4363CDBB79B3B6 (Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* __this, const RuntimeMethod* method) ;
// System.String Unit::GetTierText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Unit_GetTierText_m6654632358629E0E20323A06636D93570C7CFEBB (Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* __this, const RuntimeMethod* method) ;
// System.String Unit::GetDamageText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Unit_GetDamageText_m6C3FCD795A0A3AE3F42FB6C8489A099F22BF994A (Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.String Unit::GetRangeText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Unit_GetRangeText_m8EAAFFD39EAA6986CF5BC913F5DCB2F6C6775F67 (Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* __this, const RuntimeMethod* method) ;
// ATTACKTYPE Unit::GetAttackType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Unit_GetAttackType_m5AD0A3431A5100C8A9153C59974E2A5D5AC94763_inline (Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) ;
// UNITTIER Unit::GetTier()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Unit_GetTier_m8EA00F548C995A12B757559DB554FBB1ADEBED19_inline (Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_magenta()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_magenta_mE31C432891E0B3D23C8FB03CB3A38A60E7F52A9A_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_gray()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_cyan()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_cyan_m182A29E7475C0A98ACC03E1CF5252BAB83F0BA31_inline (const RuntimeMethod* method) ;
// UnityEngine.Sprite Monster::GetSprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Monster_GetSprite_m92894F33B50EBD35723D93991B25435AB106B3A6 (Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* __this, const RuntimeMethod* method) ;
// System.String Monster::GetHPText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Monster_GetHPText_m34FEF509529EDEDD328B5C462FFD23C9C6341E54 (Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* __this, const RuntimeMethod* method) ;
// System.String Monster::GetArmorText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Monster_GetArmorText_m60F183C766FA475F192E3442F47412241E073794 (Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* __this, const RuntimeMethod* method) ;
// System.String Monster::GetStageText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Monster_GetStageText_m2F1FF76E9AD595E0332C4D8BAE0FC8156D7435E6 (Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* __this, const RuntimeMethod* method) ;
// System.String Monster::GetTypeText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Monster_GetTypeText_mB517A8D5E1B825EC9DE71A6C46DC6121912451C5 (Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* __this, const RuntimeMethod* method) ;
// ARMORTYPE Monster::GetArmorType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Monster_GetArmorType_mF3466D907FF40CB040BCF0409BAD765E68FC9AE6_inline (Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* __this, const RuntimeMethod* method) ;
// SoundManager SoundManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* SoundManager_get_Instance_mE37BC6A788B14F6895B2B50A4E461F8C7895BAEA (const RuntimeMethod* method) ;
// System.Void SoundManager::SoundPlay(SOUND_NAME)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_SoundPlay_mE25CE7EC2DB0173862EFBB586A4A4AF3D63CE6B6 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, int32_t ____NAME0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unit>::.ctor()
inline void List_1__ctor_m6C18F06752CF7E3457B8BB667038FD44D1DA4B90 (List_1_tC861EE71B27D4135EB3A181D6DFD72879B5394A0* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC861EE71B27D4135EB3A181D6DFD72879B5394A0*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Object::FindObjectOfType<MonsterSpawnManager>()
inline MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2* Object_FindObjectOfType_TisMonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2_m114C2882C83E3726CAD84BA6DDABE8EC8283B2FE (const RuntimeMethod* method)
{
	return ((  MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// T UnityEngine.Object::FindObjectOfType<UnitSpawnManager>()
inline UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* Object_FindObjectOfType_TisUnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B_m9A7F3EC7F143EAFB276065B2E85CF4B01B84BB84 (const RuntimeMethod* method)
{
	return ((  UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Monster::MonsterMoveCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Monster_MonsterMoveCoroutine_mB1B04200C9D50DB5EB30B61363ADEEC6B797E3C7 (Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void Monster/<MonsterMoveCoroutine>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMonsterMoveCoroutineU3Ed__17__ctor_m0E86FA086DC964AE38AE44B5A09F1B5737576455 (U3CMonsterMoveCoroutineU3Ed__17_tCED21B51FE2667562689AAD54A02802B88F06011* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Monster::OnDamageEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Monster_OnDamageEffect_mF601372261D2B62BC28BA2DEDC4C389D4B9CC5EE (Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* __this, const RuntimeMethod* method) ;
// System.Void UnitSpawnManager::MonsterTextUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitSpawnManager_MonsterTextUpdate_m983F7142361CB28FBD59C80948D0B98DF84CFF0D (UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* __this, const RuntimeMethod* method) ;
// System.Void Monster::MonsterDead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monster_MonsterDead_mA7B6702089E83DA55A58284409DEF62ECDEB0F75 (Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* __this, const RuntimeMethod* method) ;
// System.Void UnitSpawnManager::FocusMonsterSelect(Monster)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitSpawnManager_FocusMonsterSelect_m1D770676AFDEE33A84448F5791392724172EB0C2 (UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* __this, Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* ____monster0, const RuntimeMethod* method) ;
// System.Void GameManager::GameClear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameClear_m6E8ECC2DF8FF1AC10C2ED66059419796D91B3111 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void Monster/<OnDamageEffect>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnDamageEffectU3Ed__20__ctor_m26C343CB74B5B6B2CF5D9945ACD8FA1A78AE60DE (U3COnDamageEffectU3Ed__20_t38970314892195F27071F8C96915D70A4348A312* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.Sprite UnityEngine.SpriteRenderer::get_sprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* SpriteRenderer_get_sprite_mEEED0A9E872AE12E56CAF1641F2F592633181D44 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_flipX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void SellButton::RemoveAtList(ATTACKTYPE)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SellButton_RemoveAtList_m40E651BB77CDFC6B7A32DFAAC7F6578ADB6EE09F (SellButton_t46919321F58E53B0518E36E72C9F1D4058947E2D* __this, int32_t ____type0, const RuntimeMethod* method) ;
// System.Void UnitSpawnManager::FocusTileSelect(Tile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitSpawnManager_FocusTileSelect_mB70239159246437C020CCA48296F907671AC7542 (UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* __this, Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* ____tile0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<Unit>::Remove(T)
inline bool List_1_Remove_mCA2B3E7B89876B935DDA05AB4813E52DFA534768 (List_1_tC861EE71B27D4135EB3A181D6DFD72879B5394A0* __this, Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tC861EE71B27D4135EB3A181D6DFD72879B5394A0*, Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void Tile::SpawnUnit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_SpawnUnit_mD8A34767C14D3B4142F9595957E2535968056937 (Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* __this, const RuntimeMethod* method) ;
// System.Void Tile::SwapUnit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_SwapUnit_m94AEB7860D7CE2E7676CBB1C9DD8F90D7A3AA173 (Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnitSpawnManager::SpawnUnit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* UnitSpawnManager_SpawnUnit_mF5653CD9FDDF4A61B7F298238D0D6C285B5690D7 (UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void Unit/<Attack>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackU3Ed__13__ctor_mD17A885028E1FE34E798625137354203B6E66944 (U3CAttackU3Ed__13_t4B6124F7D3D86096A8386FBD39968DB70F153EBB* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.ParticleSystem>()
inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.ParticleSystem/MainModule UnityEngine.ParticleSystem::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystem/MinMaxGradient UnityEngine.ParticleSystem/MinMaxGradient::op_Implicit(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 MinMaxGradient_op_Implicit_mAA6154D6644E72BBA49EB34DC957538EE929DE02 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_startColor(UnityEngine.ParticleSystem/MinMaxGradient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startColor_m504911284CAC53A7C1B97B5D01BBDD2FA67D0E7A (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::GetMask(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_GetMask_m99295ECDD50C4874CA4ABC9448E3F238A023C6F2 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___layerNames0, const RuntimeMethod* method) ;
// UnityEngine.Collider2D UnityEngine.Physics2D::OverlapCircle(UnityEngine.Vector2,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* Physics2D_OverlapCircle_m7167CE7F52AF6745632300B4742EC09407CE5F18 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___point0, float ___radius1, int32_t ___layerMask2, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Monster>()
inline Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* GameObject_GetComponent_TisMonster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE_m46917FD3137D7AFBDFECFE97536B7B61FBC5035E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Int32 Unit::TotalDamage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unit_TotalDamage_mC7B5C20F8D34A0C7BC7F10B0ABF07D5858B52088 (Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* __this, const RuntimeMethod* method) ;
// System.Void Monster::OnDamage(ATTACKTYPE,System.Int32,UNITTIER)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monster_OnDamage_m3137BE1030D5EE18ADABFB4A7E976EF99F5A1635 (Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* __this, int32_t ____attackType0, int32_t ____damage1, int32_t ____tier2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void Unit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit__ctor_m431B8E6991113DC517AFAEF468B91A16BFAFF172 (Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* __this, const RuntimeMethod* method) ;
// System.Void UnitTier5/<Attack>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackU3Ed__1__ctor_mFD0ECF99150C1A23268FC3B980A50731B438C692 (U3CAttackU3Ed__1_tF0E11FBB3E498E44A6E4959A8AC4EC8AD9E28EEC* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.Collider2D[] UnityEngine.Physics2D::OverlapCircleAll(UnityEngine.Vector2,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* Physics2D_OverlapCircleAll_mBEBE14F058D718FA90F44A662C106D9CCDF6B3D9 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___point0, float ___radius1, int32_t ___layerMask2, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Monster>()
inline Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* Component_GetComponent_TisMonster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE_m52812A043587F8679E56985844430E6C9E9A89A7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.GameObject Unit::SpawnEffect(ATTACKTYPE)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Unit_SpawnEffect_mFB7638FC66BB39344B54D002E0A0A9F228004638 (Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* __this, int32_t ____type0, const RuntimeMethod* method) ;
// System.Void UnitTier6/<Attack>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackU3Ed__1__ctor_m2B794EEF693EE2CF9C0866B92AB6CC4B00460CD0 (U3CAttackU3Ed__1_t004680985B683F5EA5192615227521238C8F356C* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnitTier7/<Attack>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackU3Ed__2__ctor_m7FDFDE3484BFC0474E1607F7FFC5F85FC3500987 (U3CAttackU3Ed__2_t98CC6B9C49F5C9C91D899605878D04FED1CCC917* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnitTier7/<AllAttack>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAllAttackU3Ed__3__ctor_mAE8FA0B74A2C32E2E0412764C4B5B63B62EF73AF (U3CAllAttackU3Ed__3_t5CBE95EDD500FA5A1DF0D703451B8AB00691FBDE* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnitTier7::AllAttack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnitTier7_AllAttack_m795815AC6179695539936E752A3C25F7E24D019E (UnitTier7_tB552A9A0D446C556D673ED4087263FC382EDAEDB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
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
// System.Void EffectDespawn::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EffectDespawn_OnEnable_m5846466044EFFCFDB89E6A470D46DBD695A11E6B (EffectDespawn_t1FF4773D6837A0ADF9E2F75FE2AFE186276C6873* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(DespawnCoroutine());
		RuntimeObject* L_0;
		L_0 = EffectDespawn_DespawnCoroutine_mFDC1C608DD1552CAAFD8633BDC17F831C09065A3(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator EffectDespawn::DespawnCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EffectDespawn_DespawnCoroutine_mFDC1C608DD1552CAAFD8633BDC17F831C09065A3 (EffectDespawn_t1FF4773D6837A0ADF9E2F75FE2AFE186276C6873* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDespawnCoroutineU3Ed__1_tA0F90DDD44AA1B306E1FD1C99432AE5E5F504166_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDespawnCoroutineU3Ed__1_tA0F90DDD44AA1B306E1FD1C99432AE5E5F504166* L_0 = (U3CDespawnCoroutineU3Ed__1_tA0F90DDD44AA1B306E1FD1C99432AE5E5F504166*)il2cpp_codegen_object_new(U3CDespawnCoroutineU3Ed__1_tA0F90DDD44AA1B306E1FD1C99432AE5E5F504166_il2cpp_TypeInfo_var);
		U3CDespawnCoroutineU3Ed__1__ctor_m045780DBB7A4FC61E8EE347FF0D530D214AAA6CD(L_0, 0, NULL);
		U3CDespawnCoroutineU3Ed__1_tA0F90DDD44AA1B306E1FD1C99432AE5E5F504166* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void EffectDespawn::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EffectDespawn__ctor_mD4389C3A6DA3ECDF2EF7BBBF53BBEDA966E5D5E8 (EffectDespawn_t1FF4773D6837A0ADF9E2F75FE2AFE186276C6873* __this, const RuntimeMethod* method) 
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
// System.Void EffectDespawn/<DespawnCoroutine>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDespawnCoroutineU3Ed__1__ctor_m045780DBB7A4FC61E8EE347FF0D530D214AAA6CD (U3CDespawnCoroutineU3Ed__1_tA0F90DDD44AA1B306E1FD1C99432AE5E5F504166* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void EffectDespawn/<DespawnCoroutine>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDespawnCoroutineU3Ed__1_System_IDisposable_Dispose_m90034FFBEEA65DB3E22BBB6131BAA0EF1AD219A3 (U3CDespawnCoroutineU3Ed__1_tA0F90DDD44AA1B306E1FD1C99432AE5E5F504166* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean EffectDespawn/<DespawnCoroutine>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDespawnCoroutineU3Ed__1_MoveNext_m0CA39B8B2739B1B8DDEDDF4184E8B364D702E62F (U3CDespawnCoroutineU3Ed__1_tA0F90DDD44AA1B306E1FD1C99432AE5E5F504166* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EffectDespawn_t1FF4773D6837A0ADF9E2F75FE2AFE186276C6873* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		EffectDespawn_t1FF4773D6837A0ADF9E2F75FE2AFE186276C6873* L_1 = __this->___U3CU3E4__this_2;
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
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// ObjectPoolingManager.Instance.InsertQueue(gameObject, ObjectPoolingManager.m_Effect00Key);
		ObjectPoolingManager_t33FF87AC48390D80D5C87B47A82A53AD0DEA2E35* L_5;
		L_5 = ObjectPoolingManager_get_Instance_m725C062C2C3EA1FCA849EA3B708B8BC726D6093A(NULL);
		EffectDespawn_t1FF4773D6837A0ADF9E2F75FE2AFE186276C6873* L_6 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		ObjectPoolingManager_InsertQueue_m3662D38D31CA5071957D0E03E19BAB28AEFB13F8(L_5, L_7, ((int32_t)100), NULL);
		// }
		return (bool)0;
	}
}
// System.Object EffectDespawn/<DespawnCoroutine>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDespawnCoroutineU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE32F462D6E43178E61F9DE6EC72859C92F831CBC (U3CDespawnCoroutineU3Ed__1_tA0F90DDD44AA1B306E1FD1C99432AE5E5F504166* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void EffectDespawn/<DespawnCoroutine>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDespawnCoroutineU3Ed__1_System_Collections_IEnumerator_Reset_m640C8694C9B7169F86CF7B666CA2AC372DE60BE9 (U3CDespawnCoroutineU3Ed__1_tA0F90DDD44AA1B306E1FD1C99432AE5E5F504166* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDespawnCoroutineU3Ed__1_System_Collections_IEnumerator_Reset_m640C8694C9B7169F86CF7B666CA2AC372DE60BE9_RuntimeMethod_var)));
	}
}
// System.Object EffectDespawn/<DespawnCoroutine>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDespawnCoroutineU3Ed__1_System_Collections_IEnumerator_get_Current_m22372D3B7700DBDE0834162EEFB7A0CC628F06E5 (U3CDespawnCoroutineU3Ed__1_tA0F90DDD44AA1B306E1FD1C99432AE5E5F504166* __this, const RuntimeMethod* method) 
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
// GameManager GameManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return null;
		return (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6*)NULL;
	}

IL_000f:
	{
		// return instance;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_2 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		return L_2;
	}
}
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m4B6E8E2AF58C95C9A2A0C4637A34AE0892CB637F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// instance = this;
		((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
	}

IL_0013:
	{
		// m_Stage = 0;
		__this->___m_Stage_5 = 0;
		// m_Gold = 300;
		__this->___m_Gold_6 = ((int32_t)300);
		// GoldTextUpdate();
		GameManager_GoldTextUpdate_m2C771B7D836456F102A202CC0BC7626A68724663(__this, NULL);
		// SetResolution();
		GameManager_SetResolution_m89B5A018740F3C3347FC468A5D6E43A40B9B1EE6(__this, NULL);
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// }
		return;
	}
}
// System.Void GameManager::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameOver_mF1BD400E7F84A0B533A58E80ADA7CCB89C964625 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(GameOverCoroutine());
		RuntimeObject* L_0;
		L_0 = GameManager_GameOverCoroutine_m6A1359FC04E4E4FC33FC9B35BB06BF9152F84537(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator GameManager::GameOverCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_GameOverCoroutine_m6A1359FC04E4E4FC33FC9B35BB06BF9152F84537 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGameOverCoroutineU3Ed__12_tC719543644596FBA30B944DD95218D1D834FD155_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGameOverCoroutineU3Ed__12_tC719543644596FBA30B944DD95218D1D834FD155* L_0 = (U3CGameOverCoroutineU3Ed__12_tC719543644596FBA30B944DD95218D1D834FD155*)il2cpp_codegen_object_new(U3CGameOverCoroutineU3Ed__12_tC719543644596FBA30B944DD95218D1D834FD155_il2cpp_TypeInfo_var);
		U3CGameOverCoroutineU3Ed__12__ctor_m4ED42B3C42D4578696A3D8053A54F0DEB1219D6E(L_0, 0, NULL);
		U3CGameOverCoroutineU3Ed__12_tC719543644596FBA30B944DD95218D1D834FD155* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void GameManager::GameClear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameClear_m6E8ECC2DF8FF1AC10C2ED66059419796D91B3111 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(GameClearCoroutine());
		RuntimeObject* L_0;
		L_0 = GameManager_GameClearCoroutine_mF9A6814744174D5B2895A9A0E9C9F1F5A9E67AD5(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator GameManager::GameClearCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_GameClearCoroutine_mF9A6814744174D5B2895A9A0E9C9F1F5A9E67AD5 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGameClearCoroutineU3Ed__14_tFF89EC0D12C6605AE3010E2E7DC786E5C4431308_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGameClearCoroutineU3Ed__14_tFF89EC0D12C6605AE3010E2E7DC786E5C4431308* L_0 = (U3CGameClearCoroutineU3Ed__14_tFF89EC0D12C6605AE3010E2E7DC786E5C4431308*)il2cpp_codegen_object_new(U3CGameClearCoroutineU3Ed__14_tFF89EC0D12C6605AE3010E2E7DC786E5C4431308_il2cpp_TypeInfo_var);
		U3CGameClearCoroutineU3Ed__14__ctor_m8A4C772E78EAA9D5BFDDA957BFA0B6092437FA84(L_0, 0, NULL);
		U3CGameClearCoroutineU3Ed__14_tFF89EC0D12C6605AE3010E2E7DC786E5C4431308* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void GameManager::GoldTextUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GoldTextUpdate_m2C771B7D836456F102A202CC0BC7626A68724663 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3905B990E856C096FE4CA5D65FA83700E2DFC4E5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_GoldText.text = string.Format("{0:N0}",m_Gold.ToString());
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___m_GoldText_7;
		int32_t* L_1 = (&__this->___m_Gold_6);
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_1, NULL);
		String_t* L_3;
		L_3 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral3905B990E856C096FE4CA5D65FA83700E2DFC4E5, L_2, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_3);
		// }
		return;
	}
}
// System.Void GameManager::SetResolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SetResolution_m89B5A018740F3C3347FC468A5D6E43A40B9B1EE6 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		// int setWidth = 1600; // ????? ???? ???
		V_0 = ((int32_t)1600);
		// int setHeight = 1000; // ????? ???? ????
		V_1 = ((int32_t)1000);
		// int deviceWidth = Screen.width; // ??? ??? ????
		int32_t L_0;
		L_0 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		V_2 = L_0;
		// int deviceHeight = Screen.height; // ??? ???? ????
		int32_t L_1;
		L_1 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		V_3 = L_1;
		// Screen.SetResolution(setWidth, (int)(((float)deviceHeight / deviceWidth) * setWidth), true); // SetResolution ??? ????? ??????
		int32_t L_2 = V_0;
		int32_t L_3 = V_3;
		int32_t L_4 = V_2;
		int32_t L_5 = V_0;
		Screen_SetResolution_m8EDEB77BD1220D9836020BA4FA26D77A10771100(L_2, il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)(((float)L_3)/((float)L_4))), ((float)L_5)))), (bool)1, NULL);
		// if ((float)setWidth / setHeight < (float)deviceWidth / deviceHeight) // ????? ??? ?? ?? ? ???
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = V_2;
		int32_t L_9 = V_3;
		if ((!(((float)((float)(((float)L_6)/((float)L_7)))) < ((float)((float)(((float)L_8)/((float)L_9)))))))
		{
			goto IL_006b;
		}
	}
	{
		// float newWidth = ((float)setWidth / setHeight) / ((float)deviceWidth / deviceHeight); // ????? ???
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		int32_t L_12 = V_2;
		int32_t L_13 = V_3;
		V_4 = ((float)(((float)(((float)L_10)/((float)L_11)))/((float)(((float)L_12)/((float)L_13)))));
		// Camera.main.rect = new Rect((1f - newWidth) / 2f, 0f, newWidth, 1f); // ????? Rect ????
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_14;
		L_14 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		float L_15 = V_4;
		float L_16 = V_4;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_17;
		memset((&L_17), 0, sizeof(L_17));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_17), ((float)(((float)il2cpp_codegen_subtract((1.0f), L_15))/(2.0f))), (0.0f), L_16, (1.0f), /*hidden argument*/NULL);
		Camera_set_rect_mA81158BC169AF8674DE240AE9460FC5A0EADBB19(L_14, L_17, NULL);
		return;
	}

IL_006b:
	{
		// float newHeight = ((float)deviceWidth / deviceHeight) / ((float)setWidth / setHeight); // ????? ????
		int32_t L_18 = V_2;
		int32_t L_19 = V_3;
		int32_t L_20 = V_0;
		int32_t L_21 = V_1;
		V_5 = ((float)(((float)(((float)L_18)/((float)L_19)))/((float)(((float)L_20)/((float)L_21)))));
		// Camera.main.rect = new Rect(0f, (1f - newHeight) / 2f, 1f, newHeight); // ????? Rect ????
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_22;
		L_22 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		float L_23 = V_5;
		float L_24 = V_5;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_25;
		memset((&L_25), 0, sizeof(L_25));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_25), (0.0f), ((float)(((float)il2cpp_codegen_subtract((1.0f), L_23))/(2.0f))), (1.0f), L_24, /*hidden argument*/NULL);
		Camera_set_rect_mA81158BC169AF8674DE240AE9460FC5A0EADBB19(L_22, L_25, NULL);
		// }
		return;
	}
}
// System.Void GameManager::TimeScaling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_TimeScaling_mA66B4EC4C002801BB37BE2D36A32C25AAB06A00F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15CF6F769B0EB2F2E90C1E65CE61C1FE2C0478AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2CD57048DDB52A3B28D25AEE3E6CBF2D8D6DBC32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// switch (Time.timeScale)
		float L_0;
		L_0 = Time_get_timeScale_m1F45A413D4EEA08B1E0988022512C137F6C1E616(NULL);
		V_0 = L_0;
		float L_1 = V_0;
		if ((((float)L_1) == ((float)(1.0f))))
		{
			goto IL_001f;
		}
	}
	{
		float L_2 = V_0;
		if ((((float)L_2) == ((float)(2.0f))))
		{
			goto IL_003a;
		}
	}
	{
		float L_3 = V_0;
		if ((((float)L_3) == ((float)(3.0f))))
		{
			goto IL_0055;
		}
	}
	{
		return;
	}

IL_001f:
	{
		// Time.timeScale = 2;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((2.0f), NULL);
		// m_TimeScaleText.text = "<<";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_4 = __this->___m_TimeScaleText_11;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_4, _stringLiteral15CF6F769B0EB2F2E90C1E65CE61C1FE2C0478AF);
		// break;
		return;
	}

IL_003a:
	{
		// Time.timeScale = 3;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((3.0f), NULL);
		// m_TimeScaleText.text = "<<<";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_5 = __this->___m_TimeScaleText_11;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_5, _stringLiteral2CD57048DDB52A3B28D25AEE3E6CBF2D8D6DBC32);
		// break;
		return;
	}

IL_0055:
	{
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// m_TimeScaleText.text = "<";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_6 = __this->___m_TimeScaleText_11;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_6, _stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mF453CED520617BFB65C52405A964E06CF17DB368 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
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
// System.Void GameManager/<GameOverCoroutine>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGameOverCoroutineU3Ed__12__ctor_m4ED42B3C42D4578696A3D8053A54F0DEB1219D6E (U3CGameOverCoroutineU3Ed__12_tC719543644596FBA30B944DD95218D1D834FD155* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameManager/<GameOverCoroutine>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGameOverCoroutineU3Ed__12_System_IDisposable_Dispose_mB7839229D049815690F6675083CCDF2CF8D6C4CB (U3CGameOverCoroutineU3Ed__12_tC719543644596FBA30B944DD95218D1D834FD155* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameManager/<GameOverCoroutine>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGameOverCoroutineU3Ed__12_MoveNext_mFB6D0416D25C2859D6CB1F3F6A83B40DCB37F2B8 (U3CGameOverCoroutineU3Ed__12_tC719543644596FBA30B944DD95218D1D834FD155* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A0EAD2BEA5309DBCD0F29E73D4F902FF1F4C748);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_006d;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Time.timeScale = 0;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		// m_GameOverObj.SetActive(true);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_4 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4->___m_GameOverObj_8;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// m_GameOverText.text = $"????? ???????? {m_Stage} Stage????.";
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_6 = V_1;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_7 = L_6->___m_GameOverText_9;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_8 = V_1;
		int32_t L_9 = L_8->___m_Stage_5;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		String_t* L_12;
		L_12 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral3A0EAD2BEA5309DBCD0F29E73D4F902FF1F4C748, L_11, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_7, L_12);
		// yield return new WaitForSecondsRealtime(5f);
		WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* L_13 = (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01*)il2cpp_codegen_object_new(WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F(L_13, (5.0f), NULL);
		__this->___U3CU3E2__current_1 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_13);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_006d:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<GameOverCoroutine>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGameOverCoroutineU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mCB4DF5E57C48CF2BF50E4EF3694892FE2A132502 (U3CGameOverCoroutineU3Ed__12_tC719543644596FBA30B944DD95218D1D834FD155* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameManager/<GameOverCoroutine>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGameOverCoroutineU3Ed__12_System_Collections_IEnumerator_Reset_mB0908CD50D2651F80A39EC375FA4CAC364C60B9F (U3CGameOverCoroutineU3Ed__12_tC719543644596FBA30B944DD95218D1D834FD155* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGameOverCoroutineU3Ed__12_System_Collections_IEnumerator_Reset_mB0908CD50D2651F80A39EC375FA4CAC364C60B9F_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<GameOverCoroutine>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGameOverCoroutineU3Ed__12_System_Collections_IEnumerator_get_Current_mC516ED31C34767E4EB0509ECADE8EC7CAD5ACAE6 (U3CGameOverCoroutineU3Ed__12_tC719543644596FBA30B944DD95218D1D834FD155* __this, const RuntimeMethod* method) 
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
// System.Void GameManager/<GameClearCoroutine>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGameClearCoroutineU3Ed__14__ctor_m8A4C772E78EAA9D5BFDDA957BFA0B6092437FA84 (U3CGameClearCoroutineU3Ed__14_tFF89EC0D12C6605AE3010E2E7DC786E5C4431308* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameManager/<GameClearCoroutine>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGameClearCoroutineU3Ed__14_System_IDisposable_Dispose_mECC548946DCDF9F2928DD4786207B34905529329 (U3CGameClearCoroutineU3Ed__14_tFF89EC0D12C6605AE3010E2E7DC786E5C4431308* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameManager/<GameClearCoroutine>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGameClearCoroutineU3Ed__14_MoveNext_mD7AC659441DCE66EEC380C9F77FA5CAC3A52864A (U3CGameClearCoroutineU3Ed__14_tFF89EC0D12C6605AE3010E2E7DC786E5C4431308* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_004d;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Time.timeScale = 0;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		// m_GameClearObj.SetActive(true);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_4 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4->___m_GameClearObj_10;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// yield return new WaitForSecondsRealtime(5f);
		WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* L_6 = (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01*)il2cpp_codegen_object_new(WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F(L_6, (5.0f), NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_004d:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<GameClearCoroutine>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGameClearCoroutineU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m78DE90F0316C4AFD306D82C26B83EFB73AF5FDF1 (U3CGameClearCoroutineU3Ed__14_tFF89EC0D12C6605AE3010E2E7DC786E5C4431308* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameManager/<GameClearCoroutine>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGameClearCoroutineU3Ed__14_System_Collections_IEnumerator_Reset_mF5B75435512C6A0E6E6D92DF49C2C6E2FA0BB1C2 (U3CGameClearCoroutineU3Ed__14_tFF89EC0D12C6605AE3010E2E7DC786E5C4431308* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGameClearCoroutineU3Ed__14_System_Collections_IEnumerator_Reset_mF5B75435512C6A0E6E6D92DF49C2C6E2FA0BB1C2_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<GameClearCoroutine>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGameClearCoroutineU3Ed__14_System_Collections_IEnumerator_get_Current_mFFA51A222D6DC08BA599793B9B8B0955E0F76B07 (U3CGameClearCoroutineU3Ed__14_tFF89EC0D12C6605AE3010E2E7DC786E5C4431308* __this, const RuntimeMethod* method) 
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
// System.Void MonsterSpawnManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonsterSpawnManager_Start_m056C05C45E1E449F5F11F38939C392E0F44B4740 (MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(MonsterSpawnCoroutine());
		RuntimeObject* L_0;
		L_0 = MonsterSpawnManager_MonsterSpawnCoroutine_mDA3F13234B7928D74CA06FF717C4F945A4F69CA7(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator MonsterSpawnManager::MonsterSpawnCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MonsterSpawnManager_MonsterSpawnCoroutine_mDA3F13234B7928D74CA06FF717C4F945A4F69CA7 (MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMonsterSpawnCoroutineU3Ed__9_tC761EC19BB19EFAD115E9ABF2C06C8B717451040_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CMonsterSpawnCoroutineU3Ed__9_tC761EC19BB19EFAD115E9ABF2C06C8B717451040* L_0 = (U3CMonsterSpawnCoroutineU3Ed__9_tC761EC19BB19EFAD115E9ABF2C06C8B717451040*)il2cpp_codegen_object_new(U3CMonsterSpawnCoroutineU3Ed__9_tC761EC19BB19EFAD115E9ABF2C06C8B717451040_il2cpp_TypeInfo_var);
		U3CMonsterSpawnCoroutineU3Ed__9__ctor_mDE52779F9BCD6626F7A450980BCB40F9A5A961B8(L_0, 0, NULL);
		U3CMonsterSpawnCoroutineU3Ed__9_tC761EC19BB19EFAD115E9ABF2C06C8B717451040* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void MonsterSpawnManager::MonsterSpawnCountCal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonsterSpawnManager_MonsterSpawnCountCal_m50343BAC3650DDD92169A59CFCBD8B35F995D374 (MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2* __this, int32_t ____stage0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ____stage0;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)36))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = ____stage0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)23))))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_2 = ____stage0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)36))))
		{
			goto IL_0069;
		}
	}
	{
		goto IL_009a;
	}

IL_0014:
	{
		int32_t L_3 = ____stage0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)57))))
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_4 = ____stage0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)78))))
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_5 = ____stage0;
		switch (((int32_t)il2cpp_codegen_subtract(L_5, ((int32_t)89))))
		{
			case 0:
			{
				goto IL_0079;
			}
			case 1:
			{
				goto IL_009a;
			}
			case 2:
			{
				goto IL_009a;
			}
			case 3:
			{
				goto IL_009a;
			}
			case 4:
			{
				goto IL_009a;
			}
			case 5:
			{
				goto IL_0079;
			}
			case 6:
			{
				goto IL_0089;
			}
			case 7:
			{
				goto IL_0089;
			}
			case 8:
			{
				goto IL_0089;
			}
			case 9:
			{
				goto IL_0089;
			}
			case 10:
			{
				goto IL_0089;
			}
			case 11:
			{
				goto IL_0079;
			}
		}
	}
	{
		goto IL_009a;
	}

IL_0059:
	{
		// m_MonsterSpawnCount = 3;
		__this->___m_MonsterSpawnCount_5 = 3;
		// m_Timer = 60;
		__this->___m_Timer_6 = ((int32_t)60);
		// break;
		return;
	}

IL_0069:
	{
		// m_MonsterSpawnCount = 2;
		__this->___m_MonsterSpawnCount_5 = 2;
		// m_Timer = 60;
		__this->___m_Timer_6 = ((int32_t)60);
		// break;
		return;
	}

IL_0079:
	{
		// m_MonsterSpawnCount = 1;
		__this->___m_MonsterSpawnCount_5 = 1;
		// m_Timer = 60;
		__this->___m_Timer_6 = ((int32_t)60);
		// break;
		return;
	}

IL_0089:
	{
		// m_MonsterSpawnCount = 10;
		__this->___m_MonsterSpawnCount_5 = ((int32_t)10);
		// m_Timer = 30;
		__this->___m_Timer_6 = ((int32_t)30);
		// break;
		return;
	}

IL_009a:
	{
		// m_MonsterSpawnCount = 30;
		__this->___m_MonsterSpawnCount_5 = ((int32_t)30);
		// m_Timer = 30;
		__this->___m_Timer_6 = ((int32_t)30);
		// }
		return;
	}
}
// System.Collections.IEnumerator MonsterSpawnManager::Spawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MonsterSpawnManager_Spawn_m3F3B718FEB4159396B55704DFE08AA3DA1309C32 (MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSpawnU3Ed__11_t97082D7B48076F037180CF22C194149A0D70919F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSpawnU3Ed__11_t97082D7B48076F037180CF22C194149A0D70919F* L_0 = (U3CSpawnU3Ed__11_t97082D7B48076F037180CF22C194149A0D70919F*)il2cpp_codegen_object_new(U3CSpawnU3Ed__11_t97082D7B48076F037180CF22C194149A0D70919F_il2cpp_TypeInfo_var);
		U3CSpawnU3Ed__11__ctor_m93CA31F1F27F60FB38AB2CD678D01A3232017B34(L_0, 0, NULL);
		U3CSpawnU3Ed__11_t97082D7B48076F037180CF22C194149A0D70919F* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void MonsterSpawnManager::TimerCountTextUpdate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonsterSpawnManager_TimerCountTextUpdate_m8942220DEE10365AC5787DFA4D215363185FFB50 (MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2* __this, int32_t ____num0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76B8B4AAC02D1E1702799D5B99B8AA0E02FCD41D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAFE3A8BDC39C1AC4F5C4A3B8EA0E076E441425B);
		s_Il2CppMethodInitialized = true;
	}
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* G_B2_0 = NULL;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* G_B3_1 = NULL;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* G_B6_0 = NULL;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* G_B4_0 = NULL;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* G_B5_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B7_0;
	memset((&G_B7_0), 0, sizeof(G_B7_0));
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* G_B7_1 = NULL;
	{
		// m_TimerText.text = $"{m_Timer - (_num + 1)}s ({GameManager.Instance.m_Stage + 1} Stage)";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___m_TimerText_10;
		int32_t L_1 = __this->___m_Timer_6;
		int32_t L_2 = ____num0;
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract(L_1, ((int32_t)il2cpp_codegen_add(L_2, 1))));
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_5;
		L_5 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		int32_t L_6 = L_5->___m_Stage_5;
		int32_t L_7 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral76B8B4AAC02D1E1702799D5B99B8AA0E02FCD41D, L_4, L_8, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_9);
		// m_CountText.text = m_MonsterSO.m_IsBoss[GameManager.Instance.m_Stage] ? $"{m_MonsterCount} (Boss)": $"{m_MonsterCount}";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_10 = __this->___m_CountText_11;
		MonsterSO_tA176F859E18EBBAC5296DF1F3A559465C2FEC2BF* L_11 = __this->___m_MonsterSO_9;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_12 = L_11->___m_IsBoss_9;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_13;
		L_13 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		int32_t L_14 = L_13->___m_Stage_5;
		int32_t L_15 = L_14;
		uint8_t L_16 = (uint8_t)(L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		G_B1_0 = L_10;
		if (L_16)
		{
			G_B2_0 = L_10;
			goto IL_0069;
		}
	}
	{
		int32_t L_17 = ((MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2_StaticFields*)il2cpp_codegen_static_fields_for(MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2_il2cpp_TypeInfo_var))->___m_MonsterCount_4;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_18);
		String_t* L_20;
		L_20 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94, L_19, NULL);
		G_B3_0 = L_20;
		G_B3_1 = G_B1_0;
		goto IL_007d;
	}

IL_0069:
	{
		int32_t L_21 = ((MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2_StaticFields*)il2cpp_codegen_static_fields_for(MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2_il2cpp_TypeInfo_var))->___m_MonsterCount_4;
		int32_t L_22 = L_21;
		RuntimeObject* L_23 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_22);
		String_t* L_24;
		L_24 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralEAFE3A8BDC39C1AC4F5C4A3B8EA0E076E441425B, L_23, NULL);
		G_B3_0 = L_24;
		G_B3_1 = G_B2_0;
	}

IL_007d:
	{
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, G_B3_1, G_B3_0);
		// m_CountText.color = m_MonsterSO.m_IsBoss[GameManager.Instance.m_Stage] || m_MonsterCount >= 80 ? Color.red : Color.white;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_25 = __this->___m_CountText_11;
		MonsterSO_tA176F859E18EBBAC5296DF1F3A559465C2FEC2BF* L_26 = __this->___m_MonsterSO_9;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_27 = L_26->___m_IsBoss_9;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_28;
		L_28 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		int32_t L_29 = L_28->___m_Stage_5;
		int32_t L_30 = L_29;
		uint8_t L_31 = (uint8_t)(L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		G_B4_0 = L_25;
		if (L_31)
		{
			G_B6_0 = L_25;
			goto IL_00b0;
		}
	}
	{
		int32_t L_32 = ((MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2_StaticFields*)il2cpp_codegen_static_fields_for(MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2_il2cpp_TypeInfo_var))->___m_MonsterCount_4;
		G_B5_0 = G_B4_0;
		if ((((int32_t)L_32) >= ((int32_t)((int32_t)80))))
		{
			G_B6_0 = G_B4_0;
			goto IL_00b0;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_33;
		L_33 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		G_B7_0 = L_33;
		G_B7_1 = G_B5_0;
		goto IL_00b5;
	}

IL_00b0:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_34;
		L_34 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		G_B7_0 = L_34;
		G_B7_1 = G_B6_0;
	}

IL_00b5:
	{
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B7_1, G_B7_0);
		// }
		return;
	}
}
// System.Void MonsterSpawnManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonsterSpawnManager__ctor_m486897B204EC4B6800E9E1EDB2603148E6AF4560 (MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WaitForSeconds m_Second = new WaitForSeconds(1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_0 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_0, (1.0f), NULL);
		__this->___m_Second_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Second_8), (void*)L_0);
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
// System.Void MonsterSpawnManager/<MonsterSpawnCoroutine>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMonsterSpawnCoroutineU3Ed__9__ctor_mDE52779F9BCD6626F7A450980BCB40F9A5A961B8 (U3CMonsterSpawnCoroutineU3Ed__9_tC761EC19BB19EFAD115E9ABF2C06C8B717451040* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void MonsterSpawnManager/<MonsterSpawnCoroutine>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMonsterSpawnCoroutineU3Ed__9_System_IDisposable_Dispose_m30E89E28953A52D299E1589D285F8E9EF1AACF46 (U3CMonsterSpawnCoroutineU3Ed__9_tC761EC19BB19EFAD115E9ABF2C06C8B717451040* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean MonsterSpawnManager/<MonsterSpawnCoroutine>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMonsterSpawnCoroutineU3Ed__9_MoveNext_m4F03C20A7AEF3887BEF16A8E61F10E093FBAF10A (U3CMonsterSpawnCoroutineU3Ed__9_tC761EC19BB19EFAD115E9ABF2C06C8B717451040* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A54DA33F23E63D9B035612A31E866A80DBBC6A5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2* L_1 = __this->___U3CU3E4__this_2;
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
				goto IL_0042;
			}
			case 2:
			{
				goto IL_00bb;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (5.0f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0042:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_011c;
	}

IL_004e:
	{
		// MonsterSpawnCountCal(GameManager.Instance.m_Stage);
		MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2* L_4 = V_1;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_5;
		L_5 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		int32_t L_6 = L_5->___m_Stage_5;
		MonsterSpawnManager_MonsterSpawnCountCal_m50343BAC3650DDD92169A59CFCBD8B35F995D374(L_4, L_6, NULL);
		// StartCoroutine(Spawn());
		MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2* L_7 = V_1;
		MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2* L_8 = V_1;
		RuntimeObject* L_9;
		L_9 = MonsterSpawnManager_Spawn_m3F3B718FEB4159396B55704DFE08AA3DA1309C32(L_8, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10;
		L_10 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_7, L_9, NULL);
		// for (int i = 0; i < m_Timer; i++)
		__this->___U3CiU3E5__2_3 = 0;
		goto IL_00d2;
	}

IL_0074:
	{
		// if (m_MonsterCount >= 80)
		int32_t L_11 = ((MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2_StaticFields*)il2cpp_codegen_static_fields_for(MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2_il2cpp_TypeInfo_var))->___m_MonsterCount_4;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)80))))
		{
			goto IL_009a;
		}
	}
	{
		// Debug.Log("????? 80???? ???????!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral2A54DA33F23E63D9B035612A31E866A80DBBC6A5, NULL);
		// if (m_MonsterCount >= 100)
		int32_t L_12 = ((MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2_StaticFields*)il2cpp_codegen_static_fields_for(MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2_il2cpp_TypeInfo_var))->___m_MonsterCount_4;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)100))))
		{
			goto IL_009a;
		}
	}
	{
		// GameManager.Instance.GameOver();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_13;
		L_13 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		GameManager_GameOver_mF1BD400E7F84A0B533A58E80ADA7CCB89C964625(L_13, NULL);
	}

IL_009a:
	{
		// TimerCountTextUpdate(i);
		MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2* L_14 = V_1;
		int32_t L_15 = __this->___U3CiU3E5__2_3;
		MonsterSpawnManager_TimerCountTextUpdate_m8942220DEE10365AC5787DFA4D215363185FFB50(L_14, L_15, NULL);
		// yield return m_Second;
		MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2* L_16 = V_1;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_17 = L_16->___m_Second_8;
		__this->___U3CU3E2__current_1 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_17);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00bb:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (int i = 0; i < m_Timer; i++)
		int32_t L_18 = __this->___U3CiU3E5__2_3;
		V_2 = L_18;
		int32_t L_19 = V_2;
		__this->___U3CiU3E5__2_3 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_00d2:
	{
		// for (int i = 0; i < m_Timer; i++)
		int32_t L_20 = __this->___U3CiU3E5__2_3;
		MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2* L_21 = V_1;
		int32_t L_22 = L_21->___m_Timer_6;
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_0074;
		}
	}
	{
		// if (m_MonsterSO.m_IsBoss[GameManager.Instance.m_Stage] && m_MonsterCount >= 1)
		MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2* L_23 = V_1;
		MonsterSO_tA176F859E18EBBAC5296DF1F3A559465C2FEC2BF* L_24 = L_23->___m_MonsterSO_9;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_25 = L_24->___m_IsBoss_9;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_26;
		L_26 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		int32_t L_27 = L_26->___m_Stage_5;
		int32_t L_28 = L_27;
		uint8_t L_29 = (uint8_t)(L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		if (!L_29)
		{
			goto IL_010a;
		}
	}
	{
		int32_t L_30 = ((MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2_StaticFields*)il2cpp_codegen_static_fields_for(MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2_il2cpp_TypeInfo_var))->___m_MonsterCount_4;
		if ((((int32_t)L_30) < ((int32_t)1)))
		{
			goto IL_010a;
		}
	}
	{
		// GameManager.Instance.GameOver();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_31;
		L_31 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		GameManager_GameOver_mF1BD400E7F84A0B533A58E80ADA7CCB89C964625(L_31, NULL);
	}

IL_010a:
	{
		// GameManager.Instance.m_Stage++;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_32;
		L_32 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_33 = L_32;
		int32_t L_34 = L_33->___m_Stage_5;
		L_33->___m_Stage_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_011c:
	{
		// while (gameObject.activeSelf)
		MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2* L_35 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36;
		L_36 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_35, NULL);
		bool L_37;
		L_37 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_36, NULL);
		if (L_37)
		{
			goto IL_004e;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object MonsterSpawnManager/<MonsterSpawnCoroutine>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMonsterSpawnCoroutineU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m430C5A21B2B2F9A2D3E37DE3772DEE622B63C734 (U3CMonsterSpawnCoroutineU3Ed__9_tC761EC19BB19EFAD115E9ABF2C06C8B717451040* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void MonsterSpawnManager/<MonsterSpawnCoroutine>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMonsterSpawnCoroutineU3Ed__9_System_Collections_IEnumerator_Reset_mED1F7405F1D631E78A8FA0C5E4FA51AF22FFFB9C (U3CMonsterSpawnCoroutineU3Ed__9_tC761EC19BB19EFAD115E9ABF2C06C8B717451040* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMonsterSpawnCoroutineU3Ed__9_System_Collections_IEnumerator_Reset_mED1F7405F1D631E78A8FA0C5E4FA51AF22FFFB9C_RuntimeMethod_var)));
	}
}
// System.Object MonsterSpawnManager/<MonsterSpawnCoroutine>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMonsterSpawnCoroutineU3Ed__9_System_Collections_IEnumerator_get_Current_m50D884198976D5FC0153D17488077DD220BBF360 (U3CMonsterSpawnCoroutineU3Ed__9_tC761EC19BB19EFAD115E9ABF2C06C8B717451040* __this, const RuntimeMethod* method) 
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
// System.Void MonsterSpawnManager/<Spawn>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnU3Ed__11__ctor_m93CA31F1F27F60FB38AB2CD678D01A3232017B34 (U3CSpawnU3Ed__11_t97082D7B48076F037180CF22C194149A0D70919F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void MonsterSpawnManager/<Spawn>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnU3Ed__11_System_IDisposable_Dispose_m76BD0E4385BBB85B9407A553C31EB9081C857B1E (U3CSpawnU3Ed__11_t97082D7B48076F037180CF22C194149A0D70919F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean MonsterSpawnManager/<Spawn>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSpawnU3Ed__11_MoveNext_mE56B90FAF5F34FD26FFCA364743074967905A278 (U3CSpawnU3Ed__11_t97082D7B48076F037180CF22C194149A0D70919F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_005c;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (int i = 0; i < m_MonsterSpawnCount; i++)
		__this->___U3CiU3E5__2_3 = 0;
		goto IL_0073;
	}

IL_0027:
	{
		// GameObject obj = ObjectPoolingManager.Instance.GetQueue(ObjectPoolingManager.m_Monster00Key);
		ObjectPoolingManager_t33FF87AC48390D80D5C87B47A82A53AD0DEA2E35* L_4;
		L_4 = ObjectPoolingManager_get_Instance_m725C062C2C3EA1FCA849EA3B708B8BC726D6093A(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = ObjectPoolingManager_GetQueue_mA1BF9775AA433479E7DFA82B1C84A3767BECAE64(L_4, 0, NULL);
		// obj.transform.position = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2* L_7 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_6, L_9, NULL);
		// yield return m_Second;
		MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2* L_10 = V_1;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_11 = L_10->___m_Second_8;
		__this->___U3CU3E2__current_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_11);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_005c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (int i = 0; i < m_MonsterSpawnCount; i++)
		int32_t L_12 = __this->___U3CiU3E5__2_3;
		V_2 = L_12;
		int32_t L_13 = V_2;
		__this->___U3CiU3E5__2_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0073:
	{
		// for (int i = 0; i < m_MonsterSpawnCount; i++)
		int32_t L_14 = __this->___U3CiU3E5__2_3;
		MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2* L_15 = V_1;
		int32_t L_16 = L_15->___m_MonsterSpawnCount_5;
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_0027;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object MonsterSpawnManager/<Spawn>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpawnU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9DA5A25234128ACB231FF914DF7CB3BBF2B09C61 (U3CSpawnU3Ed__11_t97082D7B48076F037180CF22C194149A0D70919F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void MonsterSpawnManager/<Spawn>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnU3Ed__11_System_Collections_IEnumerator_Reset_m6F43017BB00425D4019B85F3C299EB16E434751E (U3CSpawnU3Ed__11_t97082D7B48076F037180CF22C194149A0D70919F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSpawnU3Ed__11_System_Collections_IEnumerator_Reset_m6F43017BB00425D4019B85F3C299EB16E434751E_RuntimeMethod_var)));
	}
}
// System.Object MonsterSpawnManager/<Spawn>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpawnU3Ed__11_System_Collections_IEnumerator_get_Current_mDCFAE175311CE6CD422AA70B607213931707581F (U3CSpawnU3Ed__11_t97082D7B48076F037180CF22C194149A0D70919F* __this, const RuntimeMethod* method) 
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
// ObjectPoolingManager ObjectPoolingManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectPoolingManager_t33FF87AC48390D80D5C87B47A82A53AD0DEA2E35* ObjectPoolingManager_get_Instance_m725C062C2C3EA1FCA849EA3B708B8BC726D6093A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPoolingManager_t33FF87AC48390D80D5C87B47A82A53AD0DEA2E35_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		ObjectPoolingManager_t33FF87AC48390D80D5C87B47A82A53AD0DEA2E35* L_0 = ((ObjectPoolingManager_t33FF87AC48390D80D5C87B47A82A53AD0DEA2E35_StaticFields*)il2cpp_codegen_static_fields_for(ObjectPoolingManager_t33FF87AC48390D80D5C87B47A82A53AD0DEA2E35_il2cpp_TypeInfo_var))->___instance_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return null;
		return (ObjectPoolingManager_t33FF87AC48390D80D5C87B47A82A53AD0DEA2E35*)NULL;
	}

IL_000f:
	{
		// return instance;
		ObjectPoolingManager_t33FF87AC48390D80D5C87B47A82A53AD0DEA2E35* L_2 = ((ObjectPoolingManager_t33FF87AC48390D80D5C87B47A82A53AD0DEA2E35_StaticFields*)il2cpp_codegen_static_fields_for(ObjectPoolingManager_t33FF87AC48390D80D5C87B47A82A53AD0DEA2E35_il2cpp_TypeInfo_var))->___instance_11;
		return L_2;
	}
}
// System.Void ObjectPoolingManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPoolingManager_Awake_m886117B9223FC06F50EA71E1D64A3C11BF33BEEC (ObjectPoolingManager_t33FF87AC48390D80D5C87B47A82A53AD0DEA2E35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m6BF4B11A7F6CBF1D0ECCA77A49C68DAAC670B856_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPoolingManager_t33FF87AC48390D80D5C87B47A82A53AD0DEA2E35_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		ObjectPoolingManager_t33FF87AC48390D80D5C87B47A82A53AD0DEA2E35* L_0 = ((ObjectPoolingManager_t33FF87AC48390D80D5C87B47A82A53AD0DEA2E35_StaticFields*)il2cpp_codegen_static_fields_for(ObjectPoolingManager_t33FF87AC48390D80D5C87B47A82A53AD0DEA2E35_il2cpp_TypeInfo_var))->___instance_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// instance = this;
		((ObjectPoolingManager_t33FF87AC48390D80D5C87B47A82A53AD0DEA2E35_StaticFields*)il2cpp_codegen_static_fields_for(ObjectPoolingManager_t33FF87AC48390D80D5C87B47A82A53AD0DEA2E35_il2cpp_TypeInfo_var))->___instance_11 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((ObjectPoolingManager_t33FF87AC48390D80D5C87B47A82A53AD0DEA2E35_StaticFields*)il2cpp_codegen_static_fields_for(ObjectPoolingManager_t33FF87AC48390D80D5C87B47A82A53AD0DEA2E35_il2cpp_TypeInfo_var))->___instance_11), (void*)__this);
	}

IL_0013:
	{
		// m_queueDic.Add(m_Monster00Key, m_Monster00Queue);
		Dictionary_2_tAF663DB1BC1533CFF1E5FB6E311E54F7AC5CD522* L_2 = __this->___m_queueDic_10;
		Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* L_3 = __this->___m_Monster00Queue_8;
		Dictionary_2_Add_m6BF4B11A7F6CBF1D0ECCA77A49C68DAAC670B856(L_2, 0, L_3, Dictionary_2_Add_m6BF4B11A7F6CBF1D0ECCA77A49C68DAAC670B856_RuntimeMethod_var);
		// m_queueDic.Add(m_Effect00Key, m_Effect00Queue);
		Dictionary_2_tAF663DB1BC1533CFF1E5FB6E311E54F7AC5CD522* L_4 = __this->___m_queueDic_10;
		Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* L_5 = __this->___m_Effect00Queue_9;
		Dictionary_2_Add_m6BF4B11A7F6CBF1D0ECCA77A49C68DAAC670B856(L_4, ((int32_t)100), L_5, Dictionary_2_Add_m6BF4B11A7F6CBF1D0ECCA77A49C68DAAC670B856_RuntimeMethod_var);
		// InitQueue(m_Monster00, m_Monster00Queue, 10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___m_Monster00_4;
		Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* L_7 = __this->___m_Monster00Queue_8;
		ObjectPoolingManager_InitQueue_m5A295C4303FA6FDE24E1E561C5F444B89B575DB9(__this, L_6, L_7, ((int32_t)10), NULL);
		// InitQueue(m_Effect00, m_Effect00Queue, 10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___m_Effect00_5;
		Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* L_9 = __this->___m_Effect00Queue_9;
		ObjectPoolingManager_InitQueue_m5A295C4303FA6FDE24E1E561C5F444B89B575DB9(__this, L_8, L_9, ((int32_t)10), NULL);
		// }
		return;
	}
}
// System.Void ObjectPoolingManager::InitQueue(UnityEngine.GameObject,System.Collections.Generic.Queue`1<UnityEngine.GameObject>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPoolingManager_InitQueue_m5A295C4303FA6FDE24E1E561C5F444B89B575DB9 (ObjectPoolingManager_t33FF87AC48390D80D5C87B47A82A53AD0DEA2E35* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____obj0, Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* ____queue1, int32_t ____count2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m5A435FDDADE10BC9599E175F9B600C40ECFE3C1B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// for (int i = 0; i < _count; i++)
		V_0 = 0;
		goto IL_0031;
	}

IL_0004:
	{
		// GameObject obj = Instantiate(_obj, new Vector3(5000, 5000), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ____obj0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_1), (5000.0f), (5000.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_0, L_1, L_2, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_1 = L_3;
		// _queue.Enqueue(obj);
		Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* L_4 = ____queue1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_1;
		Queue_1_Enqueue_m5A435FDDADE10BC9599E175F9B600C40ECFE3C1B(L_4, L_5, Queue_1_Enqueue_m5A435FDDADE10BC9599E175F9B600C40ECFE3C1B_RuntimeMethod_var);
		// obj.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_1;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// for (int i = 0; i < _count; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0031:
	{
		// for (int i = 0; i < _count; i++)
		int32_t L_8 = V_0;
		int32_t L_9 = ____count2;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ObjectPoolingManager::InsertQueue(UnityEngine.GameObject,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPoolingManager_InsertQueue_m3662D38D31CA5071957D0E03E19BAB28AEFB13F8 (ObjectPoolingManager_t33FF87AC48390D80D5C87B47A82A53AD0DEA2E35* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____obj0, int32_t ____queueKey1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB97B25C1524DDA1E1B6F885757A16119F4E1DA81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m5A435FDDADE10BC9599E175F9B600C40ECFE3C1B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* V_0 = NULL;
	{
		// Rigidbody2D rigid = _obj.GetComponent<Rigidbody2D>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ____obj0;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_1;
		L_1 = GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956(L_0, GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		V_0 = L_1;
		// if (rigid != null)
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// rigid.velocity = Vector3.zero;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_4 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_5, NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_4, L_6, NULL);
		// rigid.angularVelocity = 0f;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_7 = V_0;
		Rigidbody2D_set_angularVelocity_mFC06FB14E69DD4847F27E614900D22317AA5A390(L_7, (0.0f), NULL);
	}

IL_002b:
	{
		// _obj.transform.rotation = Quaternion.identity;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = ____obj0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_9, L_10, NULL);
		// m_queueDic[_queueKey].Enqueue(_obj);
		Dictionary_2_tAF663DB1BC1533CFF1E5FB6E311E54F7AC5CD522* L_11 = __this->___m_queueDic_10;
		int32_t L_12 = ____queueKey1;
		Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* L_13;
		L_13 = Dictionary_2_get_Item_mB97B25C1524DDA1E1B6F885757A16119F4E1DA81(L_11, L_12, Dictionary_2_get_Item_mB97B25C1524DDA1E1B6F885757A16119F4E1DA81_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = ____obj0;
		Queue_1_Enqueue_m5A435FDDADE10BC9599E175F9B600C40ECFE3C1B(L_13, L_14, Queue_1_Enqueue_m5A435FDDADE10BC9599E175F9B600C40ECFE3C1B_RuntimeMethod_var);
		// _obj.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = ____obj0;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)0, NULL);
		// }
		return;
	}
}
// UnityEngine.GameObject ObjectPoolingManager::GetQueue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ObjectPoolingManager_GetQueue_mA1BF9775AA433479E7DFA82B1C84A3767BECAE64 (ObjectPoolingManager_t33FF87AC48390D80D5C87B47A82A53AD0DEA2E35* __this, int32_t ____queueKey0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB97B25C1524DDA1E1B6F885757A16119F4E1DA81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m11F75D84C5BAC39C7B433215A25DFC2818603B24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m63EB352CDC9F12E3141775BB74938A69685DE1D7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// GameObject obj = m_queueDic[_queueKey].Dequeue();
		Dictionary_2_tAF663DB1BC1533CFF1E5FB6E311E54F7AC5CD522* L_0 = __this->___m_queueDic_10;
		int32_t L_1 = ____queueKey0;
		Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* L_2;
		L_2 = Dictionary_2_get_Item_mB97B25C1524DDA1E1B6F885757A16119F4E1DA81(L_0, L_1, Dictionary_2_get_Item_mB97B25C1524DDA1E1B6F885757A16119F4E1DA81_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Queue_1_Dequeue_m11F75D84C5BAC39C7B433215A25DFC2818603B24(L_2, Queue_1_Dequeue_m11F75D84C5BAC39C7B433215A25DFC2818603B24_RuntimeMethod_var);
		V_0 = L_3;
		// obj.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_0;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// if (m_queueDic[_queueKey].Count < 1)
		Dictionary_2_tAF663DB1BC1533CFF1E5FB6E311E54F7AC5CD522* L_5 = __this->___m_queueDic_10;
		int32_t L_6 = ____queueKey0;
		Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* L_7;
		L_7 = Dictionary_2_get_Item_mB97B25C1524DDA1E1B6F885757A16119F4E1DA81(L_5, L_6, Dictionary_2_get_Item_mB97B25C1524DDA1E1B6F885757A16119F4E1DA81_RuntimeMethod_var);
		int32_t L_8;
		L_8 = Queue_1_get_Count_m63EB352CDC9F12E3141775BB74938A69685DE1D7_inline(L_7, Queue_1_get_Count_m63EB352CDC9F12E3141775BB74938A69685DE1D7_RuntimeMethod_var);
		if ((((int32_t)L_8) >= ((int32_t)1)))
		{
			goto IL_0042;
		}
	}
	{
		// InitQueue(obj, m_queueDic[_queueKey], 10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_0;
		Dictionary_2_tAF663DB1BC1533CFF1E5FB6E311E54F7AC5CD522* L_10 = __this->___m_queueDic_10;
		int32_t L_11 = ____queueKey0;
		Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* L_12;
		L_12 = Dictionary_2_get_Item_mB97B25C1524DDA1E1B6F885757A16119F4E1DA81(L_10, L_11, Dictionary_2_get_Item_mB97B25C1524DDA1E1B6F885757A16119F4E1DA81_RuntimeMethod_var);
		ObjectPoolingManager_InitQueue_m5A295C4303FA6FDE24E1E561C5F444B89B575DB9(__this, L_9, L_12, ((int32_t)10), NULL);
	}

IL_0042:
	{
		// return obj;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_0;
		return L_13;
	}
}
// System.Void ObjectPoolingManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPoolingManager__ctor_mFB7C6DF12BC96B263A181E9E46DF16C4B875AD26 (ObjectPoolingManager_t33FF87AC48390D80D5C87B47A82A53AD0DEA2E35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m4A1035B662F92EA1964B49DE31719197C6741492_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tAF663DB1BC1533CFF1E5FB6E311E54F7AC5CD522_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m6C30DC4D1D969EDB9CB65C30AD26D6263B66DB82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Queue<GameObject> m_Monster00Queue = new Queue<GameObject>();
		Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* L_0 = (Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4*)il2cpp_codegen_object_new(Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4_il2cpp_TypeInfo_var);
		Queue_1__ctor_m6C30DC4D1D969EDB9CB65C30AD26D6263B66DB82(L_0, Queue_1__ctor_m6C30DC4D1D969EDB9CB65C30AD26D6263B66DB82_RuntimeMethod_var);
		__this->___m_Monster00Queue_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Monster00Queue_8), (void*)L_0);
		// private Queue<GameObject> m_Effect00Queue = new Queue<GameObject>();
		Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* L_1 = (Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4*)il2cpp_codegen_object_new(Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4_il2cpp_TypeInfo_var);
		Queue_1__ctor_m6C30DC4D1D969EDB9CB65C30AD26D6263B66DB82(L_1, Queue_1__ctor_m6C30DC4D1D969EDB9CB65C30AD26D6263B66DB82_RuntimeMethod_var);
		__this->___m_Effect00Queue_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Effect00Queue_9), (void*)L_1);
		// public Dictionary<int, Queue<GameObject>> m_queueDic = new Dictionary<int, Queue<GameObject>>();
		Dictionary_2_tAF663DB1BC1533CFF1E5FB6E311E54F7AC5CD522* L_2 = (Dictionary_2_tAF663DB1BC1533CFF1E5FB6E311E54F7AC5CD522*)il2cpp_codegen_object_new(Dictionary_2_tAF663DB1BC1533CFF1E5FB6E311E54F7AC5CD522_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4A1035B662F92EA1964B49DE31719197C6741492(L_2, Dictionary_2__ctor_m4A1035B662F92EA1964B49DE31719197C6741492_RuntimeMethod_var);
		__this->___m_queueDic_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_queueDic_10), (void*)L_2);
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
// SoundManager SoundManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* SoundManager_get_Instance_mE37BC6A788B14F6895B2B50A4E461F8C7895BAEA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_0 = ((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return null;
		return (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734*)NULL;
	}

IL_000f:
	{
		// return instance;
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_2 = ((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___instance_4;
		return L_2;
	}
}
// System.Void SoundManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_Awake_mEB5694CE6F2913D14C32C4AF41C936AA76007825 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponents_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m2C6D82D3DE7BFC234CEA24B6AC1EF7A3035F2D21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_0 = ((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// instance = this;
		((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
	}

IL_0013:
	{
		// m_Audio = GetComponents<AudioSource>();
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_2;
		L_2 = Component_GetComponents_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m2C6D82D3DE7BFC234CEA24B6AC1EF7A3035F2D21(__this, Component_GetComponents_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m2C6D82D3DE7BFC234CEA24B6AC1EF7A3035F2D21_RuntimeMethod_var);
		__this->___m_Audio_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Audio_6), (void*)L_2);
		// }
		return;
	}
}
// System.Void SoundManager::SoundPlay(SOUND_NAME)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_SoundPlay_mE25CE7EC2DB0173862EFBB586A4A4AF3D63CE6B6 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, int32_t ____NAME0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < m_Audio.Length; i++)
		V_0 = 0;
		goto IL_004f;
	}

IL_0004:
	{
		// if (m_Audio[i].isPlaying)
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_0 = __this->___m_Audio_6;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		bool L_4;
		L_4 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_3, NULL);
		if (L_4)
		{
			goto IL_004b;
		}
	}
	{
		// m_Audio[i].clip = m_Clips[(int)_NAME];
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_5 = __this->___m_Audio_6;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_9 = __this->___m_Clips_5;
		int32_t L_10 = ____NAME0;
		int32_t L_11 = L_10;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_8, L_12, NULL);
		// if (m_Audio[i].clip != null)
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_13 = __this->___m_Audio_6;
		int32_t L_14 = V_0;
		int32_t L_15 = L_14;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_16 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_17;
		L_17 = AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE(L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_18)
		{
			goto IL_004b;
		}
	}
	{
		// m_Audio[i].Play();
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_19 = __this->___m_Audio_6;
		int32_t L_20 = V_0;
		int32_t L_21 = L_20;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_22, NULL);
		// return;
		return;
	}

IL_004b:
	{
		// for (int i = 0; i < m_Audio.Length; i++)
		int32_t L_23 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_004f:
	{
		// for (int i = 0; i < m_Audio.Length; i++)
		int32_t L_24 = V_0;
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_25 = __this->___m_Audio_6;
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void SoundManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager__ctor_m27816732AF730AF6BEDE4A67ABC9D1A094777213 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) 
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
// System.Void UnitSpawnManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitSpawnManager_Start_m7D761DAD313A8161A01C90CCC25FE7BF443D9AF4 (UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* __this, const RuntimeMethod* method) 
{
	{
		// UpgradeTextUpdate();
		UnitSpawnManager_UpgradeTextUpdate_mE15B6F9AB77FAD39C6E3214FAFAC74DBB2F144EF(__this, NULL);
		// }
		return;
	}
}
// UnityEngine.GameObject UnitSpawnManager::SpawnUnit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* UnitSpawnManager_SpawnUnit_mF5653CD9FDDF4A61B7F298238D0D6C285B5690D7 (UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisUnit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867_m591861E25547FC556BBAB6E97DF3D27DF07D6E09_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* V_5 = NULL;
	{
		// float ranTierPercent = Random.Range(0f, 100f);
		float L_0;
		L_0 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0f), (100.0f), NULL);
		V_0 = L_0;
		// int ranTypePercent = Random.Range(0, 3);
		int32_t L_1;
		L_1 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, 3, NULL);
		V_1 = L_1;
		// int tier = CheckTier(ranTierPercent);
		float L_2 = V_0;
		int32_t L_3;
		L_3 = UnitSpawnManager_CheckTier_m0156BEC07235C4F4952811780DF546BA1BFD4E0C(__this, L_2, NULL);
		V_2 = L_3;
		// ATTACKTYPE type = CheckType(ranTypePercent);
		int32_t L_4 = V_1;
		int32_t L_5;
		L_5 = UnitSpawnManager_CheckType_m90A580878BF185D514D75730E3D71DA0D94AE125(__this, L_4, NULL);
		V_3 = L_5;
		// int index = CheckIndex(tier, type);
		int32_t L_6 = V_2;
		int32_t L_7 = V_3;
		int32_t L_8;
		L_8 = UnitSpawnManager_CheckIndex_m132B572A54C031EE635BE1420C71663646CA16D0(__this, L_6, L_7, NULL);
		V_4 = L_8;
		// GameObject obj = Spawn(tier);
		int32_t L_9 = V_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = UnitSpawnManager_Spawn_m4D8A18C3C906B308DFFA9498226A36A8999C011C(__this, L_9, NULL);
		// Unit unit = obj.GetComponent<Unit>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = L_10;
		Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* L_12;
		L_12 = GameObject_GetComponent_TisUnit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867_m591861E25547FC556BBAB6E97DF3D27DF07D6E09(L_11, GameObject_GetComponent_TisUnit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867_m591861E25547FC556BBAB6E97DF3D27DF07D6E09_RuntimeMethod_var);
		V_5 = L_12;
		// unit.SetStatus(type, index);
		Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* L_13 = V_5;
		int32_t L_14 = V_3;
		int32_t L_15 = V_4;
		Unit_SetStatus_m819DB31B73DEB2D895F829B00E38F35906E760E5(L_13, L_14, L_15, NULL);
		// unit.SetLevel(m_Levels[(int)type]);
		Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* L_16 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = __this->___m_Levels_28;
		int32_t L_18 = V_3;
		int32_t L_19 = L_18;
		int32_t L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		Unit_SetLevel_m413CB9A36FA20D06210D8A6F7A81DC52572E039D_inline(L_16, L_20, NULL);
		// InsertList(type, unit);
		int32_t L_21 = V_3;
		Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* L_22 = V_5;
		UnitSpawnManager_InsertList_mFFF17CBA6DD6C078EA629B24CF573DAFE3113271(__this, L_21, L_22, NULL);
		// SpawnSoundPlay(tier);
		int32_t L_23 = V_2;
		UnitSpawnManager_SpawnSoundPlay_m12907769677C6089AFA4969492B1E83DB2413800(__this, L_23, NULL);
		// return obj;
		return L_11;
	}
}
// UnityEngine.GameObject UnitSpawnManager::Spawn(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* UnitSpawnManager_Spawn_m4D8A18C3C906B308DFFA9498226A36A8999C011C (UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* __this, int32_t ____tier0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Instantiate(m_UnitObj[_tier], gameObject.transform.position, Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___m_UnitObj_12;
		int32_t L_1 = ____tier0;
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_3, L_6, L_7, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		return L_8;
	}
}
// System.Int32 UnitSpawnManager::CheckTier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnitSpawnManager_CheckTier_m0156BEC07235C4F4952811780DF546BA1BFD4E0C (UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* __this, float ____ran0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int tier = 0;
		V_0 = 0;
		// if (_ran <= tier0)
		float L_0 = ____ran0;
		if ((!(((float)L_0) <= ((float)(47.0f)))))
		{
			goto IL_000e;
		}
	}
	{
		// tier = 0;
		V_0 = 0;
		goto IL_0060;
	}

IL_000e:
	{
		// else if (_ran <= tier1)
		float L_1 = ____ran0;
		if ((!(((float)L_1) <= ((float)(78.0f)))))
		{
			goto IL_001a;
		}
	}
	{
		// tier = 1;
		V_0 = 1;
		goto IL_0060;
	}

IL_001a:
	{
		// else if (_ran <= tier2)
		float L_2 = ____ran0;
		if ((!(((float)L_2) <= ((float)(90.3000031f)))))
		{
			goto IL_0026;
		}
	}
	{
		// tier = 2;
		V_0 = 2;
		goto IL_0060;
	}

IL_0026:
	{
		// else if (_ran <= tier3)
		float L_3 = ____ran0;
		if ((!(((float)L_3) <= ((float)(96.9000015f)))))
		{
			goto IL_0032;
		}
	}
	{
		// tier = 3;
		V_0 = 3;
		goto IL_0060;
	}

IL_0032:
	{
		// else if (_ran <= tier4)
		float L_4 = ____ran0;
		if ((!(((float)L_4) <= ((float)(99.0999985f)))))
		{
			goto IL_003e;
		}
	}
	{
		// tier = 4;
		V_0 = 4;
		goto IL_0060;
	}

IL_003e:
	{
		// else if (_ran <= tier5)
		float L_5 = ____ran0;
		if ((!(((float)L_5) <= ((float)(99.8499985f)))))
		{
			goto IL_004a;
		}
	}
	{
		// tier = 5;
		V_0 = 5;
		goto IL_0060;
	}

IL_004a:
	{
		// else if (_ran <= tier6)
		float L_6 = ____ran0;
		if ((!(((float)L_6) <= ((float)(99.9499969f)))))
		{
			goto IL_0056;
		}
	}
	{
		// tier = 6;
		V_0 = 6;
		goto IL_0060;
	}

IL_0056:
	{
		// else if (_ran <= tier7)
		float L_7 = ____ran0;
		if ((!(((float)L_7) <= ((float)(100.0f)))))
		{
			goto IL_0060;
		}
	}
	{
		// tier = 7;
		V_0 = 7;
	}

IL_0060:
	{
		// return tier;
		int32_t L_8 = V_0;
		return L_8;
	}
}
// ATTACKTYPE UnitSpawnManager::CheckType(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnitSpawnManager_CheckType_m90A580878BF185D514D75730E3D71DA0D94AE125 (UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* __this, int32_t ____ran0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// ATTACKTYPE type = 0;
		V_0 = 0;
		int32_t L_0 = ____ran0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0016;
			}
			case 1:
			{
				goto IL_001a;
			}
			case 2:
			{
				goto IL_001e;
			}
		}
	}
	{
		goto IL_0020;
	}

IL_0016:
	{
		// type = ATTACKTYPE.??????;
		V_0 = 0;
		// break;
		goto IL_0020;
	}

IL_001a:
	{
		// type = ATTACKTYPE.?????;
		V_0 = 1;
		// break;
		goto IL_0020;
	}

IL_001e:
	{
		// type = ATTACKTYPE.??????;
		V_0 = 2;
	}

IL_0020:
	{
		// return type;
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnitSpawnManager::CheckIndex(System.Int32,ATTACKTYPE)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnitSpawnManager_CheckIndex_m132B572A54C031EE635BE1420C71663646CA16D0 (UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* __this, int32_t ____tier0, int32_t ____type1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int index = 0;
		V_0 = 0;
		int32_t L_0 = ____tier0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_002d;
			}
			case 1:
			{
				goto IL_005b;
			}
			case 2:
			{
				goto IL_0089;
			}
			case 3:
			{
				goto IL_00b7;
			}
			case 4:
			{
				goto IL_00e5;
			}
			case 5:
			{
				goto IL_0107;
			}
			case 6:
			{
				goto IL_0129;
			}
			case 7:
			{
				goto IL_014b;
			}
		}
	}
	{
		goto IL_016a;
	}

IL_002d:
	{
		int32_t L_1 = ____type1;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0044;
			}
			case 1:
			{
				goto IL_004b;
			}
			case 2:
			{
				goto IL_0053;
			}
		}
	}
	{
		goto IL_016a;
	}

IL_0044:
	{
		// index = 7;
		V_0 = 7;
		// break;
		goto IL_016a;
	}

IL_004b:
	{
		// index = 15;
		V_0 = ((int32_t)15);
		// break;
		goto IL_016a;
	}

IL_0053:
	{
		// index = 23;
		V_0 = ((int32_t)23);
		// break;
		goto IL_016a;
	}

IL_005b:
	{
		int32_t L_2 = ____type1;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0072;
			}
			case 1:
			{
				goto IL_0079;
			}
			case 2:
			{
				goto IL_0081;
			}
		}
	}
	{
		goto IL_016a;
	}

IL_0072:
	{
		// index = 6;
		V_0 = 6;
		// break;
		goto IL_016a;
	}

IL_0079:
	{
		// index = 14;
		V_0 = ((int32_t)14);
		// break;
		goto IL_016a;
	}

IL_0081:
	{
		// index = 22;
		V_0 = ((int32_t)22);
		// break;
		goto IL_016a;
	}

IL_0089:
	{
		int32_t L_3 = ____type1;
		switch (L_3)
		{
			case 0:
			{
				goto IL_00a0;
			}
			case 1:
			{
				goto IL_00a7;
			}
			case 2:
			{
				goto IL_00af;
			}
		}
	}
	{
		goto IL_016a;
	}

IL_00a0:
	{
		// index = 5;
		V_0 = 5;
		// break;
		goto IL_016a;
	}

IL_00a7:
	{
		// index = 13;
		V_0 = ((int32_t)13);
		// break;
		goto IL_016a;
	}

IL_00af:
	{
		// index = 21;
		V_0 = ((int32_t)21);
		// break;
		goto IL_016a;
	}

IL_00b7:
	{
		int32_t L_4 = ____type1;
		switch (L_4)
		{
			case 0:
			{
				goto IL_00ce;
			}
			case 1:
			{
				goto IL_00d5;
			}
			case 2:
			{
				goto IL_00dd;
			}
		}
	}
	{
		goto IL_016a;
	}

IL_00ce:
	{
		// index = 4;
		V_0 = 4;
		// break;
		goto IL_016a;
	}

IL_00d5:
	{
		// index = 12;
		V_0 = ((int32_t)12);
		// break;
		goto IL_016a;
	}

IL_00dd:
	{
		// index = 20;
		V_0 = ((int32_t)20);
		// break;
		goto IL_016a;
	}

IL_00e5:
	{
		int32_t L_5 = ____type1;
		switch (L_5)
		{
			case 0:
			{
				goto IL_00f9;
			}
			case 1:
			{
				goto IL_00fd;
			}
			case 2:
			{
				goto IL_0102;
			}
		}
	}
	{
		goto IL_016a;
	}

IL_00f9:
	{
		// index = 3;
		V_0 = 3;
		// break;
		goto IL_016a;
	}

IL_00fd:
	{
		// index = 11;
		V_0 = ((int32_t)11);
		// break;
		goto IL_016a;
	}

IL_0102:
	{
		// index = 19;
		V_0 = ((int32_t)19);
		// break;
		goto IL_016a;
	}

IL_0107:
	{
		int32_t L_6 = ____type1;
		switch (L_6)
		{
			case 0:
			{
				goto IL_011b;
			}
			case 1:
			{
				goto IL_011f;
			}
			case 2:
			{
				goto IL_0124;
			}
		}
	}
	{
		goto IL_016a;
	}

IL_011b:
	{
		// index = 2;
		V_0 = 2;
		// break;
		goto IL_016a;
	}

IL_011f:
	{
		// index = 10;
		V_0 = ((int32_t)10);
		// break;
		goto IL_016a;
	}

IL_0124:
	{
		// index = 18;
		V_0 = ((int32_t)18);
		// break;
		goto IL_016a;
	}

IL_0129:
	{
		int32_t L_7 = ____type1;
		switch (L_7)
		{
			case 0:
			{
				goto IL_013d;
			}
			case 1:
			{
				goto IL_0141;
			}
			case 2:
			{
				goto IL_0146;
			}
		}
	}
	{
		goto IL_016a;
	}

IL_013d:
	{
		// index = 1;
		V_0 = 1;
		// break;
		goto IL_016a;
	}

IL_0141:
	{
		// index = 9;
		V_0 = ((int32_t)9);
		// break;
		goto IL_016a;
	}

IL_0146:
	{
		// index = 17;
		V_0 = ((int32_t)17);
		// break;
		goto IL_016a;
	}

IL_014b:
	{
		int32_t L_8 = ____type1;
		switch (L_8)
		{
			case 0:
			{
				goto IL_015f;
			}
			case 1:
			{
				goto IL_0163;
			}
			case 2:
			{
				goto IL_0167;
			}
		}
	}
	{
		goto IL_016a;
	}

IL_015f:
	{
		// index = 0;
		V_0 = 0;
		// break;
		goto IL_016a;
	}

IL_0163:
	{
		// index = 8;
		V_0 = 8;
		// break;
		goto IL_016a;
	}

IL_0167:
	{
		// index = 16;
		V_0 = ((int32_t)16);
	}

IL_016a:
	{
		// return index;
		int32_t L_9 = V_0;
		return L_9;
	}
}
// System.Void UnitSpawnManager::InsertList(ATTACKTYPE,Unit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitSpawnManager_InsertList_mFFF17CBA6DD6C078EA629B24CF573DAFE3113271 (UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* __this, int32_t ____type0, Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* ___unit1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB6634EF9B6B7477FFC7B715B0D3E94BCECF87FD1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ____type0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0013;
			}
			case 1:
			{
				goto IL_0020;
			}
			case 2:
			{
				goto IL_002d;
			}
		}
	}
	{
		return;
	}

IL_0013:
	{
		// m_Type0Unit.Add(unit);
		List_1_tC861EE71B27D4135EB3A181D6DFD72879B5394A0* L_1 = __this->___m_Type0Unit_29;
		Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* L_2 = ___unit1;
		List_1_Add_mB6634EF9B6B7477FFC7B715B0D3E94BCECF87FD1_inline(L_1, L_2, List_1_Add_mB6634EF9B6B7477FFC7B715B0D3E94BCECF87FD1_RuntimeMethod_var);
		// break;
		return;
	}

IL_0020:
	{
		// m_Type1Unit.Add(unit);
		List_1_tC861EE71B27D4135EB3A181D6DFD72879B5394A0* L_3 = __this->___m_Type1Unit_30;
		Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* L_4 = ___unit1;
		List_1_Add_mB6634EF9B6B7477FFC7B715B0D3E94BCECF87FD1_inline(L_3, L_4, List_1_Add_mB6634EF9B6B7477FFC7B715B0D3E94BCECF87FD1_RuntimeMethod_var);
		// break;
		return;
	}

IL_002d:
	{
		// m_Type2Unit.Add(unit);
		List_1_tC861EE71B27D4135EB3A181D6DFD72879B5394A0* L_5 = __this->___m_Type2Unit_31;
		Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* L_6 = ___unit1;
		List_1_Add_mB6634EF9B6B7477FFC7B715B0D3E94BCECF87FD1_inline(L_5, L_6, List_1_Add_mB6634EF9B6B7477FFC7B715B0D3E94BCECF87FD1_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnitSpawnManager::Upgrade(ATTACKTYPE)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitSpawnManager_Upgrade_m6A06ED06D095C70F64E166B0DF705120E1B08DD9 (UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* __this, int32_t ____type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m124DD70AF8D41A0266C29E8F486E8973B142C5E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m77D35315A4CF3129B19ADABD2F36602443BB8593_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// m_Levels[(int)_type]++;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___m_Levels_28;
		int32_t L_1 = ____type0;
		int32_t* L_2 = ((L_0)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_1)));
		int32_t L_3 = *((int32_t*)L_2);
		*((int32_t*)L_2) = (int32_t)((int32_t)il2cpp_codegen_add(L_3, 1));
		int32_t L_4 = ____type0;
		switch (L_4)
		{
			case 0:
			{
				goto IL_0028;
			}
			case 1:
			{
				goto IL_0059;
			}
			case 2:
			{
				goto IL_008a;
			}
		}
	}
	{
		goto IL_00b9;
	}

IL_0028:
	{
		// for (int i = 0; i < m_Type0Unit.Count; i++)
		V_0 = 0;
		goto IL_0049;
	}

IL_002c:
	{
		// m_Type0Unit[i].SetLevel(m_Levels[(int)_type]);
		List_1_tC861EE71B27D4135EB3A181D6DFD72879B5394A0* L_5 = __this->___m_Type0Unit_29;
		int32_t L_6 = V_0;
		Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* L_7;
		L_7 = List_1_get_Item_m77D35315A4CF3129B19ADABD2F36602443BB8593(L_5, L_6, List_1_get_Item_m77D35315A4CF3129B19ADABD2F36602443BB8593_RuntimeMethod_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->___m_Levels_28;
		int32_t L_9 = ____type0;
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		Unit_SetLevel_m413CB9A36FA20D06210D8A6F7A81DC52572E039D_inline(L_7, L_11, NULL);
		// for (int i = 0; i < m_Type0Unit.Count; i++)
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0049:
	{
		// for (int i = 0; i < m_Type0Unit.Count; i++)
		int32_t L_13 = V_0;
		List_1_tC861EE71B27D4135EB3A181D6DFD72879B5394A0* L_14 = __this->___m_Type0Unit_29;
		int32_t L_15;
		L_15 = List_1_get_Count_m124DD70AF8D41A0266C29E8F486E8973B142C5E4_inline(L_14, List_1_get_Count_m124DD70AF8D41A0266C29E8F486E8973B142C5E4_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_002c;
		}
	}
	{
		// break;
		goto IL_00b9;
	}

IL_0059:
	{
		// for (int i = 0; i < m_Type1Unit.Count; i++)
		V_1 = 0;
		goto IL_007a;
	}

IL_005d:
	{
		// m_Type1Unit[i].SetLevel(m_Levels[(int)_type]);
		List_1_tC861EE71B27D4135EB3A181D6DFD72879B5394A0* L_16 = __this->___m_Type1Unit_30;
		int32_t L_17 = V_1;
		Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* L_18;
		L_18 = List_1_get_Item_m77D35315A4CF3129B19ADABD2F36602443BB8593(L_16, L_17, List_1_get_Item_m77D35315A4CF3129B19ADABD2F36602443BB8593_RuntimeMethod_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = __this->___m_Levels_28;
		int32_t L_20 = ____type0;
		int32_t L_21 = L_20;
		int32_t L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		Unit_SetLevel_m413CB9A36FA20D06210D8A6F7A81DC52572E039D_inline(L_18, L_22, NULL);
		// for (int i = 0; i < m_Type1Unit.Count; i++)
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007a:
	{
		// for (int i = 0; i < m_Type1Unit.Count; i++)
		int32_t L_24 = V_1;
		List_1_tC861EE71B27D4135EB3A181D6DFD72879B5394A0* L_25 = __this->___m_Type1Unit_30;
		int32_t L_26;
		L_26 = List_1_get_Count_m124DD70AF8D41A0266C29E8F486E8973B142C5E4_inline(L_25, List_1_get_Count_m124DD70AF8D41A0266C29E8F486E8973B142C5E4_RuntimeMethod_var);
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_005d;
		}
	}
	{
		// break;
		goto IL_00b9;
	}

IL_008a:
	{
		// for (int i = 0; i < m_Type2Unit.Count; i++)
		V_2 = 0;
		goto IL_00ab;
	}

IL_008e:
	{
		// m_Type2Unit[i].SetLevel(m_Levels[(int)_type]);
		List_1_tC861EE71B27D4135EB3A181D6DFD72879B5394A0* L_27 = __this->___m_Type2Unit_31;
		int32_t L_28 = V_2;
		Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* L_29;
		L_29 = List_1_get_Item_m77D35315A4CF3129B19ADABD2F36602443BB8593(L_27, L_28, List_1_get_Item_m77D35315A4CF3129B19ADABD2F36602443BB8593_RuntimeMethod_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->___m_Levels_28;
		int32_t L_31 = ____type0;
		int32_t L_32 = L_31;
		int32_t L_33 = (L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32));
		Unit_SetLevel_m413CB9A36FA20D06210D8A6F7A81DC52572E039D_inline(L_29, L_33, NULL);
		// for (int i = 0; i < m_Type2Unit.Count; i++)
		int32_t L_34 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00ab:
	{
		// for (int i = 0; i < m_Type2Unit.Count; i++)
		int32_t L_35 = V_2;
		List_1_tC861EE71B27D4135EB3A181D6DFD72879B5394A0* L_36 = __this->___m_Type2Unit_31;
		int32_t L_37;
		L_37 = List_1_get_Count_m124DD70AF8D41A0266C29E8F486E8973B142C5E4_inline(L_36, List_1_get_Count_m124DD70AF8D41A0266C29E8F486E8973B142C5E4_RuntimeMethod_var);
		if ((((int32_t)L_35) < ((int32_t)L_37)))
		{
			goto IL_008e;
		}
	}

IL_00b9:
	{
		// UpgradeTextUpdate();
		UnitSpawnManager_UpgradeTextUpdate_mE15B6F9AB77FAD39C6E3214FAFAC74DBB2F144EF(__this, NULL);
		// UnitTextUpdate();
		UnitSpawnManager_UnitTextUpdate_mFAB7A269B6F7AA39FB556C64C948CC4C2E389073(__this, NULL);
		// GameManager.Instance.GoldTextUpdate();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_38;
		L_38 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		GameManager_GoldTextUpdate_m2C771B7D836456F102A202CC0BC7626A68724663(L_38, NULL);
		// }
		return;
	}
}
// System.Void UnitSpawnManager::UpgradeBtn0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitSpawnManager_UpgradeBtn0_m6E0619C80F0F48E6AA89EF6BE7B365375D68B829 (UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* __this, const RuntimeMethod* method) 
{
	{
		// if (GameManager.Instance.m_Gold >= (50 + m_Levels[0] * 25))
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0;
		L_0 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		int32_t L_1 = L_0->___m_Gold_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->___m_Levels_28;
		int32_t L_3 = 0;
		int32_t L_4 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		if ((((int32_t)L_1) < ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)50), ((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)25))))))))
		{
			goto IL_0040;
		}
	}
	{
		// GameManager.Instance.m_Gold -= (50 + m_Levels[0] * 25);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_5;
		L_5 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_6 = L_5;
		int32_t L_7 = L_6->___m_Gold_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->___m_Levels_28;
		int32_t L_9 = 0;
		int32_t L_10 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		L_6->___m_Gold_6 = ((int32_t)il2cpp_codegen_subtract(L_7, ((int32_t)il2cpp_codegen_add(((int32_t)50), ((int32_t)il2cpp_codegen_multiply(L_10, ((int32_t)25)))))));
		// Upgrade(ATTACKTYPE.??????);
		UnitSpawnManager_Upgrade_m6A06ED06D095C70F64E166B0DF705120E1B08DD9(__this, 0, NULL);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void UnitSpawnManager::UpgradeBtn1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitSpawnManager_UpgradeBtn1_m47E4D52B87D902210B7E3FCC27A43491CC9F372C (UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* __this, const RuntimeMethod* method) 
{
	{
		// if (GameManager.Instance.m_Gold >= (50 + m_Levels[1] * 25))
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0;
		L_0 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		int32_t L_1 = L_0->___m_Gold_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->___m_Levels_28;
		int32_t L_3 = 1;
		int32_t L_4 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		if ((((int32_t)L_1) < ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)50), ((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)25))))))))
		{
			goto IL_0040;
		}
	}
	{
		// GameManager.Instance.m_Gold -= (50 + m_Levels[1] * 25);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_5;
		L_5 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_6 = L_5;
		int32_t L_7 = L_6->___m_Gold_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->___m_Levels_28;
		int32_t L_9 = 1;
		int32_t L_10 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		L_6->___m_Gold_6 = ((int32_t)il2cpp_codegen_subtract(L_7, ((int32_t)il2cpp_codegen_add(((int32_t)50), ((int32_t)il2cpp_codegen_multiply(L_10, ((int32_t)25)))))));
		// Upgrade(ATTACKTYPE.?????);
		UnitSpawnManager_Upgrade_m6A06ED06D095C70F64E166B0DF705120E1B08DD9(__this, 1, NULL);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void UnitSpawnManager::UpgradeBtn2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitSpawnManager_UpgradeBtn2_mCB771729ECFA235D31F25AEBAFA135205972B510 (UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* __this, const RuntimeMethod* method) 
{
	{
		// if (GameManager.Instance.m_Gold >= (50 + m_Levels[2] * 25))
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0;
		L_0 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		int32_t L_1 = L_0->___m_Gold_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->___m_Levels_28;
		int32_t L_3 = 2;
		int32_t L_4 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		if ((((int32_t)L_1) < ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)50), ((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)25))))))))
		{
			goto IL_0040;
		}
	}
	{
		// GameManager.Instance.m_Gold -= (50 + m_Levels[2] * 25);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_5;
		L_5 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_6 = L_5;
		int32_t L_7 = L_6->___m_Gold_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->___m_Levels_28;
		int32_t L_9 = 2;
		int32_t L_10 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		L_6->___m_Gold_6 = ((int32_t)il2cpp_codegen_subtract(L_7, ((int32_t)il2cpp_codegen_add(((int32_t)50), ((int32_t)il2cpp_codegen_multiply(L_10, ((int32_t)25)))))));
		// Upgrade(ATTACKTYPE.??????);
		UnitSpawnManager_Upgrade_m6A06ED06D095C70F64E166B0DF705120E1B08DD9(__this, 2, NULL);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void UnitSpawnManager::UpgradeTextUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitSpawnManager_UpgradeTextUpdate_mE15B6F9AB77FAD39C6E3214FAFAC74DBB2F144EF (UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08AC315CD3927210BCE192687128EE8799AD5109);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09A9178C1DD9D19D86D4A5F7AE6CDC33CF478C90);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral710A0E4915EEF679DC0983092857591DB7AD8D73);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (int i = 0; i < m_PriceTexts.Length; i++)
		V_0 = 0;
		goto IL_0032;
	}

IL_0004:
	{
		// m_PriceTexts[i].text = $"{50 + m_Levels[i] * 25}";
		TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_0 = __this->___m_PriceTexts_26;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->___m_Levels_28;
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(((int32_t)50), ((int32_t)il2cpp_codegen_multiply(L_7, ((int32_t)25)))));
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94, L_9, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_3, L_10);
		// for (int i = 0; i < m_PriceTexts.Length; i++)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0032:
	{
		// for (int i = 0; i < m_PriceTexts.Length; i++)
		int32_t L_12 = V_0;
		TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_13 = __this->___m_PriceTexts_26;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// for (int i = 0; i < m_LevelTexts.Length; i++)
		V_1 = 0;
		goto IL_00cc;
	}

IL_0044:
	{
		int32_t L_14 = V_1;
		switch (L_14)
		{
			case 0:
			{
				goto IL_0058;
			}
			case 1:
			{
				goto IL_007e;
			}
			case 2:
			{
				goto IL_00a4;
			}
		}
	}
	{
		goto IL_00c8;
	}

IL_0058:
	{
		// m_LevelTexts[i].text = $"??????\n???\nLevel {m_Levels[i]}";
		TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_15 = __this->___m_LevelTexts_27;
		int32_t L_16 = V_1;
		int32_t L_17 = L_16;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_18 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = __this->___m_Levels_28;
		int32_t L_20 = V_1;
		int32_t L_21 = L_20;
		int32_t L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		int32_t L_23 = L_22;
		RuntimeObject* L_24 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_23);
		String_t* L_25;
		L_25 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral710A0E4915EEF679DC0983092857591DB7AD8D73, L_24, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_18, L_25);
		// break;
		goto IL_00c8;
	}

IL_007e:
	{
		// m_LevelTexts[i].text = $"?????\n???\nLevel {m_Levels[i]}";
		TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_26 = __this->___m_LevelTexts_27;
		int32_t L_27 = V_1;
		int32_t L_28 = L_27;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_29 = (L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->___m_Levels_28;
		int32_t L_31 = V_1;
		int32_t L_32 = L_31;
		int32_t L_33 = (L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32));
		int32_t L_34 = L_33;
		RuntimeObject* L_35 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_34);
		String_t* L_36;
		L_36 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral09A9178C1DD9D19D86D4A5F7AE6CDC33CF478C90, L_35, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_29, L_36);
		// break;
		goto IL_00c8;
	}

IL_00a4:
	{
		// m_LevelTexts[i].text = $"??????\n???\nLevel {m_Levels[i]}";
		TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_37 = __this->___m_LevelTexts_27;
		int32_t L_38 = V_1;
		int32_t L_39 = L_38;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_40 = (L_37)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_39));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = __this->___m_Levels_28;
		int32_t L_42 = V_1;
		int32_t L_43 = L_42;
		int32_t L_44 = (L_41)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43));
		int32_t L_45 = L_44;
		RuntimeObject* L_46 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_45);
		String_t* L_47;
		L_47 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral08AC315CD3927210BCE192687128EE8799AD5109, L_46, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_40, L_47);
	}

IL_00c8:
	{
		// for (int i = 0; i < m_LevelTexts.Length; i++)
		int32_t L_48 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_00cc:
	{
		// for (int i = 0; i < m_LevelTexts.Length; i++)
		int32_t L_49 = V_1;
		TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_50 = __this->___m_LevelTexts_27;
		if ((((int32_t)L_49) < ((int32_t)((int32_t)(((RuntimeArray*)L_50)->max_length)))))
		{
			goto IL_0044;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnitSpawnManager::FocusTileSelect(Tile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitSpawnManager_FocusTileSelect_mB70239159246437C020CCA48296F907671AC7542 (UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* __this, Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* ____tile0, const RuntimeMethod* method) 
{
	{
		// m_FocusTile = _tile;
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_0 = ____tile0;
		__this->___m_FocusTile_32 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FocusTile_32), (void*)L_0);
		// m_FocusMonster = null;
		__this->___m_FocusMonster_33 = (Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FocusMonster_33), (void*)(Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE*)NULL);
		// }
		return;
	}
}
// System.Void UnitSpawnManager::FocusMonsterSelect(Monster)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitSpawnManager_FocusMonsterSelect_m1D770676AFDEE33A84448F5791392724172EB0C2 (UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* __this, Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* ____monster0, const RuntimeMethod* method) 
{
	{
		// m_FocusMonster = _monster;
		Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* L_0 = ____monster0;
		__this->___m_FocusMonster_33 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FocusMonster_33), (void*)L_0);
		// m_FocusTile = null;
		__this->___m_FocusTile_32 = (Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FocusTile_32), (void*)(Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64*)NULL);
		// }
		return;
	}
}
// System.Void UnitSpawnManager::UnitTextUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitSpawnManager_UnitTextUpdate_mFAB7A269B6F7AA39FB556C64C948CC4C2E389073 (UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BE96F91D362B124A36CAAFDB49DF0928F559EEE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF860C545C12661BE4FCD9E4D9CDAA95D2101F03B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (m_FocusTile != null)
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_0 = __this->___m_FocusTile_32;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_01f5;
		}
	}
	{
		// if (m_FocusTile.m_Unit != null)
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_2 = __this->___m_FocusTile_32;
		Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* L_3 = L_2->___m_Unit_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_01f5;
		}
	}
	{
		// m_UnitSprite.sprite = m_FocusTile.m_Unit.GetSprite();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = __this->___m_UnitSprite_20;
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_6 = __this->___m_FocusTile_32;
		Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* L_7 = L_6->___m_Unit_4;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_8;
		L_8 = Unit_GetSprite_mC4A9D9742AFA004501AAF6BF281037513D125338(L_7, NULL);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_5, L_8, NULL);
		// m_UnitNameText.text = m_FocusTile.m_Unit.GetNameText();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_9 = __this->___m_UnitNameText_15;
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_10 = __this->___m_FocusTile_32;
		Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* L_11 = L_10->___m_Unit_4;
		String_t* L_12;
		L_12 = Unit_GetNameText_m1C7C0F20DA4CC04A22D7706864ACAD9210D4E0FD_inline(L_11, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_9, L_12);
		// m_UnitTypeText.text = m_FocusTile.m_Unit.GetTypeText();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_13 = __this->___m_UnitTypeText_16;
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_14 = __this->___m_FocusTile_32;
		Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* L_15 = L_14->___m_Unit_4;
		String_t* L_16;
		L_16 = Unit_GetTypeText_mBD9F27E4BAFB30063749FF2A8C4363CDBB79B3B6(L_15, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_13, L_16);
		// m_UnitTierText.text = m_FocusTile.m_Unit.GetTierText();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_17 = __this->___m_UnitTierText_17;
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_18 = __this->___m_FocusTile_32;
		Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* L_19 = L_18->___m_Unit_4;
		String_t* L_20;
		L_20 = Unit_GetTierText_m6654632358629E0E20323A06636D93570C7CFEBB(L_19, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_17, L_20);
		// m_UnitDamageText.text = $"?????: {m_FocusTile.m_Unit.GetDamageText()}";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_21 = __this->___m_UnitDamageText_18;
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_22 = __this->___m_FocusTile_32;
		Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* L_23 = L_22->___m_Unit_4;
		String_t* L_24;
		L_24 = Unit_GetDamageText_m6C3FCD795A0A3AE3F42FB6C8489A099F22BF994A(L_23, NULL);
		String_t* L_25;
		L_25 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralF860C545C12661BE4FCD9E4D9CDAA95D2101F03B, L_24, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_21, L_25);
		// m_UnitRangeText.text = $"????: {m_FocusTile.m_Unit.GetRangeText()}";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_26 = __this->___m_UnitRangeText_19;
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_27 = __this->___m_FocusTile_32;
		Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* L_28 = L_27->___m_Unit_4;
		String_t* L_29;
		L_29 = Unit_GetRangeText_m8EAAFFD39EAA6986CF5BC913F5DCB2F6C6775F67(L_28, NULL);
		String_t* L_30;
		L_30 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral0BE96F91D362B124A36CAAFDB49DF0928F559EEE, L_29, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_26, L_30);
		// switch (m_FocusTile.m_Unit.GetAttackType())
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_31 = __this->___m_FocusTile_32;
		Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* L_32 = L_31->___m_Unit_4;
		int32_t L_33;
		L_33 = Unit_GetAttackType_m5AD0A3431A5100C8A9153C59974E2A5D5AC94763_inline(L_32, NULL);
		V_0 = L_33;
		int32_t L_34 = V_0;
		switch (L_34)
		{
			case 0:
			{
				goto IL_0102;
			}
			case 1:
			{
				goto IL_0114;
			}
			case 2:
			{
				goto IL_0126;
			}
		}
	}
	{
		goto IL_0136;
	}

IL_0102:
	{
		// m_UnitTypeText.color = Color.red;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_35 = __this->___m_UnitTypeText_16;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_36;
		L_36 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_35, L_36);
		// break;
		goto IL_0136;
	}

IL_0114:
	{
		// m_UnitTypeText.color = Color.blue;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_37 = __this->___m_UnitTypeText_16;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline(NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_37, L_38);
		// break;
		goto IL_0136;
	}

IL_0126:
	{
		// m_UnitTypeText.color = Color.yellow;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_39 = __this->___m_UnitTypeText_16;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_40;
		L_40 = Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline(NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_39, L_40);
	}

IL_0136:
	{
		// switch (m_FocusTile.m_Unit.GetTier())
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_41 = __this->___m_FocusTile_32;
		Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* L_42 = L_41->___m_Unit_4;
		int32_t L_43;
		L_43 = Unit_GetTier_m8EA00F548C995A12B757559DB554FBB1ADEBED19_inline(L_42, NULL);
		V_1 = L_43;
		int32_t L_44 = V_1;
		switch (L_44)
		{
			case 0:
			{
				goto IL_016e;
			}
			case 1:
			{
				goto IL_017f;
			}
			case 2:
			{
				goto IL_0190;
			}
			case 3:
			{
				goto IL_01a1;
			}
			case 4:
			{
				goto IL_01b2;
			}
			case 5:
			{
				goto IL_01c3;
			}
			case 6:
			{
				goto IL_01d4;
			}
			case 7:
			{
				goto IL_01e5;
			}
		}
	}
	{
		return;
	}

IL_016e:
	{
		// m_UnitTierText.color = Color.white;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_45 = __this->___m_UnitTierText_17;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_46;
		L_46 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_45, L_46);
		// break;
		return;
	}

IL_017f:
	{
		// m_UnitTierText.color = Color.green;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_47 = __this->___m_UnitTierText_17;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_48;
		L_48 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_47, L_48);
		// break;
		return;
	}

IL_0190:
	{
		// m_UnitTierText.color = Color.magenta;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_49 = __this->___m_UnitTierText_17;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_50;
		L_50 = Color_get_magenta_mE31C432891E0B3D23C8FB03CB3A38A60E7F52A9A_inline(NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_49, L_50);
		// break;
		return;
	}

IL_01a1:
	{
		// m_UnitTierText.color = Color.red;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_51 = __this->___m_UnitTierText_17;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_52;
		L_52 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_51, L_52);
		// break;
		return;
	}

IL_01b2:
	{
		// m_UnitTierText.color = Color.gray;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_53 = __this->___m_UnitTierText_17;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_54;
		L_54 = Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline(NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_53, L_54);
		// break;
		return;
	}

IL_01c3:
	{
		// m_UnitTierText.color = Color.blue;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_55 = __this->___m_UnitTierText_17;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_56;
		L_56 = Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline(NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_55, L_56);
		// break;
		return;
	}

IL_01d4:
	{
		// m_UnitTierText.color = Color.black;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_57 = __this->___m_UnitTierText_17;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_58;
		L_58 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_57, L_58);
		// break;
		return;
	}

IL_01e5:
	{
		// m_UnitTierText.color = Color.cyan;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_59 = __this->___m_UnitTierText_17;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_60;
		L_60 = Color_get_cyan_m182A29E7475C0A98ACC03E1CF5252BAB83F0BA31_inline(NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_59, L_60);
	}

IL_01f5:
	{
		// }
		return;
	}
}
// System.Void UnitSpawnManager::MonsterTextUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitSpawnManager_MonsterTextUpdate_m983F7142361CB28FBD59C80948D0B98DF84CFF0D (UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17E14946D350F28E3AE48F523EB7CE917BD41771);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44BD532DF32E35E637F92D3ADE4050C9B9A140BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901BE6CEC88A8B9E5C2116D7946EFE53CD95B815);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (m_FocusMonster != null)
		Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* L_0 = __this->___m_FocusMonster_33;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_00ee;
		}
	}
	{
		// m_MonsterSprite.sprite = m_FocusMonster.GetSprite();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___m_MonsterSprite_25;
		Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* L_3 = __this->___m_FocusMonster_33;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4;
		L_4 = Monster_GetSprite_m92894F33B50EBD35723D93991B25435AB106B3A6(L_3, NULL);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_2, L_4, NULL);
		// m_MonsterHPText.text = $"HP: {m_FocusMonster.GetHPText()}";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_5 = __this->___m_MonsterHPText_21;
		Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* L_6 = __this->___m_FocusMonster_33;
		String_t* L_7;
		L_7 = Monster_GetHPText_m34FEF509529EDEDD328B5C462FFD23C9C6341E54(L_6, NULL);
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral44BD532DF32E35E637F92D3ADE4050C9B9A140BD, L_7, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_5, L_8);
		// m_MonsterArmorText.text = $"????: {m_FocusMonster.GetArmorText()}";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_9 = __this->___m_MonsterArmorText_24;
		Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* L_10 = __this->___m_FocusMonster_33;
		String_t* L_11;
		L_11 = Monster_GetArmorText_m60F183C766FA475F192E3442F47412241E073794(L_10, NULL);
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral17E14946D350F28E3AE48F523EB7CE917BD41771, L_11, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_9, L_12);
		// m_MonsterStageText.text = $"????????: {m_FocusMonster.GetStageText()}";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_13 = __this->___m_MonsterStageText_23;
		Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* L_14 = __this->___m_FocusMonster_33;
		String_t* L_15;
		L_15 = Monster_GetStageText_m2F1FF76E9AD595E0332C4D8BAE0FC8156D7435E6(L_14, NULL);
		String_t* L_16;
		L_16 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral901BE6CEC88A8B9E5C2116D7946EFE53CD95B815, L_15, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_13, L_16);
		// m_MonsterTypeText.text = m_FocusMonster.GetTypeText();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_17 = __this->___m_MonsterTypeText_22;
		Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* L_18 = __this->___m_FocusMonster_33;
		String_t* L_19;
		L_19 = Monster_GetTypeText_mB517A8D5E1B825EC9DE71A6C46DC6121912451C5(L_18, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_17, L_19);
		// switch (m_FocusMonster.GetArmorType())
		Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* L_20 = __this->___m_FocusMonster_33;
		int32_t L_21;
		L_21 = Monster_GetArmorType_mF3466D907FF40CB040BCF0409BAD765E68FC9AE6_inline(L_20, NULL);
		V_0 = L_21;
		int32_t L_22 = V_0;
		switch (L_22)
		{
			case 0:
			{
				goto IL_00bc;
			}
			case 1:
			{
				goto IL_00cd;
			}
			case 2:
			{
				goto IL_00de;
			}
		}
	}
	{
		return;
	}

IL_00bc:
	{
		// m_MonsterTypeText.color = Color.red;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_23 = __this->___m_MonsterTypeText_22;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24;
		L_24 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_23, L_24);
		// break;
		return;
	}

IL_00cd:
	{
		// m_MonsterTypeText.color = Color.blue;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_25 = __this->___m_MonsterTypeText_22;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_26;
		L_26 = Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline(NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_25, L_26);
		// break;
		return;
	}

IL_00de:
	{
		// m_MonsterTypeText.color = Color.yellow;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_27 = __this->___m_MonsterTypeText_22;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28;
		L_28 = Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline(NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_27, L_28);
	}

IL_00ee:
	{
		// }
		return;
	}
}
// System.Void UnitSpawnManager::SpawnSoundPlay(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitSpawnManager_SpawnSoundPlay_m12907769677C6089AFA4969492B1E83DB2413800 (UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* __this, int32_t ____tier0, const RuntimeMethod* method) 
{
	{
		// if (_tier < 5)
		int32_t L_0 = ____tier0;
		if ((((int32_t)L_0) >= ((int32_t)5)))
		{
			goto IL_0010;
		}
	}
	{
		// SoundManager.Instance.SoundPlay(SOUND_NAME.UnitSpawn1);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_1;
		L_1 = SoundManager_get_Instance_mE37BC6A788B14F6895B2B50A4E461F8C7895BAEA(NULL);
		SoundManager_SoundPlay_mE25CE7EC2DB0173862EFBB586A4A4AF3D63CE6B6(L_1, 3, NULL);
		return;
	}

IL_0010:
	{
		// SoundManager.Instance.SoundPlay(SOUND_NAME.UnitSpawn2);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_2;
		L_2 = SoundManager_get_Instance_mE37BC6A788B14F6895B2B50A4E461F8C7895BAEA(NULL);
		SoundManager_SoundPlay_mE25CE7EC2DB0173862EFBB586A4A4AF3D63CE6B6(L_2, 4, NULL);
		// }
		return;
	}
}
// System.Void UnitSpawnManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitSpawnManager__ctor_m25B85C228A1465B49A0E456C1C41CF793262A456 (UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6C18F06752CF7E3457B8BB667038FD44D1DA4B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC861EE71B27D4135EB3A181D6DFD72879B5394A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int[] m_Levels = new int[] {0,0,0};
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->___m_Levels_28 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Levels_28), (void*)L_0);
		// public List<Unit> m_Type0Unit = new List<Unit>();
		List_1_tC861EE71B27D4135EB3A181D6DFD72879B5394A0* L_1 = (List_1_tC861EE71B27D4135EB3A181D6DFD72879B5394A0*)il2cpp_codegen_object_new(List_1_tC861EE71B27D4135EB3A181D6DFD72879B5394A0_il2cpp_TypeInfo_var);
		List_1__ctor_m6C18F06752CF7E3457B8BB667038FD44D1DA4B90(L_1, List_1__ctor_m6C18F06752CF7E3457B8BB667038FD44D1DA4B90_RuntimeMethod_var);
		__this->___m_Type0Unit_29 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Type0Unit_29), (void*)L_1);
		// public List<Unit> m_Type1Unit = new List<Unit>();
		List_1_tC861EE71B27D4135EB3A181D6DFD72879B5394A0* L_2 = (List_1_tC861EE71B27D4135EB3A181D6DFD72879B5394A0*)il2cpp_codegen_object_new(List_1_tC861EE71B27D4135EB3A181D6DFD72879B5394A0_il2cpp_TypeInfo_var);
		List_1__ctor_m6C18F06752CF7E3457B8BB667038FD44D1DA4B90(L_2, List_1__ctor_m6C18F06752CF7E3457B8BB667038FD44D1DA4B90_RuntimeMethod_var);
		__this->___m_Type1Unit_30 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Type1Unit_30), (void*)L_2);
		// public List<Unit> m_Type2Unit = new List<Unit>();
		List_1_tC861EE71B27D4135EB3A181D6DFD72879B5394A0* L_3 = (List_1_tC861EE71B27D4135EB3A181D6DFD72879B5394A0*)il2cpp_codegen_object_new(List_1_tC861EE71B27D4135EB3A181D6DFD72879B5394A0_il2cpp_TypeInfo_var);
		List_1__ctor_m6C18F06752CF7E3457B8BB667038FD44D1DA4B90(L_3, List_1__ctor_m6C18F06752CF7E3457B8BB667038FD44D1DA4B90_RuntimeMethod_var);
		__this->___m_Type2Unit_31 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Type2Unit_31), (void*)L_3);
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
// System.Void Monster::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monster_Awake_mDCAC2CA2BDC6479E32223D296EB7A314B63D49FC (Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisMonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2_m114C2882C83E3726CAD84BA6DDABE8EC8283B2FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisUnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B_m9A7F3EC7F143EAFB276065B2E85CF4B01B84BB84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Spren = GetComponent<SpriteRenderer>();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		__this->___m_Spren_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Spren_13), (void*)L_0);
		// m_Point = FindObjectOfType<MonsterSpawnManager>().m_Point;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2* L_1;
		L_1 = Object_FindObjectOfType_TisMonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2_m114C2882C83E3726CAD84BA6DDABE8EC8283B2FE(Object_FindObjectOfType_TisMonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2_m114C2882C83E3726CAD84BA6DDABE8EC8283B2FE_RuntimeMethod_var);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_2 = L_1->___m_Point_7;
		__this->___m_Point_14 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Point_14), (void*)L_2);
		// m_UnitManager = FindObjectOfType<UnitSpawnManager>();
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_3;
		L_3 = Object_FindObjectOfType_TisUnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B_m9A7F3EC7F143EAFB276065B2E85CF4B01B84BB84(Object_FindObjectOfType_TisUnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B_m9A7F3EC7F143EAFB276065B2E85CF4B01B84BB84_RuntimeMethod_var);
		__this->___m_UnitManager_15 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UnitManager_15), (void*)L_3);
		// }
		return;
	}
}
// System.Void Monster::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monster_OnEnable_mCA2893566D61FC8F824BE57880630291F942DAF6 (Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_HP = m_MonsterSO.m_HP[GameManager.Instance.m_Stage];
		MonsterSO_tA176F859E18EBBAC5296DF1F3A559465C2FEC2BF* L_0 = __this->___m_MonsterSO_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0->___m_HP_4;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_2;
		L_2 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		int32_t L_3 = L_2->___m_Stage_5;
		int32_t L_4 = L_3;
		int32_t L_5 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		__this->___m_HP_5 = L_5;
		// m_Armor = m_MonsterSO.m_Armor[GameManager.Instance.m_Stage];
		MonsterSO_tA176F859E18EBBAC5296DF1F3A559465C2FEC2BF* L_6 = __this->___m_MonsterSO_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = L_6->___m_Armor_5;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_8;
		L_8 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		int32_t L_9 = L_8->___m_Stage_5;
		int32_t L_10 = L_9;
		int32_t L_11 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		__this->___m_Armor_6 = L_11;
		// m_Gold = m_MonsterSO.m_Gold[GameManager.Instance.m_Stage];
		MonsterSO_tA176F859E18EBBAC5296DF1F3A559465C2FEC2BF* L_12 = __this->___m_MonsterSO_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = L_12->___m_Gold_6;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_14;
		L_14 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		int32_t L_15 = L_14->___m_Stage_5;
		int32_t L_16 = L_15;
		int32_t L_17 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		__this->___m_Gold_7 = L_17;
		// m_MoveSpeed = m_MonsterSO.m_MoveSpeed[GameManager.Instance.m_Stage];
		MonsterSO_tA176F859E18EBBAC5296DF1F3A559465C2FEC2BF* L_18 = __this->___m_MonsterSO_17;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_19 = L_18->___m_MoveSpeed_7;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_20;
		L_20 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		int32_t L_21 = L_20->___m_Stage_5;
		int32_t L_22 = L_21;
		float L_23 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		__this->___m_MoveSpeed_9 = L_23;
		// m_type = m_MonsterSO.m_type[GameManager.Instance.m_Stage];
		MonsterSO_tA176F859E18EBBAC5296DF1F3A559465C2FEC2BF* L_24 = __this->___m_MonsterSO_17;
		ARMORTYPEU5BU5D_tFF5F6ABB9E555580015F6C0D71299A580A03093A* L_25 = L_24->___m_type_8;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_26;
		L_26 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		int32_t L_27 = L_26->___m_Stage_5;
		int32_t L_28 = L_27;
		int32_t L_29 = (int32_t)(L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		__this->___m_type_11 = L_29;
		// m_IsBoss = m_MonsterSO.m_IsBoss[GameManager.Instance.m_Stage];
		MonsterSO_tA176F859E18EBBAC5296DF1F3A559465C2FEC2BF* L_30 = __this->___m_MonsterSO_17;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_31 = L_30->___m_IsBoss_9;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_32;
		L_32 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		int32_t L_33 = L_32->___m_Stage_5;
		int32_t L_34 = L_33;
		uint8_t L_35 = (uint8_t)(L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		__this->___m_IsBoss_10 = (bool)L_35;
		// m_Spren.color = Color.white;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_36 = __this->___m_Spren_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37;
		L_37 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_36, L_37, NULL);
		// m_Stage = GameManager.Instance.m_Stage + 1;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_38;
		L_38 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		int32_t L_39 = L_38->___m_Stage_5;
		__this->___m_Stage_4 = ((int32_t)il2cpp_codegen_add(L_39, 1));
		// m_FocusObj.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = __this->___m_FocusObj_16;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_40, (bool)0, NULL);
		// m_NextPoint = 0;
		__this->___m_NextPoint_8 = 0;
		// MonsterSpawnManager.m_MonsterCount++;
		int32_t L_41 = ((MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2_StaticFields*)il2cpp_codegen_static_fields_for(MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2_il2cpp_TypeInfo_var))->___m_MonsterCount_4;
		((MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2_StaticFields*)il2cpp_codegen_static_fields_for(MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2_il2cpp_TypeInfo_var))->___m_MonsterCount_4 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		// StartCoroutine(MonsterMoveCoroutine());
		RuntimeObject* L_42;
		L_42 = Monster_MonsterMoveCoroutine_mB1B04200C9D50DB5EB30B61363ADEEC6B797E3C7(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_43;
		L_43 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_42, NULL);
		// }
		return;
	}
}
// System.Void Monster::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monster_OnDisable_m700D67202E1FDB0C6E3C882F36F819F1BA8AB4A4 (Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MonsterSpawnManager.m_MonsterCount--;
		int32_t L_0 = ((MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2_StaticFields*)il2cpp_codegen_static_fields_for(MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2_il2cpp_TypeInfo_var))->___m_MonsterCount_4;
		((MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2_StaticFields*)il2cpp_codegen_static_fields_for(MonsterSpawnManager_t95C8C842A302B375437DE0FE1F66B16B02384AC2_il2cpp_TypeInfo_var))->___m_MonsterCount_4 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Monster::MonsterMoveCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Monster_MonsterMoveCoroutine_mB1B04200C9D50DB5EB30B61363ADEEC6B797E3C7 (Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMonsterMoveCoroutineU3Ed__17_tCED21B51FE2667562689AAD54A02802B88F06011_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CMonsterMoveCoroutineU3Ed__17_tCED21B51FE2667562689AAD54A02802B88F06011* L_0 = (U3CMonsterMoveCoroutineU3Ed__17_tCED21B51FE2667562689AAD54A02802B88F06011*)il2cpp_codegen_object_new(U3CMonsterMoveCoroutineU3Ed__17_tCED21B51FE2667562689AAD54A02802B88F06011_il2cpp_TypeInfo_var);
		U3CMonsterMoveCoroutineU3Ed__17__ctor_m0E86FA086DC964AE38AE44B5A09F1B5737576455(L_0, 0, NULL);
		U3CMonsterMoveCoroutineU3Ed__17_tCED21B51FE2667562689AAD54A02802B88F06011* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Monster::OnDamage(ATTACKTYPE,System.Int32,UNITTIER)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monster_OnDamage_m3137BE1030D5EE18ADABFB4A7E976EF99F5A1635 (Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* __this, int32_t ____attackType0, int32_t ____damage1, int32_t ____tier2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// _damage -= m_Armor;
		int32_t L_0 = ____damage1;
		int32_t L_1 = __this->___m_Armor_6;
		____damage1 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		// if (_tier != UNITTIER.????)
		int32_t L_2 = ____tier2;
		if ((((int32_t)L_2) == ((int32_t)7)))
		{
			goto IL_00f8;
		}
	}
	{
		int32_t L_3 = ____attackType0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0028;
			}
			case 1:
			{
				goto IL_0076;
			}
			case 2:
			{
				goto IL_00b8;
			}
		}
	}
	{
		goto IL_00f8;
	}

IL_0028:
	{
		// switch (m_type)
		int32_t L_4 = __this->___m_type_11;
		V_0 = L_4;
		int32_t L_5 = V_0;
		switch (L_5)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_0056;
			}
			case 2:
			{
				goto IL_0066;
			}
		}
	}
	{
		goto IL_00f8;
	}

IL_0046:
	{
		// _damage = (int)(_damage * 1f);
		int32_t L_6 = ____damage1;
		____damage1 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)L_6), (1.0f))));
		// break;
		goto IL_00f8;
	}

IL_0056:
	{
		// _damage = (int)(_damage * 0.33f);
		int32_t L_7 = ____damage1;
		____damage1 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)L_7), (0.330000013f))));
		// break;
		goto IL_00f8;
	}

IL_0066:
	{
		// _damage = (int)(_damage * 0.66f);
		int32_t L_8 = ____damage1;
		____damage1 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)L_8), (0.660000026f))));
		// break;
		goto IL_00f8;
	}

IL_0076:
	{
		// switch (m_type)
		int32_t L_9 = __this->___m_type_11;
		V_0 = L_9;
		int32_t L_10 = V_0;
		switch (L_10)
		{
			case 0:
			{
				goto IL_0091;
			}
			case 1:
			{
				goto IL_009e;
			}
			case 2:
			{
				goto IL_00ab;
			}
		}
	}
	{
		goto IL_00f8;
	}

IL_0091:
	{
		// _damage = (int)(_damage * 0.66f);
		int32_t L_11 = ____damage1;
		____damage1 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)L_11), (0.660000026f))));
		// break;
		goto IL_00f8;
	}

IL_009e:
	{
		// _damage = (int)(_damage * 1f);
		int32_t L_12 = ____damage1;
		____damage1 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)L_12), (1.0f))));
		// break;
		goto IL_00f8;
	}

IL_00ab:
	{
		// _damage = (int)(_damage * 0.33f);
		int32_t L_13 = ____damage1;
		____damage1 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)L_13), (0.330000013f))));
		// break;
		goto IL_00f8;
	}

IL_00b8:
	{
		// switch (m_type)
		int32_t L_14 = __this->___m_type_11;
		V_0 = L_14;
		int32_t L_15 = V_0;
		switch (L_15)
		{
			case 0:
			{
				goto IL_00d3;
			}
			case 1:
			{
				goto IL_00e0;
			}
			case 2:
			{
				goto IL_00ed;
			}
		}
	}
	{
		goto IL_00f8;
	}

IL_00d3:
	{
		// _damage = (int)(_damage * 0.33f);
		int32_t L_16 = ____damage1;
		____damage1 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)L_16), (0.330000013f))));
		// break;
		goto IL_00f8;
	}

IL_00e0:
	{
		// _damage = (int)(_damage * 0.66f);
		int32_t L_17 = ____damage1;
		____damage1 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)L_17), (0.660000026f))));
		// break;
		goto IL_00f8;
	}

IL_00ed:
	{
		// _damage = (int)(_damage * 1f);
		int32_t L_18 = ____damage1;
		____damage1 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)L_18), (1.0f))));
	}

IL_00f8:
	{
		// if (_damage >= 0)
		int32_t L_19 = ____damage1;
		if ((((int32_t)L_19) < ((int32_t)0)))
		{
			goto IL_010a;
		}
	}
	{
		// m_HP -= _damage;
		int32_t L_20 = __this->___m_HP_5;
		int32_t L_21 = ____damage1;
		__this->___m_HP_5 = ((int32_t)il2cpp_codegen_subtract(L_20, L_21));
	}

IL_010a:
	{
		// StartCoroutine(OnDamageEffect());
		RuntimeObject* L_22;
		L_22 = Monster_OnDamageEffect_mF601372261D2B62BC28BA2DEDC4C389D4B9CC5EE(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_23;
		L_23 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_22, NULL);
		// if (m_UnitManager.m_FocusMonster == this)
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_24 = __this->___m_UnitManager_15;
		Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* L_25 = L_24->___m_FocusMonster_33;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_25, __this, NULL);
		if (!L_26)
		{
			goto IL_0135;
		}
	}
	{
		// m_UnitManager.MonsterTextUpdate();
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_27 = __this->___m_UnitManager_15;
		UnitSpawnManager_MonsterTextUpdate_m983F7142361CB28FBD59C80948D0B98DF84CFF0D(L_27, NULL);
	}

IL_0135:
	{
		// if (m_HP <= 0)
		int32_t L_28 = __this->___m_HP_5;
		if ((((int32_t)L_28) > ((int32_t)0)))
		{
			goto IL_0144;
		}
	}
	{
		// MonsterDead();
		Monster_MonsterDead_mA7B6702089E83DA55A58284409DEF62ECDEB0F75(__this, NULL);
	}

IL_0144:
	{
		// }
		return;
	}
}
// System.Void Monster::MonsterDead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monster_MonsterDead_mA7B6702089E83DA55A58284409DEF62ECDEB0F75 (Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_UnitManager.m_FocusMonster == this)
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_0 = __this->___m_UnitManager_15;
		Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* L_1 = L_0->___m_FocusMonster_33;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, __this, NULL);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		// m_FocusObj.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___m_FocusObj_16;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// m_UnitManager.FocusMonsterSelect(null);
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_4 = __this->___m_UnitManager_15;
		UnitSpawnManager_FocusMonsterSelect_m1D770676AFDEE33A84448F5791392724172EB0C2(L_4, (Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE*)NULL, NULL);
		// m_UnitManager.m_MonsterSet.SetActive(false);
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_5 = __this->___m_UnitManager_15;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5->___m_MonsterSet_14;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
	}

IL_003c:
	{
		// GameManager.Instance.m_Gold += m_Gold;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_7;
		L_7 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_8 = L_7;
		int32_t L_9 = L_8->___m_Gold_6;
		int32_t L_10 = __this->___m_Gold_7;
		L_8->___m_Gold_6 = ((int32_t)il2cpp_codegen_add(L_9, L_10));
		// GameManager.Instance.GoldTextUpdate();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_11;
		L_11 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		GameManager_GoldTextUpdate_m2C771B7D836456F102A202CC0BC7626A68724663(L_11, NULL);
		// SoundManager.Instance.SoundPlay(SOUND_NAME.MonsterDead);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_12;
		L_12 = SoundManager_get_Instance_mE37BC6A788B14F6895B2B50A4E461F8C7895BAEA(NULL);
		SoundManager_SoundPlay_mE25CE7EC2DB0173862EFBB586A4A4AF3D63CE6B6(L_12, 0, NULL);
		// ObjectPoolingManager.Instance.InsertQueue(gameObject, ObjectPoolingManager.m_Monster00Key);
		ObjectPoolingManager_t33FF87AC48390D80D5C87B47A82A53AD0DEA2E35* L_13;
		L_13 = ObjectPoolingManager_get_Instance_m725C062C2C3EA1FCA849EA3B708B8BC726D6093A(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		ObjectPoolingManager_InsertQueue_m3662D38D31CA5071957D0E03E19BAB28AEFB13F8(L_13, L_14, 0, NULL);
		// if (m_Stage == 101)
		int32_t L_15 = __this->___m_Stage_4;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_008d;
		}
	}
	{
		// GameManager.Instance.GameClear();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_16;
		L_16 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		GameManager_GameClear_m6E8ECC2DF8FF1AC10C2ED66059419796D91B3111(L_16, NULL);
	}

IL_008d:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Monster::OnDamageEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Monster_OnDamageEffect_mF601372261D2B62BC28BA2DEDC4C389D4B9CC5EE (Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COnDamageEffectU3Ed__20_t38970314892195F27071F8C96915D70A4348A312_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3COnDamageEffectU3Ed__20_t38970314892195F27071F8C96915D70A4348A312* L_0 = (U3COnDamageEffectU3Ed__20_t38970314892195F27071F8C96915D70A4348A312*)il2cpp_codegen_object_new(U3COnDamageEffectU3Ed__20_t38970314892195F27071F8C96915D70A4348A312_il2cpp_TypeInfo_var);
		U3COnDamageEffectU3Ed__20__ctor_m26C343CB74B5B6B2CF5D9945ACD8FA1A78AE60DE(L_0, 0, NULL);
		U3COnDamageEffectU3Ed__20_t38970314892195F27071F8C96915D70A4348A312* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.String Monster::GetStageText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Monster_GetStageText_m2F1FF76E9AD595E0332C4D8BAE0FC8156D7435E6 (Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* __this, const RuntimeMethod* method) 
{
	{
		// return m_Stage.ToString();
		int32_t* L_0 = (&__this->___m_Stage_4);
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_0, NULL);
		return L_1;
	}
}
// System.String Monster::GetHPText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Monster_GetHPText_m34FEF509529EDEDD328B5C462FFD23C9C6341E54 (Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3905B990E856C096FE4CA5D65FA83700E2DFC4E5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("{0:N0}", m_HP.ToString());
		int32_t* L_0 = (&__this->___m_HP_5);
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_0, NULL);
		String_t* L_2;
		L_2 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral3905B990E856C096FE4CA5D65FA83700E2DFC4E5, L_1, NULL);
		return L_2;
	}
}
// System.String Monster::GetArmorText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Monster_GetArmorText_m60F183C766FA475F192E3442F47412241E073794 (Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* __this, const RuntimeMethod* method) 
{
	{
		// return m_Armor.ToString();
		int32_t* L_0 = (&__this->___m_Armor_6);
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_0, NULL);
		return L_1;
	}
}
// System.String Monster::GetTypeText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Monster_GetTypeText_mB517A8D5E1B825EC9DE71A6C46DC6121912451C5 (Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71319790C6E2C7DE8A487B82A0D722DD8DF39E23);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BABE1837A587306A326029BD798695E074D9F58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9668BDDF183F0261F0A2FBF89952C606EAFAB671);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// string type = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// switch (m_type)
		int32_t L_0 = __this->___m_type_11;
		V_1 = L_0;
		int32_t L_1 = V_1;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0029;
			}
			case 2:
			{
				goto IL_0031;
			}
		}
	}
	{
		goto IL_0037;
	}

IL_0021:
	{
		// type = "????";
		V_0 = _stringLiteral7BABE1837A587306A326029BD798695E074D9F58;
		// break;
		goto IL_0037;
	}

IL_0029:
	{
		// type = "?????";
		V_0 = _stringLiteral71319790C6E2C7DE8A487B82A0D722DD8DF39E23;
		// break;
		goto IL_0037;
	}

IL_0031:
	{
		// type = "????";
		V_0 = _stringLiteral9668BDDF183F0261F0A2FBF89952C606EAFAB671;
	}

IL_0037:
	{
		// return type;
		String_t* L_2 = V_0;
		return L_2;
	}
}
// ARMORTYPE Monster::GetArmorType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Monster_GetArmorType_mF3466D907FF40CB040BCF0409BAD765E68FC9AE6 (Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* __this, const RuntimeMethod* method) 
{
	{
		// return m_type;
		int32_t L_0 = __this->___m_type_11;
		return L_0;
	}
}
// UnityEngine.Sprite Monster::GetSprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Monster_GetSprite_m92894F33B50EBD35723D93991B25435AB106B3A6 (Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* __this, const RuntimeMethod* method) 
{
	{
		// return m_Spren.sprite;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___m_Spren_13;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1;
		L_1 = SpriteRenderer_get_sprite_mEEED0A9E872AE12E56CAF1641F2F592633181D44(L_0, NULL);
		return L_1;
	}
}
// System.Void Monster::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monster_OnMouseDown_m662D75BA3BC94370812E47A931877EC033410A5D (Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_UnitManager.m_FocusMonster != null)
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_0 = __this->___m_UnitManager_15;
		Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* L_1 = L_0->___m_FocusMonster_33;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		// m_UnitManager.m_FocusMonster.m_FocusObj.SetActive(false);
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_3 = __this->___m_UnitManager_15;
		Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* L_4 = L_3->___m_FocusMonster_33;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4->___m_FocusObj_16;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
	}

IL_0029:
	{
		// m_FocusObj.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___m_FocusObj_16;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// m_UnitManager.FocusMonsterSelect(this);
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_7 = __this->___m_UnitManager_15;
		UnitSpawnManager_FocusMonsterSelect_m1D770676AFDEE33A84448F5791392724172EB0C2(L_7, __this, NULL);
		// m_UnitManager.m_UnitSet.SetActive(false);
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_8 = __this->___m_UnitManager_15;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = L_8->___m_UnitSet_13;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)0, NULL);
		// m_UnitManager.m_MonsterSet.SetActive(true);
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_10 = __this->___m_UnitManager_15;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = L_10->___m_MonsterSet_14;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)1, NULL);
		// m_UnitManager.MonsterTextUpdate();
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_12 = __this->___m_UnitManager_15;
		UnitSpawnManager_MonsterTextUpdate_m983F7142361CB28FBD59C80948D0B98DF84CFF0D(L_12, NULL);
		// }
		return;
	}
}
// System.Void Monster::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monster__ctor_m4E10FC18FF41A1D3156A7AC924B06AD7F3882E04 (Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WaitForSeconds m_OnDamageEffectSec = new WaitForSeconds(0.1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_0 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_0, (0.100000001f), NULL);
		__this->___m_OnDamageEffectSec_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OnDamageEffectSec_12), (void*)L_0);
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
// System.Void Monster/<MonsterMoveCoroutine>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMonsterMoveCoroutineU3Ed__17__ctor_m0E86FA086DC964AE38AE44B5A09F1B5737576455 (U3CMonsterMoveCoroutineU3Ed__17_tCED21B51FE2667562689AAD54A02802B88F06011* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Monster/<MonsterMoveCoroutine>d__17::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMonsterMoveCoroutineU3Ed__17_System_IDisposable_Dispose_m842DEB77EBFD3C1A62DBCDBA4635DAE6C55571CB (U3CMonsterMoveCoroutineU3Ed__17_tCED21B51FE2667562689AAD54A02802B88F06011* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Monster/<MonsterMoveCoroutine>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMonsterMoveCoroutineU3Ed__17_MoveNext_m528C152A920C50820235CA1DC90E5900428457C2 (U3CMonsterMoveCoroutineU3Ed__17_tCED21B51FE2667562689AAD54A02802B88F06011* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* V_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0148;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_014f;
	}

IL_0026:
	{
		// Vector3 dir = (m_Point[m_NextPoint].position - transform.position).normalized;
		Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* L_4 = V_1;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_5 = L_4->___m_Point_14;
		Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* L_6 = V_1;
		int32_t L_7 = L_6->___m_NextPoint_8;
		int32_t L_8 = L_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* L_11 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_10, L_13, NULL);
		V_3 = L_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_3), NULL);
		V_2 = L_15;
		// transform.position += dir * m_MoveSpeed * Time.deltaTime;
		Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* L_16 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = L_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_2;
		Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* L_21 = V_1;
		float L_22 = L_21->___m_MoveSpeed_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_20, L_22, NULL);
		float L_24;
		L_24 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_23, L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_19, L_25, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_18, L_26, NULL);
		// m_Spren.flipX = dir.x >= 0;
		Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* L_27 = V_1;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_28 = L_27->___m_Spren_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_2;
		float L_30 = L_29.___x_2;
		SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B(L_28, (bool)((((int32_t)((!(((float)L_30) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		// if (Mathf.Abs(transform.position.x - m_Point[m_NextPoint].position.x) < 0.1 &&
		//     Mathf.Abs(transform.position.y - m_Point[m_NextPoint].position.y) < 0.1)
		Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* L_31 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_31, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_32, NULL);
		float L_34 = L_33.___x_2;
		Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* L_35 = V_1;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_36 = L_35->___m_Point_14;
		Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* L_37 = V_1;
		int32_t L_38 = L_37->___m_NextPoint_8;
		int32_t L_39 = L_38;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40 = (L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_39));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_40, NULL);
		float L_42 = L_41.___x_2;
		float L_43;
		L_43 = fabsf(((float)il2cpp_codegen_subtract(L_34, L_42)));
		if ((!(((double)((double)L_43)) < ((double)(0.10000000000000001)))))
		{
			goto IL_012f;
		}
	}
	{
		Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* L_44 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_45, NULL);
		float L_47 = L_46.___y_3;
		Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* L_48 = V_1;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_49 = L_48->___m_Point_14;
		Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* L_50 = V_1;
		int32_t L_51 = L_50->___m_NextPoint_8;
		int32_t L_52 = L_51;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_53 = (L_49)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_52));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_53, NULL);
		float L_55 = L_54.___y_3;
		float L_56;
		L_56 = fabsf(((float)il2cpp_codegen_subtract(L_47, L_55)));
		if ((!(((double)((double)L_56)) < ((double)(0.10000000000000001)))))
		{
			goto IL_012f;
		}
	}
	{
		// m_NextPoint++;
		Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* L_57 = V_1;
		Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* L_58 = V_1;
		int32_t L_59 = L_58->___m_NextPoint_8;
		L_57->___m_NextPoint_8 = ((int32_t)il2cpp_codegen_add(L_59, 1));
		// if (m_NextPoint == m_Point.Length)
		Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* L_60 = V_1;
		int32_t L_61 = L_60->___m_NextPoint_8;
		Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* L_62 = V_1;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_63 = L_62->___m_Point_14;
		if ((!(((uint32_t)L_61) == ((uint32_t)((int32_t)(((RuntimeArray*)L_63)->max_length))))))
		{
			goto IL_012f;
		}
	}
	{
		// m_NextPoint = 0;
		Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* L_64 = V_1;
		L_64->___m_NextPoint_8 = 0;
	}

IL_012f:
	{
		// yield return new WaitForSeconds(Time.deltaTime);
		float L_65;
		L_65 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_66 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_66, L_65, NULL);
		__this->___U3CU3E2__current_1 = L_66;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_66);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0148:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_014f:
	{
		// while (gameObject.activeSelf)
		Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* L_67 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_68;
		L_68 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_67, NULL);
		bool L_69;
		L_69 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_68, NULL);
		if (L_69)
		{
			goto IL_0026;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object Monster/<MonsterMoveCoroutine>d__17::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMonsterMoveCoroutineU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4CD9248C872D0B30149A7365C4D808D516D4AF33 (U3CMonsterMoveCoroutineU3Ed__17_tCED21B51FE2667562689AAD54A02802B88F06011* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Monster/<MonsterMoveCoroutine>d__17::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMonsterMoveCoroutineU3Ed__17_System_Collections_IEnumerator_Reset_m56772A847AA3F92C2F184316503FBDA2D4B7F04D (U3CMonsterMoveCoroutineU3Ed__17_tCED21B51FE2667562689AAD54A02802B88F06011* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMonsterMoveCoroutineU3Ed__17_System_Collections_IEnumerator_Reset_m56772A847AA3F92C2F184316503FBDA2D4B7F04D_RuntimeMethod_var)));
	}
}
// System.Object Monster/<MonsterMoveCoroutine>d__17::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMonsterMoveCoroutineU3Ed__17_System_Collections_IEnumerator_get_Current_mA8CF1D776953629D977FBBEC0C5DF59595B750B9 (U3CMonsterMoveCoroutineU3Ed__17_tCED21B51FE2667562689AAD54A02802B88F06011* __this, const RuntimeMethod* method) 
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
// System.Void Monster/<OnDamageEffect>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnDamageEffectU3Ed__20__ctor_m26C343CB74B5B6B2CF5D9945ACD8FA1A78AE60DE (U3COnDamageEffectU3Ed__20_t38970314892195F27071F8C96915D70A4348A312* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Monster/<OnDamageEffect>d__20::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnDamageEffectU3Ed__20_System_IDisposable_Dispose_m3F7494FE973B107643ADD94190C6799556ACABE3 (U3COnDamageEffectU3Ed__20_t38970314892195F27071F8C96915D70A4348A312* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Monster/<OnDamageEffect>d__20::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3COnDamageEffectU3Ed__20_MoveNext_mEC475AF966FF254D4E3E77AF52CA3C8E79C5FA7E (U3COnDamageEffectU3Ed__20_t38970314892195F27071F8C96915D70A4348A312* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0043;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// m_Spren.color = Color.red;
		Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* L_4 = V_1;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_5 = L_4->___m_Spren_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_5, L_6, NULL);
		// yield return m_OnDamageEffectSec;
		Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* L_7 = V_1;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_8 = L_7->___m_OnDamageEffectSec_12;
		__this->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0043:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// m_Spren.color = Color.white;
		Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* L_9 = V_1;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10 = L_9->___m_Spren_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		L_11 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_10, L_11, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Monster/<OnDamageEffect>d__20::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COnDamageEffectU3Ed__20_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mDA1006566B355D82A63BEA91F42996AF1E9FE0A9 (U3COnDamageEffectU3Ed__20_t38970314892195F27071F8C96915D70A4348A312* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Monster/<OnDamageEffect>d__20::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnDamageEffectU3Ed__20_System_Collections_IEnumerator_Reset_m10612D79F45CC6BF043832DD3206477E059DBB6B (U3COnDamageEffectU3Ed__20_t38970314892195F27071F8C96915D70A4348A312* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3COnDamageEffectU3Ed__20_System_Collections_IEnumerator_Reset_m10612D79F45CC6BF043832DD3206477E059DBB6B_RuntimeMethod_var)));
	}
}
// System.Object Monster/<OnDamageEffect>d__20::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COnDamageEffectU3Ed__20_System_Collections_IEnumerator_get_Current_mA923EB38C5AD6BFA713027A673165A5667DB9C26 (U3COnDamageEffectU3Ed__20_t38970314892195F27071F8C96915D70A4348A312* __this, const RuntimeMethod* method) 
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
// System.Void MonsterSO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonsterSO__ctor_m9299FFBE161D9F223F393B5533D096235F102058 (MonsterSO_tA176F859E18EBBAC5296DF1F3A559465C2FEC2BF* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void StartUI::StartBtn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartUI_StartBtn_mC81C6B25AADF30ADF3F7CEC88255256B688AC3DE (StartUI_t295CC9E82D1C992D2E35406C47CE0A589B2BA13E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(1, NULL);
		// }
		return;
	}
}
// System.Void StartUI::DescriptionBtn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartUI_DescriptionBtn_m50A75078CD72DF79870F93F065CE171E5B6DCDA2 (StartUI_t295CC9E82D1C992D2E35406C47CE0A589B2BA13E* __this, const RuntimeMethod* method) 
{
	{
		// m_DescriptionObj.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_DescriptionObj_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void StartUI::DescriptionCloseBtn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartUI_DescriptionCloseBtn_mE59CBEA7D4B7DD9ECCBF06A6B9B0F89C63ACCDC0 (StartUI_t295CC9E82D1C992D2E35406C47CE0A589B2BA13E* __this, const RuntimeMethod* method) 
{
	{
		// m_DescriptionObj.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_DescriptionObj_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void StartUI::TableBtn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartUI_TableBtn_m7047B7524C1EEC805A3E3B4B2DEB5DBC6816AD8F (StartUI_t295CC9E82D1C992D2E35406C47CE0A589B2BA13E* __this, const RuntimeMethod* method) 
{
	{
		// m_TableObj.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_TableObj_5;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void StartUI::TableCloseBtn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartUI_TableCloseBtn_mD72B91C852BCCF1C7A0AADB7DF9F685293F17F81 (StartUI_t295CC9E82D1C992D2E35406C47CE0A589B2BA13E* __this, const RuntimeMethod* method) 
{
	{
		// m_TableObj.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_TableObj_5;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void StartUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartUI__ctor_m363381B3FEE5046566056EBEE6E96D3421C23A2B (StartUI_t295CC9E82D1C992D2E35406C47CE0A589B2BA13E* __this, const RuntimeMethod* method) 
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
// System.Void SellButton::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SellButton_OnMouseDown_mDDFFA38923BAB5F792FD6D41B20C5116D87CF3A0 (SellButton_t46919321F58E53B0518E36E72C9F1D4058947E2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFD6B087B67695D0771F6B24808659F4F93B6D31);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (m_UnitManager.m_FocusTile != null)
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_0 = __this->___m_UnitManager_4;
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_1 = L_0->___m_FocusTile_32;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0248;
		}
	}
	{
		// if (m_UnitManager.m_FocusTile.m_Unit == null)
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_3 = __this->___m_UnitManager_4;
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_4 = L_3->___m_FocusTile_32;
		Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* L_5 = L_4->___m_Unit_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_002f;
		}
	}
	{
		// return;
		return;
	}

IL_002f:
	{
		// switch (m_UnitManager.m_FocusTile.m_Unit.GetTier())
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_7 = __this->___m_UnitManager_4;
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_8 = L_7->___m_FocusTile_32;
		Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* L_9 = L_8->___m_Unit_4;
		int32_t L_10;
		L_10 = Unit_GetTier_m8EA00F548C995A12B757559DB554FBB1ADEBED19_inline(L_9, NULL);
		V_0 = L_10;
		int32_t L_11 = V_0;
		switch (L_11)
		{
			case 0:
			{
				goto IL_0070;
			}
			case 1:
			{
				goto IL_00bd;
			}
			case 2:
			{
				goto IL_010a;
			}
			case 3:
			{
				goto IL_0157;
			}
			case 4:
			{
				goto IL_01a1;
			}
			case 5:
			{
				goto IL_01ee;
			}
			case 6:
			{
				goto IL_01ee;
			}
			case 7:
			{
				goto IL_01ee;
			}
		}
	}
	{
		goto IL_01f8;
	}

IL_0070:
	{
		// GameManager.Instance.m_Gold += 15;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_12;
		L_12 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_13 = L_12;
		int32_t L_14 = L_13->___m_Gold_6;
		L_13->___m_Gold_6 = ((int32_t)il2cpp_codegen_add(L_14, ((int32_t)15)));
		// Destroy(m_UnitManager.m_FocusTile.m_Unit.gameObject);
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_15 = __this->___m_UnitManager_4;
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_16 = L_15->___m_FocusTile_32;
		Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* L_17 = L_16->___m_Unit_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_17, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_18, NULL);
		// RemoveAtList(m_UnitManager.m_FocusTile.m_Unit.GetAttackType());
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_19 = __this->___m_UnitManager_4;
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_20 = L_19->___m_FocusTile_32;
		Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* L_21 = L_20->___m_Unit_4;
		int32_t L_22;
		L_22 = Unit_GetAttackType_m5AD0A3431A5100C8A9153C59974E2A5D5AC94763_inline(L_21, NULL);
		SellButton_RemoveAtList_m40E651BB77CDFC6B7A32DFAAC7F6578ADB6EE09F(__this, L_22, NULL);
		// break;
		goto IL_01f8;
	}

IL_00bd:
	{
		// GameManager.Instance.m_Gold += 30;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_23;
		L_23 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_24 = L_23;
		int32_t L_25 = L_24->___m_Gold_6;
		L_24->___m_Gold_6 = ((int32_t)il2cpp_codegen_add(L_25, ((int32_t)30)));
		// Destroy(m_UnitManager.m_FocusTile.m_Unit.gameObject);
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_26 = __this->___m_UnitManager_4;
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_27 = L_26->___m_FocusTile_32;
		Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* L_28 = L_27->___m_Unit_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
		L_29 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_28, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_29, NULL);
		// RemoveAtList(m_UnitManager.m_FocusTile.m_Unit.GetAttackType());
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_30 = __this->___m_UnitManager_4;
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_31 = L_30->___m_FocusTile_32;
		Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* L_32 = L_31->___m_Unit_4;
		int32_t L_33;
		L_33 = Unit_GetAttackType_m5AD0A3431A5100C8A9153C59974E2A5D5AC94763_inline(L_32, NULL);
		SellButton_RemoveAtList_m40E651BB77CDFC6B7A32DFAAC7F6578ADB6EE09F(__this, L_33, NULL);
		// break;
		goto IL_01f8;
	}

IL_010a:
	{
		// GameManager.Instance.m_Gold += 45;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_34;
		L_34 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_35 = L_34;
		int32_t L_36 = L_35->___m_Gold_6;
		L_35->___m_Gold_6 = ((int32_t)il2cpp_codegen_add(L_36, ((int32_t)45)));
		// Destroy(m_UnitManager.m_FocusTile.m_Unit.gameObject);
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_37 = __this->___m_UnitManager_4;
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_38 = L_37->___m_FocusTile_32;
		Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* L_39 = L_38->___m_Unit_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40;
		L_40 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_39, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_40, NULL);
		// RemoveAtList(m_UnitManager.m_FocusTile.m_Unit.GetAttackType());
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_41 = __this->___m_UnitManager_4;
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_42 = L_41->___m_FocusTile_32;
		Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* L_43 = L_42->___m_Unit_4;
		int32_t L_44;
		L_44 = Unit_GetAttackType_m5AD0A3431A5100C8A9153C59974E2A5D5AC94763_inline(L_43, NULL);
		SellButton_RemoveAtList_m40E651BB77CDFC6B7A32DFAAC7F6578ADB6EE09F(__this, L_44, NULL);
		// break;
		goto IL_01f8;
	}

IL_0157:
	{
		// GameManager.Instance.m_Gold += 80;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_45;
		L_45 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_46 = L_45;
		int32_t L_47 = L_46->___m_Gold_6;
		L_46->___m_Gold_6 = ((int32_t)il2cpp_codegen_add(L_47, ((int32_t)80)));
		// Destroy(m_UnitManager.m_FocusTile.m_Unit.gameObject);
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_48 = __this->___m_UnitManager_4;
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_49 = L_48->___m_FocusTile_32;
		Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* L_50 = L_49->___m_Unit_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_51;
		L_51 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_50, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_51, NULL);
		// RemoveAtList(m_UnitManager.m_FocusTile.m_Unit.GetAttackType());
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_52 = __this->___m_UnitManager_4;
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_53 = L_52->___m_FocusTile_32;
		Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* L_54 = L_53->___m_Unit_4;
		int32_t L_55;
		L_55 = Unit_GetAttackType_m5AD0A3431A5100C8A9153C59974E2A5D5AC94763_inline(L_54, NULL);
		SellButton_RemoveAtList_m40E651BB77CDFC6B7A32DFAAC7F6578ADB6EE09F(__this, L_55, NULL);
		// break;
		goto IL_01f8;
	}

IL_01a1:
	{
		// GameManager.Instance.m_Gold += 150;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_56;
		L_56 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_57 = L_56;
		int32_t L_58 = L_57->___m_Gold_6;
		L_57->___m_Gold_6 = ((int32_t)il2cpp_codegen_add(L_58, ((int32_t)150)));
		// Destroy(m_UnitManager.m_FocusTile.m_Unit.gameObject);
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_59 = __this->___m_UnitManager_4;
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_60 = L_59->___m_FocusTile_32;
		Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* L_61 = L_60->___m_Unit_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_62;
		L_62 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_61, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_62, NULL);
		// RemoveAtList(m_UnitManager.m_FocusTile.m_Unit.GetAttackType());
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_63 = __this->___m_UnitManager_4;
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_64 = L_63->___m_FocusTile_32;
		Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* L_65 = L_64->___m_Unit_4;
		int32_t L_66;
		L_66 = Unit_GetAttackType_m5AD0A3431A5100C8A9153C59974E2A5D5AC94763_inline(L_65, NULL);
		SellButton_RemoveAtList_m40E651BB77CDFC6B7A32DFAAC7F6578ADB6EE09F(__this, L_66, NULL);
		// break;
		goto IL_01f8;
	}

IL_01ee:
	{
		// Debug.Log("???? ??? ????? ????? ?? ???????!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralBFD6B087B67695D0771F6B24808659F4F93B6D31, NULL);
	}

IL_01f8:
	{
		// if (m_UnitManager.m_FocusMonster != null)
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_67 = __this->___m_UnitManager_4;
		Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* L_68 = L_67->___m_FocusMonster_33;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_69;
		L_69 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_68, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_69)
		{
			goto IL_0221;
		}
	}
	{
		// m_UnitManager.m_FocusMonster.m_FocusObj.SetActive(false);
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_70 = __this->___m_UnitManager_4;
		Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* L_71 = L_70->___m_FocusMonster_33;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_72 = L_71->___m_FocusObj_16;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_72, (bool)0, NULL);
	}

IL_0221:
	{
		// m_UnitManager.FocusTileSelect(null);
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_73 = __this->___m_UnitManager_4;
		UnitSpawnManager_FocusTileSelect_mB70239159246437C020CCA48296F907671AC7542(L_73, (Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64*)NULL, NULL);
		// m_UnitManager.m_UnitSet.SetActive(false);
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_74 = __this->___m_UnitManager_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_75 = L_74->___m_UnitSet_13;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_75, (bool)0, NULL);
		// GameManager.Instance.GoldTextUpdate();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_76;
		L_76 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		GameManager_GoldTextUpdate_m2C771B7D836456F102A202CC0BC7626A68724663(L_76, NULL);
	}

IL_0248:
	{
		// }
		return;
	}
}
// System.Void SellButton::RemoveAtList(ATTACKTYPE)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SellButton_RemoveAtList_m40E651BB77CDFC6B7A32DFAAC7F6578ADB6EE09F (SellButton_t46919321F58E53B0518E36E72C9F1D4058947E2D* __this, int32_t ____type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mCA2B3E7B89876B935DDA05AB4813E52DFA534768_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// switch (m_UnitManager.m_FocusTile.m_Unit.GetAttackType())
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_0 = __this->___m_UnitManager_4;
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_1 = L_0->___m_FocusTile_32;
		Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* L_2 = L_1->___m_Unit_4;
		int32_t L_3;
		L_3 = Unit_GetAttackType_m5AD0A3431A5100C8A9153C59974E2A5D5AC94763_inline(L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		switch (L_4)
		{
			case 0:
			{
				goto IL_0029;
			}
			case 1:
			{
				goto IL_004b;
			}
			case 2:
			{
				goto IL_006d;
			}
		}
	}
	{
		return;
	}

IL_0029:
	{
		// m_UnitManager.m_Type0Unit.Remove(m_UnitManager.m_FocusTile.m_Unit);
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_5 = __this->___m_UnitManager_4;
		List_1_tC861EE71B27D4135EB3A181D6DFD72879B5394A0* L_6 = L_5->___m_Type0Unit_29;
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_7 = __this->___m_UnitManager_4;
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_8 = L_7->___m_FocusTile_32;
		Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* L_9 = L_8->___m_Unit_4;
		bool L_10;
		L_10 = List_1_Remove_mCA2B3E7B89876B935DDA05AB4813E52DFA534768(L_6, L_9, List_1_Remove_mCA2B3E7B89876B935DDA05AB4813E52DFA534768_RuntimeMethod_var);
		// break;
		return;
	}

IL_004b:
	{
		// m_UnitManager.m_Type1Unit.Remove(m_UnitManager.m_FocusTile.m_Unit);
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_11 = __this->___m_UnitManager_4;
		List_1_tC861EE71B27D4135EB3A181D6DFD72879B5394A0* L_12 = L_11->___m_Type1Unit_30;
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_13 = __this->___m_UnitManager_4;
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_14 = L_13->___m_FocusTile_32;
		Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* L_15 = L_14->___m_Unit_4;
		bool L_16;
		L_16 = List_1_Remove_mCA2B3E7B89876B935DDA05AB4813E52DFA534768(L_12, L_15, List_1_Remove_mCA2B3E7B89876B935DDA05AB4813E52DFA534768_RuntimeMethod_var);
		// break;
		return;
	}

IL_006d:
	{
		// m_UnitManager.m_Type2Unit.Remove(m_UnitManager.m_FocusTile.m_Unit);
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_17 = __this->___m_UnitManager_4;
		List_1_tC861EE71B27D4135EB3A181D6DFD72879B5394A0* L_18 = L_17->___m_Type2Unit_31;
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_19 = __this->___m_UnitManager_4;
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_20 = L_19->___m_FocusTile_32;
		Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* L_21 = L_20->___m_Unit_4;
		bool L_22;
		L_22 = List_1_Remove_mCA2B3E7B89876B935DDA05AB4813E52DFA534768(L_18, L_21, List_1_Remove_mCA2B3E7B89876B935DDA05AB4813E52DFA534768_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void SellButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SellButton__ctor_m1A673300D677A82CBA38C439DC18D778B9695586 (SellButton_t46919321F58E53B0518E36E72C9F1D4058947E2D* __this, const RuntimeMethod* method) 
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
// System.Void Tile::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_Awake_m8CE361BE2F7DD3BFD42DDCF775CF4F89FCEDCABF (Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisUnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B_m9A7F3EC7F143EAFB276065B2E85CF4B01B84BB84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_UnitManager = FindObjectOfType<UnitSpawnManager>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_0;
		L_0 = Object_FindObjectOfType_TisUnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B_m9A7F3EC7F143EAFB276065B2E85CF4B01B84BB84(Object_FindObjectOfType_TisUnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B_m9A7F3EC7F143EAFB276065B2E85CF4B01B84BB84_RuntimeMethod_var);
		__this->___m_UnitManager_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UnitManager_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void Tile::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_OnMouseDown_m15CC374FC44376602BDD7405A7125F9AB2542ED0 (Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_UnitManager.m_FocusMonster != null)
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_0 = __this->___m_UnitManager_5;
		Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* L_1 = L_0->___m_FocusMonster_33;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		// m_UnitManager.m_FocusMonster.m_FocusObj.SetActive(false);
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_3 = __this->___m_UnitManager_5;
		Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* L_4 = L_3->___m_FocusMonster_33;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4->___m_FocusObj_16;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
	}

IL_0029:
	{
		// m_UnitManager.m_MonsterSet.SetActive(false);
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_6 = __this->___m_UnitManager_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_6->___m_MonsterSet_14;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// if (m_UnitManager.m_FocusTile == null)
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_8 = __this->___m_UnitManager_5;
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_9 = L_8->___m_FocusTile_32;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_00b6;
		}
	}
	{
		// if (m_Unit != null)
		Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* L_11 = __this->___m_Unit_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_12)
		{
			goto IL_0084;
		}
	}
	{
		// m_UnitManager.FocusTileSelect(this);
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_13 = __this->___m_UnitManager_5;
		UnitSpawnManager_FocusTileSelect_mB70239159246437C020CCA48296F907671AC7542(L_13, __this, NULL);
		// m_UnitManager.m_UnitSet.SetActive(true);
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_14 = __this->___m_UnitManager_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = L_14->___m_UnitSet_13;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)1, NULL);
		// m_UnitManager.UnitTextUpdate();
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_16 = __this->___m_UnitManager_5;
		UnitSpawnManager_UnitTextUpdate_mFAB7A269B6F7AA39FB556C64C948CC4C2E389073(L_16, NULL);
		return;
	}

IL_0084:
	{
		// if (GameManager.Instance.m_Gold >= 75)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_17;
		L_17 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		int32_t L_18 = L_17->___m_Gold_6;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)75))))
		{
			goto IL_0105;
		}
	}
	{
		// GameManager.Instance.m_Gold -= 75;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_19;
		L_19 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_20 = L_19;
		int32_t L_21 = L_20->___m_Gold_6;
		L_20->___m_Gold_6 = ((int32_t)il2cpp_codegen_subtract(L_21, ((int32_t)75)));
		// GameManager.Instance.GoldTextUpdate();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_22;
		L_22 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		GameManager_GoldTextUpdate_m2C771B7D836456F102A202CC0BC7626A68724663(L_22, NULL);
		// SpawnUnit();
		Tile_SpawnUnit_mD8A34767C14D3B4142F9595957E2535968056937(__this, NULL);
		return;
	}

IL_00b6:
	{
		// if (m_UnitManager.m_FocusTile == this)
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_23 = __this->___m_UnitManager_5;
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_24 = L_23->___m_FocusTile_32;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_24, __this, NULL);
		if (!L_25)
		{
			goto IL_00e7;
		}
	}
	{
		// m_UnitManager.FocusTileSelect(null);
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_26 = __this->___m_UnitManager_5;
		UnitSpawnManager_FocusTileSelect_mB70239159246437C020CCA48296F907671AC7542(L_26, (Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64*)NULL, NULL);
		// m_UnitManager.m_UnitSet.SetActive(false);
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_27 = __this->___m_UnitManager_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = L_27->___m_UnitSet_13;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_28, (bool)0, NULL);
		return;
	}

IL_00e7:
	{
		// if (m_UnitManager.m_FocusTile.m_Unit != null)
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_29 = __this->___m_UnitManager_5;
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_30 = L_29->___m_FocusTile_32;
		Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* L_31 = L_30->___m_Unit_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_31, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_32)
		{
			goto IL_0105;
		}
	}
	{
		// SwapUnit();
		Tile_SwapUnit_m94AEB7860D7CE2E7676CBB1C9DD8F90D7A3AA173(__this, NULL);
	}

IL_0105:
	{
		// }
		return;
	}
}
// System.Void Tile::SpawnUnit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_SpawnUnit_mD8A34767C14D3B4142F9595957E2535968056937 (Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisUnit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867_m591861E25547FC556BBAB6E97DF3D27DF07D6E09_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// GameObject obj = m_UnitManager.SpawnUnit();
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_0 = __this->___m_UnitManager_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = UnitSpawnManager_SpawnUnit_mF5653CD9FDDF4A61B7F298238D0D6C285B5690D7(L_0, NULL);
		V_0 = L_1;
		// obj.transform.position = transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_3, L_5, NULL);
		// m_Unit = obj.GetComponent<Unit>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_0;
		Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* L_7;
		L_7 = GameObject_GetComponent_TisUnit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867_m591861E25547FC556BBAB6E97DF3D27DF07D6E09(L_6, GameObject_GetComponent_TisUnit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867_m591861E25547FC556BBAB6E97DF3D27DF07D6E09_RuntimeMethod_var);
		__this->___m_Unit_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Unit_4), (void*)L_7);
		// }
		return;
	}
}
// System.Void Tile::SwapUnit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_SwapUnit_m94AEB7860D7CE2E7676CBB1C9DD8F90D7A3AA173 (Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* V_0 = NULL;
	{
		// Unit unit = m_UnitManager.m_FocusTile.m_Unit;
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_0 = __this->___m_UnitManager_5;
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_1 = L_0->___m_FocusTile_32;
		Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* L_2 = L_1->___m_Unit_4;
		V_0 = L_2;
		// if (m_Unit != null)
		Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* L_3 = __this->___m_Unit_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0066;
		}
	}
	{
		// m_UnitManager.m_FocusTile.m_Unit = m_Unit;
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_5 = __this->___m_UnitManager_5;
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_6 = L_5->___m_FocusTile_32;
		Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* L_7 = __this->___m_Unit_4;
		L_6->___m_Unit_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___m_Unit_4), (void*)L_7);
		// m_UnitManager.m_FocusTile.m_Unit.transform.position = m_UnitManager.m_FocusTile.transform.position;
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_8 = __this->___m_UnitManager_5;
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_9 = L_8->___m_FocusTile_32;
		Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* L_10 = L_9->___m_Unit_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_12 = __this->___m_UnitManager_5;
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_13 = L_12->___m_FocusTile_32;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_11, L_15, NULL);
		goto IL_0077;
	}

IL_0066:
	{
		// m_UnitManager.m_FocusTile.m_Unit = null;
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_16 = __this->___m_UnitManager_5;
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_17 = L_16->___m_FocusTile_32;
		L_17->___m_Unit_4 = (Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_17->___m_Unit_4), (void*)(Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)NULL);
	}

IL_0077:
	{
		// m_Unit = unit;
		Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* L_18 = V_0;
		__this->___m_Unit_4 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Unit_4), (void*)L_18);
		// m_Unit.transform.position = transform.position;
		Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* L_19 = __this->___m_Unit_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_19, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_20, L_22, NULL);
		// m_UnitManager.FocusTileSelect(null);
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_23 = __this->___m_UnitManager_5;
		UnitSpawnManager_FocusTileSelect_mB70239159246437C020CCA48296F907671AC7542(L_23, (Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64*)NULL, NULL);
		// m_UnitManager.m_UnitSet.SetActive(false);
		UnitSpawnManager_t8D7945616A2A02F1406FCEF789F5B818F132AE8B* L_24 = __this->___m_UnitManager_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = L_24->___m_UnitSet_13;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_25, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Tile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile__ctor_mB2C904B47040471552C938AE751AC0BF80B369E7 (Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* __this, const RuntimeMethod* method) 
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
// System.Void Unit::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_Awake_m5B225DE622DA60BD3169D4E2705B9E098591C5DC (Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Halo = GetComponent<SpriteRenderer>();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		__this->___m_Halo_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Halo_11), (void*)L_0);
		// m_NameText = GetComponentInChildren<TextMeshProUGUI>();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1;
		L_1 = Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC(__this, Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
		__this->___m_NameText_13 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_NameText_13), (void*)L_1);
		// m_Ani = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2;
		L_2 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___m_Ani_14 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Ani_14), (void*)L_2);
		// StartCoroutine(Attack());
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Collections.IEnumerator Unit::Attack() */, __this);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Unit::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Unit_Attack_mC355BEC77A17991C14919C56FB1DB350E801646C (Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAttackU3Ed__13_t4B6124F7D3D86096A8386FBD39968DB70F153EBB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAttackU3Ed__13_t4B6124F7D3D86096A8386FBD39968DB70F153EBB* L_0 = (U3CAttackU3Ed__13_t4B6124F7D3D86096A8386FBD39968DB70F153EBB*)il2cpp_codegen_object_new(U3CAttackU3Ed__13_t4B6124F7D3D86096A8386FBD39968DB70F153EBB_il2cpp_TypeInfo_var);
		U3CAttackU3Ed__13__ctor_mD17A885028E1FE34E798625137354203B6E66944(L_0, 0, NULL);
		U3CAttackU3Ed__13_t4B6124F7D3D86096A8386FBD39968DB70F153EBB* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Unit::SetStatus(ATTACKTYPE,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_SetStatus_m819DB31B73DEB2D895F829B00E38F35906E760E5 (Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* __this, int32_t ____type0, int32_t ____index1, const RuntimeMethod* method) 
{
	{
		// m_Type = _type;
		int32_t L_0 = ____type0;
		__this->___m_Type_5 = L_0;
		// m_Halo.sprite = m_UnitSO.m_Sprites[_index];
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1 = __this->___m_Halo_11;
		UnitSO_tBF9EFA428299727D7511EA3D8D33C8C7B110B6CC* L_2 = __this->___m_UnitSO_15;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_3 = L_2->___m_Sprites_4;
		int32_t L_4 = ____index1;
		int32_t L_5 = L_4;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_1, L_6, NULL);
		// m_Name = m_UnitSO.m_Names[_index];
		UnitSO_tBF9EFA428299727D7511EA3D8D33C8C7B110B6CC* L_7 = __this->___m_UnitSO_15;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7->___m_Names_5;
		int32_t L_9 = ____index1;
		int32_t L_10 = L_9;
		String_t* L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		__this->___m_Name_10 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Name_10), (void*)L_11);
		// m_Damage = m_UnitSO.m_Damages[_index];
		UnitSO_tBF9EFA428299727D7511EA3D8D33C8C7B110B6CC* L_12 = __this->___m_UnitSO_15;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = L_12->___m_Damages_6;
		int32_t L_14 = ____index1;
		int32_t L_15 = L_14;
		int32_t L_16 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		__this->___m_Damage_6 = L_16;
		// m_NameText.text = m_Name;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_17 = __this->___m_NameText_13;
		String_t* L_18 = __this->___m_Name_10;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_17, L_18);
		int32_t L_19 = ____type0;
		switch (L_19)
		{
			case 0:
			{
				goto IL_0069;
			}
			case 1:
			{
				goto IL_007a;
			}
			case 2:
			{
				goto IL_008b;
			}
		}
	}
	{
		return;
	}

IL_0069:
	{
		// m_NameText.color = Color.red;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_20 = __this->___m_NameText_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21;
		L_21 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_20, L_21);
		// break;
		return;
	}

IL_007a:
	{
		// m_NameText.color = Color.blue;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_22 = __this->___m_NameText_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23;
		L_23 = Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline(NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_22, L_23);
		// break;
		return;
	}

IL_008b:
	{
		// m_NameText.color = Color.yellow;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_24 = __this->___m_NameText_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25;
		L_25 = Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline(NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_24, L_25);
		// }
		return;
	}
}
// System.Void Unit::SetLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_SetLevel_m413CB9A36FA20D06210D8A6F7A81DC52572E039D (Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* __this, int32_t ____level0, const RuntimeMethod* method) 
{
	{
		// m_Level = _level;
		int32_t L_0 = ____level0;
		__this->___m_Level_7 = L_0;
		// }
		return;
	}
}
// System.Int32 Unit::TotalDamage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unit_TotalDamage_mC7B5C20F8D34A0C7BC7F10B0ABF07D5858B52088 (Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* __this, const RuntimeMethod* method) 
{
	{
		// return m_Damage * (m_Level + 1);
		int32_t L_0 = __this->___m_Damage_6;
		int32_t L_1 = __this->___m_Level_7;
		return ((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)il2cpp_codegen_add(L_1, 1))));
	}
}
// System.Void Unit::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit_OnDestroy_m56DF556AAD79207109F29875453852CC4D314886 (Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* __this, const RuntimeMethod* method) 
{
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// }
		return;
	}
}
// UnityEngine.GameObject Unit::SpawnEffect(ATTACKTYPE)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Unit_SpawnEffect_mFB7638FC66BB39344B54D002E0A0A9F228004638 (Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* __this, int32_t ____type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* V_1 = NULL;
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// GameObject obj =  ObjectPoolingManager.Instance.GetQueue(ObjectPoolingManager.m_Effect00Key);
		ObjectPoolingManager_t33FF87AC48390D80D5C87B47A82A53AD0DEA2E35* L_0;
		L_0 = ObjectPoolingManager_get_Instance_m725C062C2C3EA1FCA849EA3B708B8BC726D6093A(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = ObjectPoolingManager_GetQueue_mA1BF9775AA433479E7DFA82B1C84A3767BECAE64(L_0, ((int32_t)100), NULL);
		V_0 = L_1;
		// ParticleSystem particle = obj.GetComponent<ParticleSystem>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = V_0;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_3;
		L_3 = GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA(L_2, GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA_RuntimeMethod_var);
		V_1 = L_3;
		// ParticleSystem.MainModule module = particle.main;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_4 = V_1;
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_5;
		L_5 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_4, NULL);
		V_2 = L_5;
		int32_t L_6 = ____type0;
		switch (L_6)
		{
			case 0:
			{
				goto IL_002f;
			}
			case 1:
			{
				goto IL_0042;
			}
			case 2:
			{
				goto IL_0055;
			}
		}
	}
	{
		goto IL_0066;
	}

IL_002f:
	{
		// module.startColor = Color.red;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_8;
		L_8 = MinMaxGradient_op_Implicit_mAA6154D6644E72BBA49EB34DC957538EE929DE02(L_7, NULL);
		MainModule_set_startColor_m504911284CAC53A7C1B97B5D01BBDD2FA67D0E7A((&V_2), L_8, NULL);
		// break;
		goto IL_0066;
	}

IL_0042:
	{
		// module.startColor = Color.blue;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline(NULL);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_10;
		L_10 = MinMaxGradient_op_Implicit_mAA6154D6644E72BBA49EB34DC957538EE929DE02(L_9, NULL);
		MainModule_set_startColor_m504911284CAC53A7C1B97B5D01BBDD2FA67D0E7A((&V_2), L_10, NULL);
		// break;
		goto IL_0066;
	}

IL_0055:
	{
		// module.startColor = Color.yellow;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		L_11 = Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline(NULL);
		MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 L_12;
		L_12 = MinMaxGradient_op_Implicit_mAA6154D6644E72BBA49EB34DC957538EE929DE02(L_11, NULL);
		MainModule_set_startColor_m504911284CAC53A7C1B97B5D01BBDD2FA67D0E7A((&V_2), L_12, NULL);
	}

IL_0066:
	{
		// particle.Play();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_13 = V_1;
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_13, NULL);
		// return obj;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = V_0;
		return L_14;
	}
}
// System.String Unit::GetDamageText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Unit_GetDamageText_m6C3FCD795A0A3AE3F42FB6C8489A099F22BF994A (Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AD043B7BA7FE36DDC7A4374175E67B5506980F7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return $"{m_Damage} + {m_Damage * (m_Level)}";
		int32_t L_0 = __this->___m_Damage_6;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3 = __this->___m_Damage_6;
		int32_t L_4 = __this->___m_Level_7;
		int32_t L_5 = ((int32_t)il2cpp_codegen_multiply(L_3, L_4));
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral8AD043B7BA7FE36DDC7A4374175E67B5506980F7, L_2, L_6, NULL);
		return L_7;
	}
}
// System.String Unit::GetNameText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Unit_GetNameText_m1C7C0F20DA4CC04A22D7706864ACAD9210D4E0FD (Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* __this, const RuntimeMethod* method) 
{
	{
		// return m_Name;
		String_t* L_0 = __this->___m_Name_10;
		return L_0;
	}
}
// System.String Unit::GetRangeText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Unit_GetRangeText_m8EAAFFD39EAA6986CF5BC913F5DCB2F6C6775F67 (Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* __this, const RuntimeMethod* method) 
{
	{
		// return m_Range.ToString();
		float* L_0 = (&__this->___m_Range_8);
		String_t* L_1;
		L_1 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_0, NULL);
		return L_1;
	}
}
// System.String Unit::GetTypeText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Unit_GetTypeText_mBD9F27E4BAFB30063749FF2A8C4363CDBB79B3B6 (Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15E22EBD4601BB439242B50117FCF4E18DADB9A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral978CFADA582FD168A79B99EB3A526E1E05A009A5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB564AFFCD774E27144664AED17BE85637DF02394);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// string type = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// switch (m_Type)
		int32_t L_0 = __this->___m_Type_5;
		V_1 = L_0;
		int32_t L_1 = V_1;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0029;
			}
			case 2:
			{
				goto IL_0031;
			}
		}
	}
	{
		goto IL_0037;
	}

IL_0021:
	{
		// type = "??????";
		V_0 = _stringLiteral15E22EBD4601BB439242B50117FCF4E18DADB9A8;
		// break;
		goto IL_0037;
	}

IL_0029:
	{
		// type = "?????";
		V_0 = _stringLiteral978CFADA582FD168A79B99EB3A526E1E05A009A5;
		// break;
		goto IL_0037;
	}

IL_0031:
	{
		// type = "??????";
		V_0 = _stringLiteralB564AFFCD774E27144664AED17BE85637DF02394;
	}

IL_0037:
	{
		// return type;
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.String Unit::GetTierText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Unit_GetTierText_m6654632358629E0E20323A06636D93570C7CFEBB (Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51DD32CDD54F6632DA2CC498F0365D916AF5774F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61F396F9F12CAE176D671D45D33361A94F158579);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E218A4292CBF0785B5F12B999ABB348822AA6B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA707F17E1EC46A9E6CA5AF00670E3C27D88A000);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBC925EF350BBAA22312541D1E60F601FCFFDD3D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE022278B309BA51D59FE123CF784D085D9BD4B08);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB708CCF27979179779A366696CB33A864C96C72);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF94277228CA967FC150E197852FED5F93C1AF428);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// string tier = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// switch (m_Tier)
		int32_t L_0 = __this->___m_Tier_4;
		V_1 = L_0;
		int32_t L_1 = V_1;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0035;
			}
			case 1:
			{
				goto IL_003d;
			}
			case 2:
			{
				goto IL_0045;
			}
			case 3:
			{
				goto IL_004d;
			}
			case 4:
			{
				goto IL_0055;
			}
			case 5:
			{
				goto IL_005d;
			}
			case 6:
			{
				goto IL_0065;
			}
			case 7:
			{
				goto IL_006d;
			}
		}
	}
	{
		goto IL_0073;
	}

IL_0035:
	{
		// tier = "???";
		V_0 = _stringLiteralCA707F17E1EC46A9E6CA5AF00670E3C27D88A000;
		// break;
		goto IL_0073;
	}

IL_003d:
	{
		// tier = "????";
		V_0 = _stringLiteral61F396F9F12CAE176D671D45D33361A94F158579;
		// break;
		goto IL_0073;
	}

IL_0045:
	{
		// tier = "????";
		V_0 = _stringLiteral87E218A4292CBF0785B5F12B999ABB348822AA6B;
		// break;
		goto IL_0073;
	}

IL_004d:
	{
		// tier = "????";
		V_0 = _stringLiteralEB708CCF27979179779A366696CB33A864C96C72;
		// break;
		goto IL_0073;
	}

IL_0055:
	{
		// tier = "????";
		V_0 = _stringLiteralE022278B309BA51D59FE123CF784D085D9BD4B08;
		// break;
		goto IL_0073;
	}

IL_005d:
	{
		// tier = "????";
		V_0 = _stringLiteral51DD32CDD54F6632DA2CC498F0365D916AF5774F;
		// break;
		goto IL_0073;
	}

IL_0065:
	{
		// tier = "???";
		V_0 = _stringLiteralF94277228CA967FC150E197852FED5F93C1AF428;
		// break;
		goto IL_0073;
	}

IL_006d:
	{
		// tier = "????";
		V_0 = _stringLiteralCBC925EF350BBAA22312541D1E60F601FCFFDD3D;
	}

IL_0073:
	{
		// return tier;
		String_t* L_2 = V_0;
		return L_2;
	}
}
// UNITTIER Unit::GetTier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unit_GetTier_m8EA00F548C995A12B757559DB554FBB1ADEBED19 (Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* __this, const RuntimeMethod* method) 
{
	{
		// return m_Tier;
		int32_t L_0 = __this->___m_Tier_4;
		return L_0;
	}
}
// ATTACKTYPE Unit::GetAttackType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unit_GetAttackType_m5AD0A3431A5100C8A9153C59974E2A5D5AC94763 (Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* __this, const RuntimeMethod* method) 
{
	{
		// return m_Type;
		int32_t L_0 = __this->___m_Type_5;
		return L_0;
	}
}
// UnityEngine.Sprite Unit::GetSprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Unit_GetSprite_mC4A9D9742AFA004501AAF6BF281037513D125338 (Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* __this, const RuntimeMethod* method) 
{
	{
		// return m_Halo.sprite;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___m_Halo_11;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1;
		L_1 = SpriteRenderer_get_sprite_mEEED0A9E872AE12E56CAF1641F2F592633181D44(L_0, NULL);
		return L_1;
	}
}
// System.Void Unit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unit__ctor_m431B8E6991113DC517AFAEF468B91A16BFAFF172 (Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* __this, const RuntimeMethod* method) 
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
// System.Void Unit/<Attack>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackU3Ed__13__ctor_mD17A885028E1FE34E798625137354203B6E66944 (U3CAttackU3Ed__13_t4B6124F7D3D86096A8386FBD39968DB70F153EBB* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Unit/<Attack>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackU3Ed__13_System_IDisposable_Dispose_m9D00957ACEA7BE26E9472F78F8052691A100E38A (U3CAttackU3Ed__13_t4B6124F7D3D86096A8386FBD39968DB70F153EBB* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Unit/<Attack>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAttackU3Ed__13_MoveNext_m96CA22F01ED1A1F1DFEE1157869F2AC1FCB3D2EA (U3CAttackU3Ed__13_t4B6124F7D3D86096A8386FBD39968DB70F153EBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMonster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE_m46917FD3137D7AFBDFECFE97536B7B61FBC5035E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral851445DA7EB0740893C9067B75E2484E7538452A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* V_1 = NULL;
	Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* V_2 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_00b0;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_00b7;
	}

IL_0026:
	{
		// Collider2D monsterObj = Physics2D.OverlapCircle(transform.position, m_Range, LayerMask.GetMask("Monster"));
		Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* L_4 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_6, NULL);
		Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* L_8 = V_1;
		float L_9 = L_8->___m_Range_8;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		ArrayElementTypeCheck (L_11, _stringLiteral851445DA7EB0740893C9067B75E2484E7538452A);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral851445DA7EB0740893C9067B75E2484E7538452A);
		int32_t L_12;
		L_12 = LayerMask_GetMask_m99295ECDD50C4874CA4ABC9448E3F238A023C6F2(L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_13;
		L_13 = Physics2D_OverlapCircle_m7167CE7F52AF6745632300B4742EC09407CE5F18(L_7, L_9, L_12, NULL);
		V_2 = L_13;
		// if (monsterObj != null)
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_14 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_15)
		{
			goto IL_009b;
		}
	}
	{
		// Monster monster = monsterObj.gameObject.GetComponent<Monster>();
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_16 = V_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_16, NULL);
		Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* L_18;
		L_18 = GameObject_GetComponent_TisMonster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE_m46917FD3137D7AFBDFECFE97536B7B61FBC5035E(L_17, GameObject_GetComponent_TisMonster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE_m46917FD3137D7AFBDFECFE97536B7B61FBC5035E_RuntimeMethod_var);
		// monster.OnDamage(m_Type, TotalDamage(), m_Tier);
		Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* L_19 = V_1;
		int32_t L_20 = L_19->___m_Type_5;
		Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* L_21 = V_1;
		int32_t L_22;
		L_22 = Unit_TotalDamage_mC7B5C20F8D34A0C7BC7F10B0ABF07D5858B52088(L_21, NULL);
		Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* L_23 = V_1;
		int32_t L_24 = L_23->___m_Tier_4;
		Monster_OnDamage_m3137BE1030D5EE18ADABFB4A7E976EF99F5A1635(L_18, L_20, L_22, L_24, NULL);
		// SoundManager.Instance.SoundPlay(SOUND_NAME.UnitAttack1);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_25;
		L_25 = SoundManager_get_Instance_mE37BC6A788B14F6895B2B50A4E461F8C7895BAEA(NULL);
		SoundManager_SoundPlay_mE25CE7EC2DB0173862EFBB586A4A4AF3D63CE6B6(L_25, 1, NULL);
		// m_Ani.SetTrigger("Attack");
		Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* L_26 = V_1;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_27 = L_26->___m_Ani_14;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_27, _stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91, NULL);
	}

IL_009b:
	{
		// yield return m_AttackDelaySec;
		Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* L_28 = V_1;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_29 = L_28->___m_AttackDelaySec_12;
		__this->___U3CU3E2__current_1 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_29);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00b0:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00b7:
	{
		// while (gameObject.activeSelf)
		Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* L_30 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31;
		L_31 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_30, NULL);
		bool L_32;
		L_32 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_31, NULL);
		if (L_32)
		{
			goto IL_0026;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object Unit/<Attack>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAttackU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC357868FA8DE5523B101AA2F88727F7A7047E212 (U3CAttackU3Ed__13_t4B6124F7D3D86096A8386FBD39968DB70F153EBB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Unit/<Attack>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackU3Ed__13_System_Collections_IEnumerator_Reset_m3DDACA9D13E55A454A47F77F9E53E64C8D64021D (U3CAttackU3Ed__13_t4B6124F7D3D86096A8386FBD39968DB70F153EBB* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAttackU3Ed__13_System_Collections_IEnumerator_Reset_m3DDACA9D13E55A454A47F77F9E53E64C8D64021D_RuntimeMethod_var)));
	}
}
// System.Object Unit/<Attack>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAttackU3Ed__13_System_Collections_IEnumerator_get_Current_mD09FDF334DAB26A9657EA1FEF0254BB9FCA3B907 (U3CAttackU3Ed__13_t4B6124F7D3D86096A8386FBD39968DB70F153EBB* __this, const RuntimeMethod* method) 
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
// System.Void UnitSO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitSO__ctor_m7C92198A5747C0325D931DCDD5D2F134DD1E9DD4 (UnitSO_tBF9EFA428299727D7511EA3D8D33C8C7B110B6CC* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void UnitTier0::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitTier0_OnEnable_m846E35FCD9A589DBC3BBB1B3480927F7BCC3B577 (UnitTier0_tB13DBEA7BA5F4B9275A17FFDCC0A5156E9EB4DB3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Tier = UNITTIER.???;
		((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)__this)->___m_Tier_4 = 0;
		// m_Range = 5f;
		((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)__this)->___m_Range_8 = (5.0f);
		// m_AttackDelay = 1f;
		((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)__this)->___m_AttackDelay_9 = (1.0f);
		// m_AttackDelaySec = new WaitForSeconds(m_AttackDelay);
		float L_0 = ((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)__this)->___m_AttackDelay_9;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_1 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_1, L_0, NULL);
		((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)__this)->___m_AttackDelaySec_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)__this)->___m_AttackDelaySec_12), (void*)L_1);
		// }
		return;
	}
}
// System.Void UnitTier0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitTier0__ctor_m84D3982D3E717569577F89E2DD17F1D190F58FBF (UnitTier0_tB13DBEA7BA5F4B9275A17FFDCC0A5156E9EB4DB3* __this, const RuntimeMethod* method) 
{
	{
		Unit__ctor_m431B8E6991113DC517AFAEF468B91A16BFAFF172(__this, NULL);
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
// System.Void UnitTier1::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitTier1_OnEnable_m173EE3F1608BABB29F080646B0B5021416377D70 (UnitTier1_t695C9CB922B71AB73B1BA1E5BE4ECFAFE33C97A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Tier = UNITTIER.????;
		((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)__this)->___m_Tier_4 = 1;
		// m_Range = 5f;
		((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)__this)->___m_Range_8 = (5.0f);
		// m_AttackDelay = 1f;
		((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)__this)->___m_AttackDelay_9 = (1.0f);
		// m_AttackDelaySec = new WaitForSeconds(m_AttackDelay);
		float L_0 = ((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)__this)->___m_AttackDelay_9;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_1 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_1, L_0, NULL);
		((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)__this)->___m_AttackDelaySec_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)__this)->___m_AttackDelaySec_12), (void*)L_1);
		// }
		return;
	}
}
// System.Void UnitTier1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitTier1__ctor_mB487A678529967B20673856004EDC3B2B78D2363 (UnitTier1_t695C9CB922B71AB73B1BA1E5BE4ECFAFE33C97A4* __this, const RuntimeMethod* method) 
{
	{
		Unit__ctor_m431B8E6991113DC517AFAEF468B91A16BFAFF172(__this, NULL);
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
// System.Void UnitTier2::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitTier2_OnEnable_m71FBDDB60EDBA33E5AD30D491A52F60232A34F11 (UnitTier2_tB529508144B802AFB1ED3CD028E0B418C0D26EB1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Tier = UNITTIER.????;
		((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)__this)->___m_Tier_4 = 2;
		// m_Range = 6f;
		((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)__this)->___m_Range_8 = (6.0f);
		// m_AttackDelay = 0.75f;
		((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)__this)->___m_AttackDelay_9 = (0.75f);
		// m_AttackDelaySec = new WaitForSeconds(m_AttackDelay);
		float L_0 = ((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)__this)->___m_AttackDelay_9;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_1 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_1, L_0, NULL);
		((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)__this)->___m_AttackDelaySec_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)__this)->___m_AttackDelaySec_12), (void*)L_1);
		// }
		return;
	}
}
// System.Void UnitTier2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitTier2__ctor_mD28E31EC787DFE63E9A09E6B0B0A3A3DF4B0FB3C (UnitTier2_tB529508144B802AFB1ED3CD028E0B418C0D26EB1* __this, const RuntimeMethod* method) 
{
	{
		Unit__ctor_m431B8E6991113DC517AFAEF468B91A16BFAFF172(__this, NULL);
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
// System.Void UnitTier3::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitTier3_OnEnable_mAFF621F43C694B7451783ADE4F12BA86EE914627 (UnitTier3_t4B959B8C2B81A3ACB2ACAB1A7960D37CD7890B3D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Tier = UNITTIER.????;
		((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)__this)->___m_Tier_4 = 3;
		// m_Range = 7f;
		((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)__this)->___m_Range_8 = (7.0f);
		// m_AttackDelay = 0.5f;
		((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)__this)->___m_AttackDelay_9 = (0.5f);
		// m_AttackDelaySec = new WaitForSeconds(m_AttackDelay);
		float L_0 = ((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)__this)->___m_AttackDelay_9;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_1 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_1, L_0, NULL);
		((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)__this)->___m_AttackDelaySec_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)__this)->___m_AttackDelaySec_12), (void*)L_1);
		// }
		return;
	}
}
// System.Void UnitTier3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitTier3__ctor_m6F089D59C5A2A19E63F961E00A2E36A95CE5C663 (UnitTier3_t4B959B8C2B81A3ACB2ACAB1A7960D37CD7890B3D* __this, const RuntimeMethod* method) 
{
	{
		Unit__ctor_m431B8E6991113DC517AFAEF468B91A16BFAFF172(__this, NULL);
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
// System.Void UnitTier4::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitTier4_OnEnable_mC8B61B7F411DCCB693644ED2966776D51DC95835 (UnitTier4_tA9DA2C58499A6558FD4C57CA8FEE41BB2D5EB5A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Tier = UNITTIER.????;
		((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)__this)->___m_Tier_4 = 4;
		// m_Range = 8f;
		((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)__this)->___m_Range_8 = (8.0f);
		// m_AttackDelay = 0.5f;
		((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)__this)->___m_AttackDelay_9 = (0.5f);
		// m_AttackDelaySec = new WaitForSeconds(m_AttackDelay);
		float L_0 = ((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)__this)->___m_AttackDelay_9;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_1 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_1, L_0, NULL);
		((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)__this)->___m_AttackDelaySec_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)__this)->___m_AttackDelaySec_12), (void*)L_1);
		// }
		return;
	}
}
// System.Void UnitTier4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitTier4__ctor_mA6078AAA4BA91BCDC54535866623375EEC0B2B9A (UnitTier4_tA9DA2C58499A6558FD4C57CA8FEE41BB2D5EB5A0* __this, const RuntimeMethod* method) 
{
	{
		Unit__ctor_m431B8E6991113DC517AFAEF468B91A16BFAFF172(__this, NULL);
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
// System.Void UnitTier5::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitTier5_OnEnable_m7BA0FBDB4C08023AC5830D9197BBD2EA7096D5FD (UnitTier5_t86D2280E503224D50BA7FBA1C160A87995748B4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Tier = UNITTIER.????;
		((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)__this)->___m_Tier_4 = 5;
		// m_Range = 9f;
		((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)__this)->___m_Range_8 = (9.0f);
		// m_AttackDelay = 0.33f;
		((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)__this)->___m_AttackDelay_9 = (0.330000013f);
		// m_AttackDelaySec = new WaitForSeconds(m_AttackDelay);
		float L_0 = ((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)__this)->___m_AttackDelay_9;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_1 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_1, L_0, NULL);
		((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)__this)->___m_AttackDelaySec_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)__this)->___m_AttackDelaySec_12), (void*)L_1);
		// }
		return;
	}
}
// System.Collections.IEnumerator UnitTier5::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnitTier5_Attack_m835B06EBF8040E95B1ACDCE8121C612A12DF31A8 (UnitTier5_t86D2280E503224D50BA7FBA1C160A87995748B4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAttackU3Ed__1_tF0E11FBB3E498E44A6E4959A8AC4EC8AD9E28EEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAttackU3Ed__1_tF0E11FBB3E498E44A6E4959A8AC4EC8AD9E28EEC* L_0 = (U3CAttackU3Ed__1_tF0E11FBB3E498E44A6E4959A8AC4EC8AD9E28EEC*)il2cpp_codegen_object_new(U3CAttackU3Ed__1_tF0E11FBB3E498E44A6E4959A8AC4EC8AD9E28EEC_il2cpp_TypeInfo_var);
		U3CAttackU3Ed__1__ctor_mFD0ECF99150C1A23268FC3B980A50731B438C692(L_0, 0, NULL);
		U3CAttackU3Ed__1_tF0E11FBB3E498E44A6E4959A8AC4EC8AD9E28EEC* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void UnitTier5::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitTier5__ctor_mCB93DD8BE83F79B874B2F8C653FD7D1603CDA6B9 (UnitTier5_t86D2280E503224D50BA7FBA1C160A87995748B4A* __this, const RuntimeMethod* method) 
{
	{
		Unit__ctor_m431B8E6991113DC517AFAEF468B91A16BFAFF172(__this, NULL);
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
// System.Void UnitTier5/<Attack>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackU3Ed__1__ctor_mFD0ECF99150C1A23268FC3B980A50731B438C692 (U3CAttackU3Ed__1_tF0E11FBB3E498E44A6E4959A8AC4EC8AD9E28EEC* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void UnitTier5/<Attack>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackU3Ed__1_System_IDisposable_Dispose_mA1D088B0786ADE0E3951FBA85AECF23EFD620618 (U3CAttackU3Ed__1_tF0E11FBB3E498E44A6E4959A8AC4EC8AD9E28EEC* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean UnitTier5/<Attack>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAttackU3Ed__1_MoveNext_m4CAEBE8EFDBC1482EB2A64B0D7B5C9194B36BB7E (U3CAttackU3Ed__1_tF0E11FBB3E498E44A6E4959A8AC4EC8AD9E28EEC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMonster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE_m52812A043587F8679E56985844430E6C9E9A89A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral851445DA7EB0740893C9067B75E2484E7538452A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UnitTier5_t86D2280E503224D50BA7FBA1C160A87995748B4A* V_1 = NULL;
	Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* V_2 = NULL;
	Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* V_3 = NULL;
	int32_t V_4 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		UnitTier5_t86D2280E503224D50BA7FBA1C160A87995748B4A* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_011e;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_0125;
	}

IL_0026:
	{
		// Collider2D monsterObj = Physics2D.OverlapCircle(transform.position, m_Range, LayerMask.GetMask("Monster"));
		UnitTier5_t86D2280E503224D50BA7FBA1C160A87995748B4A* L_4 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_6, NULL);
		UnitTier5_t86D2280E503224D50BA7FBA1C160A87995748B4A* L_8 = V_1;
		float L_9 = ((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)L_8)->___m_Range_8;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		ArrayElementTypeCheck (L_11, _stringLiteral851445DA7EB0740893C9067B75E2484E7538452A);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral851445DA7EB0740893C9067B75E2484E7538452A);
		int32_t L_12;
		L_12 = LayerMask_GetMask_m99295ECDD50C4874CA4ABC9448E3F238A023C6F2(L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_13;
		L_13 = Physics2D_OverlapCircle_m7167CE7F52AF6745632300B4742EC09407CE5F18(L_7, L_9, L_12, NULL);
		V_2 = L_13;
		// if (monsterObj != null)
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_14 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_15)
		{
			goto IL_0109;
		}
	}
	{
		// Collider2D[] monstersObj = Physics2D.OverlapCircleAll(monsterObj.transform.position, 5f, LayerMask.GetMask("Monster"));
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_16 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_18, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_20;
		ArrayElementTypeCheck (L_21, _stringLiteral851445DA7EB0740893C9067B75E2484E7538452A);
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral851445DA7EB0740893C9067B75E2484E7538452A);
		int32_t L_22;
		L_22 = LayerMask_GetMask_m99295ECDD50C4874CA4ABC9448E3F238A023C6F2(L_21, NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* L_23;
		L_23 = Physics2D_OverlapCircleAll_mBEBE14F058D718FA90F44A662C106D9CCDF6B3D9(L_19, (5.0f), L_22, NULL);
		V_3 = L_23;
		// for (int i = 0; i < monstersObj.Length; i++)
		V_4 = 0;
		goto IL_00c6;
	}

IL_0094:
	{
		// if (monstersObj[i] != null)
		Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* L_24 = V_3;
		int32_t L_25 = V_4;
		int32_t L_26 = L_25;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_27 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_27, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_28)
		{
			goto IL_00c0;
		}
	}
	{
		// Monster monster = monstersObj[i].GetComponent<Monster>();
		Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* L_29 = V_3;
		int32_t L_30 = V_4;
		int32_t L_31 = L_30;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_32 = (L_29)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31));
		Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* L_33;
		L_33 = Component_GetComponent_TisMonster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE_m52812A043587F8679E56985844430E6C9E9A89A7(L_32, Component_GetComponent_TisMonster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE_m52812A043587F8679E56985844430E6C9E9A89A7_RuntimeMethod_var);
		// monster.OnDamage(m_Type, TotalDamage(), m_Tier);
		UnitTier5_t86D2280E503224D50BA7FBA1C160A87995748B4A* L_34 = V_1;
		int32_t L_35 = ((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)L_34)->___m_Type_5;
		UnitTier5_t86D2280E503224D50BA7FBA1C160A87995748B4A* L_36 = V_1;
		int32_t L_37;
		L_37 = Unit_TotalDamage_mC7B5C20F8D34A0C7BC7F10B0ABF07D5858B52088(L_36, NULL);
		UnitTier5_t86D2280E503224D50BA7FBA1C160A87995748B4A* L_38 = V_1;
		int32_t L_39 = ((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)L_38)->___m_Tier_4;
		Monster_OnDamage_m3137BE1030D5EE18ADABFB4A7E976EF99F5A1635(L_33, L_35, L_37, L_39, NULL);
	}

IL_00c0:
	{
		// for (int i = 0; i < monstersObj.Length; i++)
		int32_t L_40 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00c6:
	{
		// for (int i = 0; i < monstersObj.Length; i++)
		int32_t L_41 = V_4;
		Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* L_42 = V_3;
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0094;
		}
	}
	{
		// GameObject obj = SpawnEffect(m_Type);
		UnitTier5_t86D2280E503224D50BA7FBA1C160A87995748B4A* L_43 = V_1;
		UnitTier5_t86D2280E503224D50BA7FBA1C160A87995748B4A* L_44 = V_1;
		int32_t L_45 = ((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)L_44)->___m_Type_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46;
		L_46 = Unit_SpawnEffect_mFB7638FC66BB39344B54D002E0A0A9F228004638(L_43, L_45, NULL);
		// obj.transform.position = monsterObj.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47;
		L_47 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_46, NULL);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_48 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49;
		L_49 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_48, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_49, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_47, L_50, NULL);
		// SoundManager.Instance.SoundPlay(SOUND_NAME.UnitAttack2);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_51;
		L_51 = SoundManager_get_Instance_mE37BC6A788B14F6895B2B50A4E461F8C7895BAEA(NULL);
		SoundManager_SoundPlay_mE25CE7EC2DB0173862EFBB586A4A4AF3D63CE6B6(L_51, 2, NULL);
		// m_Ani.SetTrigger("Attack");
		UnitTier5_t86D2280E503224D50BA7FBA1C160A87995748B4A* L_52 = V_1;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_53 = ((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)L_52)->___m_Ani_14;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_53, _stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91, NULL);
	}

IL_0109:
	{
		// yield return m_AttackDelaySec;
		UnitTier5_t86D2280E503224D50BA7FBA1C160A87995748B4A* L_54 = V_1;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_55 = ((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)L_54)->___m_AttackDelaySec_12;
		__this->___U3CU3E2__current_1 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_55);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_011e:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0125:
	{
		// while (gameObject.activeSelf)
		UnitTier5_t86D2280E503224D50BA7FBA1C160A87995748B4A* L_56 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_57;
		L_57 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_56, NULL);
		bool L_58;
		L_58 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_57, NULL);
		if (L_58)
		{
			goto IL_0026;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object UnitTier5/<Attack>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAttackU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFFB3CC88B6FED6999859B8AF15AA7FDE7FA1F122 (U3CAttackU3Ed__1_tF0E11FBB3E498E44A6E4959A8AC4EC8AD9E28EEC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void UnitTier5/<Attack>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackU3Ed__1_System_Collections_IEnumerator_Reset_m7EE1055F5634720DAFD82A45D7A25FE9561970D3 (U3CAttackU3Ed__1_tF0E11FBB3E498E44A6E4959A8AC4EC8AD9E28EEC* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAttackU3Ed__1_System_Collections_IEnumerator_Reset_m7EE1055F5634720DAFD82A45D7A25FE9561970D3_RuntimeMethod_var)));
	}
}
// System.Object UnitTier5/<Attack>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAttackU3Ed__1_System_Collections_IEnumerator_get_Current_m24F900757A1C5B3AAF3314744B194F742B097C51 (U3CAttackU3Ed__1_tF0E11FBB3E498E44A6E4959A8AC4EC8AD9E28EEC* __this, const RuntimeMethod* method) 
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
// System.Void UnitTier6::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitTier6_OnEnable_m561A01EDED99743E0DA809DE61FC8711B99E12BE (UnitTier6_t025237B7F507174AB372965E8609A7B991A43F9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Tier = UNITTIER.???;
		((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)__this)->___m_Tier_4 = 6;
		// m_Range = 20f;
		((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)__this)->___m_Range_8 = (20.0f);
		// m_AttackDelay = 0.25f;
		((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)__this)->___m_AttackDelay_9 = (0.25f);
		// m_AttackDelaySec = new WaitForSeconds(m_AttackDelay);
		float L_0 = ((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)__this)->___m_AttackDelay_9;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_1 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_1, L_0, NULL);
		((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)__this)->___m_AttackDelaySec_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)__this)->___m_AttackDelaySec_12), (void*)L_1);
		// }
		return;
	}
}
// System.Collections.IEnumerator UnitTier6::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnitTier6_Attack_mB17D9BEF9D6777FCE85B9F7B5A321E82010F375F (UnitTier6_t025237B7F507174AB372965E8609A7B991A43F9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAttackU3Ed__1_t004680985B683F5EA5192615227521238C8F356C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAttackU3Ed__1_t004680985B683F5EA5192615227521238C8F356C* L_0 = (U3CAttackU3Ed__1_t004680985B683F5EA5192615227521238C8F356C*)il2cpp_codegen_object_new(U3CAttackU3Ed__1_t004680985B683F5EA5192615227521238C8F356C_il2cpp_TypeInfo_var);
		U3CAttackU3Ed__1__ctor_m2B794EEF693EE2CF9C0866B92AB6CC4B00460CD0(L_0, 0, NULL);
		U3CAttackU3Ed__1_t004680985B683F5EA5192615227521238C8F356C* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void UnitTier6::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitTier6__ctor_m11F66F9F747325ABB8944DF6C04033FBA0E207E8 (UnitTier6_t025237B7F507174AB372965E8609A7B991A43F9B* __this, const RuntimeMethod* method) 
{
	{
		Unit__ctor_m431B8E6991113DC517AFAEF468B91A16BFAFF172(__this, NULL);
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
// System.Void UnitTier6/<Attack>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackU3Ed__1__ctor_m2B794EEF693EE2CF9C0866B92AB6CC4B00460CD0 (U3CAttackU3Ed__1_t004680985B683F5EA5192615227521238C8F356C* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void UnitTier6/<Attack>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackU3Ed__1_System_IDisposable_Dispose_mD52FA060A06A538BE7DE98ACB88A1D20A1EDA558 (U3CAttackU3Ed__1_t004680985B683F5EA5192615227521238C8F356C* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean UnitTier6/<Attack>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAttackU3Ed__1_MoveNext_mA758CC16A047C614779261FAB1DA9ECCC0672530 (U3CAttackU3Ed__1_t004680985B683F5EA5192615227521238C8F356C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMonster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE_m52812A043587F8679E56985844430E6C9E9A89A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral851445DA7EB0740893C9067B75E2484E7538452A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UnitTier6_t025237B7F507174AB372965E8609A7B991A43F9B* V_1 = NULL;
	Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* V_2 = NULL;
	Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* V_3 = NULL;
	int32_t V_4 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		UnitTier6_t025237B7F507174AB372965E8609A7B991A43F9B* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_011e;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_0125;
	}

IL_0026:
	{
		// Collider2D monsterObj = Physics2D.OverlapCircle(transform.position, m_Range, LayerMask.GetMask("Monster"));
		UnitTier6_t025237B7F507174AB372965E8609A7B991A43F9B* L_4 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_6, NULL);
		UnitTier6_t025237B7F507174AB372965E8609A7B991A43F9B* L_8 = V_1;
		float L_9 = ((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)L_8)->___m_Range_8;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		ArrayElementTypeCheck (L_11, _stringLiteral851445DA7EB0740893C9067B75E2484E7538452A);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral851445DA7EB0740893C9067B75E2484E7538452A);
		int32_t L_12;
		L_12 = LayerMask_GetMask_m99295ECDD50C4874CA4ABC9448E3F238A023C6F2(L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_13;
		L_13 = Physics2D_OverlapCircle_m7167CE7F52AF6745632300B4742EC09407CE5F18(L_7, L_9, L_12, NULL);
		V_2 = L_13;
		// if (monsterObj != null)
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_14 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_15)
		{
			goto IL_0109;
		}
	}
	{
		// Collider2D[] monstersObj = Physics2D.OverlapCircleAll(monsterObj.transform.position, 5f, LayerMask.GetMask("Monster"));
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_16 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_18, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_20;
		ArrayElementTypeCheck (L_21, _stringLiteral851445DA7EB0740893C9067B75E2484E7538452A);
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral851445DA7EB0740893C9067B75E2484E7538452A);
		int32_t L_22;
		L_22 = LayerMask_GetMask_m99295ECDD50C4874CA4ABC9448E3F238A023C6F2(L_21, NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* L_23;
		L_23 = Physics2D_OverlapCircleAll_mBEBE14F058D718FA90F44A662C106D9CCDF6B3D9(L_19, (5.0f), L_22, NULL);
		V_3 = L_23;
		// for (int i = 0; i < monstersObj.Length; i++)
		V_4 = 0;
		goto IL_00c6;
	}

IL_0094:
	{
		// if (monstersObj[i] != null)
		Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* L_24 = V_3;
		int32_t L_25 = V_4;
		int32_t L_26 = L_25;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_27 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_27, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_28)
		{
			goto IL_00c0;
		}
	}
	{
		// Monster monster = monstersObj[i].GetComponent<Monster>();
		Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* L_29 = V_3;
		int32_t L_30 = V_4;
		int32_t L_31 = L_30;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_32 = (L_29)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31));
		Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* L_33;
		L_33 = Component_GetComponent_TisMonster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE_m52812A043587F8679E56985844430E6C9E9A89A7(L_32, Component_GetComponent_TisMonster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE_m52812A043587F8679E56985844430E6C9E9A89A7_RuntimeMethod_var);
		// monster.OnDamage(m_Type, TotalDamage(), m_Tier);
		UnitTier6_t025237B7F507174AB372965E8609A7B991A43F9B* L_34 = V_1;
		int32_t L_35 = ((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)L_34)->___m_Type_5;
		UnitTier6_t025237B7F507174AB372965E8609A7B991A43F9B* L_36 = V_1;
		int32_t L_37;
		L_37 = Unit_TotalDamage_mC7B5C20F8D34A0C7BC7F10B0ABF07D5858B52088(L_36, NULL);
		UnitTier6_t025237B7F507174AB372965E8609A7B991A43F9B* L_38 = V_1;
		int32_t L_39 = ((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)L_38)->___m_Tier_4;
		Monster_OnDamage_m3137BE1030D5EE18ADABFB4A7E976EF99F5A1635(L_33, L_35, L_37, L_39, NULL);
	}

IL_00c0:
	{
		// for (int i = 0; i < monstersObj.Length; i++)
		int32_t L_40 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00c6:
	{
		// for (int i = 0; i < monstersObj.Length; i++)
		int32_t L_41 = V_4;
		Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* L_42 = V_3;
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0094;
		}
	}
	{
		// GameObject obj = SpawnEffect(m_Type);
		UnitTier6_t025237B7F507174AB372965E8609A7B991A43F9B* L_43 = V_1;
		UnitTier6_t025237B7F507174AB372965E8609A7B991A43F9B* L_44 = V_1;
		int32_t L_45 = ((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)L_44)->___m_Type_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46;
		L_46 = Unit_SpawnEffect_mFB7638FC66BB39344B54D002E0A0A9F228004638(L_43, L_45, NULL);
		// obj.transform.position = monsterObj.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47;
		L_47 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_46, NULL);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_48 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49;
		L_49 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_48, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_49, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_47, L_50, NULL);
		// SoundManager.Instance.SoundPlay(SOUND_NAME.UnitAttack2);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_51;
		L_51 = SoundManager_get_Instance_mE37BC6A788B14F6895B2B50A4E461F8C7895BAEA(NULL);
		SoundManager_SoundPlay_mE25CE7EC2DB0173862EFBB586A4A4AF3D63CE6B6(L_51, 2, NULL);
		// m_Ani.SetTrigger("Attack");
		UnitTier6_t025237B7F507174AB372965E8609A7B991A43F9B* L_52 = V_1;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_53 = ((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)L_52)->___m_Ani_14;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_53, _stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91, NULL);
	}

IL_0109:
	{
		// yield return m_AttackDelaySec;
		UnitTier6_t025237B7F507174AB372965E8609A7B991A43F9B* L_54 = V_1;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_55 = ((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)L_54)->___m_AttackDelaySec_12;
		__this->___U3CU3E2__current_1 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_55);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_011e:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0125:
	{
		// while (gameObject.activeSelf)
		UnitTier6_t025237B7F507174AB372965E8609A7B991A43F9B* L_56 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_57;
		L_57 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_56, NULL);
		bool L_58;
		L_58 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_57, NULL);
		if (L_58)
		{
			goto IL_0026;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object UnitTier6/<Attack>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAttackU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mDE88982B9BC87C0FA2A314C1144DF8531025D753 (U3CAttackU3Ed__1_t004680985B683F5EA5192615227521238C8F356C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void UnitTier6/<Attack>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackU3Ed__1_System_Collections_IEnumerator_Reset_m7853459A0528CCA86DCD8642A0BC1882E16C2F2A (U3CAttackU3Ed__1_t004680985B683F5EA5192615227521238C8F356C* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAttackU3Ed__1_System_Collections_IEnumerator_Reset_m7853459A0528CCA86DCD8642A0BC1882E16C2F2A_RuntimeMethod_var)));
	}
}
// System.Object UnitTier6/<Attack>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAttackU3Ed__1_System_Collections_IEnumerator_get_Current_mF8506109F7A3101FD940061B7668A9179336C988 (U3CAttackU3Ed__1_t004680985B683F5EA5192615227521238C8F356C* __this, const RuntimeMethod* method) 
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
// System.Void UnitTier7::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitTier7_OnEnable_m1261354F056FCFC1164BF7F15E2DBD29D793EB8C (UnitTier7_tB552A9A0D446C556D673ED4087263FC382EDAEDB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Tier = UNITTIER.????;
		((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)__this)->___m_Tier_4 = 7;
		// m_Range = 25f;
		((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)__this)->___m_Range_8 = (25.0f);
		// m_AttackDelay = 0.25f;
		((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)__this)->___m_AttackDelay_9 = (0.25f);
		// m_AttackDelaySec = new WaitForSeconds(m_AttackDelay);
		float L_0 = ((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)__this)->___m_AttackDelay_9;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_1 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_1, L_0, NULL);
		((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)__this)->___m_AttackDelaySec_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)__this)->___m_AttackDelaySec_12), (void*)L_1);
		// m_AllAttackDelaySec = new WaitForSeconds(3f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_2 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_2, (3.0f), NULL);
		__this->___m_AllAttackDelaySec_16 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AllAttackDelaySec_16), (void*)L_2);
		// }
		return;
	}
}
// System.Collections.IEnumerator UnitTier7::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnitTier7_Attack_mD38FAE059DAF5C00011F1D1B249BD5EAAD8483B6 (UnitTier7_tB552A9A0D446C556D673ED4087263FC382EDAEDB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAttackU3Ed__2_t98CC6B9C49F5C9C91D899605878D04FED1CCC917_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAttackU3Ed__2_t98CC6B9C49F5C9C91D899605878D04FED1CCC917* L_0 = (U3CAttackU3Ed__2_t98CC6B9C49F5C9C91D899605878D04FED1CCC917*)il2cpp_codegen_object_new(U3CAttackU3Ed__2_t98CC6B9C49F5C9C91D899605878D04FED1CCC917_il2cpp_TypeInfo_var);
		U3CAttackU3Ed__2__ctor_m7FDFDE3484BFC0474E1607F7FFC5F85FC3500987(L_0, 0, NULL);
		U3CAttackU3Ed__2_t98CC6B9C49F5C9C91D899605878D04FED1CCC917* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator UnitTier7::AllAttack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnitTier7_AllAttack_m795815AC6179695539936E752A3C25F7E24D019E (UnitTier7_tB552A9A0D446C556D673ED4087263FC382EDAEDB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAllAttackU3Ed__3_t5CBE95EDD500FA5A1DF0D703451B8AB00691FBDE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAllAttackU3Ed__3_t5CBE95EDD500FA5A1DF0D703451B8AB00691FBDE* L_0 = (U3CAllAttackU3Ed__3_t5CBE95EDD500FA5A1DF0D703451B8AB00691FBDE*)il2cpp_codegen_object_new(U3CAllAttackU3Ed__3_t5CBE95EDD500FA5A1DF0D703451B8AB00691FBDE_il2cpp_TypeInfo_var);
		U3CAllAttackU3Ed__3__ctor_mAE8FA0B74A2C32E2E0412764C4B5B63B62EF73AF(L_0, 0, NULL);
		U3CAllAttackU3Ed__3_t5CBE95EDD500FA5A1DF0D703451B8AB00691FBDE* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void UnitTier7::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitTier7__ctor_m690EC86A0F3C654B10F4FA67118CA6BFF9F2AFE4 (UnitTier7_tB552A9A0D446C556D673ED4087263FC382EDAEDB* __this, const RuntimeMethod* method) 
{
	{
		Unit__ctor_m431B8E6991113DC517AFAEF468B91A16BFAFF172(__this, NULL);
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
// System.Void UnitTier7/<Attack>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackU3Ed__2__ctor_m7FDFDE3484BFC0474E1607F7FFC5F85FC3500987 (U3CAttackU3Ed__2_t98CC6B9C49F5C9C91D899605878D04FED1CCC917* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void UnitTier7/<Attack>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackU3Ed__2_System_IDisposable_Dispose_mF73A3A60BC51EA8DDFEFE72394FD74EB31443104 (U3CAttackU3Ed__2_t98CC6B9C49F5C9C91D899605878D04FED1CCC917* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean UnitTier7/<Attack>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAttackU3Ed__2_MoveNext_m4DA8A4293CA35E268D23212666F598237B112F62 (U3CAttackU3Ed__2_t98CC6B9C49F5C9C91D899605878D04FED1CCC917* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMonster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE_m52812A043587F8679E56985844430E6C9E9A89A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral851445DA7EB0740893C9067B75E2484E7538452A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UnitTier7_tB552A9A0D446C556D673ED4087263FC382EDAEDB* V_1 = NULL;
	Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* V_2 = NULL;
	Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* V_3 = NULL;
	int32_t V_4 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		UnitTier7_tB552A9A0D446C556D673ED4087263FC382EDAEDB* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_012b;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// StartCoroutine(AllAttack());
		UnitTier7_tB552A9A0D446C556D673ED4087263FC382EDAEDB* L_4 = V_1;
		UnitTier7_tB552A9A0D446C556D673ED4087263FC382EDAEDB* L_5 = V_1;
		RuntimeObject* L_6;
		L_6 = UnitTier7_AllAttack_m795815AC6179695539936E752A3C25F7E24D019E(L_5, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_4, L_6, NULL);
		goto IL_0132;
	}

IL_0033:
	{
		// Collider2D monsterObj = Physics2D.OverlapCircle(transform.position, m_Range, LayerMask.GetMask("Monster"));
		UnitTier7_tB552A9A0D446C556D673ED4087263FC382EDAEDB* L_8 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_10, NULL);
		UnitTier7_tB552A9A0D446C556D673ED4087263FC382EDAEDB* L_12 = V_1;
		float L_13 = ((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)L_12)->___m_Range_8;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		ArrayElementTypeCheck (L_15, _stringLiteral851445DA7EB0740893C9067B75E2484E7538452A);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral851445DA7EB0740893C9067B75E2484E7538452A);
		int32_t L_16;
		L_16 = LayerMask_GetMask_m99295ECDD50C4874CA4ABC9448E3F238A023C6F2(L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_17;
		L_17 = Physics2D_OverlapCircle_m7167CE7F52AF6745632300B4742EC09407CE5F18(L_11, L_13, L_16, NULL);
		V_2 = L_17;
		// if (monsterObj != null)
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_18 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_18, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_19)
		{
			goto IL_0116;
		}
	}
	{
		// Collider2D[] monstersObj = Physics2D.OverlapCircleAll(monsterObj.transform.position, 5f, LayerMask.GetMask("Monster"));
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_20 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_22, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_24;
		ArrayElementTypeCheck (L_25, _stringLiteral851445DA7EB0740893C9067B75E2484E7538452A);
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral851445DA7EB0740893C9067B75E2484E7538452A);
		int32_t L_26;
		L_26 = LayerMask_GetMask_m99295ECDD50C4874CA4ABC9448E3F238A023C6F2(L_25, NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* L_27;
		L_27 = Physics2D_OverlapCircleAll_mBEBE14F058D718FA90F44A662C106D9CCDF6B3D9(L_23, (5.0f), L_26, NULL);
		V_3 = L_27;
		// for (int i = 0; i < monstersObj.Length; i++)
		V_4 = 0;
		goto IL_00d3;
	}

IL_00a1:
	{
		// if (monstersObj[i] != null)
		Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* L_28 = V_3;
		int32_t L_29 = V_4;
		int32_t L_30 = L_29;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_31 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_31, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_32)
		{
			goto IL_00cd;
		}
	}
	{
		// Monster monster = monstersObj[i].GetComponent<Monster>();
		Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* L_33 = V_3;
		int32_t L_34 = V_4;
		int32_t L_35 = L_34;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_36 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35));
		Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* L_37;
		L_37 = Component_GetComponent_TisMonster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE_m52812A043587F8679E56985844430E6C9E9A89A7(L_36, Component_GetComponent_TisMonster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE_m52812A043587F8679E56985844430E6C9E9A89A7_RuntimeMethod_var);
		// monster.OnDamage(m_Type, TotalDamage(), m_Tier);
		UnitTier7_tB552A9A0D446C556D673ED4087263FC382EDAEDB* L_38 = V_1;
		int32_t L_39 = ((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)L_38)->___m_Type_5;
		UnitTier7_tB552A9A0D446C556D673ED4087263FC382EDAEDB* L_40 = V_1;
		int32_t L_41;
		L_41 = Unit_TotalDamage_mC7B5C20F8D34A0C7BC7F10B0ABF07D5858B52088(L_40, NULL);
		UnitTier7_tB552A9A0D446C556D673ED4087263FC382EDAEDB* L_42 = V_1;
		int32_t L_43 = ((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)L_42)->___m_Tier_4;
		Monster_OnDamage_m3137BE1030D5EE18ADABFB4A7E976EF99F5A1635(L_37, L_39, L_41, L_43, NULL);
	}

IL_00cd:
	{
		// for (int i = 0; i < monstersObj.Length; i++)
		int32_t L_44 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00d3:
	{
		// for (int i = 0; i < monstersObj.Length; i++)
		int32_t L_45 = V_4;
		Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* L_46 = V_3;
		if ((((int32_t)L_45) < ((int32_t)((int32_t)(((RuntimeArray*)L_46)->max_length)))))
		{
			goto IL_00a1;
		}
	}
	{
		// GameObject obj = SpawnEffect(m_Type);
		UnitTier7_tB552A9A0D446C556D673ED4087263FC382EDAEDB* L_47 = V_1;
		UnitTier7_tB552A9A0D446C556D673ED4087263FC382EDAEDB* L_48 = V_1;
		int32_t L_49 = ((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)L_48)->___m_Type_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50;
		L_50 = Unit_SpawnEffect_mFB7638FC66BB39344B54D002E0A0A9F228004638(L_47, L_49, NULL);
		// obj.transform.position = monsterObj.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51;
		L_51 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_50, NULL);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_52 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_53;
		L_53 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_52, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_53, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_51, L_54, NULL);
		// SoundManager.Instance.SoundPlay(SOUND_NAME.UnitAttack2);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_55;
		L_55 = SoundManager_get_Instance_mE37BC6A788B14F6895B2B50A4E461F8C7895BAEA(NULL);
		SoundManager_SoundPlay_mE25CE7EC2DB0173862EFBB586A4A4AF3D63CE6B6(L_55, 2, NULL);
		// m_Ani.SetTrigger("Attack");
		UnitTier7_tB552A9A0D446C556D673ED4087263FC382EDAEDB* L_56 = V_1;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_57 = ((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)L_56)->___m_Ani_14;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_57, _stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91, NULL);
	}

IL_0116:
	{
		// yield return m_AttackDelaySec;
		UnitTier7_tB552A9A0D446C556D673ED4087263FC382EDAEDB* L_58 = V_1;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_59 = ((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)L_58)->___m_AttackDelaySec_12;
		__this->___U3CU3E2__current_1 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_59);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_012b:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0132:
	{
		// while (gameObject.activeSelf)
		UnitTier7_tB552A9A0D446C556D673ED4087263FC382EDAEDB* L_60 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_61;
		L_61 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_60, NULL);
		bool L_62;
		L_62 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_61, NULL);
		if (L_62)
		{
			goto IL_0033;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object UnitTier7/<Attack>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAttackU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD22D506ADFB5A2F9E1A37C987DB5137FAA6BC4BF (U3CAttackU3Ed__2_t98CC6B9C49F5C9C91D899605878D04FED1CCC917* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void UnitTier7/<Attack>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackU3Ed__2_System_Collections_IEnumerator_Reset_m42A19540700279FE9B79AB5E52296E8003E1AAA2 (U3CAttackU3Ed__2_t98CC6B9C49F5C9C91D899605878D04FED1CCC917* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAttackU3Ed__2_System_Collections_IEnumerator_Reset_m42A19540700279FE9B79AB5E52296E8003E1AAA2_RuntimeMethod_var)));
	}
}
// System.Object UnitTier7/<Attack>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAttackU3Ed__2_System_Collections_IEnumerator_get_Current_m8997A30504AA40B07E97DF9298318F289A48E847 (U3CAttackU3Ed__2_t98CC6B9C49F5C9C91D899605878D04FED1CCC917* __this, const RuntimeMethod* method) 
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
// System.Void UnitTier7/<AllAttack>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAllAttackU3Ed__3__ctor_mAE8FA0B74A2C32E2E0412764C4B5B63B62EF73AF (U3CAllAttackU3Ed__3_t5CBE95EDD500FA5A1DF0D703451B8AB00691FBDE* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void UnitTier7/<AllAttack>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAllAttackU3Ed__3_System_IDisposable_Dispose_m0FA45F3B852E754879591DAE4A8C9CF9CADD5F76 (U3CAllAttackU3Ed__3_t5CBE95EDD500FA5A1DF0D703451B8AB00691FBDE* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean UnitTier7/<AllAttack>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAllAttackU3Ed__3_MoveNext_m335077D080588AAB55E9AE171F523CCF1038626B (U3CAllAttackU3Ed__3_t5CBE95EDD500FA5A1DF0D703451B8AB00691FBDE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMonster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE_m52812A043587F8679E56985844430E6C9E9A89A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral851445DA7EB0740893C9067B75E2484E7538452A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UnitTier7_tB552A9A0D446C556D673ED4087263FC382EDAEDB* V_1 = NULL;
	Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_5 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		UnitTier7_tB552A9A0D446C556D673ED4087263FC382EDAEDB* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0148;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_014f;
	}

IL_0026:
	{
		// Collider2D[] monstersObj = Physics2D.OverlapCircleAll(transform.position, 25f, LayerMask.GetMask("Monster"));
		UnitTier7_tB552A9A0D446C556D673ED4087263FC382EDAEDB* L_4 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_6, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		ArrayElementTypeCheck (L_9, _stringLiteral851445DA7EB0740893C9067B75E2484E7538452A);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral851445DA7EB0740893C9067B75E2484E7538452A);
		int32_t L_10;
		L_10 = LayerMask_GetMask_m99295ECDD50C4874CA4ABC9448E3F238A023C6F2(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* L_11;
		L_11 = Physics2D_OverlapCircleAll_mBEBE14F058D718FA90F44A662C106D9CCDF6B3D9(L_7, (25.0f), L_10, NULL);
		V_2 = L_11;
		// for (int i = 0; i < monstersObj.Length; i++)
		V_3 = 0;
		goto IL_007e;
	}

IL_0058:
	{
		// if (monstersObj != null)
		Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* L_12 = V_2;
		if (!L_12)
		{
			goto IL_007a;
		}
	}
	{
		// Monster monster = monstersObj[i].GetComponent<Monster>();
		Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* L_13 = V_2;
		int32_t L_14 = V_3;
		int32_t L_15 = L_14;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_16 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* L_17;
		L_17 = Component_GetComponent_TisMonster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE_m52812A043587F8679E56985844430E6C9E9A89A7(L_16, Component_GetComponent_TisMonster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE_m52812A043587F8679E56985844430E6C9E9A89A7_RuntimeMethod_var);
		// monster.OnDamage(m_Type, TotalDamage(), m_Tier);
		UnitTier7_tB552A9A0D446C556D673ED4087263FC382EDAEDB* L_18 = V_1;
		int32_t L_19 = ((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)L_18)->___m_Type_5;
		UnitTier7_tB552A9A0D446C556D673ED4087263FC382EDAEDB* L_20 = V_1;
		int32_t L_21;
		L_21 = Unit_TotalDamage_mC7B5C20F8D34A0C7BC7F10B0ABF07D5858B52088(L_20, NULL);
		UnitTier7_tB552A9A0D446C556D673ED4087263FC382EDAEDB* L_22 = V_1;
		int32_t L_23 = ((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)L_22)->___m_Tier_4;
		Monster_OnDamage_m3137BE1030D5EE18ADABFB4A7E976EF99F5A1635(L_17, L_19, L_21, L_23, NULL);
	}

IL_007a:
	{
		// for (int i = 0; i < monstersObj.Length; i++)
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_007e:
	{
		// for (int i = 0; i < monstersObj.Length; i++)
		int32_t L_25 = V_3;
		Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* L_26 = V_2;
		if ((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))
		{
			goto IL_0058;
		}
	}
	{
		// for (int i = 0; i < 4; i++)
		V_4 = 0;
		goto IL_012b;
	}

IL_008c:
	{
		// GameObject obj = SpawnEffect(m_Type);
		UnitTier7_tB552A9A0D446C556D673ED4087263FC382EDAEDB* L_27 = V_1;
		UnitTier7_tB552A9A0D446C556D673ED4087263FC382EDAEDB* L_28 = V_1;
		int32_t L_29 = ((Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867*)L_28)->___m_Type_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30;
		L_30 = Unit_SpawnEffect_mFB7638FC66BB39344B54D002E0A0A9F228004638(L_27, L_29, NULL);
		V_5 = L_30;
		int32_t L_31 = V_4;
		switch (L_31)
		{
			case 0:
			{
				goto IL_00b3;
			}
			case 1:
			{
				goto IL_00d0;
			}
			case 2:
			{
				goto IL_00ed;
			}
			case 3:
			{
				goto IL_010a;
			}
		}
	}
	{
		goto IL_0125;
	}

IL_00b3:
	{
		// obj.transform.position = new Vector3(8, 8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = V_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_32, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_34), (8.0f), (8.0f), /*hidden argument*/NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_33, L_34, NULL);
		// break;
		goto IL_0125;
	}

IL_00d0:
	{
		// obj.transform.position = new Vector3(-8, 8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = V_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_35, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		memset((&L_37), 0, sizeof(L_37));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_37), (-8.0f), (8.0f), /*hidden argument*/NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_36, L_37, NULL);
		// break;
		goto IL_0125;
	}

IL_00ed:
	{
		// obj.transform.position = new Vector3(8, -8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = V_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_38, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		memset((&L_40), 0, sizeof(L_40));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_40), (8.0f), (-8.0f), /*hidden argument*/NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_39, L_40, NULL);
		// break;
		goto IL_0125;
	}

IL_010a:
	{
		// obj.transform.position = new Vector3(-8, -8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = V_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		memset((&L_43), 0, sizeof(L_43));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_43), (-8.0f), (-8.0f), /*hidden argument*/NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_42, L_43, NULL);
	}

IL_0125:
	{
		// for (int i = 0; i < 4; i++)
		int32_t L_44 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_012b:
	{
		// for (int i = 0; i < 4; i++)
		int32_t L_45 = V_4;
		if ((((int32_t)L_45) < ((int32_t)4)))
		{
			goto IL_008c;
		}
	}
	{
		// yield return m_AllAttackDelaySec;
		UnitTier7_tB552A9A0D446C556D673ED4087263FC382EDAEDB* L_46 = V_1;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_47 = L_46->___m_AllAttackDelaySec_16;
		__this->___U3CU3E2__current_1 = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_47);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0148:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_014f:
	{
		// while (gameObject.activeSelf)
		UnitTier7_tB552A9A0D446C556D673ED4087263FC382EDAEDB* L_48 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49;
		L_49 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_48, NULL);
		bool L_50;
		L_50 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_49, NULL);
		if (L_50)
		{
			goto IL_0026;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object UnitTier7/<AllAttack>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAllAttackU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA013431AB6BFF6222EC33214A67F45017F150212 (U3CAllAttackU3Ed__3_t5CBE95EDD500FA5A1DF0D703451B8AB00691FBDE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void UnitTier7/<AllAttack>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAllAttackU3Ed__3_System_Collections_IEnumerator_Reset_m73E9041BA3946C0E7FFAA114AC2719B6A26A26A9 (U3CAllAttackU3Ed__3_t5CBE95EDD500FA5A1DF0D703451B8AB00691FBDE* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAllAttackU3Ed__3_System_Collections_IEnumerator_Reset_m73E9041BA3946C0E7FFAA114AC2719B6A26A26A9_RuntimeMethod_var)));
	}
}
// System.Object UnitTier7/<AllAttack>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAllAttackU3Ed__3_System_Collections_IEnumerator_get_Current_m711A93AAC6870DFC55E0F11310944CAE9B1CC87F (U3CAllAttackU3Ed__3_t5CBE95EDD500FA5A1DF0D703451B8AB00691FBDE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		__this->___z_4 = (0.0f);
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Unit_SetLevel_m413CB9A36FA20D06210D8A6F7A81DC52572E039D_inline (Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* __this, int32_t ____level0, const RuntimeMethod* method) 
{
	{
		// m_Level = _level;
		int32_t L_0 = ____level0;
		__this->___m_Level_7 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Unit_GetNameText_m1C7C0F20DA4CC04A22D7706864ACAD9210D4E0FD_inline (Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* __this, const RuntimeMethod* method) 
{
	{
		// return m_Name;
		String_t* L_0 = __this->___m_Name_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Unit_GetAttackType_m5AD0A3431A5100C8A9153C59974E2A5D5AC94763_inline (Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* __this, const RuntimeMethod* method) 
{
	{
		// return m_Type;
		int32_t L_0 = __this->___m_Type_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.921568632f), (0.0156862754f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Unit_GetTier_m8EA00F548C995A12B757559DB554FBB1ADEBED19_inline (Unit_tCADA6AEDF9CE70F5C82D173F931BABAFC17AA867* __this, const RuntimeMethod* method) 
{
	{
		// return m_Tier;
		int32_t L_0 = __this->___m_Tier_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_magenta_mE31C432891E0B3D23C8FB03CB3A38A60E7F52A9A_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_cyan_m182A29E7475C0A98ACC03E1CF5252BAB83F0BA31_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Monster_GetArmorType_mF3466D907FF40CB040BCF0409BAD765E68FC9AE6_inline (Monster_t9705FB6639B59DB9BC6E59EEA39938C4E6A063FE* __this, const RuntimeMethod* method) 
{
	{
		// return m_type;
		int32_t L_0 = __this->___m_type_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
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
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
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
