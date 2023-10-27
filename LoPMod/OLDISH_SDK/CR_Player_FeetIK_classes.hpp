#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x74 (0x5D4 - 0x560)
// ControlRigBlueprintGeneratedClass CR_Player_FeetIK.CR_Player_FeetIK_C
class UCR_Player_FeetIK_C : public UControlRig
{
public:
	double                                       GroundFoot_L;                                      // 0x560(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       GroundFoot_R;                                      // 0x568(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        IsInUmbral;                                        // 0x570(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SwitchIK;                                          // 0x574(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38EF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       PlayerSpeed;                                       // 0x578(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               L_HitNormal;                                       // 0x580(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               R_HitNormal;                                       // 0x598(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       L_AimingNormal_Alpha;                              // 0x5B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       R_AimingNormal_Alpha;                              // 0x5B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bEnableFeetIK;                                     // 0x5C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38F0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        L_TarsalCorrective_Alpha;                          // 0x5C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        R_TarsalCorrective_Alpha;                          // 0x5C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RLeg_Length;                                       // 0x5CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LLeg_Length;                                       // 0x5D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCR_Player_FeetIK_C* GetDefaultObj();

};

// 0x55C (0x584 - 0x28)
// RigVMMemoryStorageGeneratorClass CR_Player_FeetIK.RigVMMemory_Literal
class URigVMMemory_Literal_PFI : public URigVMMemoryStorage
{
public:
	struct FRigElementKey                        RigVMModel___SetRelativeTransformForItem_Child__Const; // 0x28(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___SetRelativeTransformForItem_Parent__Const; // 0x34(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___SetRelativeTransformForItem_bParentInitial__Const : 1; // Mask: 0x1, PropSize: 0x10x40(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_27D : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_38F1[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___SetRelativeTransformForItem_Value__Const; // 0x50(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___SetRelativeTransformForItem_Weight__Const; // 0xB0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___SetRelativeTransformForItem_bPropagateToChildren__Const : 1; // Mask: 0x1, PropSize: 0x10xB4(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_27E : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_38F2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        RigVMModel___SetRelativeTransformForItem_1_Child__Const; // 0xB8(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___SetRelativeTransformForItem_1_Parent__Const; // 0xC4(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___SetRelativeTransformForItem_1_Value__Const; // 0xD0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___RigUnit_SetTransform_4_2_1_2_2_Item__Const; // 0x130(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class EBoneGetterSetterMode             RigVMModel___RigUnit_SetTransform_4_2_1_2_2_Space__Const; // 0x13C(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38F3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        RigVMModel___GetTransform_8_3_2_2_Item__Const;     // 0x140(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___RigUnit_SetTransform_4_2_1_3_2_Item__Const; // 0x14C(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___GetTransform_8_3_3_2_Item__Const;     // 0x158(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___RigUnit_SetRelativeTransformForItem_Child__Const; // 0x164(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___RigUnit_SetRelativeTransformForItem_Parent__Const; // 0x170(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38F4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___RigUnit_SetRelativeTransformForItem_Value__Const; // 0x180(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___RigUnit_SetRelativeTransformForItem_1_Child__Const; // 0x1E0(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___RigUnit_SetRelativeTransformForItem_1_Parent__Const; // 0x1EC(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathFloatRemap_3_2_2_SourceMinimum__Const; // 0x1F8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathFloatRemap_3_2_2_SourceMaximum__Const; // 0x1FC(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathFloatRemap_3_2_2_TargetMinimum__Const; // 0x200(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathFloatRemap_3_2_1_1_SourceMaximum__Const; // 0x204(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___MathVectorAdd_6_1_B__Const;           // 0x208(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___MathVectorSub_3_1_B__Const;           // 0x220(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class ETraceTypeQuery                   Select_Values_0__Const;                            // 0x238(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class ETraceTypeQuery                   Select_Values_1__Const;                            // 0x239(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38F5[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        _;                                                 // 0x23C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FInputRange                           RigVMModel___RigUnit_AlphaInterp_4_1_InRange__Const; // 0x240(0x8)(Edit, EditConst, NonTransactional, NoDestructor)
	float                                        RigVMModel___RigUnit_AlphaInterp_4_1_InterpSpeedIncreasing__Const; // 0x248(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___RigUnit_SetTransform_2_1_Item__Const; // 0x24C(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38F6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___RigUnit_SetTransform_2_1_Value__Const; // 0x260(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigUnit_AimItem_Target               RigVMModel___AimBoneMath_1_1_Primary__Const;       // 0x2C0(0x48)(Edit, EditConst, NonTransactional, NoDestructor)
	struct FVector                               RigVMModel___AccumulateVectorLerp_InitialValue__Const; // 0x308(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___AccumulateVectorLerp_Blend__Const;    // 0x320(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38F7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_AimItem_Target               RigVMModel___AimBoneMath_1_1_Secondary__Const;     // 0x328(0x48)(Edit, EditConst, NonTransactional, NoDestructor)
	struct FRigUnit_AimBone_DebugSettings        RigVMModel___AimBoneMath_1_1_DebugSettings__Const; // 0x370(0x70)(Edit, EditConst, NonTransactional, NoDestructor)
	struct FRigElementKey                        RigVMModel___RigUnit_SetTransform_3_Item__Const;   // 0x3E0(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38F8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_AimItem_Target               RigVMModel___AimBoneMath_2_Primary__Const;         // 0x3F0(0x48)(Edit, EditConst, NonTransactional, NoDestructor)
	struct FRigUnit_AimItem_Target               RigVMModel___AimBoneMath_2_Secondary__Const;       // 0x438(0x48)(Edit, EditConst, NonTransactional, NoDestructor)
	struct FRigElementKey                        RigVMModel___RigUnit_SetTransform_1_1_Item__Const; // 0x480(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38F9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___RigUnit_SetTransform_1_1_Value__Const; // 0x490(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___MathVectorAdd_5_B__Const;             // 0x4F0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___RigUnit_AlphaInterp_InterpSpeedIncreasing__Const; // 0x508(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___RigUnit_SetTransform_4_Item__Const;   // 0x50C(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___GetTransform_2_Item__Const;           // 0x518(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___RigUnit_SetTransform_Item__Const;     // 0x524(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___RigUnit_SetTransform_2_Item__Const;   // 0x530(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___RigUnit_SetTransform_4_1_Item__Const; // 0x53C(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___GetTransform_2_1_Item__Const;         // 0x548(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___RigUnit_SetTransform_5_Item__Const;   // 0x554(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___RigUnit_SetTransform_2_2_Item__Const; // 0x560(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___GetTransform_5_1_1_Item__Const;       // 0x56C(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___GetTransform_5_1_1_1_Item__Const;     // 0x578(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URigVMMemory_Literal_PFI* GetDefaultObj();

};

