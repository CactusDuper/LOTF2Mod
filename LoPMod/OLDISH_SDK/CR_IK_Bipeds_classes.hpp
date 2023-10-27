#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x92 (0x5F2 - 0x560)
// ControlRigBlueprintGeneratedClass CR_IK_Bipeds.CR_IK_Bipeds_C
class UCR_IK_Bipeds_C : public UControlRig
{
public:
	double                                       Target_FootOffset_L;                               // 0x560(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Target_FootOffset_R;                               // 0x568(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        IsInUmbral;                                        // 0x570(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SwitchIK;                                          // 0x574(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3595[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CharSpeed;                                         // 0x578(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               L_HitNormal;                                       // 0x580(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               R_HitNormal;                                       // 0x598(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       L_AimingNormal_Alpha;                              // 0x5B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       R_AimingNormal_Alpha;                              // 0x5B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       HipLength;                                         // 0x5C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       KneeLength;                                        // 0x5C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LeftFootHitTrace;                                  // 0x5D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3596[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Pelvis_Offset_Z;                                   // 0x5D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Current_FootOffset_L;                              // 0x5E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Current_FootOffset_R;                              // 0x5E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RightFootHitTrace;                                 // 0x5F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bEnableFeetIK;                                     // 0x5F1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCR_IK_Bipeds_C* GetDefaultObj();

};

// 0x444 (0x46C - 0x28)
// RigVMMemoryStorageGeneratorClass CR_IK_Bipeds.RigVMMemory_Literal
class URigVMMemory_Literal_IB : public URigVMMemoryStorage
{
public:
	struct FVector                               LocalVariableDefault__Process_FootPlanting_HitNormal__Const; // 0x28(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       LocalVariableDefault__Process_FootPlanting_GroundOffsetPosition__Const; // 0x40(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       LocalVariableDefault__Process_FootPlanting_AimingNormal_Alpha__Const; // 0x48(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___RigUnit_SetTransform_4_2_1_2_2_1_1_Item__Const; // 0x50(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class EBoneGetterSetterMode             RigVMModel___RigUnit_SetTransform_4_2_1_2_2_1_1_Space__Const; // 0x5C(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___RigUnit_SetTransform_4_2_1_2_2_1_1_bInitial__Const : 1; // Mask: 0x1, PropSize: 0x10x5D(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_246 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3597[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        RigVMModel___GetTransform_8_3_2_2_1_1_Item__Const; // 0x60(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___RigUnit_SetTransform_4_2_1_2_2_1_1_Weight__Const; // 0x6C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___RigUnit_SetTransform_4_2_1_2_2_1_1_bPropagateToChildren__Const : 1; // Mask: 0x1, PropSize: 0x10x70(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_247 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3598[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        RigVMModel___RigUnit_SetTransform_4_2_1_3_2_1_1_Item__Const; // 0x74(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___GetTransform_8_3_3_2_1_1_Item__Const; // 0x80(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___RigUnit_SetTransform_4_2_1_2_2_2_Item__Const; // 0x8C(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___GetTransform_8_3_2_2_2_Item__Const;   // 0x98(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___RigUnit_SetTransform_4_2_1_3_2_2_Item__Const; // 0xA4(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___GetTransform_8_3_3_2_2_Item__Const;   // 0xB0(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___SetRelativeTransformForItem_Child__Const; // 0xBC(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___SetRelativeTransformForItem_Parent__Const; // 0xC8(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3599[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___SetRelativeTransformForItem_Value__Const; // 0xE0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___SetRelativeTransformForItem_1_Child__Const; // 0x140(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___SetRelativeTransformForItem_1_Parent__Const; // 0x14C(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_359A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___SetRelativeTransformForItem_1_Value__Const; // 0x160(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___FootTracing_1_MathVectorAdd_B__Const; // 0x1C0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___FootTracing_1_MathVectorSub_B__Const; // 0x1D8(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class ETraceTypeQuery                   RigVMModel___FootTracing_1_Select_6_Values_0__Const; // 0x1F0(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class ETraceTypeQuery                   RigVMModel___FootTracing_1_Select_6_Values_1__Const; // 0x1F1(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_359B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        _;                                                 // 0x1F4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___FootTracing_1_SphereTraceByTraceChannel_Radius__Const; // 0x1F8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_359C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RigVMModel___FootTracing_1_If_2_False__Const;      // 0x200(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___FootTracing_1_AccumulateVectorLerp_Blend__Const; // 0x218(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___RigUnit_SetTransform_1_1_1_Item__Const; // 0x21C(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class EBoneGetterSetterMode             RigVMModel___RigUnit_SetTransform_1_1_1_Space__Const; // 0x228(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_359D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___RigUnit_SetTransform_1_1_1_Value__Const; // 0x230(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___MathTransformRotateVector_1_Vector__Const; // 0x290(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___OffsetTransformForItem_1_Item__Const; // 0x2A8(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_359E[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___OffsetTransformForItem_1_OffsetTransform__Const; // 0x2C0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___Process_FootOffset_GetRelativeTransformForItem_Parent__Const; // 0x320(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_359F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_AimItem_Target               RigVMModel___Process_FootOffset_AimBoneMath_Primary__Const; // 0x330(0x48)(Edit, EditConst, NonTransactional, NoDestructor)
	struct FRigUnit_AimItem_Target               RigVMModel___Process_FootOffset_AimBoneMath_Secondary__Const; // 0x378(0x48)(Edit, EditConst, NonTransactional, NoDestructor)
	struct FRigUnit_AimBone_DebugSettings        RigVMModel___Process_FootOffset_AimBoneMath_DebugSettings__Const; // 0x3C0(0x70)(Edit, EditConst, NonTransactional, NoDestructor)
	struct FRigElementKey                        RigVMModel___RigUnit_GetTransform_3_1_Item__Const; // 0x430(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___SetControlOffset_Control__Const;      // 0x43C(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___SetControlOffset_1_Control__Const;    // 0x444(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___SetControlOffset_1_2_Control__Const;  // 0x44C(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___SetControlOffset_1_1_Control__Const;  // 0x454(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___SetControlOffset_1_1_1_Control__Const; // 0x45C(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___SetControlOffset_1_1_2_Control__Const; // 0x464(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URigVMMemory_Literal_IB* GetDefaultObj();

};

