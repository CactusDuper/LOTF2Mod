#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x41 (0x5A1 - 0x560)
// ControlRigBlueprintGeneratedClass CR_UmbralAssassin.CR_UmbralAssassin_C
class UCR_UmbralAssassin_C : public UControlRig
{
public:
	double                                       Controls_distance;                                 // 0x560(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LookAt_Alpha;                                      // 0x568(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Player_Location;                                   // 0x570(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       PlayerDistance;                                    // 0x588(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseFloatingHeadSystem;                             // 0x590(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4214[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       SpineAiming_Alpha;                                 // 0x598(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseHeadOnly;                                       // 0x5A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCR_UmbralAssassin_C* GetDefaultObj();

};

// 0x39C (0x3C4 - 0x28)
// RigVMMemoryStorageGeneratorClass CR_UmbralAssassin.RigVMMemory_Literal
class URigVMMemory_Literal_UA : public URigVMMemoryStorage
{
public:
	float                                        RigVMModel___If_1_True__Const;                     // 0x28(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___If_1_False__Const;                    // 0x2C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___SetTransform_3_Item__Const;           // 0x30(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class EBoneGetterSetterMode             RigVMModel___SetTransform_3_Space__Const;          // 0x3C(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___SetTransform_3_bInitial__Const : 1;   // Mask: 0x1, PropSize: 0x10x3D(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_2A8 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_4215[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        RigVMModel___RigUnit_GetTransform_1_3_Item__Const; // 0x40(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___SetTransform_3_bPropagateToChildren__Const : 1; // Mask: 0x1, PropSize: 0x10x4C(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_2A9 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_4216[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        RigVMModel___SetTransform_1_1_Item__Const;         // 0x50(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___RigUnit_GetTransform_1_1_1_Item__Const; // 0x5C(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___SetTransform_1_1_1_Item__Const;       // 0x68(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___RigUnit_GetTransform_1_1_1_1_Item__Const; // 0x74(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___SetTransform_1_1_2_Item__Const;       // 0x80(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___RigUnit_GetTransform_1_1_1_2_Item__Const; // 0x8C(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___SetTransform_1_1_3_Item__Const;       // 0x98(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___RigUnit_GetTransform_1_1_1_3_Item__Const; // 0xA4(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___SetTransform_5_1_1_Item__Const;       // 0xB0(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4217[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___SetTransform_5_1_1_Value__Const;      // 0xC0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___AimItem_2_Item__Const;                // 0x120(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4218[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_AimItem_Target               RigVMModel___AimItem_2_Primary__Const;             // 0x130(0x48)(Edit, EditConst, NonTransactional, NoDestructor)
	struct FRigUnit_AimItem_Target               RigVMModel___AimItem_2_Secondary__Const;           // 0x178(0x48)(Edit, EditConst, NonTransactional, NoDestructor)
	struct FRigUnit_AimBone_DebugSettings        RigVMModel___AimItem_2_DebugSettings__Const;       // 0x1C0(0x70)(Edit, EditConst, NonTransactional, NoDestructor)
	struct FRigUnit_AimItem_Target               RigVMModel___AimItem_Primary__Const;               // 0x230(0x48)(Edit, EditConst, NonTransactional, NoDestructor)
	struct FRigElementKey                        RigVMModel___RigUnit_SetTransform_4_Item__Const;   // 0x278(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4219[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_AimItem_Target               RigVMModel___AimBoneMath_1_1_Primary__Const;       // 0x288(0x48)(Edit, EditConst, NonTransactional, NoDestructor)
	struct FRigUnit_AimItem_Target               RigVMModel___AimBoneMath_1_1_Secondary__Const;     // 0x2D0(0x48)(Edit, EditConst, NonTransactional, NoDestructor)
	double                                       RigVMModel___Remap_SourceMinimum__Const;           // 0x318(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___Remap_SourceMaximum__Const;           // 0x320(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___Remap_TargetMinimum__Const;           // 0x328(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___Remap_TargetMaximum__Const;           // 0x330(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___AccumulateTransformLerp_Blend__Const; // 0x338(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___AccumulateLerp_Blend__Const;          // 0x33C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___SpringInterp_Strength__Const;         // 0x340(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___SpringInterp_CriticalDamping__Const;  // 0x344(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___SpringInterp_Force__Const;            // 0x348(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___AimItem_1_Item__Const;                // 0x360(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_421A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_AimItem_Target               RigVMModel___AimItem_1_Primary__Const;             // 0x370(0x48)(Edit, EditConst, NonTransactional, NoDestructor)
	struct FRigElementKey                        RigVMModel___RigUnit_GetTransform_5_Item__Const;   // 0x3B8(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URigVMMemory_Literal_UA* GetDefaultObj();

};

