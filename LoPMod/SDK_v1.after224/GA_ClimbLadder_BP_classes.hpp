#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x4B8 - 0x4A8)
// BlueprintGeneratedClass GA_ClimbLadder_BP.GA_ClimbLadder_BP_C
class UGA_ClimbLadder_BP_C : public UGA_ClimbLadder
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UMotionWarpingComponent*               Motion_Warping_Component;                          // 0x4B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_ClimbLadder_BP_C* GetDefaultObj();

	float GetRungFromCapsulePosition_BP(class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, float CallFunc_GetBottomRungHeight_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FTransform& CallFunc_GetEnterBottomTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_GetDistanceBetweenRungs_ReturnValue, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, float K2Node_FunctionResult_ReturnValue_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Divide_DoubleDouble_B_ImplicitCast);
	void GetCharacterOccupiedRungs(int32* RungsOccupied, int32 CallFunc_MakeLiteralInt_ReturnValue);
	struct FVector GetCapsulePositionForRung_BP(int32 RungIndex, double CallFunc_Conv_IntToDouble_ReturnValue, float CallFunc_GetBottomRungHeight_ReturnValue, const struct FTransform& CallFunc_GetEnterBottomTransform_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_GetDistanceBetweenRungs_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast);
	void CharacterExitingLadder(class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_Conv_StringToName_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character_1, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2, bool CallFunc_SetLooseGameplayTagCount_ReturnValue);
	void CharacterEnteringLadder(bool EnterFromTop, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetObjectName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_GetTotalRungCount_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2, int32 CallFunc_SelectInt_ReturnValue, bool CallFunc_SetLooseGameplayTagCount_ReturnValue, const struct FVector& CallFunc_GetCapsulePositionForRung_BP_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, float CallFunc_SetLadderInitialCharacterHeight_initialLadderHeight_ImplicitCast);
	void OnNotifyEnd_4A2BF8A64A3D20E7084833ACB690FAAE(class FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointPayload);
	void OnNotifyBegin_4A2BF8A64A3D20E7084833ACB690FAAE(class FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointPayload);
	void OnDone_4A2BF8A64A3D20E7084833ACB690FAAE(enum class EOnMontageDoneReason DoneReason);
	void OnCancelled_4A2BF8A64A3D20E7084833ACB690FAAE();
	void OnInterrupted_4A2BF8A64A3D20E7084833ACB690FAAE();
	void OnBlendOut_4A2BF8A64A3D20E7084833ACB690FAAE();
	void OnCompleted_4A2BF8A64A3D20E7084833ACB690FAAE();
	void OnNotifyEnd_7CF1E2C54F365BEE459CE288EC5F086A(class FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointPayload);
	void OnNotifyBegin_7CF1E2C54F365BEE459CE288EC5F086A(class FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointPayload);
	void OnDone_7CF1E2C54F365BEE459CE288EC5F086A(enum class EOnMontageDoneReason DoneReason);
	void OnCancelled_7CF1E2C54F365BEE459CE288EC5F086A();
	void OnInterrupted_7CF1E2C54F365BEE459CE288EC5F086A();
	void OnBlendOut_7CF1E2C54F365BEE459CE288EC5F086A();
	void OnCompleted_7CF1E2C54F365BEE459CE288EC5F086A();
	void OnNotifyEnd_791DD2DB43DF0A3DDD07C58D7E6AF3B0(class FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointPayload);
	void OnNotifyBegin_791DD2DB43DF0A3DDD07C58D7E6AF3B0(class FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointPayload);
	void OnDone_791DD2DB43DF0A3DDD07C58D7E6AF3B0(enum class EOnMontageDoneReason DoneReason);
	void OnCancelled_791DD2DB43DF0A3DDD07C58D7E6AF3B0();
	void OnInterrupted_791DD2DB43DF0A3DDD07C58D7E6AF3B0();
	void OnBlendOut_791DD2DB43DF0A3DDD07C58D7E6AF3B0();
	void OnCompleted_791DD2DB43DF0A3DDD07C58D7E6AF3B0();
	void OnNotifyEnd_5A6F30624F3B9E440C6501BED2D47BC3(class FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointPayload);
	void OnNotifyBegin_5A6F30624F3B9E440C6501BED2D47BC3(class FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointPayload);
	void OnDone_5A6F30624F3B9E440C6501BED2D47BC3(enum class EOnMontageDoneReason DoneReason);
	void OnCancelled_5A6F30624F3B9E440C6501BED2D47BC3();
	void OnInterrupted_5A6F30624F3B9E440C6501BED2D47BC3();
	void OnBlendOut_5A6F30624F3B9E440C6501BED2D47BC3();
	void OnCompleted_5A6F30624F3B9E440C6501BED2D47BC3();
	void OnNotifyEnd_BAF158E644BE00F2E3106BA0C9236CEB(class FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointPayload);
	void OnNotifyBegin_BAF158E644BE00F2E3106BA0C9236CEB(class FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointPayload);
	void OnDone_BAF158E644BE00F2E3106BA0C9236CEB(enum class EOnMontageDoneReason DoneReason);
	void OnCancelled_BAF158E644BE00F2E3106BA0C9236CEB();
	void OnInterrupted_BAF158E644BE00F2E3106BA0C9236CEB();
	void OnBlendOut_BAF158E644BE00F2E3106BA0C9236CEB();
	void OnCompleted_BAF158E644BE00F2E3106BA0C9236CEB();
	void TriggerClimbOntoLadderSequence_BP();
	void TriggerGetOffLadderSequence_BP();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_ClimbLadder_BP(int32 EntryPoint, enum class EOnMontageDoneReason K2Node_CustomEvent_doneReason_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UAnathemaTask_PlayMontage* CallFunc_CreatePlayMontageProxy_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsValid_ReturnValue, class FName K2Node_CustomEvent_notifyName_7, const struct FBranchingPointNotifyPayload& K2Node_CustomEvent_branchingPointPayload_7, class FName K2Node_CustomEvent_notifyName_6, const struct FBranchingPointNotifyPayload& K2Node_CustomEvent_branchingPointPayload_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, enum class EOnMontageDoneReason K2Node_CustomEvent_doneReason_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class UAnathemaTask_PlayMontage* CallFunc_CreatePlayMontageProxy_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, bool CallFunc_IsValid_ReturnValue_1, class FName K2Node_CustomEvent_notifyName_5, const struct FBranchingPointNotifyPayload& K2Node_CustomEvent_branchingPointPayload_5, class FName K2Node_CustomEvent_notifyName_4, const struct FBranchingPointNotifyPayload& K2Node_CustomEvent_branchingPointPayload_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, enum class EOnMontageDoneReason K2Node_CustomEvent_doneReason_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, class UAnathemaTask_PlayMontage* CallFunc_CreatePlayMontageProxy_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, bool CallFunc_IsValid_ReturnValue_2, class FName K2Node_CustomEvent_notifyName_3, const struct FBranchingPointNotifyPayload& K2Node_CustomEvent_branchingPointPayload_3, class FName K2Node_CustomEvent_notifyName_2, const struct FBranchingPointNotifyPayload& K2Node_CustomEvent_branchingPointPayload_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, enum class EOnMontageDoneReason K2Node_CustomEvent_doneReason_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_22, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_23, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_24, class UAnathemaTask_PlayMontage* CallFunc_CreatePlayMontageProxy_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_25, bool CallFunc_IsValid_ReturnValue_3, class FName K2Node_CustomEvent_notifyName_1, const struct FBranchingPointNotifyPayload& K2Node_CustomEvent_branchingPointPayload_1, class FName K2Node_CustomEvent_notifyName, const struct FBranchingPointNotifyPayload& K2Node_CustomEvent_branchingPointPayload, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_26, enum class EOnMontageDoneReason K2Node_CustomEvent_doneReason, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_27, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_28, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_29, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_30, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_31, class UAnathemaTask_PlayMontage* CallFunc_CreatePlayMontageProxy_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_4, bool Temp_bool_Has_Been_Initd_Variable, int32 CallFunc_RemoveWarpTarget_ReturnValue, int32 CallFunc_RemoveWarpTarget_ReturnValue_1, int32 CallFunc_RemoveWarpTarget_ReturnValue_2, bool K2Node_Event_bWasCancelled, float CallFunc_GetBottomRungHeight_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FTransform& CallFunc_GetEnterBottomTransform_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_32, const struct FTransform& CallFunc_GetEnterBottomTransform_ReturnValue_1, const struct FTransform& CallFunc_GetEnterTopTransform_ReturnValue, class UInteractionComponent* CallFunc_GetInteraction_ReturnValue, class UInteractionComponent* CallFunc_GetTopInteractionComponent_ReturnValue, class FName K2Node_CustomEvent_notifyName_8, const struct FBranchingPointNotifyPayload& K2Node_CustomEvent_branchingPointPayload_8, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AAnathemaPlayerCharacter_BP_C* K2Node_DynamicCast_AsAnathema_Player_Character_BP, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_33, int32 CallFunc_RemoveWarpTarget_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_34, bool Temp_bool_IsClosed_Variable, const struct FTransform& CallFunc_GetLandingBottomTransform_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, class FName K2Node_CustomEvent_notifyName_9, const struct FBranchingPointNotifyPayload& K2Node_CustomEvent_branchingPointPayload_9, class AAnathemaPlayerCharacter_BP_C* K2Node_DynamicCast_AsAnathema_Player_Character_BP_1, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_GetLadderSprinting_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast);
};

}


