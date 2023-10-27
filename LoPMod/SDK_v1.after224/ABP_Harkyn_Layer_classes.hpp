#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2998 (0x2CE0 - 0x348)
// AnimBlueprintGeneratedClass ABP_Harkyn_Layer.ABP_Harkyn_Layer_C
class UABP_Harkyn_Layer_C : public UAnimInstance
{
public:
	uint8                                        Pad_4432[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x358(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x360(0x8)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_7;                   // 0x368(0xC8)(None)
	struct FAnimNode_ControlRig                  AnimGraphNode_ControlRig_1;                        // 0x430(0x470)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_7;                              // 0x8A0(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_6;                   // 0x8C0(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_6;                              // 0x988(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_5;                   // 0x9A8(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_5;                              // 0xA70(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_4;                   // 0xA90(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_4;                              // 0xB58(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_3;                   // 0xB78(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_3;                              // 0xC40(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_2;                   // 0xC60(0xC8)(None)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_1;                          // 0xD28(0xF0)(None)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone;                            // 0xE18(0xF0)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0xF08(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0xF28(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0xF48(0x20)(None)
	uint8                                        Pad_4433[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_2;                     // 0xF70(0x790)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x1700(0x20)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_1;                     // 0x1720(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics;                       // 0x1EB0(0x790)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x2640(0xC8)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x2708(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x2728(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x2748(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2810(0x20)(None)
	struct FAnimNode_ControlRig                  AnimGraphNode_ControlRig;                          // 0x2830(0x470)(None)
	double                                       __CustomProperty_blinkTriggerEvent_B08B458547C6616998815C9AA1FC5A79; // 0x2CA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __CustomProperty_Pain_B08B458547C6616998815C9AA1FC5A79; // 0x2CA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __CustomProperty_Anger_B08B458547C6616998815C9AA1FC5A79; // 0x2CB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Eyes_Blinking;                                     // 0x2CB8(0x8)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Expression_Pain;                                   // 0x2CC0(0x8)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Expression_Anger;                                  // 0x2CC8(0x8)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Facial_Alpha;                                      // 0x2CD0(0x8)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SleeveConstraint_Alpha;                            // 0x2CD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UABP_Harkyn_Layer_C* GetDefaultObj();

	void Warping_Override(const struct FPoseLink& LocomotionInput, double InMoveAngle, double InMoveSpeed, struct FPoseLink* Warping_Override);
	void Facial_Override(const struct FPoseLink& InputPose, double Facial_Alpha, double Expression_Anger, double Expression_Pain, double Eyes_Blinking, struct FPoseLink* Facial_Override);
	void LookAtTarget_Override(const struct FPoseLink& InLocomotion, const struct FVector& TargetLocation, double LookAt_Alpha, bool Use_HeadOnly, struct FPoseLink* LookAtTarget_Override);
	void FeetIk_Override(const struct FPoseLink& InPose, int32 IsInUmbral, double EnemySpeed, struct FPoseLink* FeetIk_Override);
	void FeetLock_FlinchesPP(const struct FPoseLink& FlinchedInput, struct FPoseLink* FeetLock_FlinchesPP);
	void Layering_Override(const struct FPoseLink& DefaultSlot_InputPose, double UpperBody_Layering_Alpha, double L_Arm_Layering_Alpha, double R_Arm_Layering_Alpha, struct FPoseLink* Layering_Override);
	void CopyIKBone_Override(const struct FPoseLink& InputLocomotion, struct FPoseLink* CopyIKBone_Override);
	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void Update_SleeveConstraint_Alpha(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, float CallFunc_GetDeltaTime_ReturnValue, float CallFunc_GetCurveValueWithDefault_OutValue, bool CallFunc_GetCurveValueWithDefault_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_FInterpTo_ReturnValue, double CallFunc_FInterpTo_DeltaTime_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast);
	void ExecuteUbergraph_ABP_Harkyn_Layer(int32 EntryPoint);
};

}


