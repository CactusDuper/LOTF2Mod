#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF18 (0x1260 - 0x348)
// AnimBlueprintGeneratedClass ABP_Player_Layering_Ranged.ABP_Player_Layering_Ranged_C
class UABP_Player_Layering_Ranged_C : public UAnimInstance
{
public:
	uint8                                        Pad_3A40[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData_PLR    __AnimBlueprintMutables;                           // 0x358(0x14)(HasGetValueTypeHash)
	uint8                                        Pad_3A41[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x370(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x378(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_11;                             // 0x380(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_9;                   // 0x3A0(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_10;                             // 0x468(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_8;                   // 0x488(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_9;                              // 0x550(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_7;                   // 0x570(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_8;                              // 0x638(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_6;                   // 0x658(0xC8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x720(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x828(0x28)(None)
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace_1;          // 0x850(0x118)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x968(0xE0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0xA48(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0xA70(0x28)(None)
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace;            // 0xA98(0x118)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend;                         // 0xBB0(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_7;                              // 0xC78(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_6;                              // 0xC98(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_5;                   // 0xCB8(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_5;                              // 0xD80(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_4;                   // 0xDA0(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_4;                              // 0xE68(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_3;                   // 0xE88(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_3;                              // 0xF50(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_2;                   // 0xF70(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0x1038(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x1058(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x1120(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x1140(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x1208(0x20)(None)
	class UAbilitySystemComponent*               K2Node_PropertyAccess_9;                           // 0x1228(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                         K2Node_PropertyAccess_7;                           // 0x1230(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBlendSpace*                           BS_Aiming_Relaxed;                                 // 0x1238(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       AimOffset_Alpha;                                   // 0x1240(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlendSpace*                           BS_Aiming_Shooting;                                // 0x1248(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       RelaxedOrShooting_Blend;                           // 0x1250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Blend_InterpSpeed;                                 // 0x1258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UABP_Player_Layering_Ranged_C* GetDefaultObj();

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
	void Set_AimingBS(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, class UABP_Player_C* CallFunc_GetABP_Player_ReturnValue, const struct FBlendSpacePlayerReference& CallFunc_ConvertToBlendSpacePlayerPure_BlendSpacePlayer, bool CallFunc_ConvertToBlendSpacePlayerPure_Result, class UABP_Player_C* CallFunc_GetABP_Player_ReturnValue_1, class UABP_Player_C* CallFunc_GetABP_Player_ReturnValue_2, class UABP_Player_C* CallFunc_GetABP_Player_ReturnValue_3, bool Temp_bool_Variable, bool CallFunc_BooleanAND_ReturnValue, class UBlendSpace* K2Node_Select_Default, const struct FBlendSpacePlayerReference& CallFunc_SetBlendSpaceWithInertialBlending_ReturnValue);
	void Update_AimingBS(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, class UABP_Player_C* CallFunc_GetABP_Player_ReturnValue, const struct FBlendSpacePlayerReference& CallFunc_ConvertToBlendSpacePlayerPure_BlendSpacePlayer, bool CallFunc_ConvertToBlendSpacePlayerPure_Result, class UABP_Player_C* CallFunc_GetABP_Player_ReturnValue_1, class UABP_Player_C* CallFunc_GetABP_Player_ReturnValue_2, class UABP_Player_C* CallFunc_GetABP_Player_ReturnValue_3, bool Temp_bool_Variable, bool CallFunc_BooleanAND_ReturnValue, class UBlendSpace* K2Node_Select_Default, const struct FBlendSpacePlayerReference& CallFunc_SetBlendSpaceWithInertialBlending_ReturnValue);
	void Smooth_AimOffsetAlpha_byMontageTag(const struct FGameplayTag& MontageTag, double AimOffsetTarget, class UABP_Player_C* CallFunc_GetABP_Player_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue_1, double CallFunc_FInterpTo_ReturnValue, double CallFunc_FInterpTo_ReturnValue_1);
	void Set_Charged_AimingAlpha(double CallFunc_GetWorldDeltaSeconds_ReturnValue, class UABP_Player_C* CallFunc_GetABP_Player_ReturnValue, double CallFunc_FInterpTo_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, class UAnimMontage* CallFunc_BP_GetMontageByTag_ReturnValue, float CallFunc_GetPlayLength_ReturnValue, bool CallFunc_Montage_IsPlaying_ReturnValue, class UABP_Player_C* CallFunc_GetABP_Player_ReturnValue_1, float CallFunc_Montage_GetPosition_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_InRangeB_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast);
	class UABP_Player_C* GetABP_Player(class UABP_Player_C* K2Node_DynamicCast_AsABP_Player, bool K2Node_DynamicCast_bSuccess);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ABP_Player_Layering_Ranged(int32 EntryPoint, double CallFunc_GetWorldDeltaSeconds_ReturnValue, class UABP_Player_C* CallFunc_GetABP_Player_ReturnValue, float K2Node_Event_DeltaTimeX, class UABP_Player_C* CallFunc_GetABP_Player_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UABP_Player_C* CallFunc_GetABP_Player_ReturnValue_2, class UABP_Player_C* CallFunc_GetABP_Player_ReturnValue_3, class UABP_Player_C* CallFunc_GetABP_Player_ReturnValue_4, class UABP_Player_C* CallFunc_GetABP_Player_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue_1, double CallFunc_GetWorldDeltaSeconds_ReturnValue_2, double CallFunc_FInterpTo_ReturnValue, double CallFunc_FInterpTo_ReturnValue_1, class UABP_Player_C* CallFunc_GetABP_Player_ReturnValue_6, bool CallFunc_IsValid_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue_3, double CallFunc_FInterpTo_ReturnValue_2, double CallFunc_FInterpTo_ReturnValue_3);
};

}


