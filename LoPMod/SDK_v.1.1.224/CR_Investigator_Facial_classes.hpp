#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x5A0 - 0x560)
// ControlRigBlueprintGeneratedClass CR_Investigator_Facial.CR_Investigator_Facial_C
class UCR_Investigator_Facial_C : public UControlRig
{
public:
	double                                       Anger;                                             // 0x560(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Pain;                                              // 0x568(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       blinkTriggerEvent;                                 // 0x570(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       JawUpper_coef;                                     // 0x578(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       brow_dist;                                         // 0x580(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Nose_dist;                                         // 0x588(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Cheek_dist;                                        // 0x590(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       GetAngleMid;                                       // 0x598(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCR_Investigator_Facial_C* GetDefaultObj();

};

// 0x468 (0x490 - 0x28)
// RigVMMemoryStorageGeneratorClass CR_Investigator_Facial.RigVMMemory_Literal
class URigVMMemory_Literal_IF : public URigVMMemoryStorage
{
public:
	class FString                                RigVMModel___SetControlVisibility_Pattern__Const;  // 0x28(0x10)(Edit, ZeroConstructor, EditConst, NonTransactional, HasGetValueTypeHash)
	uint8                                        RigVMModel___SetControlVisibility_bVisible__Const : 1; // Mask: 0x1, PropSize: 0x10x38(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_28C : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_42BF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  RigVMModel___CollectionNameSearchArray_3_PartialName__Const; // 0x3C(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class ERigElementType                   RigVMModel___CollectionNameSearchArray_3_TypeToSearch__Const; // 0x44(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42C0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        RigVMModel___RigUnit_SetTransform_1_1_1_Item__Const; // 0x48(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class EBoneGetterSetterMode             RigVMModel___RigUnit_SetTransform_1_1_1_Space__Const; // 0x54(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42C1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        RigVMModel___RigUnit_GetTransform_1_1_1_Item__Const; // 0x58(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___RigUnit_SetTransform_1_1_1_Weight__Const; // 0x64(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___RigUnit_SetTransform_1_1_1_bPropagateToChildren__Const : 1; // Mask: 0x1, PropSize: 0x10x68(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_28D : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_42C2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  RigVMModel___SetCurveValue_Curve__Const;           // 0x6C(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___Random_1_2_Seed__Const;               // 0x74(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Random_1_2_Minimum__Const;            // 0x78(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Random_1_2_Maximum__Const;            // 0x7C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Random_1_2_Duration__Const;           // 0x80(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___AccumulateLerp_1_2_InitialValue__Const; // 0x84(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___AccumulateLerp_1_2_Blend__Const;      // 0x88(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___BlinkInterpolate_Set_Transform_2_Item__Const; // 0x8C(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___BlinkInterpolate_RigUnit_GetTransform_1_1_Item__Const; // 0x98(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42C3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    RigVMModel___AnimEvalRichCurve_Curve__Const;       // 0xA8(0x88)(Edit, EditConst, NonTransactional)
	double                                       RigVMModel___Multiply_5_1_B__Const;                // 0x130(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___Clamp_1_1_Minimum__Const;             // 0x138(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___Clamp_1_1_Maximum__Const;             // 0x140(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___BlinkInterpolate_Remap_1_SourceMaximum__Const; // 0x148(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___BlinkInterpolate_Remap_1_TargetMaximum__Const; // 0x150(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___BlinkInterpolate_Remap_1_1_TargetMaximum__Const; // 0x158(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___BlinkInterpolate_1_Set_Transform_2_Item__Const; // 0x160(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___BlinkInterpolate_1_RigUnit_GetTransform_1_1_Item__Const; // 0x16C(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___BlinkInterpolate_2_Set_Transform_2_Item__Const; // 0x178(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___BlinkInterpolate_2_RigUnit_GetTransform_1_1_Item__Const; // 0x184(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___BlinkInterpolate_3_Set_Transform_2_Item__Const; // 0x190(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___BlinkInterpolate_3_RigUnit_GetTransform_1_1_Item__Const; // 0x19C(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___BlinkInterpolate_1_1_Set_Transform_2_Item__Const; // 0x1A8(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___BlinkInterpolate_1_1_RigUnit_GetTransform_1_1_Item__Const; // 0x1B4(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___BlinkInterpolate_2_1_Set_Transform_2_Item__Const; // 0x1C0(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___BlinkInterpolate_2_1_RigUnit_GetTransform_1_1_Item__Const; // 0x1CC(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___ParentConstraint_2_1_Child__Const;    // 0x1D8(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___Replace_1_1_New__Const;               // 0x1E4(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransformFilter                      RigVMModel___ParentConstraint_2_1_Filter__Const;   // 0x1EC(0x9)(Edit, EditConst, NonTransactional, NoDestructor)
	uint8                                        Pad_42C4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FConstraintParent>             RigVMModel___ParentConstraint_2_1_Parents__Const;  // 0x1F8(0x10)(Edit, EditConst, NonTransactional)
	struct FRigUnit_ParentConstraint_AdvancedSettings RigVMModel___ParentConstraint_2_1_AdvancedSettings__Const; // 0x208(0x2)(Edit, EditConst, NonTransactional, NoDestructor)
	uint8                                        Pad_42C5[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  RigVMModel___CollectionNameSearchArray_4_PartialName__Const; // 0x20C(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___DISPATCH_RigDispatch_SetMetadata_Item__Const; // 0x214(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___DISPATCH_RigDispatch_SetMetadata_Name__Const; // 0x220(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                RigVMModel___DISPATCH_RigDispatch_SetMetadata_Value__Const; // 0x228(0x10)(Edit, EditConst, NonTransactional)
	class FName                                  RigVMModel___DISPATCH_RigDispatch_SetMetadata_2_Name__Const; // 0x238(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FRigElementKey>                RigVMModel___CollectionItems_Items__Const;         // 0x240(0x10)(Edit, EditConst, NonTransactional)
	class FName                                  RigVMModel___fTriggerExpression2_Concat_1_A__Const; // 0x250(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___fTriggerExpression2_Concat_1_1_B__Const; // 0x258(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                RigVMModel___fTriggerExpression2_DISPATCH_RigDispatch_GetMetadata_Default__Const; // 0x260(0x10)(Edit, EditConst, NonTransactional)
	int32                                        RigVMModel___fTriggerExpression2_Random_3_1_1_1_1_2_Seed__Const; // 0x270(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression2_Random_3_1_1_1_1_2_Minimum__Const; // 0x274(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression2_Random_3_1_1_1_1_2_Duration__Const; // 0x278(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___fTriggerExpression2_Concat_A__Const;  // 0x27C(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___fTriggerExpression2_Concat_1_B__Const; // 0x284(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42C6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                RigVMModel___fTriggerExpression2_DISPATCH_RigDispatch_GetMetadata_1_Default__Const; // 0x290(0x10)(Edit, EditConst, NonTransactional)
	struct FRigElementKey                        RigVMModel___DISPATCH_RigDispatch_SetMetadata_1_Item__Const; // 0x2A0(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___DISPATCH_RigDispatch_SetMetadata_1_Name__Const; // 0x2AC(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42C7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___DISPATCH_RigDispatch_SetMetadata_1_Value__Const; // 0x2B8(0x10)(Edit, EditConst, NonTransactional)
	class FName                                  RigVMModel___DISPATCH_RigDispatch_SetMetadata_2_1_Name__Const; // 0x2C8(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FRigElementKey>                RigVMModel___CollectionItems_1_Items__Const;       // 0x2D0(0x10)(Edit, EditConst, NonTransactional)
	class FName                                  RigVMModel___fTriggerExpression2_1_Concat_1_A__Const; // 0x2E0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42C8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___Set_Transform_1_1_Value__Const;       // 0x2F0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___GetTransform_1_Item__Const;           // 0x350(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42C9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_AimItem_Target               RigVMModel___AimBoneMath_Primary__Const;           // 0x360(0x48)(Edit, EditConst, NonTransactional, NoDestructor)
	struct FRigUnit_AimItem_Target               RigVMModel___AimBoneMath_Secondary__Const;         // 0x3A8(0x48)(Edit, EditConst, NonTransactional, NoDestructor)
	struct FRigUnit_AimBone_DebugSettings        RigVMModel___AimBoneMath_DebugSettings__Const;     // 0x3F0(0x70)(Edit, EditConst, NonTransactional, NoDestructor)
	TArray<struct FRigElementKey>                RigVMModel___ArrayIterator_3_Array__Const;         // 0x460(0x10)(Edit, EditConst, NonTransactional)
	struct FRigElementKey                        RigVMModel___GetTransform_1_1_Item__Const;         // 0x470(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42CA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                RigVMModel___ArrayIterator_3_1_Array__Const;       // 0x480(0x10)(Edit, EditConst, NonTransactional)

	static class UClass* StaticClass();
	static class URigVMMemory_Literal_IF* GetDefaultObj();

};

// 0x1FF5 (0x201D - 0x28)
// RigVMMemoryStorageGeneratorClass CR_Investigator_Facial.RigVMMemory_Work
class URigVMMemory_Work_IF : public URigVMMemoryStorage
{
public:
	struct FControlRigExecuteContext             ExecuteContext_;                                   // 0x28(0x38)(Edit, EditConst, NonTransactional)
	struct FRigElementKey                        RigVMModel___ArrayIterator_5_Element;              // 0x60(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42CB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TArray<struct FCachedRigElement>>     RigVMModel___SetControlVisibility_CachedControlIndices; // 0x70(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FRigElementKey>                RigVMModel___CollectionNameSearchArray_3_Items;    // 0x80(0x10)(Edit, EditConst, NonTransactional)
	int32                                        RigVMModel___ArrayIterator_5_Index;                // 0x90(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___ArrayIterator_5_Count;                // 0x94(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___ArrayIterator_5_Ratio;                // 0x98(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___ArrayIterator_5_Continue : 1;         // Mask: 0x1, PropSize: 0x10x9C(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_28E : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_42CC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___RigUnit_GetTransform_1_1_1_Transform; // 0xA0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_1_1_1_CachedIndex; // 0x100(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_1_1_1_CachedIndex; // 0x110(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___AccumulateLerp_1_2_Result;            // 0x120(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42CD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___Multiply_4_1_2_Result;                // 0x128(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Random_1_2_Result;                    // 0x130(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42D0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___Random_1_2_LastResult;                // 0x138(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___Random_1_2_LastSeed;                  // 0x148(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___Random_1_2_BaseSeed;                  // 0x158(0x10)(Edit, EditConst, NonTransactional)
	TArray<float>                                RigVMModel___Random_1_2_TimeLeft;                  // 0x168(0x10)(Edit, EditConst, NonTransactional)
	double                                       RigVMModel___Multiply_4_1_2_B;                     // 0x178(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___AccumulateLerp_1_2_TargetValue;       // 0x180(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42D1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___AccumulateLerp_1_2_AccumulatedValue;  // 0x188(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetCurveValue_CachedCurveIndex;       // 0x198(0x10)(Edit, EditConst, NonTransactional)
	uint8                                        Pad_42D2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RigVMModel___BlinkInterpolate_Multiply_2_Result;   // 0x1B0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___BlinkInterpolate_Multiply_Result;     // 0x1D0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___BlinkInterpolate_Interpolate_1_Result; // 0x1F0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___BlinkInterpolate_RigUnit_GetTransform_4_Transform; // 0x210(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___BlinkInterpolate_RigUnit_GetTransform_4_CachedIndex; // 0x270(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___BlinkInterpolate_Interpolate_1_A;     // 0x280(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___BlinkInterpolate_RigUnit_GetTransform_1_1_Transform; // 0x2A0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___BlinkInterpolate_RigUnit_GetTransform_1_1_CachedIndex; // 0x300(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___BlinkInterpolate_Interpolate_1_B;     // 0x310(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___BlinkInterpolate_Remap_1_Result;      // 0x330(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___Clamp_1_1_Result;                     // 0x338(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___Add_2_Result;                         // 0x340(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___AnimEvalRichCurve_Result;             // 0x348(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___AnimEvalRichCurve_Value;              // 0x34C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___Add_2_A;                              // 0x350(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___Multiply_5_1_Result;                  // 0x358(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___Maximum_Result;                       // 0x360(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___BlinkInterpolate_Interpolate_1_T;     // 0x368(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42D3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___BlinkInterpolate_RigUnit_GetTransform_1_1_1_Transform; // 0x370(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___BlinkInterpolate_RigUnit_GetTransform_1_1_1_CachedIndex; // 0x3D0(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___BlinkInterpolate_Multiply_B;          // 0x3E0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___BlinkInterpolate_Inverse_Result;      // 0x400(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___BlinkInterpolate_RigUnit_GetTransform_1_1_1_1_Transform; // 0x420(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___BlinkInterpolate_RigUnit_GetTransform_1_1_1_1_CachedIndex; // 0x480(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___BlinkInterpolate_Inverse_Value;       // 0x490(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___BlinkInterpolate_Set_Transform_2_CachedIndex; // 0x4B0(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___BlinkInterpolate_Multiply_1_1_Result; // 0x4C0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___BlinkInterpolate_Multiply_1_Result;   // 0x4E0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___BlinkInterpolate_Interpolate_1_1_Result; // 0x500(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___BlinkInterpolate_Remap_1_1_Result;    // 0x520(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___BlinkInterpolate_Interpolate_1_1_T;   // 0x528(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42D4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___BlinkInterpolate_Set_Transform_1_2_CachedIndex; // 0x530(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___BlinkInterpolate_1_Multiply_2_Result; // 0x540(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___BlinkInterpolate_1_Multiply_Result;   // 0x560(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___BlinkInterpolate_1_Interpolate_1_Result; // 0x580(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___BlinkInterpolate_1_RigUnit_GetTransform_4_Transform; // 0x5A0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___BlinkInterpolate_1_RigUnit_GetTransform_4_CachedIndex; // 0x600(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___BlinkInterpolate_1_Interpolate_1_A;   // 0x610(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___BlinkInterpolate_1_RigUnit_GetTransform_1_1_Transform; // 0x630(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___BlinkInterpolate_1_RigUnit_GetTransform_1_1_CachedIndex; // 0x690(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___BlinkInterpolate_1_Interpolate_1_B;   // 0x6A0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___BlinkInterpolate_1_Remap_1_Result;    // 0x6C0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___BlinkInterpolate_1_Interpolate_1_T;   // 0x6C8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42D5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___BlinkInterpolate_1_RigUnit_GetTransform_1_1_1_Transform; // 0x6D0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___BlinkInterpolate_1_RigUnit_GetTransform_1_1_1_CachedIndex; // 0x730(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___BlinkInterpolate_1_Multiply_B;        // 0x740(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___BlinkInterpolate_1_Inverse_Result;    // 0x760(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___BlinkInterpolate_1_RigUnit_GetTransform_1_1_1_1_Transform; // 0x780(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___BlinkInterpolate_1_RigUnit_GetTransform_1_1_1_1_CachedIndex; // 0x7E0(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___BlinkInterpolate_1_Inverse_Value;     // 0x7F0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___BlinkInterpolate_1_Set_Transform_2_CachedIndex; // 0x810(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___BlinkInterpolate_1_Multiply_1_1_Result; // 0x820(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___BlinkInterpolate_1_Multiply_1_Result; // 0x840(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___BlinkInterpolate_1_Interpolate_1_1_Result; // 0x860(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___BlinkInterpolate_1_Remap_1_1_Result;  // 0x880(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___BlinkInterpolate_1_Interpolate_1_1_T; // 0x888(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42D6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___BlinkInterpolate_1_Set_Transform_1_2_CachedIndex; // 0x890(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___BlinkInterpolate_2_Multiply_2_Result; // 0x8A0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___BlinkInterpolate_2_Multiply_Result;   // 0x8C0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___BlinkInterpolate_2_Interpolate_1_Result; // 0x8E0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___BlinkInterpolate_2_RigUnit_GetTransform_4_Transform; // 0x900(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___BlinkInterpolate_2_RigUnit_GetTransform_4_CachedIndex; // 0x960(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___BlinkInterpolate_2_Interpolate_1_A;   // 0x970(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___BlinkInterpolate_2_RigUnit_GetTransform_1_1_Transform; // 0x990(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___BlinkInterpolate_2_RigUnit_GetTransform_1_1_CachedIndex; // 0x9F0(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___BlinkInterpolate_2_Interpolate_1_B;   // 0xA00(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___BlinkInterpolate_2_Remap_1_Result;    // 0xA20(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___BlinkInterpolate_2_Interpolate_1_T;   // 0xA28(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42D7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___BlinkInterpolate_2_RigUnit_GetTransform_1_1_1_Transform; // 0xA30(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___BlinkInterpolate_2_RigUnit_GetTransform_1_1_1_CachedIndex; // 0xA90(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___BlinkInterpolate_2_Multiply_B;        // 0xAA0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___BlinkInterpolate_2_Inverse_Result;    // 0xAC0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___BlinkInterpolate_2_RigUnit_GetTransform_1_1_1_1_Transform; // 0xAE0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___BlinkInterpolate_2_RigUnit_GetTransform_1_1_1_1_CachedIndex; // 0xB40(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___BlinkInterpolate_2_Inverse_Value;     // 0xB50(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___BlinkInterpolate_2_Set_Transform_2_CachedIndex; // 0xB70(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___BlinkInterpolate_2_Multiply_1_1_Result; // 0xB80(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___BlinkInterpolate_2_Multiply_1_Result; // 0xBA0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___BlinkInterpolate_2_Interpolate_1_1_Result; // 0xBC0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___BlinkInterpolate_2_Remap_1_1_Result;  // 0xBE0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___BlinkInterpolate_2_Interpolate_1_1_T; // 0xBE8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42D8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___BlinkInterpolate_2_Set_Transform_1_2_CachedIndex; // 0xBF0(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___BlinkInterpolate_3_Multiply_2_Result; // 0xC00(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___BlinkInterpolate_3_Multiply_Result;   // 0xC20(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___BlinkInterpolate_3_Interpolate_1_Result; // 0xC40(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___BlinkInterpolate_3_RigUnit_GetTransform_4_Transform; // 0xC60(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___BlinkInterpolate_3_RigUnit_GetTransform_4_CachedIndex; // 0xCC0(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___BlinkInterpolate_3_Interpolate_1_A;   // 0xCD0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___BlinkInterpolate_3_RigUnit_GetTransform_1_1_Transform; // 0xCF0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___BlinkInterpolate_3_RigUnit_GetTransform_1_1_CachedIndex; // 0xD50(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___BlinkInterpolate_3_Interpolate_1_B;   // 0xD60(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___BlinkInterpolate_3_Remap_1_Result;    // 0xD80(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___Clamp_1_Result;                       // 0xD88(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___BlinkInterpolate_3_Interpolate_1_T;   // 0xD90(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42D9[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___BlinkInterpolate_3_RigUnit_GetTransform_1_1_1_Transform; // 0xDA0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___BlinkInterpolate_3_RigUnit_GetTransform_1_1_1_CachedIndex; // 0xE00(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___BlinkInterpolate_3_Multiply_B;        // 0xE10(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___BlinkInterpolate_3_Inverse_Result;    // 0xE30(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___BlinkInterpolate_3_RigUnit_GetTransform_1_1_1_1_Transform; // 0xE50(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___BlinkInterpolate_3_RigUnit_GetTransform_1_1_1_1_CachedIndex; // 0xEB0(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___BlinkInterpolate_3_Inverse_Value;     // 0xEC0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___BlinkInterpolate_3_Set_Transform_2_CachedIndex; // 0xEE0(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___BlinkInterpolate_3_Multiply_1_1_Result; // 0xEF0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___BlinkInterpolate_3_Multiply_1_Result; // 0xF10(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___BlinkInterpolate_3_Interpolate_1_1_Result; // 0xF30(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___BlinkInterpolate_3_Remap_1_1_Result;  // 0xF50(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___BlinkInterpolate_3_Interpolate_1_1_T; // 0xF58(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42DA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___BlinkInterpolate_3_Set_Transform_1_2_CachedIndex; // 0xF60(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___BlinkInterpolate_1_1_Multiply_2_Result; // 0xF70(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___BlinkInterpolate_1_1_Multiply_Result; // 0xF90(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___BlinkInterpolate_1_1_Interpolate_1_Result; // 0xFB0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___BlinkInterpolate_1_1_RigUnit_GetTransform_4_Transform; // 0xFD0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___BlinkInterpolate_1_1_RigUnit_GetTransform_4_CachedIndex; // 0x1030(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___BlinkInterpolate_1_1_Interpolate_1_A; // 0x1040(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___BlinkInterpolate_1_1_RigUnit_GetTransform_1_1_Transform; // 0x1060(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___BlinkInterpolate_1_1_RigUnit_GetTransform_1_1_CachedIndex; // 0x10C0(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___BlinkInterpolate_1_1_Interpolate_1_B; // 0x10D0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___BlinkInterpolate_1_1_Remap_1_Result;  // 0x10F0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___BlinkInterpolate_1_1_Interpolate_1_T; // 0x10F8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42DB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___BlinkInterpolate_1_1_RigUnit_GetTransform_1_1_1_Transform; // 0x1100(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___BlinkInterpolate_1_1_RigUnit_GetTransform_1_1_1_CachedIndex; // 0x1160(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___BlinkInterpolate_1_1_Multiply_B;      // 0x1170(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___BlinkInterpolate_1_1_Inverse_Result;  // 0x1190(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___BlinkInterpolate_1_1_RigUnit_GetTransform_1_1_1_1_Transform; // 0x11B0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___BlinkInterpolate_1_1_RigUnit_GetTransform_1_1_1_1_CachedIndex; // 0x1210(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___BlinkInterpolate_1_1_Inverse_Value;   // 0x1220(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___BlinkInterpolate_1_1_Set_Transform_2_CachedIndex; // 0x1240(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___BlinkInterpolate_1_1_Multiply_1_1_Result; // 0x1250(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___BlinkInterpolate_1_1_Multiply_1_Result; // 0x1270(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___BlinkInterpolate_1_1_Interpolate_1_1_Result; // 0x1290(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___BlinkInterpolate_1_1_Remap_1_1_Result; // 0x12B0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___BlinkInterpolate_1_1_Interpolate_1_1_T; // 0x12B8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42DC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___BlinkInterpolate_1_1_Set_Transform_1_2_CachedIndex; // 0x12C0(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___BlinkInterpolate_2_1_Multiply_2_Result; // 0x12D0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___BlinkInterpolate_2_1_Multiply_Result; // 0x12F0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___BlinkInterpolate_2_1_Interpolate_1_Result; // 0x1310(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___BlinkInterpolate_2_1_RigUnit_GetTransform_4_Transform; // 0x1330(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___BlinkInterpolate_2_1_RigUnit_GetTransform_4_CachedIndex; // 0x1390(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___BlinkInterpolate_2_1_Interpolate_1_A; // 0x13A0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___BlinkInterpolate_2_1_RigUnit_GetTransform_1_1_Transform; // 0x13C0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___BlinkInterpolate_2_1_RigUnit_GetTransform_1_1_CachedIndex; // 0x1420(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___BlinkInterpolate_2_1_Interpolate_1_B; // 0x1430(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___BlinkInterpolate_2_1_Remap_1_Result;  // 0x1450(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___BlinkInterpolate_2_1_Interpolate_1_T; // 0x1458(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42DD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___BlinkInterpolate_2_1_RigUnit_GetTransform_1_1_1_Transform; // 0x1460(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___BlinkInterpolate_2_1_RigUnit_GetTransform_1_1_1_CachedIndex; // 0x14C0(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___BlinkInterpolate_2_1_Multiply_B;      // 0x14D0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___BlinkInterpolate_2_1_Inverse_Result;  // 0x14F0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___BlinkInterpolate_2_1_RigUnit_GetTransform_1_1_1_1_Transform; // 0x1510(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___BlinkInterpolate_2_1_RigUnit_GetTransform_1_1_1_1_CachedIndex; // 0x1570(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___BlinkInterpolate_2_1_Inverse_Value;   // 0x1580(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___BlinkInterpolate_2_1_Set_Transform_2_CachedIndex; // 0x15A0(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___BlinkInterpolate_2_1_Multiply_1_1_Result; // 0x15B0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___BlinkInterpolate_2_1_Multiply_1_Result; // 0x15D0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___BlinkInterpolate_2_1_Interpolate_1_1_Result; // 0x15F0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___BlinkInterpolate_2_1_Remap_1_1_Result; // 0x1610(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___BlinkInterpolate_2_1_Interpolate_1_1_T; // 0x1618(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42DE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___BlinkInterpolate_2_1_Set_Transform_1_2_CachedIndex; // 0x1620(0x10)(Edit, EditConst, NonTransactional)
	class FName                                  RigVMModel___Replace_1_1_Result;                   // 0x1630(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___ArrayIterator_2_1_1_Element;          // 0x1638(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___Replace_1_1_Name;                     // 0x1644(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___ParentConstraint_2_1_Child__IO;       // 0x164C(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FConstraintParent>             RigVMModel___ParentConstraint_2_1_Parents__IO;     // 0x1658(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___ParentConstraint_2_1_ChildCache;      // 0x1668(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<struct FCachedRigElement>>     RigVMModel___ParentConstraint_2_1_ParentCaches;    // 0x1678(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FRigElementKey>                RigVMModel___CollectionNameSearchArray_4_Items;    // 0x1688(0x10)(Edit, EditConst, NonTransactional)
	int32                                        RigVMModel___ArrayIterator_2_1_1_Index;            // 0x1698(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___ArrayIterator_2_1_1_Count;            // 0x169C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___ArrayIterator_2_1_1_Ratio;            // 0x16A0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___ArrayIterator_2_1_1_Continue : 1;     // Mask: 0x1, PropSize: 0x10x16A4(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_28F : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_42DF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___DISPATCH_RigDispatch_SetMetadata_Cache; // 0x16A8(0x10)(Edit, EditConst, NonTransactional)
	uint8                                        RigVMModel___DISPATCH_RigDispatch_SetMetadata_Success : 1; // Mask: 0x1, PropSize: 0x10x16B8(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_290 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_42E0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___DISPATCH_RigDispatch_SetMetadata_2_Cache; // 0x16C0(0x10)(Edit, EditConst, NonTransactional)
	struct FRigElementKeyCollection              RigVMModel___CollectionItems_Collection;           // 0x16D0(0x10)(Edit, EditConst, NonTransactional, HasGetValueTypeHash)
	TArray<struct FRigElementKey>                RigVMModel___DISPATCH_RigDispatch_SetMetadata_2_Value; // 0x16E0(0x10)(Edit, EditConst, NonTransactional)
	uint8                                        RigVMModel___DISPATCH_RigDispatch_SetMetadata_2_Success : 1; // Mask: 0x1, PropSize: 0x10x16F0(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_291 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        RigVMModel___fTriggerExpression2_DISPATCH_RigDispatch_CoreNotEquals_Result : 1; // Mask: 0x1, PropSize: 0x10x16F1(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_292 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_42E1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RigVMModel___fTriggerExpression2_DISPATCH_RigDispatch_CoreNotEquals_A; // 0x16F4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___fTriggerExpression2_ArrayIterator_1_Element; // 0x16F8(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___fTriggerExpression2_SetCurveValue_4_1_2_Curve; // 0x1704(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression2_AccumulateLerp_1_1_1_1_1_2_Result; // 0x170C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression2_Multiply_1_1_1_1_2_Result; // 0x1710(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression2_Clamp_1_2_Result; // 0x1718(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression2_ArrayGetAtIndex_Element; // 0x1720(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                RigVMModel___fTriggerExpression2_DISPATCH_RigDispatch_GetMetadata_Value; // 0x1728(0x10)(Edit, EditConst, NonTransactional)
	class FName                                  RigVMModel___fTriggerExpression2_Concat_1_1_Result; // 0x1738(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___fTriggerExpression2_DISPATCH_RigDispatch_GetMetadata_Cache; // 0x1740(0x10)(Edit, EditConst, NonTransactional)
	uint8                                        RigVMModel___fTriggerExpression2_DISPATCH_RigDispatch_GetMetadata_Found : 1; // Mask: 0x1, PropSize: 0x10x1750(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_293 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_42E2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RigVMModel___fTriggerExpression2_ArrayIterator_1_Index; // 0x1754(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression2_Random_3_1_1_1_1_2_Result; // 0x1758(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42E3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression2_Random_3_1_1_1_1_2_LastResult; // 0x1760(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression2_Random_3_1_1_1_1_2_LastSeed; // 0x1770(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression2_Random_3_1_1_1_1_2_BaseSeed; // 0x1780(0x10)(Edit, EditConst, NonTransactional)
	TArray<float>                                RigVMModel___fTriggerExpression2_Random_3_1_1_1_1_2_TimeLeft; // 0x1790(0x10)(Edit, EditConst, NonTransactional)
	double                                       RigVMModel___fTriggerExpression2_Multiply_1_1_1_1_2_B; // 0x17A0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression2_AccumulateLerp_1_1_1_1_1_2_TargetValue; // 0x17A8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42E4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression2_AccumulateLerp_1_1_1_1_1_2_AccumulatedValue; // 0x17B0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___fTriggerExpression2_SetCurveValue_4_1_2_CachedCurveIndex; // 0x17C0(0x10)(Edit, EditConst, NonTransactional)
	class FName                                  RigVMModel___fTriggerExpression2_Concat_Result;    // 0x17D0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___fTriggerExpression2_SetCurveValue_4_1_2_1_CachedCurveIndex; // 0x17D8(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FRigElementKey>                RigVMModel___fTriggerExpression2_DISPATCH_RigDispatch_GetMetadata_1_Value; // 0x17E8(0x10)(Edit, EditConst, NonTransactional)
	class FName                                  RigVMModel___fTriggerExpression2_Concat_1_Result;  // 0x17F8(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___fTriggerExpression2_DISPATCH_RigDispatch_GetMetadata_1_Cache; // 0x1800(0x10)(Edit, EditConst, NonTransactional)
	uint8                                        RigVMModel___fTriggerExpression2_DISPATCH_RigDispatch_GetMetadata_1_Found : 1; // Mask: 0x1, PropSize: 0x10x1810(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_294 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_42E5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RigVMModel___fTriggerExpression2_ArrayIterator_1_Count; // 0x1814(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression2_ArrayIterator_1_Ratio; // 0x1818(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___fTriggerExpression2_ArrayIterator_1_Continue : 1; // Mask: 0x1, PropSize: 0x10x181C(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_295 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_42E6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___DISPATCH_RigDispatch_SetMetadata_1_Cache; // 0x1820(0x10)(Edit, EditConst, NonTransactional)
	uint8                                        RigVMModel___DISPATCH_RigDispatch_SetMetadata_1_Success : 1; // Mask: 0x1, PropSize: 0x10x1830(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_296 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_42E7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___DISPATCH_RigDispatch_SetMetadata_2_1_Cache; // 0x1838(0x10)(Edit, EditConst, NonTransactional)
	struct FRigElementKeyCollection              RigVMModel___CollectionItems_1_Collection;         // 0x1848(0x10)(Edit, EditConst, NonTransactional, HasGetValueTypeHash)
	TArray<struct FRigElementKey>                RigVMModel___DISPATCH_RigDispatch_SetMetadata_2_1_Value; // 0x1858(0x10)(Edit, EditConst, NonTransactional)
	uint8                                        RigVMModel___DISPATCH_RigDispatch_SetMetadata_2_1_Success : 1; // Mask: 0x1, PropSize: 0x10x1868(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_297 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        RigVMModel___fTriggerExpression2_1_DISPATCH_RigDispatch_CoreNotEquals_Result : 1; // Mask: 0x1, PropSize: 0x10x1869(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_298 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_42E8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RigVMModel___fTriggerExpression2_1_DISPATCH_RigDispatch_CoreNotEquals_A; // 0x186C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___fTriggerExpression2_1_ArrayIterator_1_Element; // 0x1870(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___fTriggerExpression2_1_SetCurveValue_4_1_2_Curve; // 0x187C(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression2_1_AccumulateLerp_1_1_1_1_1_2_Result; // 0x1884(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression2_1_Multiply_1_1_1_1_2_Result; // 0x1888(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression2_1_Clamp_1_2_Result; // 0x1890(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression2_1_ArrayGetAtIndex_Element; // 0x1898(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                RigVMModel___fTriggerExpression2_1_DISPATCH_RigDispatch_GetMetadata_Value; // 0x18A0(0x10)(Edit, EditConst, NonTransactional)
	class FName                                  RigVMModel___fTriggerExpression2_1_Concat_1_1_Result; // 0x18B0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___fTriggerExpression2_1_DISPATCH_RigDispatch_GetMetadata_Cache; // 0x18B8(0x10)(Edit, EditConst, NonTransactional)
	uint8                                        RigVMModel___fTriggerExpression2_1_DISPATCH_RigDispatch_GetMetadata_Found : 1; // Mask: 0x1, PropSize: 0x10x18C8(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_299 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_42E9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RigVMModel___fTriggerExpression2_1_ArrayIterator_1_Index; // 0x18CC(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression2_1_Random_3_1_1_1_1_2_Result; // 0x18D0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42EA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression2_1_Random_3_1_1_1_1_2_LastResult; // 0x18D8(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression2_1_Random_3_1_1_1_1_2_LastSeed; // 0x18E8(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression2_1_Random_3_1_1_1_1_2_BaseSeed; // 0x18F8(0x10)(Edit, EditConst, NonTransactional)
	TArray<float>                                RigVMModel___fTriggerExpression2_1_Random_3_1_1_1_1_2_TimeLeft; // 0x1908(0x10)(Edit, EditConst, NonTransactional)
	double                                       RigVMModel___fTriggerExpression2_1_Multiply_1_1_1_1_2_B; // 0x1918(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression2_1_AccumulateLerp_1_1_1_1_1_2_TargetValue; // 0x1920(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42EB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression2_1_AccumulateLerp_1_1_1_1_1_2_AccumulatedValue; // 0x1928(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___fTriggerExpression2_1_SetCurveValue_4_1_2_CachedCurveIndex; // 0x1938(0x10)(Edit, EditConst, NonTransactional)
	class FName                                  RigVMModel___fTriggerExpression2_1_Concat_Result;  // 0x1948(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___fTriggerExpression2_1_SetCurveValue_4_1_2_1_CachedCurveIndex; // 0x1950(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FRigElementKey>                RigVMModel___fTriggerExpression2_1_DISPATCH_RigDispatch_GetMetadata_1_Value; // 0x1960(0x10)(Edit, EditConst, NonTransactional)
	class FName                                  RigVMModel___fTriggerExpression2_1_Concat_1_Result; // 0x1970(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___fTriggerExpression2_1_DISPATCH_RigDispatch_GetMetadata_1_Cache; // 0x1978(0x10)(Edit, EditConst, NonTransactional)
	uint8                                        RigVMModel___fTriggerExpression2_1_DISPATCH_RigDispatch_GetMetadata_1_Found : 1; // Mask: 0x1, PropSize: 0x10x1988(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_29A : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_42EC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RigVMModel___fTriggerExpression2_1_ArrayIterator_1_Count; // 0x198C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression2_1_ArrayIterator_1_Ratio; // 0x1990(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___fTriggerExpression2_1_ArrayIterator_1_Continue : 1; // Mask: 0x1, PropSize: 0x10x1994(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_29B : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_42ED[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___RigUnit_GetTransform_8_Transform;     // 0x19A0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_8_CachedIndex;   // 0x1A00(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_5_CachedIndex;   // 0x1A10(0x10)(Edit, EditConst, NonTransactional)
	struct FRigElementKey                        RigVMModel___ArrayIterator_3_Element;              // 0x1A20(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42EE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___GetTransform_1_Transform;             // 0x1A30(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_1_CachedIndex;           // 0x1A90(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___Set_Transform_1_1_Value__IO;          // 0x1AA0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___Set_Transform_1_1_CachedIndex;        // 0x1B00(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___AimBoneMath_Result;                   // 0x1B10(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___GetTransform_2_Transform;             // 0x1B70(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_2_CachedIndex;           // 0x1BD0(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___GetTransform_2_1_Transform;           // 0x1BE0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___Replace_2_Result;                     // 0x1C40(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___Replace_2_Name;                       // 0x1C48(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___GetTransform_2_1_Item__IO;            // 0x1C50(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42EF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_2_1_CachedIndex;         // 0x1C60(0x10)(Edit, EditConst, NonTransactional)
	struct FRigUnit_AimItem_Target               RigVMModel___AimBoneMath_Primary__IO;              // 0x1C70(0x48)(Edit, EditConst, NonTransactional, NoDestructor)
	TArray<struct FCachedRigElement>             RigVMModel___AimBoneMath_PrimaryCachedSpace;       // 0x1CB8(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___AimBoneMath_SecondaryCachedSpace;     // 0x1CC8(0x10)(Edit, EditConst, NonTransactional)
	uint8                                        Pad_42F0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RigVMModel___Set_Transform_2_2_Value;              // 0x1CE0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___Set_Transform_2_2_CachedIndex;        // 0x1D00(0x10)(Edit, EditConst, NonTransactional)
	int32                                        RigVMModel___ArrayIterator_3_Index;                // 0x1D10(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___ArrayIterator_3_Count;                // 0x1D14(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___ArrayIterator_3_Ratio;                // 0x1D18(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___ArrayIterator_3_Continue : 1;         // Mask: 0x1, PropSize: 0x10x1D1C(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_29C : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_42F1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        RigVMModel___ArrayIterator_3_1_Element;            // 0x1D20(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42F2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___GetTransform_1_1_Transform;           // 0x1D30(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_1_1_CachedIndex;         // 0x1D90(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___Set_Transform_1_1_1_Value__IO;        // 0x1DA0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___Set_Transform_1_1_1_CachedIndex;      // 0x1E00(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___AimBoneMath_1_Result;                 // 0x1E10(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___GetTransform_2_2_Transform;           // 0x1E70(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_2_2_CachedIndex;         // 0x1ED0(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___GetTransform_2_1_1_Transform;         // 0x1EE0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___Replace_2_1_Result;                   // 0x1F40(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___Replace_2_1_Name;                     // 0x1F48(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___GetTransform_2_1_1_Item__IO;          // 0x1F50(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42F3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_2_1_1_CachedIndex;       // 0x1F60(0x10)(Edit, EditConst, NonTransactional)
	struct FRigUnit_AimItem_Target               RigVMModel___AimBoneMath_1_Primary__IO;            // 0x1F70(0x48)(Edit, EditConst, NonTransactional, NoDestructor)
	TArray<struct FCachedRigElement>             RigVMModel___AimBoneMath_1_PrimaryCachedSpace;     // 0x1FB8(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___AimBoneMath_1_SecondaryCachedSpace;   // 0x1FC8(0x10)(Edit, EditConst, NonTransactional)
	uint8                                        Pad_42F4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RigVMModel___Set_Transform_2_2_1_Value;            // 0x1FE0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___Set_Transform_2_2_1_CachedIndex;      // 0x2000(0x10)(Edit, EditConst, NonTransactional)
	int32                                        RigVMModel___ArrayIterator_3_1_Index;              // 0x2010(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___ArrayIterator_3_1_Count;              // 0x2014(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___ArrayIterator_3_1_Ratio;              // 0x2018(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___ArrayIterator_3_1_Continue : 1;       // Mask: 0x1, PropSize: 0x10x201C(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URigVMMemory_Work_IF* GetDefaultObj();

};

}

