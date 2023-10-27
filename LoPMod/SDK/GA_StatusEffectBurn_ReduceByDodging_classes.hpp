#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x450 - 0x448)
// BlueprintGeneratedClass GA_StatusEffectBurn_ReduceByDodging.GA_StatusEffectBurn_ReduceByDodging_C
class UGA_StatusEffectBurn_ReduceByDodging_C : public UAnathemaGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x448(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_StatusEffectBurn_ReduceByDodging_C* GetDefaultObj();

	void OnActivate_B1D0AA504024C9993B53D9AF51647065(class UGameplayAbility* ActivatedAbility);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_StatusEffectBurn_ReduceByDodging(int32 EntryPoint, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue, const struct FGameplayEffectContextHandle& CallFunc_MakeEffectContext_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, class UGameplayAbility* K2Node_CustomEvent_ActivatedAbility, class UGameplayAbility* Temp_object_Variable, class UAbilityTask_WaitAbilityActivate* CallFunc_WaitForAbilityActivate_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


