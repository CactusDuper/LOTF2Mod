#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x578 - 0x560)
// ControlRigBlueprintGeneratedClass CR_IceWolf_Blinking.CR_IceWolf_Blinking_C
class UCR_IceWolf_Blinking_C : public UControlRig
{
public:
	double                                       blinkTriggerEvent;                                 // 0x560(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Anger;                                             // 0x568(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Pain;                                              // 0x570(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCR_IceWolf_Blinking_C* GetDefaultObj();

};

// 0x220 (0x248 - 0x28)
// RigVMMemoryStorageGeneratorClass CR_IceWolf_Blinking.RigVMMemory_Literal
class URigVMMemory_Literal_IWB : public URigVMMemoryStorage
{
public:
	struct FRigElementKey                        RigVMModel___Set_Transform_1_1_1_Item__Const;      // 0x28(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class EBoneGetterSetterMode             RigVMModel___Set_Transform_1_1_1_Space__Const;     // 0x34(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___Set_Transform_1_1_1_bInitial__Const : 1; // Mask: 0x1, PropSize: 0x10x35(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_279 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_383F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        RigVMModel___RigUnit_GetTransform_2_1_Item__Const; // 0x38(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___AccumulateLerp_1_1_1_InitialValue__Const; // 0x44(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___AccumulateLerp_1_1_1_Blend__Const;    // 0x48(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___AccumulateLerp_1_1_1_bIntegrateDeltaTime__Const : 1; // Mask: 0x1, PropSize: 0x10x4C(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_27A : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3840[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    RigVMModel___AnimEvalRichCurve_Curve__Const;       // 0x50(0x88)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___AnimEvalRichCurve_SourceMaximum__Const; // 0xD8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3841[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___Multiply_B__Const;                    // 0xE0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___Clamp_Minimum__Const;                 // 0xE8(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___Clamp_Maximum__Const;                 // 0xF0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___Set_Transform_1_1_1_1_Item__Const;    // 0xF8(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___RigUnit_GetTransform_2_1_1_Item__Const; // 0x104(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___fTriggerExpression_SetCurveValue_Curve__Const; // 0x110(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___fTriggerExpression_Random_3_1_1_Seed__Const; // 0x118(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_Random_3_1_1_Minimum__Const; // 0x11C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_Random_3_1_1_Duration__Const; // 0x120(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_1_1_Blend__Const; // 0x124(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___fTriggerExpression_SetCurveValue_1_Curve__Const; // 0x128(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_Clamp_1_Maximum__Const; // 0x130(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___fTriggerExpression_Random_3_Seed__Const; // 0x138(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___fTriggerExpression_SetCurveValue_1_1_Curve__Const; // 0x13C(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3842[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___fTriggerExpression_Clamp_1_1_Maximum__Const; // 0x148(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___fTriggerExpression_Random_3_1_2_Seed__Const; // 0x150(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___fTriggerExpression_SetCurveValue_3_Curve__Const; // 0x154(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3843[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___fTriggerExpression_Clamp_1_1_1_Maximum__Const; // 0x160(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___fTriggerExpression_Random_3_1_Seed__Const; // 0x168(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___fTriggerExpression_SetCurveValue_2_Curve__Const; // 0x16C(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3844[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___fTriggerExpression_Clamp_1_2_Minimum__Const; // 0x178(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___fTriggerExpression_Random_3_1_3_Seed__Const; // 0x180(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_Random_3_1_3_Minimum__Const; // 0x184(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___fTriggerExpression_fRotateJaw_Set_Transform_3_Item__Const; // 0x188(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3845[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___fTriggerExpression_fRotateJaw_Set_Transform_3_Value__Const; // 0x1A0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___fTriggerExpression_fRotateJaw_MathQuaternionFromEuler_Euler__Const; // 0x200(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class EEulerRotationOrder               RigVMModel___fTriggerExpression_fRotateJaw_MathQuaternionToEuler_RotationOrder__Const; // 0x218(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3846[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___fTriggerExpression_fRotateJaw_Remap_SourceMaximum__Const; // 0x220(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_fRotateJaw_Add_1_B__Const; // 0x228(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_Clamp_2_Maximum__Const; // 0x230(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_Clamp_1_2_1_Maximum__Const; // 0x238(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_fRotateJaw_1_Add_1_B__Const; // 0x240(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URigVMMemory_Literal_IWB* GetDefaultObj();

};

