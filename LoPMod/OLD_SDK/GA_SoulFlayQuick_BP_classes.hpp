#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x458 - 0x448)
// BlueprintGeneratedClass GA_SoulFlayQuick_BP.GA_SoulFlayQuick_BP_C
class UGA_SoulFlayQuick_BP_C : public UAnathemaGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x448(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                          Anim_Tag;                                          // 0x450(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_SoulFlayQuick_BP_C* GetDefaultObj();

	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags, class UDeveloperMenuSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, bool CallFunc_GetDeveloperMenuRuntimeSettingsValueByName_ReturnValue);
	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload, bool Temp_bool_Variable, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasMatchingGameplayTag_ReturnValue);
	void OnNotifyEnd_7A9393DA44E74A872FB10B98735EC6A4(class FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointPayload);
	void OnNotifyBegin_7A9393DA44E74A872FB10B98735EC6A4(class FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointPayload);
	void OnDone_7A9393DA44E74A872FB10B98735EC6A4(enum class EOnMontageDoneReason DoneReason);
	void OnCancelled_7A9393DA44E74A872FB10B98735EC6A4();
	void OnInterrupted_7A9393DA44E74A872FB10B98735EC6A4();
	void OnBlendOut_7A9393DA44E74A872FB10B98735EC6A4();
	void OnCompleted_7A9393DA44E74A872FB10B98735EC6A4();
	void OnFinish_3A8DA409462B6054A3E2C2A2A2085A90();
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_SoulFlayQuick_BP(int32 EntryPoint, bool CallFunc_K2_CommitAbilityCost_ReturnValue, class FName K2Node_CustomEvent_notifyName_1, const struct FBranchingPointNotifyPayload& K2Node_CustomEvent_branchingPointPayload_1, class FName K2Node_CustomEvent_notifyName, const struct FBranchingPointNotifyPayload& K2Node_CustomEvent_branchingPointPayload, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EOnMontageDoneReason K2Node_CustomEvent_doneReason, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class UAnimMontage* CallFunc_GetAnimMontageFromTag_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class UAnathemaTask_PlayMontage* CallFunc_CreatePlayMontageProxy_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
};

}


