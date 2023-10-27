#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x16B0 (0x19F8 - 0x348)
// AnimBlueprintGeneratedClass ABP_DeepSparrow_Layer.ABP_DeepSparrow_Layer_C
class UABP_DeepSparrow_Layer_C : public UAnimInstance
{
public:
	uint8                                        Pad_3754[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x358(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x360(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_7;                              // 0x368(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_7;                   // 0x388(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_6;                              // 0x450(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_6;                   // 0x470(0xC8)(None)
	struct FAnimNode_ControlRig                  AnimGraphNode_ControlRig_2;                        // 0x538(0x470)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_5;                              // 0x9A8(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_5;                   // 0x9C8(0xC8)(None)
	struct FAnimNode_ControlRig                  AnimGraphNode_ControlRig_1;                        // 0xA90(0x470)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_4;                              // 0xF00(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_4;                   // 0xF20(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_3;                              // 0xFE8(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_3;                   // 0x1008(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0x10D0(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_2;                   // 0x10F0(0xC8)(None)
	struct FAnimNode_LegIK                       AnimGraphNode_LegIK;                               // 0x11B8(0xF8)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x12B0(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x12D0(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x12F0(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x1310(0xC8)(None)
	struct FAnimNode_ControlRig                  AnimGraphNode_ControlRig;                          // 0x13D8(0x470)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x1848(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x1868(0xC8)(None)
	double                                       __CustomProperty_blinkTriggerEvent_280F62024F2055821C406CAFC11F9FAB; // 0x1930(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __CustomProperty_Pain_280F62024F2055821C406CAFC11F9FAB; // 0x1938(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __CustomProperty_Anger_280F62024F2055821C406CAFC11F9FAB; // 0x1940(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Expression_Pain;                                   // 0x1948(0x8)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Expression_Anger;                                  // 0x1950(0x8)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Facial_Alpha;                                      // 0x1958(0x8)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __CustomProperty_LookAt_AlphaBlend_C915308E4706129CEA7E06B51DDB9308; // 0x1960(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         __CustomProperty_Use_HeadOnly_C915308E4706129CEA7E06B51DDB9308; // 0x1968(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3755[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               __CustomProperty_LooAt_TargetLocation_C915308E4706129CEA7E06B51DDB9308; // 0x1970(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Use_HeadOnly;                                      // 0x1988(0x1)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3756[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       LookAt_Alpha;                                      // 0x1990(0x8)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TargetLocation;                                    // 0x1998(0x18)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  __CustomProperty_RFoot_6988883D49BF4411C4CF31A57CA74876; // 0x19B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  __CustomProperty_LFoot_6988883D49BF4411C4CF31A57CA74876; // 0x19B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  __CustomProperty_RKnee_6988883D49BF4411C4CF31A57CA74876; // 0x19C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  __CustomProperty_LKnee_6988883D49BF4411C4CF31A57CA74876; // 0x19C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __CustomProperty_CharSpeed_6988883D49BF4411C4CF31A57CA74876; // 0x19D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        __CustomProperty_IsInUmbral_6988883D49BF4411C4CF31A57CA74876; // 0x19D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3757[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       EnemySpeed;                                        // 0x19E0(0x8)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        IsInUmbral;                                        // 0x19E8(0x4)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3758[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       IKs_Alpha;                                         // 0x19F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UABP_DeepSparrow_Layer_C* GetDefaultObj();

	void Warping_Override(const struct FPoseLink& LocomotionInput, double InMoveAngle, double InMoveSpeed, struct FPoseLink* Warping_Override);
	void Facial_Override(const struct FPoseLink& InputPose, double Facial_Alpha, double Expression_Anger, double Expression_Pain, double Eyes_Blinking, struct FPoseLink* Facial_Override);
	void LookAtTarget_Override(const struct FPoseLink& InLocomotion, const struct FVector& TargetLocation, double LookAt_Alpha, bool Use_HeadOnly, struct FPoseLink* LookAtTarget_Override);
	void CopyIKBone_Override(const struct FPoseLink& InputLocomotion, struct FPoseLink* CopyIKBone_Override);
	void Layering_Override(const struct FPoseLink& DefaultSlot_InputPose, double UpperBody_Layering_Alpha, double L_Arm_Layering_Alpha, double R_Arm_Layering_Alpha, struct FPoseLink* Layering_Override);
	void FeetLock_FlinchesPP(const struct FPoseLink& FlinchedInput, struct FPoseLink* FeetLock_FlinchesPP);
	void FeetIk_Override(const struct FPoseLink& InPose, int32 IsInUmbral, double EnemySpeed, struct FPoseLink* FeetIk_Override);
	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ABP_DeepSparrow_Layer(int32 EntryPoint, float CallFunc_GetCurveValue_ReturnValue, bool Temp_bool_Variable, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue, float K2Node_Event_DeltaTimeX, double CallFunc_Multiply_DoubleDouble_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasMatchingGameplayTag_ReturnValue, double CallFunc_FInterpTo_ReturnValue, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_FInterpTo_DeltaTime_ImplicitCast);
};

}


