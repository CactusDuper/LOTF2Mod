#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5B6C (0x5EB4 - 0x348)
// AnimBlueprintGeneratedClass ABP_S_LampHunterRider_Layer.ABP_S_LampHunterRider_Layer_C
class UABP_S_LampHunterRider_Layer_C : public UAnimInstance
{
public:
	uint8                                        Pad_40E3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x358(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x360(0x8)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_7;                   // 0x368(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_7;                              // 0x430(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_6;                   // 0x450(0xC8)(None)
	struct FAnimNode_ControlRig                  AnimGraphNode_ControlRig;                          // 0x518(0x470)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_6;                              // 0x988(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_5;                   // 0x9A8(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_5;                              // 0xA70(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_4;                   // 0xA90(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_4;                              // 0xB58(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_3;                   // 0xB78(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_3;                              // 0xC40(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_2;                   // 0xC60(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0xD28(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0xD48(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0xE10(0x20)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_8;                     // 0xE30(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_7;                     // 0x15C0(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_6;                     // 0x1D50(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_5;                     // 0x24E0(0x790)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x2C70(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x2C90(0x20)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_4;                     // 0x2CB0(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_3;                     // 0x3440(0x790)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x3BD0(0xC8)(None)
	uint8                                        Pad_40E4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody;                           // 0x3CA0(0x9A0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x4640(0x108)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x4748(0x20)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x4768(0x28)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x4790(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x47B0(0x20)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_2;                     // 0x47D0(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_1;                     // 0x4F60(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics;                       // 0x56F0(0x790)(None)
	double                                       __CustomProperty_blinkTriggerEvent_9159CF254204FFFC91CECE9174DC3FDB; // 0x5E80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __CustomProperty_Pain_9159CF254204FFFC91CECE9174DC3FDB; // 0x5E88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __CustomProperty_Anger_9159CF254204FFFC91CECE9174DC3FDB; // 0x5E90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Expression_Pain;                                   // 0x5E98(0x8)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Expression_Anger;                                  // 0x5EA0(0x8)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Facial_Alpha;                                      // 0x5EA8(0x8)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RBAN_Tail_Alpha;                                   // 0x5EB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UABP_S_LampHunterRider_Layer_C* GetDefaultObj();

	void Warping_Override(const struct FPoseLink& LocomotionInput, double InMoveAngle, double InMoveSpeed, struct FPoseLink* Warping_Override);
	void Facial_Override(const struct FPoseLink& InputPose, double Facial_Alpha, double Expression_Anger, double Expression_Pain, double Eyes_Blinking, struct FPoseLink* Facial_Override);
	void LookAtTarget_Override(const struct FPoseLink& InLocomotion, const struct FVector& TargetLocation, double LookAt_Alpha, bool Use_HeadOnly, struct FPoseLink* LookAtTarget_Override);
	void CopyIKBone_Override(const struct FPoseLink& InputLocomotion, struct FPoseLink* CopyIKBone_Override);
	void Layering_Override(const struct FPoseLink& DefaultSlot_InputPose, double UpperBody_Layering_Alpha, double L_Arm_Layering_Alpha, double R_Arm_Layering_Alpha, struct FPoseLink* Layering_Override);
	void FeetLock_FlinchesPP(const struct FPoseLink& FlinchedInput, struct FPoseLink* FeetLock_FlinchesPP);
	void FeetIk_Override(const struct FPoseLink& InPose, int32 IsInUmbral, double EnemySpeed, struct FPoseLink* FeetIk_Override);
	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void Update_RBAN_Alpha(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, float CallFunc_GetCurveValueWithDefault_OutValue, bool CallFunc_GetCurveValueWithDefault_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, float K2Node_VariableSet_RBAN_Tail_Alpha_ImplicitCast);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ABP_S_LampHunterRider_Layer(int32 EntryPoint, float K2Node_Event_DeltaTimeX);
};

}


