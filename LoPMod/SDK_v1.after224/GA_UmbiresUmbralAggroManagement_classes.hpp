#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x470 - 0x448)
// BlueprintGeneratedClass GA_UmbiresUmbralAggroManagement.GA_UmbiresUmbralAggroManagement_C
class UGA_UmbiresUmbralAggroManagement_C : public UAnathemaGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x448(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        TimeUntilAggroStartsGoingDown;                     // 0x450(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_386C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          AggroReductionTimer;                               // 0x458(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FHexBattleEffectIdentifier            AggroReductionBattleEffect;                        // 0x460(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FActiveGameplayEffectHandle           AggroReductionEffectHandle;                        // 0x468(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_UmbiresUmbralAggroManagement_C* GetDefaultObj();

	void Changed_854EE8834BAA0604A2CA688CC2392699(const struct FGameplayAttribute& Attribute, float NewValue, float OldValue);
	void K2_ActivateAbility();
	void OnAggroTimerDone();
	void ExecuteUbergraph_GA_UmbiresUmbralAggroManagement(int32 EntryPoint, const struct FGameplayAttribute& K2Node_CustomEvent_Attribute, float K2Node_CustomEvent_NewValue, float K2Node_CustomEvent_OldValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float Temp_real_Variable, float Temp_real_Variable_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, const struct FGameplayAttribute& Temp_struct_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_ApplyBattleEffectToActor_ReturnValue, class UAbilityAsync_WaitAttributeChanged* CallFunc_WaitForAttributeChanged_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue_1, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue_1, double CallFunc_Greater_DoubleDouble_B_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_1);
};

}


