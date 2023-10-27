#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x15 (0x4BD - 0x4A8)
// BlueprintGeneratedClass BattleEffectAbility_500_ApplyBattleEffectIfAttributeBelowThreshold.BattleEffectAbility_500_ApplyBattleEffectIfAttributeBelowThreshold_C
class UBattleEffectAbility_500_ApplyBattleEffectIfAttributeBelowThreshold_C : public UHexBattleEffectAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         bIsBelow;                                          // 0x4B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B38[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FActiveGameplayEffectHandle           AppliedEffectHandle;                               // 0x4B4(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	enum class EWaitAttributeChangeComparison    Comparison_Type;                                   // 0x4BC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBattleEffectAbility_500_ApplyBattleEffectIfAttributeBelowThreshold_C* GetDefaultObj();

	void OnChange_7D102F514F8A81B47BBD53AEF1FE439D(bool bMatchesComparison, float CurrentRatio);
	void K2_ActivateAbility();
	void ApplyEffect();
	void RemoveEffect();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_BattleEffectAbility_500_ApplyBattleEffectIfAttributeBelowThreshold(int32 EntryPoint, bool K2Node_CustomEvent_bMatchesComparison, float K2Node_CustomEvent_CurrentRatio, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float Temp_real_Variable, bool Temp_bool_Variable, float CallFunc_GetBattleEffectNumericParam_outValue, bool CallFunc_GetBattleEffectNumericParam_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FGameplayAttribute& CallFunc_GetBattleEffectAttributeParam_outValue, bool CallFunc_GetBattleEffectAttributeParam_ReturnValue, const struct FGameplayAttribute& CallFunc_GetBattleEffectAttributeParam_outValue_1, bool CallFunc_GetBattleEffectAttributeParam_ReturnValue_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue, const struct FGameplayAttribute& CallFunc_GetBattleEffectAttributeParam_outValue_2, bool CallFunc_GetBattleEffectAttributeParam_ReturnValue_2, const struct FGameplayAttribute& CallFunc_GetBattleEffectAttributeParam_outValue_3, bool CallFunc_GetBattleEffectAttributeParam_ReturnValue_3, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_1, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue, class FName CallFunc_GetBattleEffectStringParam_outValue, bool CallFunc_GetBattleEffectStringParam_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_ApplyBattleEffectWithCurrentAbilityParamsToSelf_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue_1, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue, bool K2Node_Event_bWasCancelled, class UAbilityTask_WaitAttributeChangeRatioThreshold* CallFunc_WaitForAttributeChangeRatioThreshold_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_Less_DoubleDouble_B_ImplicitCast);
};

}