// 0x1130 (0x1158 - 0x28)
// RigVMMemoryStorageGeneratorClass CR_Player_FeetIK.RigVMMemory_Work
class URigVMMemory_Work_PFI : public URigVMMemoryStorage
{
public:
	struct FControlRigExecuteContext             ExecuteContext_;                                   // 0x28(0x38)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetRelativeTransformForItem_CachedChild; // 0x60(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetRelativeTransformForItem_CachedParent; // 0x70(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetRelativeTransformForItem_1_CachedChild; // 0x80(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetRelativeTransformForItem_1_CachedParent; // 0x90(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___GetTransform_8_3_2_2_Transform;       // 0xA0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_8_3_2_2_CachedIndex;     // 0x100(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_4_2_1_2_2_CachedIndex; // 0x110(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___GetTransform_8_3_3_2_Transform;       // 0x120(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_8_3_3_2_CachedIndex;     // 0x180(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_4_2_1_3_2_CachedIndex; // 0x190(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetRelativeTransformForItem_CachedChild; // 0x1A0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetRelativeTransformForItem_CachedParent; // 0x1B0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetRelativeTransformForItem_1_CachedChild; // 0x1C0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetRelativeTransformForItem_1_CachedParent; // 0x1D0(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___MathFloatMul_1_Result;                // 0x1E0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathFloatRemap_3_2_2_Result;          // 0x1E4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38FA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___RigUnit_GetTransform_4_1_1_Transform; // 0x1F0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_4_1_1_CachedIndex; // 0x250(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___MathFloatRemap_3_2_2_Value;           // 0x260(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathFloatRemap_3_2_1_1_Result;        // 0x264(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathFloatRemap_3_2_1_1_Value;         // 0x268(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathFloatMul_1_1_Result;              // 0x26C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathFloatRemap_3_2_2_1_Result;        // 0x270(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38FB[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___RigUnit_GetTransform_4_1_1_1_Transform; // 0x280(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_4_1_1_1_CachedIndex; // 0x2E0(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___MathFloatRemap_3_2_2_1_Value;         // 0x2F0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathFloatRemap_3_2_1_1_1_Result;      // 0x2F4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathFloatRemap_3_2_1_1_1_Value;       // 0x2F8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___RigUnit_AlphaInterp_4_1_Result;       // 0x2FC(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathFloatAdd_2_1_Result;              // 0x300(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38FC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RigVMModel___SphereTraceByTraceChannel_HitLocation; // 0x308(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___MathVectorAdd_6_1_Result;             // 0x320(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38FD[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___RigUnit_GetTransform_4_1_Transform;   // 0x340(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_4_1_CachedIndex; // 0x3A0(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___MathVectorAdd_6_1_A;                  // 0x3B0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___MathVectorSub_3_1_Result;             // 0x3C8(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class ETraceTypeQuery                   RigVMModel___Select_Result;                        // 0x3E0(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38FE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RigVMModel___Select_Index;                         // 0x3E4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        IntEquals : 1;                                     // Mask: 0x1, PropSize: 0x10x3E8(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_27F : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        RigVMModel___SphereTraceByTraceChannel_bHit : 1;   // Mask: 0x1, PropSize: 0x10x3E9(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_280 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_38FF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RigVMModel___SphereTraceByTraceChannel_HitNormal;  // 0x3F0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathFloatAdd_2_1_A;                   // 0x408(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3900[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInputScaleBiasClamp>          RigVMModel___RigUnit_AlphaInterp_4_1_ScaleBiasClamp; // 0x410(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___MathQuaternionSlerp_Result;           // 0x420(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___MathQuaternionMul_2_1_1_Result;       // 0x440(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___AimBoneMath_1_1_Result;               // 0x460(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___AccumulateVectorLerp_Result;          // 0x4C0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                       RigVMModel___AccumulateVectorLerp_AccumulatedValue; // 0x4D8(0x10)(Edit, EditConst, NonTransactional)
	struct FRigUnit_AimItem_Target               RigVMModel___AimBoneMath_1_1_Primary__IO;          // 0x4E8(0x48)(Edit, EditConst, NonTransactional, NoDestructor)
	TArray<struct FCachedRigElement>             RigVMModel___AimBoneMath_1_1_PrimaryCachedSpace;   // 0x530(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___AimBoneMath_1_1_SecondaryCachedSpace; // 0x540(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___MathQuaternionMul_2_1_1_A;            // 0x550(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___MathQuaternionMul_2_1_1_B;            // 0x570(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathQuaternionSlerp_T;                // 0x590(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathFloatAdd_1_1_Result;              // 0x594(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathFloatAdd_1_1_A;                   // 0x598(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathFloatAdd_1_1_B;                   // 0x59C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___RigUnit_SetTransform_2_1_Value__IO;   // 0x5A0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_2_1_CachedIndex; // 0x600(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___RigUnit_AlphaInterp_5_1_Result;       // 0x610(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathFloatAdd_3_1_Result;              // 0x614(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___SphereTraceByTraceChannel_1_HitLocation; // 0x618(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___MathVectorAdd_1_1_1_1_Result;         // 0x630(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3901[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___RigUnit_GetTransform_2_1_2_1_Transform; // 0x650(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_2_1_2_1_CachedIndex; // 0x6B0(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___MathVectorAdd_1_1_1_1_A;              // 0x6C0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___MathVectorSub_1_1_1_Result;           // 0x6D8(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class ETraceTypeQuery                   RigVMModel___Select_1_Result;                      // 0x6F0(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3902[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RigVMModel___Select_1_Index;                       // 0x6F4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___SphereTraceByTraceChannel_1_bHit : 1; // Mask: 0x1, PropSize: 0x10x6F8(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_281 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3903[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RigVMModel___SphereTraceByTraceChannel_1_HitNormal; // 0x700(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathFloatAdd_3_1_A;                   // 0x718(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3904[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInputScaleBiasClamp>          RigVMModel___RigUnit_AlphaInterp_5_1_ScaleBiasClamp; // 0x720(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___MathQuaternionSlerp_1_Result;         // 0x730(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___MathQuaternionMul_2_2_Result;         // 0x750(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___AimBoneMath_2_Result;                 // 0x770(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___AccumulateVectorLerp_1_Result;        // 0x7D0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                       RigVMModel___AccumulateVectorLerp_1_AccumulatedValue; // 0x7E8(0x10)(Edit, EditConst, NonTransactional)
	struct FRigUnit_AimItem_Target               RigVMModel___AimBoneMath_2_Primary__IO;            // 0x7F8(0x48)(Edit, EditConst, NonTransactional, NoDestructor)
	TArray<struct FCachedRigElement>             RigVMModel___AimBoneMath_2_PrimaryCachedSpace;     // 0x840(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___AimBoneMath_2_SecondaryCachedSpace;   // 0x850(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___MathQuaternionMul_2_2_A;              // 0x860(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___MathQuaternionMul_2_2_B;              // 0x880(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathQuaternionSlerp_1_T;              // 0x8A0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathFloatAdd_4_Result;                // 0x8A4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathFloatAdd_4_A;                     // 0x8A8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathFloatAdd_4_B;                     // 0x8AC(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___RigUnit_SetTransform_3_Value__IO;     // 0x8B0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_3_CachedIndex;   // 0x910(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_1_1_Transform;   // 0x920(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_1_1_CachedIndex; // 0x980(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_1_2_CachedIndex; // 0x990(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_4_Transform;     // 0x9A0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_4_CachedIndex;   // 0xA00(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_1_2_1_CachedIndex; // 0xA10(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_3_Transform;     // 0xA20(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_3_CachedIndex;   // 0xA80(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___MathVectorAdd_5_Result;               // 0xA90(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___MathVectorAdd_5_A;                    // 0xAA8(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___RigUnit_AlphaInterp_Result;           // 0xAC0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathFloatMin_1_Result;                // 0xAC4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathFloatMin_1_A;                     // 0xAC8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathFloatMin_1_B;                     // 0xACC(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInputScaleBiasClamp>          RigVMModel___RigUnit_AlphaInterp_ScaleBiasClamp;   // 0xAD0(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___MathVectorAdd_5_B__IO;                // 0xAE0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3905[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___RigUnit_SetTransform_1_1_Value__IO;   // 0xB00(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_1_1_CachedIndex; // 0xB60(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_2_Transform;     // 0xB70(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_2_CachedIndex;   // 0xBD0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_1_CachedIndex;   // 0xBE0(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___GetTransform_Transform;               // 0xBF0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_CachedIndex;             // 0xC50(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_6_CachedIndex;   // 0xC60(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___GetTransform_4_Transform;             // 0xC70(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_4_CachedIndex;           // 0xCD0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_7_CachedIndex;   // 0xCE0(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___GetTransform_2_Transform;             // 0xCF0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_2_CachedIndex;           // 0xD50(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_4_CachedIndex;   // 0xD60(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_CachedIndex;     // 0xD70(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___GetTransform_1_Transform;             // 0xD80(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_1_CachedIndex;           // 0xDE0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_2_CachedIndex;   // 0xDF0(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___GetTransform_2_1_Transform;           // 0xE00(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_2_1_CachedIndex;         // 0xE60(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_4_1_CachedIndex; // 0xE70(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_5_CachedIndex;   // 0xE80(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___GetTransform_1_1_Transform;           // 0xE90(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_1_1_CachedIndex;         // 0xEF0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_2_2_CachedIndex; // 0xF00(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___MathVectorDistance_1_Result;          // 0xF10(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3906[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___GetTransform_5_1_1_Transform;         // 0xF20(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_5_1_1_CachedIndex;       // 0xF80(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___MathVectorDistance_1_A;               // 0xF90(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3907[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___GetTransform_5_1_Transform;           // 0xFB0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_5_1_CachedIndex;         // 0x1010(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___MathVectorDistance_1_B;               // 0x1020(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathVectorDistance_1_1_Result;        // 0x1038(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3908[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___GetTransform_5_1_1_1_Transform;       // 0x1040(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_5_1_1_1_CachedIndex;     // 0x10A0(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___MathVectorDistance_1_1_A;             // 0x10B0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3909[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___GetTransform_5_1_2_Transform;         // 0x10D0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_5_1_2_CachedIndex;       // 0x1130(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___MathVectorDistance_1_1_B;             // 0x1140(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URigVMMemory_Work_PFI* GetDefaultObj();

};

}


