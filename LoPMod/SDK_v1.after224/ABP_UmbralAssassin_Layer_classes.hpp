#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE80 (0x11C8 - 0x348)
// AnimBlueprintGeneratedClass ABP_UmbralAssassin_Layer.ABP_UmbralAssassin_Layer_C
class UABP_UmbralAssassin_Layer_C : public UAnimInstance
{
public:
	uint8                                        Pad_42D8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x358(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x360(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_7;                              // 0x368(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_7;                   // 0x388(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_6;                              // 0x450(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_6;                   // 0x470(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_5;                              // 0x538(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_5;                   // 0x558(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_4;                              // 0x620(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_4;                   // 0x640(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_3;                              // 0x708(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_3;                   // 0x728(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0x7F0(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_2;                   // 0x810(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x8D8(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x8F8(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x9C0(0x20)(None)
	struct FAnimNode_ControlRig                  AnimGraphNode_ControlRig;                          // 0x9E0(0x470)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0xE50(0xC8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0xF18(0x108)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x1020(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x1128(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x1150(0x28)(None)
	bool                                         __CustomProperty_UseHeadOnly_69E3E154416FABC6B3F94881C9875782; // 0x1178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42DE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       __CustomProperty_PlayerDistance_69E3E154416FABC6B3F94881C9875782; // 0x1180(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               __CustomProperty_Player_Location_69E3E154416FABC6B3F94881C9875782; // 0x1188(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               PlayerLocation;                                    // 0x11A0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       FloatingHead_LookAt_Alpha;                         // 0x11B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       PlayerDistance;                                    // 0x11C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UABP_UmbralAssassin_Layer_C* GetDefaultObj();

	void Facial_Override(const struct FPoseLink& InputPose, double Facial_Alpha, double Expression_Anger, double Expression_Pain, double Eyes_Blinking, struct FPoseLink* Facial_Override);
	void LookAtTarget_Override(const struct FPoseLink& InLocomotion, const struct FVector& TargetLocation, double LookAt_Alpha, bool Use_HeadOnly, struct FPoseLink* LookAtTarget_Override);
	void CopyIKBone_Override(const struct FPoseLink& InputLocomotion, struct FPoseLink* CopyIKBone_Override);
	void Layering_Override(const struct FPoseLink& DefaultSlot_InputPose, double UpperBody_Layering_Alpha, double L_Arm_Layering_Alpha, double R_Arm_Layering_Alpha, struct FPoseLink* Layering_Override);
	void FeetLock_FlinchesPP(const struct FPoseLink& FlinchedInput, struct FPoseLink* FeetLock_FlinchesPP);
	void FeetIk_Override(const struct FPoseLink& InPose, int32 IsInUmbral, double EnemySpeed, struct FPoseLink* FeetIk_Override);
	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ABP_UmbralAssassin_Layer(int32 EntryPoint, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class AActor* CallFunc_GetOwningActor_ReturnValue_1, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class AActor* CallFunc_GetTargetedActor_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_GetWorldDeltaSeconds_ReturnValue, double CallFunc_Abs_ReturnValue, float CallFunc_GetCurveValueWithDefault_OutValue, bool CallFunc_GetCurveValueWithDefault_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_FInterpTo_ReturnValue, double CallFunc_FInterpTo_ReturnValue_1, double CallFunc_FInterpTo_DeltaTime_ImplicitCast, double K2Node_VariableSet_PlayerDistance_ImplicitCast, double CallFunc_Abs_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast);
};

}


