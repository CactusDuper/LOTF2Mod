#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18A1 (0x1C41 - 0x3A0)
// AnimBlueprintGeneratedClass ABP_RhogarHound_Layer.ABP_RhogarHound_Layer_C
class UABP_RhogarHound_Layer_C : public UHexHoundAnimLayer
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x3A8(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x3B0(0x8)(None)
	struct FAnimNode_ControlRig                  AnimGraphNode_ControlRig_2;                        // 0x3B8(0x470)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_7;                              // 0x828(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_6;                   // 0x848(0xC8)(None)
	struct FAnimNode_ControlRig                  AnimGraphNode_ControlRig_1;                        // 0x910(0x470)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_6;                              // 0xD80(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_5;                   // 0xDA0(0xC8)(None)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_3;                          // 0xE68(0xF0)(None)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_2;                          // 0xF58(0xF0)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x1048(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x1068(0x20)(None)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_1;                          // 0x1088(0xF0)(None)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone;                            // 0x1178(0xF0)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_5;                              // 0x1268(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_4;                   // 0x1288(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_4;                              // 0x1350(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_3;                   // 0x1370(0xC8)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_2;                   // 0x1438(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_3;                              // 0x1500(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x1520(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0x15E8(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x1608(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x1628(0xC8)(None)
	struct FAnimNode_ControlRig                  AnimGraphNode_ControlRig;                          // 0x16F0(0x470)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x1B60(0x20)(None)
	bool                                         __CustomProperty_isIceWolf_21547A2245EC1943D2B93A9A551D7911; // 0x1B80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A45[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       __CustomProperty_blinkTriggerEvent_21547A2245EC1943D2B93A9A551D7911; // 0x1B88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __CustomProperty_Pain_21547A2245EC1943D2B93A9A551D7911; // 0x1B90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __CustomProperty_Anger_21547A2245EC1943D2B93A9A551D7911; // 0x1B98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Eyes_Blinking;                                     // 0x1BA0(0x8)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Expression_Pain;                                   // 0x1BA8(0x8)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Expression_Anger;                                  // 0x1BB0(0x8)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Facial_Alpha;                                      // 0x1BB8(0x8)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __CustomProperty_LookAt_Alpha_E164229740C81550482AC9A994A94017; // 0x1BC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               __CustomProperty_LookAt_Target_E164229740C81550482AC9A994A94017; // 0x1BC8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        __CustomProperty_IsInUmbral_7B6DDBC644EEFE4F13587CB91BE9CCC0; // 0x1BE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        IsInUmbral;                                        // 0x1BE4(0x4)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                TargetedActor;                                     // 0x1BE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FAnimStruct_CardinalDirection         WalkAnim_CardinalDirection;                        // 0x1BF0(0x20)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FAnimStruct_CardinalDirection         RunAnim_CardinalDirection;                         // 0x1C10(0x20)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        Delta_Time_X;                                      // 0x1C30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A5C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       FeetIKAlpha;                                       // 0x1C38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_IceHound;                                       // 0x1C40(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UABP_RhogarHound_Layer_C* GetDefaultObj();

	void Warping_Override(const struct FPoseLink& LocomotionInput, double InMoveAngle, double InMoveSpeed, struct FPoseLink* Warping_Override);
	void Facial_Override(const struct FPoseLink& InputPose, double Facial_Alpha, double Expression_Anger, double Expression_Pain, double Eyes_Blinking, struct FPoseLink* Facial_Override);
	void LookAtTarget_Override(const struct FPoseLink& InLocomotion, const struct FVector& TargetLocation, double LookAt_Alpha, bool Use_HeadOnly, struct FPoseLink* LookAtTarget_Override);
	void CopyIKBone_Override(const struct FPoseLink& InputLocomotion, struct FPoseLink* CopyIKBone_Override);
	void Layering_Override(const struct FPoseLink& DefaultSlot_InputPose, double UpperBody_Layering_Alpha, double L_Arm_Layering_Alpha, double R_Arm_Layering_Alpha, struct FPoseLink* Layering_Override);
	void FeetLock_FlinchesPP(const struct FPoseLink& FlinchedInput, struct FPoseLink* FeetLock_FlinchesPP);
	void FeetIk_Override(const struct FPoseLink& InPose, int32 IsInUmbral, double EnemySpeed, struct FPoseLink* FeetIk_Override);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void Update_HoundIK_Alpha(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, float CallFunc_GetCurveValue_ReturnValue, double K2Node_VariableSet_FeetIKAlpha_ImplicitCast);
	void BlueprintBeginPlay();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_ABP_RhogarHound_Layer(int32 EntryPoint, bool Temp_bool_Variable, class AActor* CallFunc_GetOwningActor_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasMatchingGameplayTag_ReturnValue);
};

}


