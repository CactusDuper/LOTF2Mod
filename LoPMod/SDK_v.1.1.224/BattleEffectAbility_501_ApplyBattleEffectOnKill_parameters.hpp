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
// Function BattleEffectAbility_501_ApplyBattleEffectOnKill.BattleEffectAbility_501_ApplyBattleEffectOnKill_C.K2_ShouldAbilityRespondToEvent
struct UBattleEffectAbility_501_ApplyBattleEffectOnKill_C_K2_ShouldAbilityRespondToEvent_Params
{
public:
	struct FGameplayAbilityActorInfo             ActorInfo;                                         // 0x0(0x48)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	struct FGameplayEventData                    Payload;                                           // 0x48(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         ReturnValue;                                       // 0xF8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0xF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB0 (0xB0 - 0x0)
// Function BattleEffectAbility_501_ApplyBattleEffectOnKill.BattleEffectAbility_501_ApplyBattleEffectOnKill_C.K2_ActivateAbilityFromEvent
struct UBattleEffectAbility_501_ApplyBattleEffectOnKill_C_K2_ActivateAbilityFromEvent_Params
{
public:
	struct FGameplayEventData                    EventData;                                         // 0x0(0xB0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xCC (0xCC - 0x0)
// Function BattleEffectAbility_501_ApplyBattleEffectOnKill.BattleEffectAbility_501_ApplyBattleEffectOnKill_C.ExecuteUbergraph_BattleEffectAbility_501_ApplyBattleEffectOnKill
struct UBattleEffectAbility_501_ApplyBattleEffectOnKill_C_ExecuteUbergraph_BattleEffectAbility_501_ApplyBattleEffectOnKill_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C55[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEventData                    K2Node_Event_EventData;                            // 0x8(0xB0)(ConstParm)
	class FName                                  CallFunc_GetBattleEffectStringParam_outValue;      // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetBattleEffectStringParam_ReturnValue;   // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C56[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FActiveGameplayEffectHandle           CallFunc_ApplyBattleEffectWithCurrentAbilityParamsToSelf_ReturnValue; // 0xC4(0x8)(NoDestructor, HasGetValueTypeHash)
};

}
}


