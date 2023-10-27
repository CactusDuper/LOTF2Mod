#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x578 - 0x560)
// ControlRigBlueprintGeneratedClass CR_DeepSparrow_Facial_Tier1.CR_DeepSparrow_Facial_Tier1_C
class UCR_DeepSparrow_Facial_Tier1_C : public UControlRig
{
public:
	double                                       Anger;                                             // 0x560(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Pain;                                              // 0x568(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       blinkTriggerEvent;                                 // 0x570(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCR_DeepSparrow_Facial_Tier1_C* GetDefaultObj();

};

// 0x150 (0x178 - 0x28)
// RigVMMemoryStorageGeneratorClass CR_DeepSparrow_Facial_Tier1.RigVMMemory_Literal
class URigVMMemory_Literal_DSFT1 : public URigVMMemoryStorage
{
public:
	double                                       RigVMModel___fTriggerExpression_Greater_B__Const;  // 0x28(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___fTriggerExpression_SetCurveValue_Curve__Const; // 0x30(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_Clamp_Minimum__Const; // 0x38(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___fTriggerExpression_Random_3_1_1_Seed__Const; // 0x40(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_Random_3_1_1_Minimum__Const; // 0x44(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_Random_3_1_1_Maximum__Const; // 0x48(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_Random_3_1_1_Duration__Const; // 0x4C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_1_1_InitialValue__Const; // 0x50(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_1_1_Blend__Const; // 0x54(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_1_1_bIntegrateDeltaTime__Const : 1; // Mask: 0x1, PropSize: 0x10x58(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_279 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_393E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  RigVMModel___fTriggerExpression_SetCurveValue_1_Curve__Const; // 0x5C(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_393F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___fTriggerExpression_Clamp_1_Maximum__Const; // 0x68(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___fTriggerExpression_Random_3_Seed__Const; // 0x70(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___fTriggerExpression_SetCurveValue_1_1_Curve__Const; // 0x74(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3940[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___fTriggerExpression_Clamp_1_1_Maximum__Const; // 0x80(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___fTriggerExpression_Random_3_1_2_Seed__Const; // 0x88(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___fTriggerExpression_SetCurveValue_3_Curve__Const; // 0x8C(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3941[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___fTriggerExpression_Clamp_1_1_1_Maximum__Const; // 0x98(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___fTriggerExpression_Random_3_1_Seed__Const; // 0xA0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___fTriggerExpression_SetCurveValue_2_Curve__Const; // 0xA4(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3942[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___fTriggerExpression_Clamp_1_2_Minimum__Const; // 0xB0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___fTriggerExpression_Random_3_1_3_Seed__Const; // 0xB8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_Random_3_1_3_Minimum__Const; // 0xBC(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___fTriggerExpression_fRotateJaw_Set_Transform_3_Item__Const; // 0xC0(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class EBoneGetterSetterMode             RigVMModel___fTriggerExpression_fRotateJaw_Set_Transform_3_Space__Const; // 0xCC(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___fTriggerExpression_fRotateJaw_Set_Transform_3_bInitial__Const : 1; // Mask: 0x1, PropSize: 0x10xCD(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_27A : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3943[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___fTriggerExpression_fRotateJaw_Set_Transform_3_Value__Const; // 0xD0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___fTriggerExpression_fRotateJaw_MathQuaternionFromEuler_Euler__Const; // 0x130(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class EEulerRotationOrder               RigVMModel___fTriggerExpression_fRotateJaw_MathQuaternionToEuler_RotationOrder__Const; // 0x148(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3944[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___fTriggerExpression_fRotateJaw_Remap_SourceMaximum__Const; // 0x150(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_fRotateJaw_Add_1_B__Const; // 0x158(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_Clamp_2_Maximum__Const; // 0x160(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_Clamp_1_2_1_Maximum__Const; // 0x168(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_fRotateJaw_1_Add_1_B__Const; // 0x170(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URigVMMemory_Literal_DSFT1* GetDefaultObj();

};

