#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8525 (0x886D - 0x348)
// AnimBlueprintGeneratedClass ABP_LampHunterMount_Layer.ABP_LampHunterMount_Layer_C
class UABP_LampHunterMount_Layer_C : public UAnimInstance
{
public:
	uint8                                        Pad_3A63[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
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
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody;                           // 0x9E0(0x9A0)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x1380(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x13A0(0xC8)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x1468(0x20)(None)
	uint8                                        Pad_3A64[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_14;                    // 0x1490(0x790)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x1C20(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x1D28(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x1D50(0x28)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x1D78(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x1D98(0x20)(None)
	uint8                                        Pad_3A65[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_13;                    // 0x1DC0(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_12;                    // 0x2550(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_11;                    // 0x2CE0(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_10;                    // 0x3470(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_9;                     // 0x3C00(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_8;                     // 0x4390(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_7;                     // 0x4B20(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_6;                     // 0x52B0(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_5;                     // 0x5A40(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_4;                     // 0x61D0(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_3;                     // 0x6960(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_2;                     // 0x70F0(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_1;                     // 0x7880(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics;                       // 0x8010(0x790)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend;                         // 0x87A0(0xC8)(None)
	float                                        RBAN_Alpha;                                        // 0x8868(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bCinematic_isPlaying;                              // 0x886C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UABP_LampHunterMount_Layer_C* GetDefaultObj();

	void Warping_Override(const struct FPoseLink& LocomotionInput, double InMoveAngle, double InMoveSpeed, struct FPoseLink* Warping_Override);
	void Facial_Override(const struct FPoseLink& InputPose, double Facial_Alpha, double Expression_Anger, double Expression_Pain, double Eyes_Blinking, struct FPoseLink* Facial_Override);
	void LookAtTarget_Override(const struct FPoseLink& InLocomotion, const struct FVector& TargetLocation, double LookAt_Alpha, bool Use_HeadOnly, struct FPoseLink* LookAtTarget_Override);
	void CopyIKBone_Override(const struct FPoseLink& InputLocomotion, struct FPoseLink* CopyIKBone_Override);
	void Layering_Override(const struct FPoseLink& DefaultSlot_InputPose, double UpperBody_Layering_Alpha, double L_Arm_Layering_Alpha, double R_Arm_Layering_Alpha, struct FPoseLink* Layering_Override);
	void FeetLock_FlinchesPP(const struct FPoseLink& FlinchedInput, struct FPoseLink* FeetLock_FlinchesPP);
	void FeetIk_Override(const struct FPoseLink& InPose, int32 IsInUmbral, double EnemySpeed, struct FPoseLink* FeetIk_Override);
	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void Update_RBAN_Alpha(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, float CallFunc_GetCurveValueWithDefault_OutValue, bool CallFunc_GetCurveValueWithDefault_ReturnValue);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ABP_LampHunterMount_Layer(int32 EntryPoint, float K2Node_Event_DeltaTimeX);
};

}


