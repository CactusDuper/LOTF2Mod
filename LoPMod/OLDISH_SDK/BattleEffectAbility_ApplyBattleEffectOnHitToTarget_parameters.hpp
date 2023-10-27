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

// 0x10A (0x10A - 0x0)
// Function BattleEffectAbility_ApplyBattleEffectOnHitToTarget.BattleEffectAbility_ApplyBattleEffectOnHitToTarget_C.K2_ShouldAbilityRespondToEvent
struct UBattleEffectAbility_ApplyBattleEffectOnHitToTarget_C_K2_ShouldAbilityRespondToEvent_Params
{
public:
	struct FGameplayAbilityActorInfo             ActorInfo;                                         // 0x0(0x48)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	struct FGameplayEventData                    Payload;                                           // 0x48(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         ReturnValue;                                       // 0xF8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37FD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHexDamageEventData*                   K2Node_DynamicCast_AsHex_Damage_Event_Data;        // 0x100(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasTag_ReturnValue;                       // 0x109(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB0 (0xB0 - 0x0)
// Function BattleEffectAbility_ApplyBattleEffectOnHitToTarget.BattleEffectAbility_ApplyBattleEffectOnHitToTarget_C.K2_ActivateAbilityFromEvent
struct UBattleEffectAbility_ApplyBattleEffectOnHitToTarget_C_K2_ActivateAbilityFromEvent_Params
{
public:
	struct FGameplayEventData                    EventData;                                         // 0x0(0xB0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x100 (0x100 - 0x0)
// Function BattleEffectAbility_ApplyBattleEffectOnHitToTarget.BattleEffectAbility_ApplyBattleEffectOnHitToTarget_C.ExecuteUbergraph_BattleEffectAbility_ApplyBattleEffectOnHitToTarget
struct UBattleEffectAbility_ApplyBattleEffectOnHitToTarget_C_ExecuteUbergraph_BattleEffectAbility_ApplyBattleEffectOnHitToTarget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37FE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37FF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEventData                    K2Node_Event_EventData;                            // 0x18(0xB0)(ConstParm)
	class ACharacter*                            CallFunc_CastToCharacter_ReturnValue;              // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Select_Default;                             // 0xD0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3800[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetBattleEffectStringParam_outValue;      // 0xDC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetBattleEffectStringParam_ReturnValue;   // 0xE4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3801[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1; // 0xE8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FHexBattleEffectIdentifier            K2Node_MakeStruct_HexBattleEffectIdentifier;       // 0xF0(0x8)(NoDestructor)
	struct FActiveGameplayEffectHandle           CallFunc_ApplyBattleEffectToActor_ReturnValue;     // 0xF8(0x8)(NoDestructor, HasGetValueTypeHash)
};

}
}