// 0xBF8 (0xC20 - 0x28)
// RigVMMemoryStorageGeneratorClass CR_IceWolf_Blinking.RigVMMemory_Work
class URigVMMemory_Work_IWB : public URigVMMemoryStorage
{
public:
	struct FControlRigExecuteContext             ExecuteContext_;                                   // 0x28(0x38)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___Interpolate_2_1_Result;               // 0x60(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_1_1_1_Transform; // 0x80(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_1_1_1_CachedIndex; // 0xE0(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___Interpolate_2_1_A;                    // 0xF0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_2_1_Transform;   // 0x110(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_2_1_CachedIndex; // 0x170(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___Interpolate_2_1_B;                    // 0x180(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___Multiply_Result;                      // 0x1A0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___AnimEvalRichCurve_Result;             // 0x1A8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___AccumulateLerp_1_1_1_Result;          // 0x1AC(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___AccumulateLerp_1_1_1_TargetValue;     // 0x1B0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3847[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___AccumulateLerp_1_1_1_AccumulatedValue; // 0x1B8(0x10)(Edit, EditConst, NonTransactional)
	double                                       RigVMModel___Multiply_A;                           // 0x1C8(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Interpolate_2_1_T;                    // 0x1D0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3848[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___Set_Transform_1_1_1_CachedIndex;      // 0x1D8(0x10)(Edit, EditConst, NonTransactional)
	uint8                                        Pad_3849[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RigVMModel___Interpolate_Result;                   // 0x1F0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___Clamp_Result;                         // 0x210(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Interpolate_T;                        // 0x218(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_384B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___Set_Transform_2_1_CachedIndex;        // 0x220(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___Interpolate_2_1_1_Result;             // 0x230(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_1_1_1_1_Transform; // 0x250(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_1_1_1_1_CachedIndex; // 0x2B0(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___Interpolate_2_1_1_A;                  // 0x2C0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_2_1_1_Transform; // 0x2E0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_2_1_1_CachedIndex; // 0x340(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___Interpolate_2_1_1_B;                  // 0x350(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___Multiply_1_Result;                    // 0x370(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___Multiply_1_A;                         // 0x378(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Interpolate_2_1_1_T;                  // 0x380(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3850[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___Set_Transform_1_1_1_1_CachedIndex;    // 0x388(0x10)(Edit, EditConst, NonTransactional)
	uint8                                        Pad_3851[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RigVMModel___Interpolate_1_Result;                 // 0x3A0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___Clamp_1_Result;                       // 0x3C0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Interpolate_1_T;                      // 0x3C8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3856[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___Set_Transform_2_1_1_CachedIndex;      // 0x3D0(0x10)(Edit, EditConst, NonTransactional)
	uint8                                        RigVMModel___fTriggerExpression_Greater_Result : 1; // Mask: 0x1, PropSize: 0x10x3E0(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_27B : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3858[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_1_1_Result; // 0x3E4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_Multiply_1_1_Result; // 0x3E8(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_Clamp_Result;      // 0x3F0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_Negate_Result;     // 0x3F8(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_Random_3_1_1_Result; // 0x400(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_385B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_1_1_LastResult; // 0x408(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_1_1_LastSeed; // 0x418(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_1_1_BaseSeed; // 0x428(0x10)(Edit, EditConst, NonTransactional)
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_1_1_TimeLeft; // 0x438(0x10)(Edit, EditConst, NonTransactional)
	double                                       RigVMModel___fTriggerExpression_Multiply_1_1_B;    // 0x448(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_1_1_TargetValue; // 0x450(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_385C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_AccumulateLerp_1_1_1_AccumulatedValue; // 0x458(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___fTriggerExpression_SetCurveValue_CachedCurveIndex; // 0x468(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_Result; // 0x478(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_385D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___fTriggerExpression_Multiply_Result;   // 0x480(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_Clamp_1_Result;    // 0x488(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_Random_3_Result;   // 0x490(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_385E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_LastResult; // 0x498(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_LastSeed; // 0x4A8(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_BaseSeed; // 0x4B8(0x10)(Edit, EditConst, NonTransactional)
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_TimeLeft; // 0x4C8(0x10)(Edit, EditConst, NonTransactional)
	double                                       RigVMModel___fTriggerExpression_Multiply_B;        // 0x4D8(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_TargetValue; // 0x4E0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_385F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_AccumulateLerp_1_AccumulatedValue; // 0x4E8(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___fTriggerExpression_SetCurveValue_1_CachedCurveIndex; // 0x4F8(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_1_2_Result; // 0x508(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3860[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___fTriggerExpression_Multiply_1_2_Result; // 0x510(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_Clamp_1_1_Result;  // 0x518(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_Random_3_1_2_Result; // 0x520(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3862[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_1_2_LastResult; // 0x528(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_1_2_LastSeed; // 0x538(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_1_2_BaseSeed; // 0x548(0x10)(Edit, EditConst, NonTransactional)
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_1_2_TimeLeft; // 0x558(0x10)(Edit, EditConst, NonTransactional)
	double                                       RigVMModel___fTriggerExpression_Multiply_1_2_B;    // 0x568(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_1_2_TargetValue; // 0x570(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3863[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_AccumulateLerp_1_1_2_AccumulatedValue; // 0x578(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___fTriggerExpression_SetCurveValue_1_1_CachedCurveIndex; // 0x588(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_1_Result; // 0x598(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3864[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___fTriggerExpression_Multiply_1_Result; // 0x5A0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_Clamp_1_1_1_Result; // 0x5A8(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_Random_3_1_Result; // 0x5B0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3866[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_1_LastResult; // 0x5B8(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_1_LastSeed; // 0x5C8(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_1_BaseSeed; // 0x5D8(0x10)(Edit, EditConst, NonTransactional)
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_1_TimeLeft; // 0x5E8(0x10)(Edit, EditConst, NonTransactional)
	double                                       RigVMModel___fTriggerExpression_Multiply_1_B;      // 0x5F8(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_1_TargetValue; // 0x600(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_386B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_AccumulateLerp_1_1_AccumulatedValue; // 0x608(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___fTriggerExpression_SetCurveValue_3_CachedCurveIndex; // 0x618(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_1_2_1_Result; // 0x628(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_386E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___fTriggerExpression_Multiply_1_3_Result; // 0x630(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_Clamp_1_2_Result;  // 0x638(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_Random_3_1_3_Result; // 0x640(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_386F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_1_3_LastResult; // 0x648(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_1_3_LastSeed; // 0x658(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_1_3_BaseSeed; // 0x668(0x10)(Edit, EditConst, NonTransactional)
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_1_3_TimeLeft; // 0x678(0x10)(Edit, EditConst, NonTransactional)
	double                                       RigVMModel___fTriggerExpression_Multiply_1_3_B;    // 0x688(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_1_2_1_TargetValue; // 0x690(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3870[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_AccumulateLerp_1_1_2_1_AccumulatedValue; // 0x698(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___fTriggerExpression_SetCurveValue_2_CachedCurveIndex; // 0x6A8(0x10)(Edit, EditConst, NonTransactional)
	uint8                                        Pad_3871[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RigVMModel___fTriggerExpression_fRotateJaw_MathQuaternionFromEuler_Result; // 0x6C0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___fTriggerExpression_fRotateJaw_MathQuaternionToEuler_Result; // 0x6E0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3872[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___fTriggerExpression_fRotateJaw_GetTransform_3_Transform; // 0x700(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___fTriggerExpression_fRotateJaw_GetTransform_3_CachedIndex; // 0x760(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___fTriggerExpression_fRotateJaw_MathQuaternionToEuler_Value; // 0x770(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_fRotateJaw_AccumulateLerp_Result; // 0x790(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3873[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___fTriggerExpression_fRotateJaw_Remap_Result; // 0x798(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_fRotateJaw_Remap_TargetMinimum; // 0x7A0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_fRotateJaw_Add_1_Result; // 0x7A8(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_fRotateJaw_AccumulateLerp_TargetValue; // 0x7B0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_fRotateJaw_AccumulateLerp_InitialValue; // 0x7B4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                RigVMModel___fTriggerExpression_fRotateJaw_AccumulateLerp_AccumulatedValue; // 0x7B8(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___fTriggerExpression_fRotateJaw_MathQuaternionFromEuler_Euler__IO; // 0x7C8(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___fTriggerExpression_fRotateJaw_Set_Transform_3_Value__IO; // 0x7E0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___fTriggerExpression_fRotateJaw_Set_Transform_3_CachedIndex; // 0x840(0x10)(Edit, EditConst, NonTransactional)
	uint8                                        RigVMModel___fTriggerExpression_Greater_1_Result : 1; // Mask: 0x1, PropSize: 0x10x850(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_27C : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3874[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_1_1_1_Result; // 0x854(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_Multiply_1_1_1_Result; // 0x858(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_Clamp_2_Result;    // 0x860(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_Random_3_1_1_1_Result; // 0x868(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3875[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_1_1_1_LastResult; // 0x870(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_1_1_1_LastSeed; // 0x880(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_1_1_1_BaseSeed; // 0x890(0x10)(Edit, EditConst, NonTransactional)
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_1_1_1_TimeLeft; // 0x8A0(0x10)(Edit, EditConst, NonTransactional)
	double                                       RigVMModel___fTriggerExpression_Multiply_1_1_1_B;  // 0x8B0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_1_1_1_TargetValue; // 0x8B8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3876[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_AccumulateLerp_1_1_1_1_AccumulatedValue; // 0x8C0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___fTriggerExpression_SetCurveValue_4_CachedCurveIndex; // 0x8D0(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_2_Result; // 0x8E0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3877[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___fTriggerExpression_Multiply_2_Result; // 0x8E8(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_Random_3_2_Result; // 0x8F0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3878[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_2_LastResult; // 0x8F8(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_2_LastSeed; // 0x908(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_2_BaseSeed; // 0x918(0x10)(Edit, EditConst, NonTransactional)
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_2_TimeLeft; // 0x928(0x10)(Edit, EditConst, NonTransactional)
	double                                       RigVMModel___fTriggerExpression_Multiply_2_B;      // 0x938(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_2_TargetValue; // 0x940(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3879[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_AccumulateLerp_1_2_AccumulatedValue; // 0x948(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___fTriggerExpression_SetCurveValue_1_2_CachedCurveIndex; // 0x958(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_1_2_2_Result; // 0x968(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_387A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___fTriggerExpression_Multiply_1_2_1_Result; // 0x970(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_Clamp_1_1_2_Result; // 0x978(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_Random_3_1_2_1_Result; // 0x980(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_387B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_1_2_1_LastResult; // 0x988(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_1_2_1_LastSeed; // 0x998(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_1_2_1_BaseSeed; // 0x9A8(0x10)(Edit, EditConst, NonTransactional)
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_1_2_1_TimeLeft; // 0x9B8(0x10)(Edit, EditConst, NonTransactional)
	double                                       RigVMModel___fTriggerExpression_Multiply_1_2_1_B;  // 0x9C8(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_1_2_2_TargetValue; // 0x9D0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_387C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_AccumulateLerp_1_1_2_2_AccumulatedValue; // 0x9D8(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___fTriggerExpression_SetCurveValue_1_1_1_CachedCurveIndex; // 0x9E8(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_1_2_1_1_Result; // 0x9F8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_387D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___fTriggerExpression_Multiply_1_3_1_Result; // 0xA00(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_Clamp_1_2_1_Result; // 0xA08(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_Random_3_1_3_1_Result; // 0xA10(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_387E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_1_3_1_LastResult; // 0xA18(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_1_3_1_LastSeed; // 0xA28(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_1_3_1_BaseSeed; // 0xA38(0x10)(Edit, EditConst, NonTransactional)
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_1_3_1_TimeLeft; // 0xA48(0x10)(Edit, EditConst, NonTransactional)
	double                                       RigVMModel___fTriggerExpression_Multiply_1_3_1_B;  // 0xA58(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_1_2_1_1_TargetValue; // 0xA60(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_387F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_AccumulateLerp_1_1_2_1_1_AccumulatedValue; // 0xA68(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___fTriggerExpression_SetCurveValue_2_1_CachedCurveIndex; // 0xA78(0x10)(Edit, EditConst, NonTransactional)
	uint8                                        Pad_3880[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RigVMModel___fTriggerExpression_fRotateJaw_1_MathQuaternionFromEuler_Result; // 0xA90(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___fTriggerExpression_fRotateJaw_1_MathQuaternionToEuler_Result; // 0xAB0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3881[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___fTriggerExpression_fRotateJaw_1_GetTransform_3_Transform; // 0xAD0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___fTriggerExpression_fRotateJaw_1_GetTransform_3_CachedIndex; // 0xB30(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___fTriggerExpression_fRotateJaw_1_MathQuaternionToEuler_Value; // 0xB40(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_fRotateJaw_1_AccumulateLerp_Result; // 0xB60(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3882[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___fTriggerExpression_fRotateJaw_1_Remap_Result; // 0xB68(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_fRotateJaw_1_Remap_TargetMinimum; // 0xB70(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_fRotateJaw_1_Add_1_Result; // 0xB78(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_fRotateJaw_1_AccumulateLerp_TargetValue; // 0xB80(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_fRotateJaw_1_AccumulateLerp_InitialValue; // 0xB84(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                RigVMModel___fTriggerExpression_fRotateJaw_1_AccumulateLerp_AccumulatedValue; // 0xB88(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___fTriggerExpression_fRotateJaw_1_MathQuaternionFromEuler_Euler__IO; // 0xB98(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___fTriggerExpression_fRotateJaw_1_Set_Transform_3_Value__IO; // 0xBB0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___fTriggerExpression_fRotateJaw_1_Set_Transform_3_CachedIndex; // 0xC10(0x10)(Edit, EditConst, NonTransactional)

	static class UClass* StaticClass();
	static class URigVMMemory_Work_IWB* GetDefaultObj();

};

}


