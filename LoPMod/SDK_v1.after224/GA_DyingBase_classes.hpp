#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x540 - 0x538)
// BlueprintGeneratedClass GA_DyingBase.GA_DyingBase_C
class UGA_DyingBase_C : public UGA_Dying
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x538(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_DyingBase_C* GetDefaultObj();

	struct FGameplayTag GetDeathReasonAnimationTagFromCombatDeathReasonTag(struct FGameplayTag& DeathReasonTag, bool Temp_bool_Variable, const struct FGameplayTag& CallFunc_GetDeathReasonAnimationTagFromCombatDeathReasonTag_ReturnValue, bool CallFunc_MatchesTag_ReturnValue, bool Temp_bool_Variable_1, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_HasMatchingGameplayTag_ReturnValue_1);
	struct FGameplayTag GetDelayDeathAnimationTagFromCombatDelayDeathTag(struct FGameplayTag& DelayDeathTag, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, const struct FGameplayTag& CallFunc_GetDelayDeathAnimationTagFromCombatDelayDeathTag_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_1, bool CallFunc_IsGameplayTagValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_Vector_Up_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, const struct FRotator& CallFunc_GetSocketRotation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, double CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FGameplayTag& K2Node_Select_Default, const struct FGameplayTag& CallFunc_GetDelayDeathAnimationTagFromCombatDelayDeathTag_ReturnValue_1);
	void K2_OnEndAbility(bool bWasCancelled);
	void OnMontageNotifyBegin(class FName NotifyName);
	void OnDeathMontageStartsPlaying();
	void ExecuteUbergraph_GA_DyingBase(int32 EntryPoint, const struct FGameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue, bool K2Node_Event_bWasCancelled, class FName K2Node_Event_notifyName, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, class UCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_1, bool CallFunc_SetLooseGameplayTagCount_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, class UAnathemaAbilitySystemComponent* K2Node_DynamicCast_AsAnathema_Ability_System_Component, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_2, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue_1, bool CallFunc_AddLooseGameplayTags_ReturnValue);
};

}