// 0x10A0 (0x10C8 - 0x28)
// RigVMMemoryStorageGeneratorClass CR_UmbralAssassin.RigVMMemory_Work
class URigVMMemory_Work_UA : public URigVMMemoryStorage
{
public:
	struct FControlRigExecuteContext             ExecuteContext_;                                   // 0x28(0x38)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___If_1_Result;                          // 0x60(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___If_1_Condition : 1;                   // Mask: 0x1, PropSize: 0x10x64(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_2AA : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_421B[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___RigUnit_GetTransform_1_3_Transform;   // 0x70(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_1_3_CachedIndex; // 0xD0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetTransform_3_CachedIndex;           // 0xE0(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_1_1_1_Transform; // 0xF0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_1_1_1_CachedIndex; // 0x150(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetTransform_1_1_CachedIndex;         // 0x160(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_1_1_1_1_Transform; // 0x170(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_1_1_1_1_CachedIndex; // 0x1D0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetTransform_1_1_1_CachedIndex;       // 0x1E0(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_1_1_1_2_Transform; // 0x1F0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_1_1_1_2_CachedIndex; // 0x250(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetTransform_1_1_2_CachedIndex;       // 0x260(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_1_1_1_3_Transform; // 0x270(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_1_1_1_3_CachedIndex; // 0x2D0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetTransform_1_1_3_CachedIndex;       // 0x2E0(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___ToRigSpace_Location_1_Global;         // 0x2F0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_421C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___SetTransform_5_1_1_Value__IO;         // 0x310(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___SetTransform_5_1_1_CachedIndex;       // 0x370(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___GetTransform_4_Transform;             // 0x380(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_4_CachedIndex;           // 0x3E0(0x10)(Edit, EditConst, NonTransactional)
	struct FRigUnit_AimItem_Target               RigVMModel___AimItem_2_Primary__IO;                // 0x3F0(0x48)(Edit, EditConst, NonTransactional, NoDestructor)
	float                                        RigVMModel___AimItem_2_Weight;                     // 0x438(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_421D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___AimItem_2_CachedItem;                 // 0x440(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___AimItem_2_PrimaryCachedSpace;         // 0x450(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___AimItem_2_SecondaryCachedSpace;       // 0x460(0x10)(Edit, EditConst, NonTransactional)
	struct FRigUnit_AimItem_Target               RigVMModel___AimItem_Primary__IO;                  // 0x470(0x48)(Edit, EditConst, NonTransactional, NoDestructor)
	TArray<struct FCachedRigElement>             RigVMModel___AimItem_CachedItem;                   // 0x4B8(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___AimItem_PrimaryCachedSpace;           // 0x4C8(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___AimItem_SecondaryCachedSpace;         // 0x4D8(0x10)(Edit, EditConst, NonTransactional)
	uint8                                        Pad_421E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___AimBoneMath_1_1_Result;               // 0x4F0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___GetTransform_6_1_Transform;           // 0x550(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_6_1_CachedIndex;         // 0x5B0(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___GetTransform_1_1_1_Transform;         // 0x5C0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_1_1_1_CachedIndex;       // 0x620(0x10)(Edit, EditConst, NonTransactional)
	struct FRigUnit_AimItem_Target               RigVMModel___AimBoneMath_1_1_Primary__IO;          // 0x630(0x48)(Edit, EditConst, NonTransactional, NoDestructor)
	TArray<struct FCachedRigElement>             RigVMModel___AimBoneMath_1_1_PrimaryCachedSpace;   // 0x678(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___AimBoneMath_1_1_SecondaryCachedSpace; // 0x688(0x10)(Edit, EditConst, NonTransactional)
	uint8                                        Pad_421F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___GetTransform_9_Transform;             // 0x6A0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_9_CachedIndex;           // 0x700(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___AccumulateTransformLerp_Result;       // 0x710(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___MathVectorLerp_1_Result;              // 0x770(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___MathVectorLerp_1_A;                   // 0x788(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___GetTransform_1_1_1_1_Transform;       // 0x7A0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_1_1_1_1_CachedIndex;     // 0x800(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___MathVectorLerp_1_B;                   // 0x810(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___Remap_Result;                         // 0x828(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathVectorLerp_1_T;                   // 0x830(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4220[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___AccumulateTransformLerp_TargetValue__IO; // 0x840(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_9_Transform;     // 0x8A0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_9_CachedIndex;   // 0x900(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FTransform>                    RigVMModel___AccumulateTransformLerp_AccumulatedValue; // 0x910(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_4_CachedIndex;   // 0x920(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___AccumulateLerp_Result;                // 0x930(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___AccumulateLerp_TargetValue;           // 0x950(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___AccumulateLerp_InitialValue;          // 0x970(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FQuat>                         RigVMModel___AccumulateLerp_AccumulatedValue;      // 0x990(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___Set_Transform_CachedIndex;            // 0x9A0(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_7_Transform;     // 0x9B0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_7_CachedIndex;   // 0xA10(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___If_Result;                            // 0xA20(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___If_Condition : 1;                     // Mask: 0x1, PropSize: 0x10xA38(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_2AB : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_4221[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RigVMModel___SpringInterp_Result;                  // 0xA40(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___SpringInterp_Target;                  // 0xA58(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_8_Transform;     // 0xA70(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_8_CachedIndex;   // 0xAD0(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___SpringInterp_Current;                 // 0xAE0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___SpringInterp_Velocity;                // 0xAF8(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                       RigVMModel___SpringInterp_SimulatedResult;         // 0xB10(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVectorSpringState>            RigVMModel___SpringInterp_SpringState;             // 0xB20(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_8_1_Transform;   // 0xB30(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_8_1_CachedIndex; // 0xB90(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___If_False;                             // 0xBA0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4222[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___SetTransform_9_1_Value__IO;           // 0xBC0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___SetTransform_9_1_CachedIndex;         // 0xC20(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___GetTransform_4_1_Transform;           // 0xC30(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_4_1_CachedIndex;         // 0xC90(0x10)(Edit, EditConst, NonTransactional)
	struct FRigUnit_AimItem_Target               RigVMModel___AimItem_1_Primary__IO;                // 0xCA0(0x48)(Edit, EditConst, NonTransactional, NoDestructor)
	TArray<struct FCachedRigElement>             RigVMModel___AimItem_1_CachedItem;                 // 0xCE8(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___AimItem_1_PrimaryCachedSpace;         // 0xCF8(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___AimItem_1_SecondaryCachedSpace;       // 0xD08(0x10)(Edit, EditConst, NonTransactional)
	uint8                                        Pad_4223[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___GetTransform_2_2_Transform;           // 0xD20(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_2_2_CachedIndex;         // 0xD80(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetTransform_6_2_CachedIndex;         // 0xD90(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___GetTransform_2_3_Transform;           // 0xDA0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_2_3_CachedIndex;         // 0xE00(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetTransform_6_3_CachedIndex;         // 0xE10(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___GetTransform_2_3_1_Transform;         // 0xE20(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_2_3_1_CachedIndex;       // 0xE80(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetTransform_6_3_1_CachedIndex;       // 0xE90(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___GetTransform_2_3_2_Transform;         // 0xEA0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_2_3_2_CachedIndex;       // 0xF00(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetTransform_6_3_2_CachedIndex;       // 0xF10(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___GetTransform_2_3_1_1_Transform;       // 0xF20(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_2_3_1_1_CachedIndex;     // 0xF80(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetTransform_6_3_1_1_CachedIndex;     // 0xF90(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___MathVectorDistance_1_Result;          // 0xFA0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4224[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___RigUnit_GetTransform_4_1_Transform;   // 0xFB0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_4_1_CachedIndex; // 0x1010(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___MathVectorDistance_1_A;               // 0x1020(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4225[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___RigUnit_GetTransform_5_Transform;     // 0x1040(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_5_CachedIndex;   // 0x10A0(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___MathVectorDistance_1_B;               // 0x10B0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URigVMMemory_Work_UA* GetDefaultObj();

};

}

