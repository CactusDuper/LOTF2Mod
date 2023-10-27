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

// 0x8 (0x8 - 0x0)
// Function GA_StatusEffectBurn_ReduceByDodging.GA_StatusEffectBurn_ReduceByDodging_C.OnActivate_B1D0AA504024C9993B53D9AF51647065
struct UGA_StatusEffectBurn_ReduceByDodging_C_OnActivate_B1D0AA504024C9993B53D9AF51647065_Params
{
public:
	class UGameplayAbility*                      ActivatedAbility;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x59 (0x59 - 0x0)
// Function GA_StatusEffectBurn_ReduceByDodging.GA_StatusEffectBurn_ReduceByDodging_C.ExecuteUbergraph_GA_StatusEffectBurn_ReduceByDodging
struct UGA_StatusEffectBurn_ReduceByDodging_C_ExecuteUbergraph_GA_StatusEffectBurn_ReduceByDodging_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D56[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue; // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          CallFunc_MakeEffectContext_ReturnValue;            // 0x10(0x18)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x28(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue; // 0x38(0x8)(NoDestructor, HasGetValueTypeHash)
	class UGameplayAbility*                      K2Node_CustomEvent_ActivatedAbility;               // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGameplayAbility*                      Temp_object_Variable;                              // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitAbilityActivate*      CallFunc_WaitForAbilityActivate_ReturnValue;       // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


