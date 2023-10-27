#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2760 (0x2AA8 - 0x348)
// AnimBlueprintGeneratedClass ABP_Player_Layering_FistGrip.ABP_Player_Layering_FistGrip_C
class UABP_Player_Layering_FistGrip_C : public UAnimInstance
{
public:
	uint8                                        Pad_3B66[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData_PLFG    __AnimBlueprintMutables;                           // 0x358(0x8)(HasGetValueTypeHash)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x360(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x368(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_11;                             // 0x370(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_10;                             // 0x390(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_9;                   // 0x3B0(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_9;                              // 0x478(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_8;                   // 0x498(0xC8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_4;                    // 0x560(0x108)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_4;                   // 0x668(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_18;                    // 0x6B0(0x28)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_1;                  // 0x6D8(0xE0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x7B8(0x48)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x800(0x128)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;             // 0x928(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;             // 0x948(0x20)(None)
	struct FAnimNode_ModifyCurve                 AnimGraphNode_ModifyCurve_10;                      // 0x968(0x100)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_3;                    // 0xA68(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_17;                    // 0xB70(0x28)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0xB98(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0xBB8(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0xBD8(0x128)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_16;                    // 0xD00(0x28)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0xD28(0xE0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0xE08(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_2;                    // 0xE50(0x108)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0xF58(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0xF78(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0xF98(0x128)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_15;                    // 0x10C0(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_14;                    // 0x10E8(0x28)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_8;                              // 0x1110(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_7;                   // 0x1130(0xC8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0x11F8(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_13;                    // 0x1300(0x28)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_3;                   // 0x1328(0x48)(None)
	struct FAnimNode_Inertialization             AnimGraphNode_Inertialization_1;                   // 0x1370(0x100)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_6;                   // 0x1470(0xC8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_12;                    // 0x1538(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_11;                    // 0x1560(0x28)(None)
	struct FAnimNode_ModifyCurve                 AnimGraphNode_ModifyCurve_9;                       // 0x1588(0x100)(None)
	struct FAnimNode_ModifyCurve                 AnimGraphNode_ModifyCurve_8;                       // 0x1688(0x100)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_10;                    // 0x1788(0x28)(None)
	struct FAnimNode_ModifyCurve                 AnimGraphNode_ModifyCurve_7;                       // 0x17B0(0x100)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x18B0(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_2;                   // 0x18F8(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_9;                     // 0x1940(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_8;                     // 0x1968(0x28)(None)
	struct FAnimNode_ModifyCurve                 AnimGraphNode_ModifyCurve_6;                       // 0x1990(0x100)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_7;                     // 0x1A90(0x28)(None)
	struct FAnimNode_ModifyCurve                 AnimGraphNode_ModifyCurve_5;                       // 0x1AB8(0x100)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_7;                              // 0x1BB8(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_5;                   // 0x1BD8(0xC8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x1CA0(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_6;                     // 0x1DA8(0x28)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_1;                   // 0x1DD0(0x48)(None)
	struct FAnimNode_Inertialization             AnimGraphNode_Inertialization;                     // 0x1E18(0x100)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_6;                              // 0x1F18(0x20)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_5;                     // 0x1F38(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_4;                     // 0x1F60(0x28)(None)
	struct FAnimNode_ModifyCurve                 AnimGraphNode_ModifyCurve_4;                       // 0x1F88(0x100)(None)
	struct FAnimNode_ModifyCurve                 AnimGraphNode_ModifyCurve_3;                       // 0x2088(0x100)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3;                     // 0x2188(0x28)(None)
	struct FAnimNode_ModifyCurve                 AnimGraphNode_ModifyCurve_2;                       // 0x21B0(0x100)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x22B0(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum;                     // 0x22F8(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x2340(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x2368(0x28)(None)
	struct FAnimNode_ModifyCurve                 AnimGraphNode_ModifyCurve_1;                       // 0x2390(0x100)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x2490(0x28)(None)
	struct FAnimNode_ModifyCurve                 AnimGraphNode_ModifyCurve;                         // 0x24B8(0x100)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_5;                              // 0x25B8(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_4;                   // 0x25D8(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_4;                              // 0x26A0(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_3;                   // 0x26C0(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_3;                              // 0x2788(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_2;                   // 0x27A8(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0x2870(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x2890(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x2958(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x2978(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2A40(0x20)(None)
	double                                       L_Hand_Unequipped_Alpha;                           // 0x2A60(0x8)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ELocomotionState                  CurrentLocomotionState_P;                          // 0x2A68(0x1)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B67[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimInstance*                         K2Node_PropertyAccess;                             // 0x2A70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              FistCorrection_Rotator;                            // 0x2A78(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               FistCorrection_Translator;                         // 0x2A90(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UABP_Player_Layering_FistGrip_C* GetDefaultObj();

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
	void Update_CorrectiveRotator(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FVector& Temp_struct_Variable, float CallFunc_GetDeltaTime_ReturnValue, const struct FVector& Temp_struct_Variable_1, const struct FVector& Temp_struct_Variable_2, const struct FVector& Temp_struct_Variable_3, const struct FVector& Temp_struct_Variable_4, enum class ELocomotionState Temp_byte_Variable, const struct FRotator& Temp_struct_Variable_5, const struct FRotator& Temp_struct_Variable_6, const struct FRotator& Temp_struct_Variable_7, const struct FRotator& Temp_struct_Variable_8, const struct FRotator& Temp_struct_Variable_9, class UABP_Player_C* CallFunc_GetABP_Player_ReturnValue, class UABP_Player_C* CallFunc_GetABP_Player_ReturnValue_1, enum class ELocomotionState Temp_byte_Variable_1, const struct FVector& Temp_struct_Variable_10, const struct FVector& Temp_struct_Variable_11, const struct FVector& Temp_struct_Variable_12, const struct FVector& Temp_struct_Variable_13, const struct FVector& Temp_struct_Variable_14, enum class ELocomotionState Temp_byte_Variable_2, const struct FRotator& Temp_struct_Variable_15, const struct FRotator& Temp_struct_Variable_16, const struct FRotator& Temp_struct_Variable_17, const struct FRotator& Temp_struct_Variable_18, const struct FRotator& Temp_struct_Variable_19, class UABP_Player_C* CallFunc_GetABP_Player_ReturnValue_2, enum class ELocomotionState Temp_byte_Variable_3, const struct FRotator& K2Node_Select_Default, const struct FVector& K2Node_Select_Default_1, const struct FVector& K2Node_Select_Default_2, const struct FRotator& K2Node_Select_Default_3, const struct FVector& CallFunc_SelectVector_ReturnValue, const struct FRotator& CallFunc_SelectRotator_ReturnValue, const struct FVector& CallFunc_VInterpTo_ReturnValue, const struct FRotator& CallFunc_RInterpTo_ReturnValue);
	class UABP_Player_C* GetABP_Player(class UABP_Player_C* K2Node_DynamicCast_AsABP_Player, bool K2Node_DynamicCast_bSuccess);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ABP_Player_Layering_FistGrip(int32 EntryPoint, float K2Node_Event_DeltaTimeX);
};

}


