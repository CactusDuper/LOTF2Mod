#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0xB0 - 0x0)
// Function BattleEffectAbility_BuffDamageOnSpellCast.BattleEffectAbility_BuffDamageOnSpellCast_C.K2_ActivateAbilityFromEvent
struct UBattleEffectAbility_BuffDamageOnSpellCast_C_K2_ActivateAbilityFromEvent_Params
{
public:
	struct FGameplayEventData                    EventData;                                         // 0x0(0xB0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x130 (0x130 - 0x0)
// Function BattleEffectAbility_BuffDamageOnSpellCast.BattleEffectAbility_BuffDamageOnSpellCast_C.ExecuteUbergraph_BattleEffectAbility_BuffDamageOnSpellCast
struct UBattleEffectAbility_BuffDamageOnSpellCast_C_ExecuteUbergraph_BattleEffectAbility_BuffDamageOnSpellCast_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C65[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                    K2Node_Event_EventData;                            // 0x10(0xB0)(ConstParm)
	class UMagicItemData*                        K2Node_DynamicCast_AsMagic_Item_Data;              // 0xC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C66[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetBattleEffectStringParam_outValue;      // 0xCC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetBattleEffectStringParam_ReturnValue;   // 0xD4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMagicFamily                      CallFunc_GetMagicFamily_ReturnValue;               // 0xD5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xD6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C67[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHexBattleEffectIdentifier            K2Node_MakeStruct_HexBattleEffectIdentifier;       // 0xD8(0x8)(NoDestructor)
	class FName                                  CallFunc_GetBattleEffectStringParam_outValue_1;    // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetBattleEffectStringParam_ReturnValue_1; // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C68[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetBattleEffectStringParam_outValue_2;    // 0xEC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetBattleEffectStringParam_ReturnValue_2; // 0xF4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C69[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHexBattleEffectIdentifier            K2Node_MakeStruct_HexBattleEffectIdentifier_1;     // 0xF8(0x8)(NoDestructor)
	struct FHexBattleEffectIdentifier            K2Node_MakeStruct_HexBattleEffectIdentifier_2;     // 0x100(0x8)(NoDestructor)
	struct FActiveGameplayEffectHandle           CallFunc_ApplyBattleEffectToActor_ReturnValue;     // 0x108(0x8)(NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1; // 0x110(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2; // 0x118(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CallFunc_ApplyBattleEffectToActor_ReturnValue_1;   // 0x120(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CallFunc_ApplyBattleEffectToActor_ReturnValue_2;   // 0x128(0x8)(NoDestructor, HasGetValueTypeHash)
};

}
}


