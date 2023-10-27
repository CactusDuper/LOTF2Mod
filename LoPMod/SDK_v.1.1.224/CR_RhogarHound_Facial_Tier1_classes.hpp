#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0x579 - 0x560)
// ControlRigBlueprintGeneratedClass CR_RhogarHound_Facial_Tier1.CR_RhogarHound_Facial_Tier1_C
class UCR_RhogarHound_Facial_Tier1_C : public UControlRig
{
public:
	double                                       Anger;                                             // 0x560(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Pain;                                              // 0x568(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       blinkTriggerEvent;                                 // 0x570(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsIceWolf;                                         // 0x578(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCR_RhogarHound_Facial_Tier1_C* GetDefaultObj();

};

// 0x218 (0x240 - 0x28)
// RigVMMemoryStorageGeneratorClass CR_RhogarHound_Facial_Tier1.RigVMMemory_Literal
class URigVMMemory_Literal : public URigVMMemoryStorage
{
public:
	double                                       RigVMModel___Greater_B__Const;                     // 0x28(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___If_True__Const;                       // 0x30(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___AccumulateLerp_1_1_1_InitialValue__Const; // 0x34(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___AccumulateLerp_1_1_1_Blend__Const;    // 0x38(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___AccumulateLerp_1_1_1_bIntegrateDeltaTime__Const : 1; // Mask: 0x1, PropSize: 0x10x3C(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_262 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_360E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    RigVMModel___AnimEvalRichCurve_Curve__Const;       // 0x40(0x88)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___AnimEvalRichCurve_SourceMaximum__Const; // 0xC8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___Set_Transform_1_1_1_Item__Const;      // 0xCC(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class EBoneGetterSetterMode             RigVMModel___Set_Transform_1_1_1_Space__Const;     // 0xD8(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___Set_Transform_1_1_1_bInitial__Const : 1; // Mask: 0x1, PropSize: 0x10xD9(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_263 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_360F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        RigVMModel___RigUnit_GetTransform_2_1_Item__Const; // 0xDC(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___Multiply_B__Const;                    // 0xE8(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___Clamp_Minimum__Const;                 // 0xF0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___Set_Transform_1_1_1_1_Item__Const;    // 0xF8(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___RigUnit_GetTransform_2_1_1_Item__Const; // 0x104(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___Subtract_A__Const;                    // 0x110(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___fTriggerExpression_SetCurveValue_Curve__Const; // 0x118(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___fTriggerExpression_Random_3_1_1_Seed__Const; // 0x120(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_Random_3_1_1_Minimum__Const; // 0x124(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_Random_3_1_1_Duration__Const; // 0x128(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_1_1_Blend__Const; // 0x12C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___fTriggerExpression_SetCurveValue_1_Curve__Const; // 0x130(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_Clamp_1_Maximum__Const; // 0x138(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___fTriggerExpression_Random_3_Seed__Const; // 0x140(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___fTriggerExpression_SetCurveValue_1_1_Curve__Const; // 0x144(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3610[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___fTriggerExpression_Clamp_1_1_Maximum__Const; // 0x150(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___fTriggerExpression_Random_3_1_2_Seed__Const; // 0x158(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___fTriggerExpression_SetCurveValue_3_Curve__Const; // 0x15C(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3611[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___fTriggerExpression_Clamp_1_1_1_Maximum__Const; // 0x168(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___fTriggerExpression_Random_3_1_Seed__Const; // 0x170(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___fTriggerExpression_SetCurveValue_2_Curve__Const; // 0x174(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3612[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___fTriggerExpression_Clamp_1_2_Minimum__Const; // 0x180(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___fTriggerExpression_Random_3_1_3_Seed__Const; // 0x188(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_Random_3_1_3_Minimum__Const; // 0x18C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___fTriggerExpression_fRotateJaw_Set_Transform_3_Item__Const; // 0x190(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3613[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___fTriggerExpression_fRotateJaw_Set_Transform_3_Value__Const; // 0x1A0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___fTriggerExpression_fRotateJaw_MathQuaternionFromEuler_Euler__Const; // 0x200(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class EEulerRotationOrder               RigVMModel___fTriggerExpression_fRotateJaw_MathQuaternionToEuler_RotationOrder__Const; // 0x218(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3614[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___fTriggerExpression_fRotateJaw_Add_1_B__Const; // 0x220(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_Clamp_2_Maximum__Const; // 0x228(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_Clamp_1_2_1_Maximum__Const; // 0x230(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_fRotateJaw_1_Add_1_B__Const; // 0x238(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URigVMMemory_Literal* GetDefaultObj();

};

