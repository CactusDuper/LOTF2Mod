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
// Function BattleEffectAbility_ApplyBattleEffectOnFrostbiteApplied.BattleEffectAbility_ApplyBattleEffectOnFrostbiteApplied_C.K2_ActivateAbilityFromEvent
struct UBattleEffectAbility_ApplyBattleEffectOnFrostbiteApplied_C_K2_ActivateAbilityFromEvent_Params
{
public:
	struct FGameplayEventData                    EventData;                                         // 0x0(0xB0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xE0 (0xE0 - 0x0)
// Function BattleEffectAbility_ApplyBattleEffectOnFrostbiteApplied.BattleEffectAbility_ApplyBattleEffectOnFrostbiteApplied_C.ExecuteUbergraph_BattleEffectAbility_ApplyBattleEffectOnFrostbiteApplied
struct UBattleEffectAbility_ApplyBattleEffectOnFrostbiteApplied_C_ExecuteUbergraph_BattleEffectAbility_ApplyBattleEffectOnFrostbiteApplied_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D53[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetBattleEffectStringParam_outValue;      // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetBattleEffectStringParam_ReturnValue;   // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D55[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEventData                    K2Node_Event_EventData;                            // 0x20(0xB0)(ConstParm)
	struct FHexBattleEffectIdentifier            K2Node_MakeStruct_HexBattleEffectIdentifier;       // 0xD0(0x8)(NoDestructor)
	struct FActiveGameplayEffectHandle           CallFunc_ApplyBattleEffectToActor_ReturnValue;     // 0xD8(0x8)(NoDestructor, HasGetValueTypeHash)
};

}
}


