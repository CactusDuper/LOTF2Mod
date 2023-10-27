#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x468 - 0x448)
// BlueprintGeneratedClass GA_InLanternShardMenu.GA_InLanternShardMenu_C
class UGA_InLanternShardMenu_C : public UAnathemaGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x448(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         bNeedsToEnd;                                       // 0x450(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3ED6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULevelSequence*                        ExitLevelSequence;                                 // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ULevelSequence*                        EnterLevelSequence;                                // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_InLanternShardMenu_C* GetDefaultObj();

	class ULevelSequencePlayer* SetPlayerAsLevelSequenceOrigin(class ULevelSequence* LevelSequence, bool Settings_Pause_At_End, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, const struct FMovieSceneSequencePlaybackSettings& K2Node_MakeStruct_MovieSceneSequencePlaybackSettings, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, class ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, class ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue, class UDefaultLevelSequenceInstanceData* K2Node_DynamicCast_AsDefault_Level_Sequence_Instance_Data, bool K2Node_DynamicCast_bSuccess, class ACharacter* CallFunc_CastToCharacter_ReturnValue, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, double CallFunc_MakeVector_Z_ImplicitCast);
	void OnNotifyEnd_D68F23394418A75FDBA6698A8000F3C0(class FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointPayload);
	void OnNotifyBegin_D68F23394418A75FDBA6698A8000F3C0(class FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointPayload);
	void OnDone_D68F23394418A75FDBA6698A8000F3C0(enum class EOnMontageDoneReason DoneReason);
	void OnCancelled_D68F23394418A75FDBA6698A8000F3C0();
	void OnInterrupted_D68F23394418A75FDBA6698A8000F3C0();
	void OnBlendOut_D68F23394418A75FDBA6698A8000F3C0();
	void OnCompleted_D68F23394418A75FDBA6698A8000F3C0();
	void OnNotifyEnd_7128C6DC45FEB79FA68140A089947FF2(class FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointPayload);
	void OnNotifyBegin_7128C6DC45FEB79FA68140A089947FF2(class FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointPayload);
	void OnDone_7128C6DC45FEB79FA68140A089947FF2(enum class EOnMontageDoneReason DoneReason);
	void OnCancelled_7128C6DC45FEB79FA68140A089947FF2();
	void OnInterrupted_7128C6DC45FEB79FA68140A089947FF2();
	void OnBlendOut_7128C6DC45FEB79FA68140A089947FF2();
	void OnCompleted_7128C6DC45FEB79FA68140A089947FF2();
	void EventReceived_760EE38741E1946FEDFDCA94095BD97B(const struct FGameplayEventData& Payload);
	void EventReceived_1E9A0B0C477A94BB052F3DA5B929A8C6(const struct FGameplayEventData& Payload);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_InLanternShardMenu(int32 EntryPoint, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class UAnimMontage* CallFunc_GetAnimMontageFromTag_ReturnValue, class FName K2Node_CustomEvent_notifyName_3, const struct FBranchingPointNotifyPayload& K2Node_CustomEvent_branchingPointPayload_3, class UAnathemaTask_PlayMontage* CallFunc_CreatePlayMontageProxy_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class FName K2Node_CustomEvent_notifyName_2, const struct FBranchingPointNotifyPayload& K2Node_CustomEvent_branchingPointPayload_2, enum class EOnMontageDoneReason K2Node_CustomEvent_doneReason_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_notifyName_1, const struct FBranchingPointNotifyPayload& K2Node_CustomEvent_branchingPointPayload_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_notifyName, const struct FBranchingPointNotifyPayload& K2Node_CustomEvent_branchingPointPayload, enum class EOnMontageDoneReason K2Node_CustomEvent_doneReason, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, const struct FGameplayEventData& K2Node_CustomEvent_Payload_1, const struct FGameplayEventData& Temp_struct_Variable, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, const struct FGameplayEventData& K2Node_CustomEvent_Payload, const struct FGameplayEventData& Temp_struct_Variable_1, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_1, class ACharacter* CallFunc_CastToCharacter_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsLocalPlayerController_ReturnValue, bool K2Node_Event_bWasCancelled, class ULevelSequencePlayer* CallFunc_SetPlayerAsLevelSequenceOrigin_ReturnValue, class ULevelSequencePlayer* CallFunc_SetPlayerAsLevelSequenceOrigin_ReturnValue_1, const struct FGameplayEventData& K2Node_Event_EventData, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_2, class UAnimMontage* CallFunc_GetAnimMontageFromTag_ReturnValue_1, class UAnathemaTask_PlayMontage* CallFunc_CreatePlayMontageProxy_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3);
};

}