// 0xF38 (0xF60 - 0x28)
// RigVMMemoryStorageGeneratorClass CR_RhogarHound_Facial_Tier1.RigVMMemory_Work
class URigVMMemory_Work : public URigVMMemoryStorage
{
public:
	struct FControlRigExecuteContext             ExecuteContext_;                                   // 0x28(0x38)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___AnimEvalRichCurve_Result;             // 0x60(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___AccumulateLerp_1_1_1_Result;          // 0x64(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___If_Result;                            // 0x68(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___Greater_Result : 1;                   // Mask: 0x1, PropSize: 0x10x6C(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_264 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3615[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RigVMModel___If_False;                             // 0x70(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3616[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___AccumulateLerp_1_1_1_AccumulatedValue; // 0x78(0x10)(Edit, EditConst, NonTransactional)
	uint8                                        Pad_3617[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RigVMModel___Interpolate_2_1_Result;               // 0x90(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_1_1_1_Transform; // 0xB0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_1_1_1_CachedIndex; // 0x110(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___Interpolate_2_1_A;                    // 0x120(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_2_1_Transform;   // 0x140(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_2_1_CachedIndex; // 0x1A0(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___Interpolate_2_1_B;                    // 0x1B0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___Multiply_Result;                      // 0x1D0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___Multiply_A;                           // 0x1D8(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Interpolate_2_1_T;                    // 0x1E0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3618[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___Set_Transform_1_1_1_CachedIndex;      // 0x1E8(0x10)(Edit, EditConst, NonTransactional)
	uint8                                        Pad_3619[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RigVMModel___Interpolate_3_Result;                 // 0x200(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___Clamp_Result;                         // 0x220(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Interpolate_3_T;                      // 0x228(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_361A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___Set_Transform_2_1_CachedIndex;        // 0x230(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___Interpolate_2_1_1_Result;             // 0x240(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_1_1_1_1_Transform; // 0x260(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_1_1_1_1_CachedIndex; // 0x2C0(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___Interpolate_2_1_1_A;                  // 0x2D0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_2_1_1_Transform; // 0x2F0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_2_1_1_CachedIndex; // 0x350(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___Interpolate_2_1_1_B;                  // 0x360(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___Multiply_1_Result;                    // 0x380(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___Multiply_1_A;                         // 0x388(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Interpolate_2_1_1_T;                  // 0x390(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_361B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___Set_Transform_1_1_1_1_CachedIndex;    // 0x398(0x10)(Edit, EditConst, NonTransactional)
	uint8                                        Pad_361C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RigVMModel___Interpolate_1_2_Result;               // 0x3B0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___Clamp_1_Result;                       // 0x3D0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Interpolate_1_2_T;                    // 0x3D8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_361D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___Set_Transform_2_1_1_CachedIndex;      // 0x3E0(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___Interpolate_Result;                   // 0x3F0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_Transform;       // 0x410(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_CachedIndex;     // 0x470(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___Interpolate_A;                        // 0x480(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_1_Transform;     // 0x4A0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_1_CachedIndex;   // 0x500(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___Interpolate_B;                        // 0x510(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___Set_Transform_CachedIndex;            // 0x530(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___Interpolate_1_Result;                 // 0x540(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___Subtract_Result;                      // 0x560(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___Subtract_B;                           // 0x568(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Interpolate_1_T;                      // 0x570(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_361E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___Set_Transform_1_CachedIndex;          // 0x578(0x10)(Edit, EditConst, NonTransactional)
	uint8                                        Pad_361F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RigVMModel___Interpolate_2_Result;                 // 0x590(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_2_Transform;     // 0x5B0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_2_CachedIndex;   // 0x610(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___Interpolate_2_A;                      // 0x620(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_1_1_Transform;   // 0x640(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_1_1_CachedIndex; // 0x6A0(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___Interpolate_2_B;                      // 0x6B0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___Set_Transform_2_CachedIndex;          // 0x6D0(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___Interpolate_1_1_Result;               // 0x6E0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___Subtract_2_Result;                    // 0x700(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___Subtract_2_B;                         // 0x708(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Interpolate_1_1_T;                    // 0x710(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3620[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___Set_Transform_1_1_CachedIndex;        // 0x718(0x10)(Edit, EditConst, NonTransactional)
	uint8                                        RigVMModel___fTriggerExpression_Greater_Result : 1; // Mask: 0x1, PropSize: 0x10x728(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_265 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3621[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_1_1_Result; // 0x72C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_Multiply_1_1_Result; // 0x730(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_Clamp_Result;      // 0x738(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_Negate_Result;     // 0x740(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_Random_3_1_1_Result; // 0x748(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3622[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_1_1_LastResult; // 0x750(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_1_1_LastSeed; // 0x760(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_1_1_BaseSeed; // 0x770(0x10)(Edit, EditConst, NonTransactional)
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_1_1_TimeLeft; // 0x780(0x10)(Edit, EditConst, NonTransactional)
	double                                       RigVMModel___fTriggerExpression_Multiply_1_1_B;    // 0x790(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_1_1_TargetValue; // 0x798(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3623[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_AccumulateLerp_1_1_1_AccumulatedValue; // 0x7A0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___fTriggerExpression_SetCurveValue_CachedCurveIndex; // 0x7B0(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_Result; // 0x7C0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3624[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___fTriggerExpression_Multiply_Result;   // 0x7C8(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_Clamp_1_Result;    // 0x7D0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_Random_3_Result;   // 0x7D8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3625[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_LastResult; // 0x7E0(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_LastSeed; // 0x7F0(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_BaseSeed; // 0x800(0x10)(Edit, EditConst, NonTransactional)
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_TimeLeft; // 0x810(0x10)(Edit, EditConst, NonTransactional)
	double                                       RigVMModel___fTriggerExpression_Multiply_B;        // 0x820(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_TargetValue; // 0x828(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3626[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_AccumulateLerp_1_AccumulatedValue; // 0x830(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___fTriggerExpression_SetCurveValue_1_CachedCurveIndex; // 0x840(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_1_2_Result; // 0x850(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3627[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___fTriggerExpression_Multiply_1_2_Result; // 0x858(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_Clamp_1_1_Result;  // 0x860(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_Random_3_1_2_Result; // 0x868(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3628[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_1_2_LastResult; // 0x870(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_1_2_LastSeed; // 0x880(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_1_2_BaseSeed; // 0x890(0x10)(Edit, EditConst, NonTransactional)
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_1_2_TimeLeft; // 0x8A0(0x10)(Edit, EditConst, NonTransactional)
	double                                       RigVMModel___fTriggerExpression_Multiply_1_2_B;    // 0x8B0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_1_2_TargetValue; // 0x8B8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3629[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_AccumulateLerp_1_1_2_AccumulatedValue; // 0x8C0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___fTriggerExpression_SetCurveValue_1_1_CachedCurveIndex; // 0x8D0(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_1_Result; // 0x8E0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_362A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___fTriggerExpression_Multiply_1_Result; // 0x8E8(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_Clamp_1_1_1_Result; // 0x8F0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_Random_3_1_Result; // 0x8F8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_362B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_1_LastResult; // 0x900(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_1_LastSeed; // 0x910(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_1_BaseSeed; // 0x920(0x10)(Edit, EditConst, NonTransactional)
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_1_TimeLeft; // 0x930(0x10)(Edit, EditConst, NonTransactional)
	double                                       RigVMModel___fTriggerExpression_Multiply_1_B;      // 0x940(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_1_TargetValue; // 0x948(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_362C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_AccumulateLerp_1_1_AccumulatedValue; // 0x950(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___fTriggerExpression_SetCurveValue_3_CachedCurveIndex; // 0x960(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_1_2_1_Result; // 0x970(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_362D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___fTriggerExpression_Multiply_1_3_Result; // 0x978(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_Clamp_1_2_Result;  // 0x980(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_Random_3_1_3_Result; // 0x988(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_362E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_1_3_LastResult; // 0x990(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_1_3_LastSeed; // 0x9A0(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_1_3_BaseSeed; // 0x9B0(0x10)(Edit, EditConst, NonTransactional)
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_1_3_TimeLeft; // 0x9C0(0x10)(Edit, EditConst, NonTransactional)
	double                                       RigVMModel___fTriggerExpression_Multiply_1_3_B;    // 0x9D0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_1_2_1_TargetValue; // 0x9D8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_362F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_AccumulateLerp_1_1_2_1_AccumulatedValue; // 0x9E0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___fTriggerExpression_SetCurveValue_2_CachedCurveIndex; // 0x9F0(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___fTriggerExpression_fRotateJaw_MathQuaternionFromEuler_Result; // 0xA00(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___fTriggerExpression_fRotateJaw_MathQuaternionToEuler_Result; // 0xA20(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3630[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___fTriggerExpression_fRotateJaw_GetTransform_3_Transform; // 0xA40(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___fTriggerExpression_fRotateJaw_GetTransform_3_CachedIndex; // 0xAA0(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___fTriggerExpression_fRotateJaw_MathQuaternionToEuler_Value; // 0xAB0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_fRotateJaw_AccumulateLerp_Result; // 0xAD0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3631[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___fTriggerExpression_fRotateJaw_Remap_Result; // 0xAD8(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_fRotateJaw_Remap_TargetMinimum; // 0xAE0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_fRotateJaw_Add_1_Result; // 0xAE8(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_fRotateJaw_AccumulateLerp_TargetValue; // 0xAF0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_fRotateJaw_AccumulateLerp_InitialValue; // 0xAF4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                RigVMModel___fTriggerExpression_fRotateJaw_AccumulateLerp_AccumulatedValue; // 0xAF8(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___fTriggerExpression_fRotateJaw_MathQuaternionFromEuler_Euler__IO; // 0xB08(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___fTriggerExpression_fRotateJaw_Set_Transform_3_Value__IO; // 0xB20(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___fTriggerExpression_fRotateJaw_Set_Transform_3_CachedIndex; // 0xB80(0x10)(Edit, EditConst, NonTransactional)
	uint8                                        RigVMModel___fTriggerExpression_Greater_1_Result : 1; // Mask: 0x1, PropSize: 0x10xB90(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_266 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3633[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_1_1_1_Result; // 0xB94(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_Multiply_1_1_1_Result; // 0xB98(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_Clamp_2_Result;    // 0xBA0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_Random_3_1_1_1_Result; // 0xBA8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3634[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_1_1_1_LastResult; // 0xBB0(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_1_1_1_LastSeed; // 0xBC0(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_1_1_1_BaseSeed; // 0xBD0(0x10)(Edit, EditConst, NonTransactional)
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_1_1_1_TimeLeft; // 0xBE0(0x10)(Edit, EditConst, NonTransactional)
	double                                       RigVMModel___fTriggerExpression_Multiply_1_1_1_B;  // 0xBF0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_1_1_1_TargetValue; // 0xBF8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3636[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_AccumulateLerp_1_1_1_1_AccumulatedValue; // 0xC00(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___fTriggerExpression_SetCurveValue_4_CachedCurveIndex; // 0xC10(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_2_Result; // 0xC20(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3637[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___fTriggerExpression_Multiply_2_Result; // 0xC28(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_Random_3_2_Result; // 0xC30(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3639[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_2_LastResult; // 0xC38(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_2_LastSeed; // 0xC48(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_2_BaseSeed; // 0xC58(0x10)(Edit, EditConst, NonTransactional)
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_2_TimeLeft; // 0xC68(0x10)(Edit, EditConst, NonTransactional)
	double                                       RigVMModel___fTriggerExpression_Multiply_2_B;      // 0xC78(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_2_TargetValue; // 0xC80(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_363A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_AccumulateLerp_1_2_AccumulatedValue; // 0xC88(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___fTriggerExpression_SetCurveValue_1_2_CachedCurveIndex; // 0xC98(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_1_2_2_Result; // 0xCA8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_363B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___fTriggerExpression_Multiply_1_2_1_Result; // 0xCB0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_Clamp_1_1_2_Result; // 0xCB8(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_Random_3_1_2_1_Result; // 0xCC0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_363C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_1_2_1_LastResult; // 0xCC8(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_1_2_1_LastSeed; // 0xCD8(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_1_2_1_BaseSeed; // 0xCE8(0x10)(Edit, EditConst, NonTransactional)
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_1_2_1_TimeLeft; // 0xCF8(0x10)(Edit, EditConst, NonTransactional)
	double                                       RigVMModel___fTriggerExpression_Multiply_1_2_1_B;  // 0xD08(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_1_2_2_TargetValue; // 0xD10(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_363D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_AccumulateLerp_1_1_2_2_AccumulatedValue; // 0xD18(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___fTriggerExpression_SetCurveValue_1_1_1_CachedCurveIndex; // 0xD28(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_1_2_1_1_Result; // 0xD38(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_363E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___fTriggerExpression_Multiply_1_3_1_Result; // 0xD40(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_Clamp_1_2_1_Result; // 0xD48(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_Random_3_1_3_1_Result; // 0xD50(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_363F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_1_3_1_LastResult; // 0xD58(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_1_3_1_LastSeed; // 0xD68(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___fTriggerExpression_Random_3_1_3_1_BaseSeed; // 0xD78(0x10)(Edit, EditConst, NonTransactional)
	TArray<float>                                RigVMModel___fTriggerExpression_Random_3_1_3_1_TimeLeft; // 0xD88(0x10)(Edit, EditConst, NonTransactional)
	double                                       RigVMModel___fTriggerExpression_Multiply_1_3_1_B;  // 0xD98(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_AccumulateLerp_1_1_2_1_1_TargetValue; // 0xDA0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3641[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___fTriggerExpression_AccumulateLerp_1_1_2_1_1_AccumulatedValue; // 0xDA8(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___fTriggerExpression_SetCurveValue_2_1_CachedCurveIndex; // 0xDB8(0x10)(Edit, EditConst, NonTransactional)
	uint8                                        Pad_3642[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RigVMModel___fTriggerExpression_fRotateJaw_1_MathQuaternionFromEuler_Result; // 0xDD0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___fTriggerExpression_fRotateJaw_1_MathQuaternionToEuler_Result; // 0xDF0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3643[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___fTriggerExpression_fRotateJaw_1_GetTransform_3_Transform; // 0xE10(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___fTriggerExpression_fRotateJaw_1_GetTransform_3_CachedIndex; // 0xE70(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___fTriggerExpression_fRotateJaw_1_MathQuaternionToEuler_Value; // 0xE80(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_fRotateJaw_1_AccumulateLerp_Result; // 0xEA0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3644[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___fTriggerExpression_fRotateJaw_1_Remap_Result; // 0xEA8(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_fRotateJaw_1_Remap_TargetMinimum; // 0xEB0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___fTriggerExpression_fRotateJaw_1_Add_1_Result; // 0xEB8(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_fRotateJaw_1_AccumulateLerp_TargetValue; // 0xEC0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___fTriggerExpression_fRotateJaw_1_AccumulateLerp_InitialValue; // 0xEC4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                RigVMModel___fTriggerExpression_fRotateJaw_1_AccumulateLerp_AccumulatedValue; // 0xEC8(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___fTriggerExpression_fRotateJaw_1_MathQuaternionFromEuler_Euler__IO; // 0xED8(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___fTriggerExpression_fRotateJaw_1_Set_Transform_3_Value__IO; // 0xEF0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___fTriggerExpression_fRotateJaw_1_Set_Transform_3_CachedIndex; // 0xF50(0x10)(Edit, EditConst, NonTransactional)

	static class UClass* StaticClass();
	static class URigVMMemory_Work* GetDefaultObj();

};

}


