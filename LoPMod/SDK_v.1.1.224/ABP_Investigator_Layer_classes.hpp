#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1CC8 (0x2010 - 0x348)
// AnimBlueprintGeneratedClass ABP_Investigator_Layer.ABP_Investigator_Layer_C
class UABP_Investigator_Layer_C : public UAnimInstance
{
public:
	uint8                                        Pad_3CD6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x358(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x360(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_7;                              // 0x368(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_7;                   // 0x388(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_6;                              // 0x450(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_6;                   // 0x470(0xC8)(None)
	struct FAnimNode_ControlRig                  AnimGraphNode_ControlRig_1;                        // 0x538(0x470)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_5;                              // 0x9A8(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_5;                   // 0x9C8(0xC8)(None)
	struct FAnimNode_ControlRig                  AnimGraphNode_ControlRig;                          // 0xA90(0x470)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_4;                              // 0xF00(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_4;                   // 0xF20(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_3;                              // 0xFE8(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_3;                   // 0x1008(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0x10D0(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_2;                   // 0x10F0(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x11B8(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x11D8(0xC8)(None)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_1;                          // 0x12A0(0xF0)(None)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone;                            // 0x1390(0xF0)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x1480(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x14A0(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x14C0(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x14E0(0xC8)(None)
	uint8                                        Pad_3CD7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody;                           // 0x15B0(0x9A0)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x1F50(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x1F70(0x20)(None)
	double                                       __CustomProperty_blinkTriggerEvent_4BF679644200DB0FE77AAD9FE19BE96F; // 0x1F90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __CustomProperty_Pain_4BF679644200DB0FE77AAD9FE19BE96F; // 0x1F98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __CustomProperty_Anger_4BF679644200DB0FE77AAD9FE19BE96F; // 0x1FA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Eyes_Blinking;                                     // 0x1FA8(0x8)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Expression_Pain;                                   // 0x1FB0(0x8)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Expression_Anger;                                  // 0x1FB8(0x8)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Facial_Alpha;                                      // 0x1FC0(0x8)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __CustomProperty_LookAt_AlphaBlend_E487E0594F56B5AB2939DF9A8E4127C9; // 0x1FC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               __CustomProperty_LooAt_TargetLocation_E487E0594F56B5AB2939DF9A8E4127C9; // 0x1FD0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TargetLocation;                                    // 0x1FE8(0x18)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                         K2Node_PropertyAccess_1;                           // 0x2000(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       LookAtPlayer_Alpha;                                // 0x2008(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UABP_Investigator_Layer_C* GetDefaultObj();

	void Warping_Override(const struct FPoseLink& LocomotionInput, double InMoveAngle, double InMoveSpeed, struct FPoseLink* Warping_Override);
	void Facial_Override(const struct FPoseLink& InputPose, double Facial_Alpha, double Expression_Anger, double Expression_Pain, double Eyes_Blinking, struct FPoseLink* Facial_Override);
	void LookAtTarget_Override(const struct FPoseLink& InLocomotion, const struct FVector& TargetLocation, double LookAt_Alpha, bool Use_HeadOnly, struct FPoseLink* LookAtTarget_Override);
	void FeetIk_Override(const struct FPoseLink& InPose, int32 IsInUmbral, double EnemySpeed, struct FPoseLink* FeetIk_Override);
	void FeetLock_FlinchesPP(const struct FPoseLink& FlinchedInput, struct FPoseLink* FeetLock_FlinchesPP);
	void Layering_Override(const struct FPoseLink& DefaultSlot_InputPose, double UpperBody_Layering_Alpha, double L_Arm_Layering_Alpha, double R_Arm_Layering_Alpha, struct FPoseLink* Layering_Override);
	void CopyIKBone_Override(const struct FPoseLink& InputLocomotion, struct FPoseLink* CopyIKBone_Override);
	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	class UABP_EnemyBase_C* GetABP_EnemyThreadSafe(class UABP_EnemyBase_C* K2Node_DynamicCast_AsABP_Enemy_Base, bool K2Node_DynamicCast_bSuccess);
	void Update_LookAtAlpha(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, class UABP_EnemyBase_C* CallFunc_GetABP_EnemyThreadSafe_ReturnValue, float CallFunc_GetDeltaTime_ReturnValue, float CallFunc_GetCurveValueWithDefault_OutValue, bool CallFunc_GetCurveValueWithDefault_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_FInterpTo_ReturnValue, double CallFunc_FInterpTo_DeltaTime_ImplicitCast, double CallFunc_SelectFloat_A_ImplicitCast);
	void ExecuteUbergraph_ABP_Investigator_Layer(int32 EntryPoint);
};

}


