#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1991 (0x1CD9 - 0x348)
// AnimBlueprintGeneratedClass ABP_Lantern_Layer.ABP_Lantern_Layer_C
class UABP_Lantern_Layer_C : public UAnimInstance
{
public:
	uint8                                        Pad_1AE4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData_LL    __AnimBlueprintMutables;                           // 0x358(0x11)(HasGetValueTypeHash)
	uint8                                        Pad_1AE5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x370(0x8)(None)
	struct FAnimSubsystemInstance_NodeRelevancy  AnimBlueprintExtension_NodeRelevancy;              // 0x378(0xA8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x420(0x8)(None)
	uint8                                        Pad_1AE7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_1;                         // 0x430(0x9A0)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0xDD0(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0xDF0(0xC8)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0xEB8(0x20)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0xED8(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0xFE0(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x1008(0x28)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x1030(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x1050(0x20)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x1070(0x48)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x10B8(0x128)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x11E0(0x20)(None)
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody;                           // 0x1200(0x9A0)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator;                   // 0x1BA0(0x40)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x1BE0(0x48)(None)
	class AActor*                                K2Node_PropertyAccess_9;                           // 0x1C28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_PropertyAccess_8;                           // 0x1C30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AE8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimInstance*                         K2Node_PropertyAccess_7;                           // 0x1C38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_PropertyAccess_6;                           // 0x1C40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UEquipableInventorySoulsLantern*       K2Node_PropertyAccess_4;                           // 0x1C48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_PropertyAccess;                             // 0x1C50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UEquipmentManagerComponent*            EquipmentManagerComponent;                         // 0x1C58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Lantern_isHolstered;                               // 0x1C60(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AE9[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Player_Leg_Transform;                              // 0x1C70(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         AS_Customization_Idle;                             // 0x1CD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         Player_IsSitting;                                  // 0x1CD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UABP_Lantern_Layer_C* GetDefaultObj();

	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	class AAnathemaPlayerCharacter_BP_C* GetBP_AnathemaPlayerCharBPThreadSafe(class AAnathemaPlayerCharacter_BP_C* K2Node_DynamicCast_AsAnathema_Player_Character_BP, bool K2Node_DynamicCast_bSuccess);
	void Update_CustomizationIdle(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FSequenceEvaluatorReference& CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator, bool CallFunc_ConvertToSequenceEvaluatorPure_Result, const struct FSequenceEvaluatorReference& CallFunc_SetExplicitTime_ReturnValue);
	class UABP_Player_Customization_C* GetABP_PlayerCustomizationThreadSafe(class UABP_Player_Customization_C* K2Node_DynamicCast_AsABP_Player_Customization, bool K2Node_DynamicCast_bSuccess);
	void Set_CustomizationIdle(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, bool Temp_bool_Variable, const struct FSequenceEvaluatorReference& CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator, bool CallFunc_ConvertToSequenceEvaluatorPure_Result, class UAnimSequenceBase* Temp_object_Variable, class UAnimSequenceBase* Temp_object_Variable_1, class UAnimSequenceBase* K2Node_Select_Default, const struct FSequenceEvaluatorReference& CallFunc_SetSequenceWithInertialBlending_ReturnValue);
	class ACustomizationCharacter_C* GetBP_CustomizationCharacterThreadSafe(class ACustomizationCharacter_C* K2Node_DynamicCast_AsCustomization_Character, bool K2Node_DynamicCast_bSuccess);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Lantern_Layer_AnimGraphNode_ModifyBone_4E2A55A845C0A08CCD1A848FAC0EFB10();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ABP_Lantern_Layer(int32 EntryPoint, class AAnathemaPlayerCharacter_BP_C* CallFunc_GetBP_AnathemaPlayerCharBPThreadSafe_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsHolsteredVisual_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, class UABP_Player_Customization_C* CallFunc_GetABP_PlayerCustomizationThreadSafe_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UABP_Player_Customization_C* CallFunc_GetABP_PlayerCustomizationThreadSafe_ReturnValue_1, class UABP_Player_Customization_C* CallFunc_GetABP_PlayerCustomizationThreadSafe_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, const class FString& CallFunc_GetObjectName_ReturnValue, bool CallFunc_Contains_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, float K2Node_Event_DeltaTimeX);
};

}


