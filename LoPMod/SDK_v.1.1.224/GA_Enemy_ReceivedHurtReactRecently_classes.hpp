#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x4A8 - 0x448)
// BlueprintGeneratedClass GA_Enemy_ReceivedHurtReactRecently.GA_Enemy_ReceivedHurtReactRecently_C
class UGA_Enemy_ReceivedHurtReactRecently_C : public UAnathemaGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x448(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        HitCount;                                          // 0x450(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3806[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagRequirements              Tag_Requirements;                                  // 0x458(0x40)(Edit, BlueprintVisible)
	double                                       NotifyDuration;                                    // 0x498(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Cooldown;                                          // 0x4A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Enemy_ReceivedHurtReactRecently_C* GetDefaultObj();

	void OnApplied_F48A3F4847A34526ABC40EBD2EE758B4(class AActor* Target, const struct FGameplayEffectSpecHandle& SpecHandle, const struct FActiveGameplayEffectHandle& ActiveHandle);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Enemy_ReceivedHurtReactRecently(int32 EntryPoint, class AActor* K2Node_CustomEvent_Target, const struct FGameplayEffectSpecHandle& K2Node_CustomEvent_SpecHandle, const struct FActiveGameplayEffectHandle& K2Node_CustomEvent_ActiveHandle, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FActiveGameplayEffectHandle& Temp_struct_Variable, const struct FGameplayEffectSpecHandle& Temp_struct_Variable_1, int32 CallFunc_GetActiveGameplayEffectStackCount_ReturnValue, class AActor* Temp_object_Variable, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class UAbilityTask_WaitGameplayEffectApplied_Target* CallFunc_WaitGameplayEffectAppliedToTarget_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue_1, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue_1, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_1);
};

}


