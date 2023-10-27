#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x450 - 0x448)
// BlueprintGeneratedClass GA_UmbralZombie_OnSpawn_PlayMontage.GA_UmbralZombie_OnSpawn_PlayMontage_C
class UGA_UmbralZombie_OnSpawn_PlayMontage_C : public UAnathemaGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x448(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_UmbralZombie_OnSpawn_PlayMontage_C* GetDefaultObj();

	void OnNotifyEnd_A92C9DCF4606E09322E3E3BCF7969A6D(class FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointPayload);
	void OnNotifyBegin_A92C9DCF4606E09322E3E3BCF7969A6D(class FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointPayload);
	void OnDone_A92C9DCF4606E09322E3E3BCF7969A6D(enum class EOnMontageDoneReason DoneReason);
	void OnCancelled_A92C9DCF4606E09322E3E3BCF7969A6D();
	void OnInterrupted_A92C9DCF4606E09322E3E3BCF7969A6D();
	void OnBlendOut_A92C9DCF4606E09322E3E3BCF7969A6D();
	void OnCompleted_A92C9DCF4606E09322E3E3BCF7969A6D();
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_UmbralZombie_OnSpawn_PlayMontage(int32 EntryPoint, class FName K2Node_CustomEvent_notifyName_1, const struct FBranchingPointNotifyPayload& K2Node_CustomEvent_branchingPointPayload_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_notifyName, const struct FBranchingPointNotifyPayload& K2Node_CustomEvent_branchingPointPayload, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EOnMontageDoneReason K2Node_CustomEvent_doneReason, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, class UCharacterConfigComponent* CallFunc_GetComponentByClass_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue, class UAnimMontage* CallFunc_GetAnimMontageByTag_ReturnValue, class UAnathemaTask_PlayMontage* CallFunc_CreatePlayMontageProxy_ReturnValue, bool K2Node_Event_bWasCancelled, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsVisible_ReturnValue);
};

}


