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

// 0xFA (0xFA - 0x0)
// Function BattleEffectAbility_ApplyBattleEffectOnSoulStabKill.BattleEffectAbility_ApplyBattleEffectOnSoulStabKill_C.K2_ShouldAbilityRespondToEvent
struct UBattleEffectAbility_ApplyBattleEffectOnSoulStabKill_C_K2_ShouldAbilityRespondToEvent_Params
{
public:
	struct FGameplayAbilityActorInfo             ActorInfo;                                         // 0x0(0x48)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	struct FGameplayEventData                    Payload;                                           // 0x48(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         ReturnValue;                                       // 0xF8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasTag_ReturnValue;                       // 0xF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB0 (0xB0 - 0x0)
// Function BattleEffectAbility_ApplyBattleEffectOnSoulStabKill.BattleEffectAbility_ApplyBattleEffectOnSoulStabKill_C.K2_ActivateAbilityFromEvent
struct UBattleEffectAbility_ApplyBattleEffectOnSoulStabKill_C_K2_ActivateAbilityFromEvent_Params
{
public:
	struct FGameplayEventData                    EventData;                                         // 0x0(0xB0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xE0 (0xE0 - 0x0)
// Function BattleEffectAbility_ApplyBattleEffectOnSoulStabKill.BattleEffectAbility_ApplyBattleEffectOnSoulStabKill_C.ExecuteUbergraph_BattleEffectAbility_ApplyBattleEffectOnSoulStabKill
struct UBattleEffectAbility_ApplyBattleEffectOnSoulStabKill_C_ExecuteUbergraph_BattleEffectAbility_ApplyBattleEffectOnSoulStabKill_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5C[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEventData                    K2Node_Event_EventData;                            // 0x8(0xB0)(ConstParm)
	class FName                                  CallFunc_GetBattleEffectStringParam_outValue;      // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetBattleEffectStringParam_ReturnValue;   // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5D[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue; // 0xC8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FHexBattleEffectIdentifier            K2Node_MakeStruct_HexBattleEffectIdentifier;       // 0xD0(0x8)(NoDestructor)
	struct FActiveGameplayEffectHandle           CallFunc_ApplyBattleEffectFromDefinition_ReturnValue; // 0xD8(0x8)(NoDestructor, HasGetValueTypeHash)
};

}
}


