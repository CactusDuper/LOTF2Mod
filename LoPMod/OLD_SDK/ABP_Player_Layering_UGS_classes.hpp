#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x17B8 (0x1B00 - 0x348)
// AnimBlueprintGeneratedClass ABP_Player_Layering_UGS.ABP_Player_Layering_UGS_C
class UABP_Player_Layering_UGS_C : public UAnimInstance
{
public:
	uint8                                        Pad_2004[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData_PLU __AnimBlueprintMutables;                          // 0x358(0x2)(HasGetValueTypeHash)
	uint8                                        Pad_2005[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x360(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x368(0x8)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_9;                   // 0x370(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_11;                             // 0x438(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_8;                   // 0x458(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_10;                             // 0x520(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_7;                   // 0x540(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_9;                              // 0x608(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_8;                              // 0x628(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_6;                   // 0x648(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_7;                              // 0x710(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_5;                   // 0x730(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_6;                              // 0x7F8(0x20)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x818(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x840(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_2;                    // 0x868(0x108)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0x970(0x108)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator;                   // 0xA78(0x40)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0xAB8(0x28)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0xAE0(0xE0)(None)
	struct FAnimNode_ControlRig                  AnimGraphNode_ControlRig_1;                        // 0xBC0(0x470)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum;                     // 0x1030(0x48)(None)
	struct FAnimNode_ControlRig                  AnimGraphNode_ControlRig;                          // 0x1078(0x470)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_4;                   // 0x14E8(0xC8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x15B0(0x108)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_5;                              // 0x16B8(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_4;                              // 0x16D8(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_3;                   // 0x16F8(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_3;                              // 0x17C0(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_2;                   // 0x17E0(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0x18A8(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x18C8(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x1990(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x19B0(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x1A78(0x20)(None)
	double                                       __CustomProperty_RHand_Alpha_1E2A2B564D0CED56E348278CF15EE3F4; // 0x1A98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __CustomProperty_LHand_Alpha_1E2A2B564D0CED56E348278CF15EE3F4; // 0x1AA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __CustomProperty_Spring_CriticalDamping_1E2A2B564D0CED56E348278CF15EE3F4; // 0x1AA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __CustomProperty_Spring_Strength_1E2A2B564D0CED56E348278CF15EE3F4; // 0x1AB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __CustomProperty_RHand_Alpha_D3FED97743B7E0B6148BE2B32876B291; // 0x1AB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __CustomProperty_LHand_Alpha_D3FED97743B7E0B6148BE2B32876B291; // 0x1AC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __CustomProperty_Spring_CriticalDamping_D3FED97743B7E0B6148BE2B32876B291; // 0x1AC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __CustomProperty_Spring_Strength_D3FED97743B7E0B6148BE2B32876B291; // 0x1AD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       L_Hand_Unequipped_Alpha;                           // 0x1AD8(0x8)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       R_Hand_Unequipped_Alpha;                           // 0x1AE0(0x8)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ELocomotionState                  CurrentLocomotionState_P;                          // 0x1AE8(0x1)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_200F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimInstance*                         K2Node_PropertyAccess;                             // 0x1AF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CriticalDamping;                                   // 0x1AF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UABP_Player_Layering_UGS_C* GetDefaultObj();

	void HandsIK_Override(const struct FPoseLink& InputPose, double HandsIK_Alpha, double SpringStrength, double SpringDamping, struct FPoseLink* HandsIK_Override);
	void LanternOverlay(const struct FPoseLink& LanternLayeringPose, enum class ELocomotionState CurrentLocomotionState_L, struct FPoseLink* LanternOverlay);
	void AL_PlayerFlails(const struct FPoseLink& InPose_Flails, struct FPoseLink* AL_PlayerFlails);
	void AL_AimingOffset(const struct FPoseLink& UpperBody_Additive, double AimingAlpha, double AimingPitch, double AimingYaw, class UBlendSpace* AimOffset_BS, struct FPoseLink* AL_AimingOffset);
	void Locomotion(struct FPoseLink* Locomotion);
	void Locomotion_Blocking(const struct FPoseLink& InPose, struct FPoseLink* Locomotion_Blocking);
	void PrimaryOverlay(const struct FPoseLink& PrimaryLayeringPose, enum class ELocomotionState CurrentLocomotionState_P, double R_Hand_Unequipped_Alpha, double L_Hand_Unequipped_Alpha, struct FPoseLink* PrimaryOverlay);
	void SecondaryOverlay(const struct FPoseLink& SecondaryLayeringPose, enum class ELocomotionState CurrentLocomotionState_S, struct FPoseLink* SecondaryOverlay);
	void DualWieldOverlay(const struct FPoseLink& DualWieldLayeringPose, enum class ELocomotionState CurrentLocomotionState_DW, struct FPoseLink* DualWieldOverlay);
	void MagicOverlay(const struct FPoseLink& MagicLayeringPose, enum class ELocomotionState CurrentLocomotionState_M, struct FPoseLink* MagicOverlay);
	void RangedOverlay(const struct FPoseLink& RangedLayeringPose, enum class ELocomotionState CurrentLocomotionState_R, struct FPoseLink* RangedOverlay);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void SpringIK_Alpha(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, double Temp_real_Variable, float CallFunc_GetDeltaTime_ReturnValue, double Temp_real_Variable_1, double Temp_real_Variable_2, double Temp_real_Variable_3, class UABP_Player_C* CallFunc_GetABP_PlayerThreadSafe_ReturnValue, class UABP_Player_C* CallFunc_GetABP_PlayerThreadSafe_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UABP_Player_C* CallFunc_GetABP_PlayerThreadSafe_ReturnValue_2, double CallFunc_FInterpTo_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_FInterpTo_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue_1, class UABP_Player_C* CallFunc_GetABP_PlayerThreadSafe_ReturnValue_3, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, double Temp_real_Variable_4, enum class ELocomotionState Temp_byte_Variable, class UABP_Player_C* CallFunc_GetABP_PlayerThreadSafe_ReturnValue_4, double K2Node_Select_Default, double CallFunc_FInterpTo_ReturnValue_2, class UABP_Player_C* CallFunc_GetABP_PlayerThreadSafe_ReturnValue_5, double CallFunc_FInterpTo_ReturnValue_3, double CallFunc_FInterpTo_DeltaTime_ImplicitCast, double CallFunc_FInterpTo_DeltaTime_ImplicitCast_1, double CallFunc_FInterpTo_DeltaTime_ImplicitCast_2, double CallFunc_FInterpTo_DeltaTime_ImplicitCast_3);
	class UABP_Player_C* GetABP_PlayerThreadSafe(class UABP_Player_C* K2Node_DynamicCast_AsABP_Player, bool K2Node_DynamicCast_bSuccess);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Layering_UGS_AnimGraphNode_ControlRig_1E2A2B564D0CED56E348278CF15EE3F4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Layering_UGS_AnimGraphNode_ControlRig_D3FED97743B7E0B6148BE2B32876B291();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ABP_Player_Layering_UGS(int32 EntryPoint, float K2Node_Event_DeltaTimeX, class UABP_Player_C* CallFunc_GetABP_PlayerThreadSafe_ReturnValue, class UABP_Player_C* CallFunc_GetABP_PlayerThreadSafe_ReturnValue_1);
};

}


