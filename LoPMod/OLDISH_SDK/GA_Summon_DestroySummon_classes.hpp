#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x460 - 0x448)
// BlueprintGeneratedClass GA_Summon_DestroySummon.GA_Summon_DestroySummon_C
class UGA_Summon_DestroySummon_C : public UAnathemaGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x448(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayEffectsWithParamsContainer   GameplayEffectsWithParamsContainerRef;             // 0x450(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UGA_Summon_DestroySummon_C* GetDefaultObj();

	void OnFinish_F127A8FD4705A665F600D99FDD760EB6();
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_Summon_DestroySummon(int32 EntryPoint, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, const struct FGameplayEffectContextHandle& K2Node_MakeStruct_GameplayEffectContextHandle, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_ApplyGameplayEffectsContainerToSelf_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData);
};

}


