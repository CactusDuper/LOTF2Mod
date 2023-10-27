#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1B4 (0x5FC - 0x448)
// BlueprintGeneratedClass GA_ForwardAttack.GA_ForwardAttack_C
class UGA_ForwardAttack_C : public UGA_ForwardAttack
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x448(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FFAttackDebugRange                    CurrentAttackReachDebug;                           // 0x450(0x48)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                        CurrentAttackID;                                   // 0x498(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_400C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFAttackDebugRange                    FinalAttackReachData;                              // 0x4A0(0x48)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_400E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFAttackCapsuleDebugData              PreviousHitboxData;                                // 0x4F0(0x61)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_400F[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumSteps;                                          // 0x560(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4010[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               PrevFurthesReachLocation;                          // 0x568(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bPrevReachLocationValid;                           // 0x580(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4011[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CurrentFrameFurthestReach;                         // 0x588(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        PrevDataFrame;                                     // 0x5A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FString, int32>                   AttackReachDataMap;                                // 0x5A8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        AttackReachLastIdx;                                // 0x5F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_ForwardAttack_C* GetDefaultObj();

	void CalculateAndUpdateAttackReachSingleInstance(struct FTransform& InTransform, int32 AttackReachDataIdx, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_GetUpVector_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Vector_Normal2D_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Cross_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FFAttackDebugReachData& CallFunc_Array_Get_Item, double CallFunc_Dot_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_2, double CallFunc_Dot_VectorVector_ReturnValue_1, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_3, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_3, double CallFunc_VSize_ReturnValue, double CallFunc_BreakVector_X_2, double CallFunc_BreakVector_Y_2, double CallFunc_BreakVector_Z_2, const struct FFAttackDebugReachData& K2Node_MakeStruct_FAttackDebugReachData, const struct FVector& CallFunc_MakeVector_ReturnValue_1, double CallFunc_VSize_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FFAttackDebugReachData& K2Node_MakeStruct_FAttackDebugReachData_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_1);
	struct FAnimationSource GetAnimationSourceFromGameplayEvent_BP(struct FGameplayTag& EventTag, const struct FAnimationSource& ForwardHeavyAnimSource, const struct FAnimationSource& ForwardLightAnimSource, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue_1, const struct FAnimationSource& K2Node_MakeStruct_AnimationSource);
	void OnTick_E85A415643E16A1CB74F1C9C0E2B6EFA(float DeltaTime);
	void EventReceived_E584FC694CCDEB2E33EBEB8DC20543E4(const struct FGameplayEventData& Payload);
	void K2_OnEndAbility(bool bWasCancelled);
	void DrawFinalAttackDebugData(double Duration, bool bDrawReach_, const struct FFAttackDebugRange& AttackData, int32 AttackReachIdx);
	void FinalizeData();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_ForwardAttack(int32 EntryPoint, const struct FGameplayEventData& Temp_struct_Variable, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue, const struct FTransform& CallFunc_GetTargetDataOrigin_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayEventData& K2Node_CustomEvent_Payload, int32 Temp_int_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UAbilityTask_Tick* CallFunc_CreateTickTask_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_Event_bWasCancelled, int32 CallFunc_Add_IntInt_ReturnValue_1, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, double K2Node_CustomEvent_Duration, bool K2Node_CustomEvent_bDrawReach_, const struct FFAttackDebugRange& K2Node_CustomEvent_AttackData, int32 K2Node_CustomEvent_AttackReachIdx, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, double CallFunc_Vector_Distance_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, class FText CallFunc_Conv_DoubleToText_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, float Temp_real_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, float K2Node_CustomEvent_DeltaTime, const struct FFAttackDebugReachData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_GetShowAttackMetricsDebug_ReturnValue, bool CallFunc_GetShowAttackMetricsDebug_ReturnValue_1, bool CallFunc_GetShowAttackMetricsDebug_ReturnValue_2, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2, int32 Temp_int_Variable_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FFAttackDebugReachData& K2Node_MakeStruct_FAttackDebugReachData, int32 CallFunc_Array_Add_ReturnValue, float CallFunc_DrawDebugSphere_Duration_ImplicitCast, float CallFunc_DrawDebugSphere_Duration_ImplicitCast_1, float CallFunc_DrawDebugLine_Duration_ImplicitCast, float CallFunc_DrawDebugString_Duration_ImplicitCast, float CallFunc_DrawDebugSphere_Duration_ImplicitCast_2, float CallFunc_DrawDebugString_Duration_ImplicitCast_1);
};

}


