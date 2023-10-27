#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x29C1 (0x2D09 - 0x348)
// AnimBlueprintGeneratedClass ABP_Player_LayeringTemplate.ABP_Player_LayeringTemplate_C
class UABP_Player_LayeringTemplate_C : public UAnimInstance
{
public:
	uint8                                        Pad_3897[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData_PLT    __AnimBlueprintMutables;                           // 0x358(0x4)(HasGetValueTypeHash)
	uint8                                        Pad_3898[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x360(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x368(0x8)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_11;                  // 0x370(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_11;                             // 0x438(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_10;                  // 0x458(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_10;                             // 0x520(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_9;                              // 0x540(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_9;                   // 0x560(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_8;                              // 0x628(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_7;                              // 0x648(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_8;                   // 0x668(0xC8)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_7;                   // 0x730(0xC8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_11;                   // 0x7F8(0x108)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_6;                              // 0x900(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_6;                   // 0x920(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_5;                              // 0x9E8(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_4;                              // 0xA08(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_5;                   // 0xA28(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_3;                              // 0xAF0(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_4;                   // 0xB10(0xC8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_10;                   // 0xBD8(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_24;                    // 0xCE0(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_23;                    // 0xD08(0x28)(None)
	struct FAnimNode_ModifyCurve                 AnimGraphNode_ModifyCurve_2;                       // 0xD30(0x100)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0xE30(0x128)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0xF58(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0xF78(0x20)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_1;                   // 0xF98(0x48)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0xFE0(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_3;                   // 0x1000(0xC8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_9;                    // 0x10C8(0x108)(None)
	struct FAnimNode_ModifyCurve                 AnimGraphNode_ModifyCurve_1;                       // 0x11D0(0x100)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum;                     // 0x12D0(0x48)(None)
	struct FAnimNode_ModifyCurve                 AnimGraphNode_ModifyCurve;                         // 0x1318(0x100)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_22;                    // 0x1418(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_21;                    // 0x1440(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_20;                    // 0x1468(0x28)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x1490(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_2;                   // 0x14B0(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x1578(0x20)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x1598(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_19;                    // 0x15E0(0x28)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_2;                       // 0x1608(0xC8)(None)
	struct FAnimNode_ApplyMeshSpaceAdditive      AnimGraphNode_ApplyMeshSpaceAdditive;              // 0x16D0(0xD0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_18;                    // 0x17A0(0x28)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_1;                       // 0x17C8(0xC8)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_1;                     // 0x1890(0xC8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_17;                    // 0x1958(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_8;                    // 0x1980(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_16;                    // 0x1A88(0x28)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_2;                  // 0x1AB0(0xE0)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_1;                  // 0x1B90(0xE0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_15;                    // 0x1C70(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_7;                    // 0x1C98(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_14;                    // 0x1DA0(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_13;                    // 0x1DC8(0x28)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x1DF0(0xC8)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x1EB8(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_12;                    // 0x1F00(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_11;                    // 0x1F28(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_10;                    // 0x1F50(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_9;                     // 0x1F78(0x28)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend;                         // 0x1FA0(0xC8)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive;                       // 0x2068(0xC8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_8;                     // 0x2130(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_7;                     // 0x2158(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_6;                    // 0x2180(0x108)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_5;                    // 0x2288(0x108)(None)
	struct FAnimNode_Inertialization             AnimGraphNode_Inertialization;                     // 0x2390(0x100)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_6;                     // 0x2490(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_4;                    // 0x24B8(0x108)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_3;                    // 0x25C0(0x108)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_2;                    // 0x26C8(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_5;                     // 0x27D0(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_4;                     // 0x27F8(0x28)(None)
	struct FAnimNode_MakeDynamicAdditive         AnimGraphNode_MakeDynamicAdditive_1;               // 0x2820(0x38)(None)
	struct FAnimNode_MakeDynamicAdditive         AnimGraphNode_MakeDynamicAdditive;                 // 0x2858(0x38)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0x2890(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3;                     // 0x2998(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x29C0(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x29E8(0x108)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x2AF0(0xC8)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x2BB8(0xE0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x2C98(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x2CC0(0x28)(None)
	enum class ELocomotionState                  CurrentLocomotionState_DW;                         // 0x2CE8(0x1)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ELocomotionState                  CurrentLocomotionState_M;                          // 0x2CE9(0x1)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3899[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimInstance*                         K2Node_PropertyAccess;                             // 0x2CF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       RArm_Alpha;                                        // 0x2CF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LArm_Alpha;                                        // 0x2D00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFemale;                                          // 0x2D08(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UABP_Player_LayeringTemplate_C* GetDefaultObj();

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
	void AnimGraph(const struct FPoseLink& InputLocomotion, const struct FPoseLink& OverlayPose, struct FPoseLink* AnimGraph);
	void Update_LayeringAlphas(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, float CallFunc_GetCurveValueWithDefault_OutValue, bool CallFunc_GetCurveValueWithDefault_ReturnValue, float CallFunc_GetDeltaTime_ReturnValue, double CallFunc_FInterpTo_ReturnValue, double CallFunc_FInterpTo_Target_ImplicitCast, double CallFunc_FInterpTo_DeltaTime_ImplicitCast);
	class UABP_Player_C* GetABP_PlayerThreadSafe(class UABP_Player_C* K2Node_DynamicCast_AsABP_Player, bool K2Node_DynamicCast_bSuccess);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ABP_Player_LayeringTemplate(int32 EntryPoint, float K2Node_Event_DeltaTimeX);
};

}