// 0x1488 (0x14B0 - 0x28)
// RigVMMemoryStorageGeneratorClass CR_IK_Bipeds.RigVMMemory_Work
class URigVMMemory_Work_IB : public URigVMMemoryStorage
{
public:
	struct FControlRigExecuteContext             ExecuteContext_;                                   // 0x28(0x38)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___GetTransform_8_3_2_2_1_1_Transform;   // 0x60(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_8_3_2_2_1_1_CachedIndex; // 0xC0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_4_2_1_2_2_1_1_CachedIndex; // 0xD0(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___GetTransform_8_3_3_2_1_1_Transform;   // 0xE0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_8_3_3_2_1_1_CachedIndex; // 0x140(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_4_2_1_3_2_1_1_CachedIndex; // 0x150(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___GetTransform_8_3_2_2_2_Transform;     // 0x160(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_8_3_2_2_2_CachedIndex;   // 0x1C0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_4_2_1_2_2_2_CachedIndex; // 0x1D0(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___GetTransform_8_3_3_2_2_Transform;     // 0x1E0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_8_3_3_2_2_CachedIndex;   // 0x240(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_4_2_1_3_2_2_CachedIndex; // 0x250(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetRelativeTransformForItem_CachedChild; // 0x260(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetRelativeTransformForItem_CachedParent; // 0x270(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetRelativeTransformForItem_1_CachedChild; // 0x280(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetRelativeTransformForItem_1_CachedParent; // 0x290(0x10)(Edit, EditConst, NonTransactional)
	uint8                                        RigVMModel___FootTracing_1_SphereTraceByTraceChannel_bHit : 1; // Mask: 0x1, PropSize: 0x10x2A0(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_248 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_35A0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RigVMModel___FootTracing_1_MathVectorAdd_Result;   // 0x2A8(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___FootTracing_1_GetTransform_Transform; // 0x2C0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___FootTracing_1_GetTransform_CachedIndex; // 0x320(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___FootTracing_1_MathVectorAdd_A;        // 0x330(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___FootTracing_1_MathVectorSub_Result;   // 0x348(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class ETraceTypeQuery                   RigVMModel___FootTracing_1_Select_6_Result;        // 0x360(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35A1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RigVMModel___FootTracing_1_Select_6_Index;         // 0x364(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        IntEquals : 1;                                     // Mask: 0x1, PropSize: 0x10x368(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_249 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_35A2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RigVMModel___FootTracing_1_SphereTraceByTraceChannel_HitLocation; // 0x370(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___FootTracing_1_SphereTraceByTraceChannel_HitNormal; // 0x388(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___FootTracing_1_AccumulateVectorLerp_Result; // 0x3A0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___FootTracing_1_If_2_Result;            // 0x3B8(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                       RigVMModel___FootTracing_1_AccumulateVectorLerp_AccumulatedValue; // 0x3D0(0x10)(Edit, EditConst, NonTransactional)
	uint8                                        RigVMModel___FootTracing_1_1_SphereTraceByTraceChannel_bHit : 1; // Mask: 0x1, PropSize: 0x10x3E0(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_24A : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_35A3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RigVMModel___FootTracing_1_1_MathVectorAdd_Result; // 0x3E8(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___FootTracing_1_1_GetTransform_Transform; // 0x400(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___FootTracing_1_1_GetTransform_CachedIndex; // 0x460(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___FootTracing_1_1_MathVectorAdd_A;      // 0x470(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___FootTracing_1_1_MathVectorSub_Result; // 0x488(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class ETraceTypeQuery                   RigVMModel___FootTracing_1_1_Select_6_Result;      // 0x4A0(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35A4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RigVMModel___FootTracing_1_1_Select_6_Index;       // 0x4A4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___FootTracing_1_1_SphereTraceByTraceChannel_HitLocation; // 0x4A8(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___FootTracing_1_1_SphereTraceByTraceChannel_HitNormal; // 0x4C0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___FootTracing_1_1_AccumulateVectorLerp_Result; // 0x4D8(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___FootTracing_1_1_If_2_Result;          // 0x4F0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                       RigVMModel___FootTracing_1_1_AccumulateVectorLerp_AccumulatedValue; // 0x508(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___AccumulateFloatLerp_Result;           // 0x518(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathFloatMin_1_1_1_Result;            // 0x51C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathFloatMin_1_1_1_A;                 // 0x520(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathFloatMin_1_1_1_B;                 // 0x524(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___AccumulateFloatLerp_InitialValue;     // 0x528(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35A5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___AccumulateFloatLerp_AccumulatedValue; // 0x530(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___MathTransformRotateVector_1_Result;   // 0x540(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35A6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___MathTransformInverse_1_Result;        // 0x560(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___GetTransform_1_Transform;             // 0x5C0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_1_CachedIndex;           // 0x620(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___MathTransformRotateVector_1_Vector__IO; // 0x630(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35A7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___RigUnit_SetTransform_1_1_1_Value__IO; // 0x650(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_1_1_1_CachedIndex; // 0x6B0(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___MathTransformRotateVector_1_1_Result; // 0x6C0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35A8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___MathTransformInverse_1_1_Result;      // 0x6E0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___GetTransform_1_1_Transform;           // 0x740(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_1_1_CachedIndex;         // 0x7A0(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___MathTransformRotateVector_1_1_Vector__IO; // 0x7B0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35A9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___OffsetTransformForItem_1_OffsetTransform__IO; // 0x7D0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___OffsetTransformForItem_1_CachedIndex; // 0x830(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___Process_FootOffset_MathTransformRotateVector_1_1_1_Result; // 0x840(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35AA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___Process_FootOffset_MathTransformInverse_1_1_1_Result; // 0x860(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___Process_FootOffset_GetRelativeTransformForItem_RelativeTransform; // 0x8C0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___Process_FootOffset_GetRelativeTransformForItem_CachedChild; // 0x920(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___Process_FootOffset_GetRelativeTransformForItem_CachedParent; // 0x930(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___Process_FootOffset_AccumulateFloatLerp_Result; // 0x940(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootOffset_If_Result;         // 0x944(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___Process_FootOffset_If_Condition : 1;  // Mask: 0x1, PropSize: 0x10x948(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_24B : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_35AB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RigVMModel___Process_FootOffset_MathFloatSub_Result; // 0x94C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootOffset_MathFloatSub_A;    // 0x950(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootOffset_MathFloatSub_B;    // 0x954(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootOffset_If_False;          // 0x958(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootOffset_AccumulateFloatLerp_InitialValue; // 0x95C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                RigVMModel___Process_FootOffset_AccumulateFloatLerp_AccumulatedValue; // 0x960(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___Process_FootOffset_MathTransformRotateVector_1_1_1_Vector__IO; // 0x970(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35AC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___Process_FootOffset_OffsetTransformForItem_2_OffsetTransform__IO; // 0x990(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___Process_FootOffset_OffsetTransformForItem_2_CachedIndex; // 0x9F0(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___Process_FootOffset_MathQuaternionMul_Result; // 0xA00(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___Process_FootOffset_AimBoneMath_Result; // 0xA20(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___Process_FootOffset_GetTransform_Transform; // 0xA80(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___Process_FootOffset_GetTransform_CachedIndex; // 0xAE0(0x10)(Edit, EditConst, NonTransactional)
	struct FRigUnit_AimItem_Target               RigVMModel___Process_FootOffset_AimBoneMath_Primary__IO; // 0xAF0(0x48)(Edit, EditConst, NonTransactional, NoDestructor)
	TArray<struct FCachedRigElement>             RigVMModel___Process_FootOffset_AimBoneMath_PrimaryCachedSpace; // 0xB38(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___Process_FootOffset_AimBoneMath_SecondaryCachedSpace; // 0xB48(0x10)(Edit, EditConst, NonTransactional)
	uint8                                        Pad_35AD[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RigVMModel___Process_FootOffset_MathQuaternionMul_A; // 0xB60(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___Process_FootOffset_MathQuaternionMul_B; // 0xB80(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___Process_FootOffset_SetRotation_CachedIndex; // 0xBA0(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___Process_FootOffset_1_MathTransformRotateVector_1_1_1_Result; // 0xBB0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35AE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___Process_FootOffset_1_MathTransformInverse_1_1_1_Result; // 0xBD0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___Process_FootOffset_1_GetRelativeTransformForItem_RelativeTransform; // 0xC30(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___Process_FootOffset_1_GetRelativeTransformForItem_CachedChild; // 0xC90(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___Process_FootOffset_1_GetRelativeTransformForItem_CachedParent; // 0xCA0(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___Process_FootOffset_1_AccumulateFloatLerp_Result; // 0xCB0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootOffset_1_If_Result;       // 0xCB4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___Process_FootOffset_1_If_Condition : 1; // Mask: 0x1, PropSize: 0x10xCB8(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_24C : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_35AF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RigVMModel___Process_FootOffset_1_MathFloatSub_Result; // 0xCBC(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootOffset_1_MathFloatSub_A;  // 0xCC0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootOffset_1_MathFloatSub_B;  // 0xCC4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootOffset_1_If_False;        // 0xCC8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootOffset_1_AccumulateFloatLerp_InitialValue; // 0xCCC(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                RigVMModel___Process_FootOffset_1_AccumulateFloatLerp_AccumulatedValue; // 0xCD0(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___Process_FootOffset_1_MathTransformRotateVector_1_1_1_Vector__IO; // 0xCE0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35B0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___Process_FootOffset_1_OffsetTransformForItem_2_OffsetTransform__IO; // 0xD00(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___Process_FootOffset_1_OffsetTransformForItem_2_CachedIndex; // 0xD60(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___Process_FootOffset_1_MathQuaternionMul_Result; // 0xD70(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___Process_FootOffset_1_AimBoneMath_Result; // 0xD90(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___Process_FootOffset_1_GetTransform_Transform; // 0xDF0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___Process_FootOffset_1_GetTransform_CachedIndex; // 0xE50(0x10)(Edit, EditConst, NonTransactional)
	struct FRigUnit_AimItem_Target               RigVMModel___Process_FootOffset_1_AimBoneMath_Primary__IO; // 0xE60(0x48)(Edit, EditConst, NonTransactional, NoDestructor)
	TArray<struct FCachedRigElement>             RigVMModel___Process_FootOffset_1_AimBoneMath_PrimaryCachedSpace; // 0xEA8(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___Process_FootOffset_1_AimBoneMath_SecondaryCachedSpace; // 0xEB8(0x10)(Edit, EditConst, NonTransactional)
	uint8                                        Pad_35B1[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RigVMModel___Process_FootOffset_1_MathQuaternionMul_A; // 0xED0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___Process_FootOffset_1_MathQuaternionMul_B; // 0xEF0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___Process_FootOffset_1_SetRotation_CachedIndex; // 0xF10(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___GetTransform_9_1_Transform;           // 0xF20(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_9_1_CachedIndex;         // 0xF80(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetTransform_2_2_1_CachedIndex;       // 0xF90(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___MathVectorLength_Result;              // 0xFA0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35B2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RigVMModel___MathVectorSub_Result;                 // 0xFA8(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_3_1_1_Transform; // 0xFC0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_3_1_1_CachedIndex; // 0x1020(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___MathVectorSub_A;                      // 0x1030(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35B3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___RigUnit_GetTransform_3_1_Transform;   // 0x1050(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_3_1_CachedIndex; // 0x10B0(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___MathVectorSub_B;                      // 0x10C0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathVectorLength_1_Result;            // 0x10D8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35B4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RigVMModel___MathVectorSub_1_Result;               // 0x10E0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35B5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___RigUnit_GetTransform_3_1_1_1_Transform; // 0x1100(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_3_1_1_1_CachedIndex; // 0x1160(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___MathVectorSub_1_A;                    // 0x1170(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35B6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___RigUnit_GetTransform_3_2_Transform;   // 0x1190(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_3_2_CachedIndex; // 0x11F0(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___MathVectorSub_1_B;                    // 0x1200(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35B7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___RigUnit_GetTransform_4_Transform;     // 0x1220(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_4_CachedIndex;   // 0x1280(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetControlOffset_CachedControlIndex;  // 0x1290(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_1_1_Transform;   // 0x12A0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_1_1_CachedIndex; // 0x1300(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetControlOffset_1_CachedControlIndex; // 0x1310(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetControlOffset_1_2_CachedControlIndex; // 0x1320(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_1_1_1_Transform; // 0x1330(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_1_1_1_CachedIndex; // 0x1390(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetControlOffset_1_1_CachedControlIndex; // 0x13A0(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_1_1_1_1_Transform; // 0x13B0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_1_1_1_1_CachedIndex; // 0x1410(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetControlOffset_1_1_1_CachedControlIndex; // 0x1420(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_1_1_2_Transform; // 0x1430(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_1_1_2_CachedIndex; // 0x1490(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetControlOffset_1_1_2_CachedControlIndex; // 0x14A0(0x10)(Edit, EditConst, NonTransactional)

	static class UClass* StaticClass();
	static class URigVMMemory_Work_IB* GetDefaultObj();

};

}


