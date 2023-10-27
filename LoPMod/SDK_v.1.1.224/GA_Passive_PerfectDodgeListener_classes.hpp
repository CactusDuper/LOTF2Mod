#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x450 - 0x448)
// BlueprintGeneratedClass GA_Passive_PerfectDodgeListener.GA_Passive_PerfectDodgeListener_C
class UGA_Passive_PerfectDodgeListener_C : public UAnathemaGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x448(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_Passive_PerfectDodgeListener_C* GetDefaultObj();

	void OnFinish_22886A5948628CC288187D843092C8C6();
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_Passive_PerfectDodgeListener(int32 EntryPoint, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue, class UDeveloperMenuSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, bool CallFunc_GetDeveloperMenuRuntimeSettingsValueByName_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UDeveloperMenuSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, bool CallFunc_GetDeveloperMenuRuntimeSettingsValueByName_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, bool CallFunc_HasMatchingGameplayTag_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_2, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_2, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_3, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue, bool Temp_bool_Variable, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue);
};

}


