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

// 0x18 (0x18 - 0x0)
// Function BattleEffectAbility_CombatModifierImmuneToHealthDamageAfterResurrecting.BattleEffectAbility_CombatModifierImmuneToHealthDamageAfterResurrecting_C.ExecuteUbergraph_BattleEffectAbility_CombatModifierImmuneToHealthDamageAfterResurrecting
struct UBattleEffectAbility_CombatModifierImmuneToHealthDamageAfterResurrecting_C_ExecuteUbergraph_BattleEffectAbility_CombatModifierImmuneToHealthDamageAfterResurrecting_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetBattleEffectStringParam_outValue;      // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetBattleEffectStringParam_ReturnValue;   // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_20AE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FActiveGameplayEffectHandle           CallFunc_ApplyBattleEffectWithCurrentAbilityParamsToSelf_ReturnValue; // 0x10(0x8)(NoDestructor, HasGetValueTypeHash)
};

}
}