// 0x878 (0x8A0 - 0x28)
// RigVMMemoryStorageGeneratorClass CR_DeepSparrow_Facial_Tier1.RigVMMemory_Work
class URigVMMemory_Work_DSFT1 : public URigVMMemoryStorage
{
public:
	struct FControlRigExecuteContext             ExecuteContext_;                                   // 0x28(0x38)(Edit, EditConst, NonTransactional)
	uint8                                        RigVMModel___fTriggerExpression_Greater_Result : 1; // Mask: 0x1, PropSize: 0x10x60(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_27B : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_394A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_1_1_Result; // 0x64(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_Multiply_1_1_Result; // 0x68(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_Clamp_Result;      // 0x70(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_Negate_Result;     // 0x78(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_Random_3_1_1_Result; // 0x80(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_394B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_1_1_LastResult; // 0x88(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_1_1_LastSeed; // 0x98(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_1_1_BaseSeed; // 0xA8(0x10)(Edit, EditConst, NonTransactional)
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_1_1_TimeLeft; // 0xB8(0x10)(Edit, EditConst, NonTransactional)
	double                                       RigVMModel___fTriggerExpression_Multiply_1_1_B;    // 0xC8(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_1_1_TargetValue; // 0xD0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_394E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_AccumulateLerp_1_1_1_AccumulatedValue; // 0xD8(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___fTriggerExpression_SetCurveValue_CachedCurveIndex; // 0xE8(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_Result; // 0xF8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3951[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___fTriggerExpression_Multiply_Result;   // 0x100(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_Clamp_1_Result;    // 0x108(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_Random_3_Result;   // 0x110(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3953[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_LastResult; // 0x118(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_LastSeed; // 0x128(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_BaseSeed; // 0x138(0x10)(Edit, EditConst, NonTransactional)
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_TimeLeft; // 0x148(0x10)(Edit, EditConst, NonTransactional)
	double                                       RigVMModel___fTriggerExpression_Multiply_B;        // 0x158(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_TargetValue; // 0x160(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3954[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_AccumulateLerp_1_AccumulatedValue; // 0x168(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___fTriggerExpression_SetCurveValue_1_CachedCurveIndex; // 0x178(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_1_2_Result; // 0x188(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3955[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___fTriggerExpression_Multiply_1_2_Result; // 0x190(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_Clamp_1_1_Result;  // 0x198(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_Random_3_1_2_Result; // 0x1A0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3956[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_1_2_LastResult; // 0x1A8(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_1_2_LastSeed; // 0x1B8(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_1_2_BaseSeed; // 0x1C8(0x10)(Edit, EditConst, NonTransactional)
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_1_2_TimeLeft; // 0x1D8(0x10)(Edit, EditConst, NonTransactional)
	double                                       RigVMModel___fTriggerExpression_Multiply_1_2_B;    // 0x1E8(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_1_2_TargetValue; // 0x1F0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3958[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_AccumulateLerp_1_1_2_AccumulatedValue; // 0x1F8(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___fTriggerExpression_SetCurveValue_1_1_CachedCurveIndex; // 0x208(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_1_Result; // 0x218(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3959[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___fTriggerExpression_Multiply_1_Result; // 0x220(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_Clamp_1_1_1_Result; // 0x228(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_Random_3_1_Result; // 0x230(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_395A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_1_LastResult; // 0x238(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_1_LastSeed; // 0x248(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_1_BaseSeed; // 0x258(0x10)(Edit, EditConst, NonTransactional)
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_1_TimeLeft; // 0x268(0x10)(Edit, EditConst, NonTransactional)
	double                                       RigVMModel___fTriggerExpression_Multiply_1_B;      // 0x278(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_1_TargetValue; // 0x280(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_395B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_AccumulateLerp_1_1_AccumulatedValue; // 0x288(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___fTriggerExpression_SetCurveValue_3_CachedCurveIndex; // 0x298(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_1_2_1_Result; // 0x2A8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_395C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___fTriggerExpression_Multiply_1_3_Result; // 0x2B0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_Clamp_1_2_Result;  // 0x2B8(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_Random_3_1_3_Result; // 0x2C0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_395D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_1_3_LastResult; // 0x2C8(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_1_3_LastSeed; // 0x2D8(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_1_3_BaseSeed; // 0x2E8(0x10)(Edit, EditConst, NonTransactional)
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_1_3_TimeLeft; // 0x2F8(0x10)(Edit, EditConst, NonTransactional)
	double                                       RigVMModel___fTriggerExpression_Multiply_1_3_B;    // 0x308(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_1_2_1_TargetValue; // 0x310(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_395E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_AccumulateLerp_1_1_2_1_AccumulatedValue; // 0x318(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___fTriggerExpression_SetCurveValue_2_CachedCurveIndex; // 0x328(0x10)(Edit, EditConst, NonTransactional)
	uint8                                        Pad_395F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RigVMModel___fTriggerExpression_fRotateJaw_MathQuaternionFromEuler_Result; // 0x340(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___fTriggerExpression_fRotateJaw_MathQuaternionToEuler_Result; // 0x360(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3960[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___fTriggerExpression_fRotateJaw_GetTransform_3_Transform; // 0x380(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___fTriggerExpression_fRotateJaw_GetTransform_3_CachedIndex; // 0x3E0(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___fTriggerExpression_fRotateJaw_MathQuaternionToEuler_Value; // 0x3F0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_fRotateJaw_AccumulateLerp_Result; // 0x410(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3961[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___fTriggerExpression_fRotateJaw_Remap_Result; // 0x418(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_fRotateJaw_Remap_TargetMinimum; // 0x420(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_fRotateJaw_Add_1_Result; // 0x428(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_fRotateJaw_AccumulateLerp_TargetValue; // 0x430(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_fRotateJaw_AccumulateLerp_InitialValue; // 0x434(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                RigVMModel___fTriggerExpression_fRotateJaw_AccumulateLerp_AccumulatedValue; // 0x438(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___fTriggerExpression_fRotateJaw_MathQuaternionFromEuler_Euler__IO; // 0x448(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___fTriggerExpression_fRotateJaw_Set_Transform_3_Value__IO; // 0x460(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___fTriggerExpression_fRotateJaw_Set_Transform_3_CachedIndex; // 0x4C0(0x10)(Edit, EditConst, NonTransactional)
	uint8                                        RigVMModel___fTriggerExpression_Greater_1_Result : 1; // Mask: 0x1, PropSize: 0x10x4D0(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_27C : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3962[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_1_1_1_Result; // 0x4D4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_Multiply_1_1_1_Result; // 0x4D8(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_Clamp_2_Result;    // 0x4E0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_Random_3_1_1_1_Result; // 0x4E8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3963[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_1_1_1_LastResult; // 0x4F0(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_1_1_1_LastSeed; // 0x500(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_1_1_1_BaseSeed; // 0x510(0x10)(Edit, EditConst, NonTransactional)
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_1_1_1_TimeLeft; // 0x520(0x10)(Edit, EditConst, NonTransactional)
	double                                       RigVMModel___fTriggerExpression_Multiply_1_1_1_B;  // 0x530(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_1_1_1_TargetValue; // 0x538(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3966[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_AccumulateLerp_1_1_1_1_AccumulatedValue; // 0x540(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___fTriggerExpression_SetCurveValue_4_CachedCurveIndex; // 0x550(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_2_Result; // 0x560(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3968[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___fTriggerExpression_Multiply_2_Result; // 0x568(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_Random_3_2_Result; // 0x570(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3969[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_2_LastResult; // 0x578(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_2_LastSeed; // 0x588(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_2_BaseSeed; // 0x598(0x10)(Edit, EditConst, NonTransactional)
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_2_TimeLeft; // 0x5A8(0x10)(Edit, EditConst, NonTransactional)
	double                                       RigVMModel___fTriggerExpression_Multiply_2_B;      // 0x5B8(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_2_TargetValue; // 0x5C0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_396A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_AccumulateLerp_1_2_AccumulatedValue; // 0x5C8(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___fTriggerExpression_SetCurveValue_1_2_CachedCurveIndex; // 0x5D8(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_1_2_2_Result; // 0x5E8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_396B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___fTriggerExpression_Multiply_1_2_1_Result; // 0x5F0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_Clamp_1_1_2_Result; // 0x5F8(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_Random_3_1_2_1_Result; // 0x600(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_396C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_1_2_1_LastResult; // 0x608(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_1_2_1_LastSeed; // 0x618(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_1_2_1_BaseSeed; // 0x628(0x10)(Edit, EditConst, NonTransactional)
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_1_2_1_TimeLeft; // 0x638(0x10)(Edit, EditConst, NonTransactional)
	double                                       RigVMModel___fTriggerExpression_Multiply_1_2_1_B;  // 0x648(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_1_2_2_TargetValue; // 0x650(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_396D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_AccumulateLerp_1_1_2_2_AccumulatedValue; // 0x658(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___fTriggerExpression_SetCurveValue_1_1_1_CachedCurveIndex; // 0x668(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_1_2_1_1_Result; // 0x678(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_396E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___fTriggerExpression_Multiply_1_3_1_Result; // 0x680(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_Clamp_1_2_1_Result; // 0x688(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_Random_3_1_3_1_Result; // 0x690(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_396F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_1_3_1_LastResult; // 0x698(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_1_3_1_LastSeed; // 0x6A8(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_1_3_1_BaseSeed; // 0x6B8(0x10)(Edit, EditConst, NonTransactional)
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_1_3_1_TimeLeft; // 0x6C8(0x10)(Edit, EditConst, NonTransactional)
	double                                       RigVMModel___fTriggerExpression_Multiply_1_3_1_B;  // 0x6D8(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_1_2_1_1_TargetValue; // 0x6E0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3971[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_AccumulateLerp_1_1_2_1_1_AccumulatedValue; // 0x6E8(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___fTriggerExpression_SetCurveValue_2_1_CachedCurveIndex; // 0x6F8(0x10)(Edit, EditConst, NonTransactional)
	uint8                                        Pad_3972[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RigVMModel___fTriggerExpression_fRotateJaw_1_MathQuaternionFromEuler_Result; // 0x710(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___fTriggerExpression_fRotateJaw_1_MathQuaternionToEuler_Result; // 0x730(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3973[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___fTriggerExpression_fRotateJaw_1_GetTransform_3_Transform; // 0x750(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___fTriggerExpression_fRotateJaw_1_GetTransform_3_CachedIndex; // 0x7B0(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___fTriggerExpression_fRotateJaw_1_MathQuaternionToEuler_Value; // 0x7C0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_fRotateJaw_1_AccumulateLerp_Result; // 0x7E0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3974[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___fTriggerExpression_fRotateJaw_1_Remap_Result; // 0x7E8(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_fRotateJaw_1_Remap_TargetMinimum; // 0x7F0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_fRotateJaw_1_Add_1_Result; // 0x7F8(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_fRotateJaw_1_AccumulateLerp_TargetValue; // 0x800(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_fRotateJaw_1_AccumulateLerp_InitialValue; // 0x804(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                RigVMModel___fTriggerExpression_fRotateJaw_1_AccumulateLerp_AccumulatedValue; // 0x808(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___fTriggerExpression_fRotateJaw_1_MathQuaternionFromEuler_Euler__IO; // 0x818(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___fTriggerExpression_fRotateJaw_1_Set_Transform_3_Value__IO; // 0x830(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___fTriggerExpression_fRotateJaw_1_Set_Transform_3_CachedIndex; // 0x890(0x10)(Edit, EditConst, NonTransactional)

	static class UClass* StaticClass();
	static class URigVMMemory_Work_DSFT1* GetDefaultObj();

};

}


