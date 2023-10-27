#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x5E0 - 0x560)
// ControlRigBlueprintGeneratedClass CR_Player_FeetIK_SlopeApplication.CR_Player_FeetIK_SlopeApplication_C
class UCR_Player_FeetIK_SlopeApplication_C : public UControlRig
{
public:
	double                                       GroundFoot_L;                                      // 0x560(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       GroundFoot_R;                                      // 0x568(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        IsInUmbral;                                        // 0x570(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SwitchIK;                                          // 0x574(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_382B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       PlayerSpeed;                                       // 0x578(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               L_HitNormal;                                       // 0x580(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               R_HitNormal;                                       // 0x598(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       L_AimingNormal_Alpha;                              // 0x5B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       R_AimingNormal_Alpha;                              // 0x5B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bEnableFeetIK;                                     // 0x5C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_382C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        L_TarsalCorrective_Alpha;                          // 0x5C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        R_TarsalCorrective_Alpha;                          // 0x5C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RLeg_Length;                                       // 0x5CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LLeg_Length;                                       // 0x5D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_382D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       ApplyReverseFoot_Alpha;                            // 0x5D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCR_Player_FeetIK_SlopeApplication_C* GetDefaultObj();

};

// 0x4A8 (0x4D0 - 0x28)
// RigVMMemoryStorageGeneratorClass CR_Player_FeetIK_SlopeApplication.RigVMMemory_Literal
class URigVMMemory_Literal_PFISA : public URigVMMemoryStorage
{
public:
	struct FRigElementKey                        RigVMModel___SetRelativeTransformForItem_Child__Const; // 0x28(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___SetRelativeTransformForItem_Parent__Const; // 0x34(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___SetRelativeTransformForItem_bParentInitial__Const : 1; // Mask: 0x1, PropSize: 0x10x40(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_270 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_382E[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___SetRelativeTransformForItem_Value__Const; // 0x50(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___SetRelativeTransformForItem_Weight__Const; // 0xB0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___SetRelativeTransformForItem_bPropagateToChildren__Const : 1; // Mask: 0x1, PropSize: 0x10xB4(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_271 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_382F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        RigVMModel___SetRelativeTransformForItem_1_Child__Const; // 0xB8(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___SetRelativeTransformForItem_1_Parent__Const; // 0xC4(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___SetRelativeTransformForItem_1_Value__Const; // 0xD0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___RigUnit_SetTransform_4_2_1_2_2_Item__Const; // 0x130(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class EBoneGetterSetterMode             RigVMModel___RigUnit_SetTransform_4_2_1_2_2_Space__Const; // 0x13C(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3830[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        RigVMModel___GetTransform_8_3_2_2_Item__Const;     // 0x140(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___RigUnit_SetTransform_4_2_1_3_2_Item__Const; // 0x14C(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___GetTransform_8_3_3_2_Item__Const;     // 0x158(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___RigUnit_SetTransform_1_2_2_Item__Const; // 0x164(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___RigUnit_GetTransform_1_1_1_Item__Const; // 0x170(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___RigUnit_SetTransform_1_2_1_1_Item__Const; // 0x17C(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___RigUnit_GetTransform_4_2_Item__Const; // 0x188(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___ParentConstraint_Child__Const;        // 0x194(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransformFilter                      RigVMModel___ParentConstraint_Filter__Const;       // 0x1A0(0x9)(Edit, EditConst, NonTransactional, NoDestructor)
	uint8                                        Pad_3831[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FConstraintParent>             RigVMModel___ParentConstraint_Parents__Const;      // 0x1B0(0x10)(Edit, EditConst, NonTransactional)
	struct FRigUnit_ParentConstraint_AdvancedSettings RigVMModel___ParentConstraint_AdvancedSettings__Const; // 0x1C0(0x2)(Edit, EditConst, NonTransactional, NoDestructor)
	uint8                                        Pad_3833[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        RigVMModel___ParentConstraint_1_Child__Const;      // 0x1C4(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FConstraintParent>             RigVMModel___ParentConstraint_1_Parents__Const;    // 0x1D0(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___SphericalPoseReader_DriverAxis__Const; // 0x1E0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___SphericalPoseReader_RotationOffset__Const; // 0x1F8(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___SphericalPoseReader_ActiveRegionSize__Const; // 0x210(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRegionScaleFactors                   RigVMModel___SphericalPoseReader_ActiveRegionScaleFactors__Const; // 0x214(0x10)(Edit, EditConst, NonTransactional, NoDestructor)
	float                                        RigVMModel___SphericalPoseReader_FalloffSize__Const; // 0x224(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRegionScaleFactors                   RigVMModel___SphericalPoseReader_FalloffRegionScaleFactors__Const; // 0x228(0x10)(Edit, EditConst, NonTransactional, NoDestructor)
	struct FRigElementKey                        RigVMModel___SphericalPoseReader_OptionalParentItem__Const; // 0x238(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FSphericalPoseReaderDebugSettings     RigVMModel___SphericalPoseReader_Debug__Const;     // 0x244(0x10)(Edit, EditConst, NonTransactional, NoDestructor)
	struct FRigElementKey                        RigVMModel___Set_Transform_Item__Const;            // 0x254(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class EBoneGetterSetterMode             RigVMModel___Set_Transform_Space__Const;           // 0x260(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3836[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RigVMModel___Interpolate_1_A__Const;               // 0x270(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___Interpolate_1_B__Const;               // 0x290(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___SphericalPoseReader_1_DriverAxis__Const; // 0x2B0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___SphericalPoseReader_1_RotationOffset__Const; // 0x2C8(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___SphericalPoseReader_1_ActiveRegionSize__Const; // 0x2E0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRegionScaleFactors                   RigVMModel___SphericalPoseReader_1_ActiveRegionScaleFactors__Const; // 0x2E4(0x10)(Edit, EditConst, NonTransactional, NoDestructor)
	struct FRigElementKey                        RigVMModel___SphericalPoseReader_1_OptionalParentItem__Const; // 0x2F4(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___Set_Transform_1_Item__Const;          // 0x300(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3837[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RigVMModel___Interpolate_1_1_B__Const;             // 0x310(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___PBIK_1_Root__Const;                   // 0x330(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPBIKEffector>                 RigVMModel___PBIK_1_Effectors__Const;              // 0x338(0x10)(Edit, EditConst, NonTransactional)
	uint8                                        Pad_3838[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___Interpolate_B__Const;                 // 0x350(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              RigVMModel___Cast_1_1_Value__Const;                // 0x3B0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor)
	struct FVector                               RigVMModel___Clamp_2_Value__Const;                 // 0x3C8(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___RigUnit_GetTransform_7_2_Item__Const; // 0x3E0(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3839[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RigVMModel___Clamp_2_Minimum__Const;               // 0x3F0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___Clamp_2_Maximum__Const;               // 0x408(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___RigUnit_GetTransform_7_1_1_Item__Const; // 0x420(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_383A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RigVMModel___Clamp_Maximum__Const;                 // 0x430(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPBIKBoneSetting>              RigVMModel___PBIK_1_BoneSettings__Const;           // 0x448(0x10)(Edit, EditConst, NonTransactional)
	TArray<class FName>                          RigVMModel___PBIK_1_ExcludedBones__Const;          // 0x458(0x10)(Edit, EditConst, NonTransactional)
	struct FPBIKSolverSettings                   RigVMModel___PBIK_1_Settings__Const;               // 0x468(0x10)(Edit, EditConst, NonTransactional, NoDestructor)
	struct FPBIKDebug                            RigVMModel___PBIK_1_Debug__Const;                  // 0x478(0x8)(Edit, EditConst, NonTransactional, NoDestructor)
	struct FRigElementKey                        RigVMModel___Set_Transform_3_Item__Const;          // 0x480(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_383B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RigVMModel___Add_3_B__Const;                       // 0x490(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Interpolate_3_A__Const;               // 0x4A8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___Set_Transform_3_1_Item__Const;        // 0x4AC(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___GetTransform_5_1_1_Item__Const;       // 0x4B8(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___GetTransform_5_1_1_1_Item__Const;     // 0x4C4(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URigVMMemory_Literal_PFISA* GetDefaultObj();

};

// 0x11A0 (0x11C8 - 0x28)
// RigVMMemoryStorageGeneratorClass CR_Player_FeetIK_SlopeApplication.RigVMMemory_Work
class URigVMMemory_Work_PFISA : public URigVMMemoryStorage
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
	struct FTransform                            RigVMModel___RigUnit_GetTransform_1_1_1_Transform; // 0x1A0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_1_1_1_CachedIndex; // 0x200(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_1_2_2_CachedIndex; // 0x210(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_4_2_Transform;   // 0x220(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_4_2_CachedIndex; // 0x280(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_1_2_1_1_CachedIndex; // 0x290(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___ParentConstraint_ChildCache;          // 0x2A0(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<struct FCachedRigElement>>     RigVMModel___ParentConstraint_ParentCaches;        // 0x2B0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___ParentConstraint_1_ChildCache;        // 0x2C0(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<struct FCachedRigElement>>     RigVMModel___ParentConstraint_1_ParentCaches;      // 0x2D0(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___SphericalPoseReader_OutputParam;      // 0x2E0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_383C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSphericalRegion>              RigVMModel___SphericalPoseReader_InnerRegion;      // 0x2E8(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FSphericalRegion>              RigVMModel___SphericalPoseReader_OuterRegion;      // 0x2F8(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___SphericalPoseReader_DriverNormal;     // 0x308(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___SphericalPoseReader_Driver2D;         // 0x318(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SphericalPoseReader_DriverCache;      // 0x328(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SphericalPoseReader_OptionalParentCache; // 0x338(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FTransform>                    RigVMModel___SphericalPoseReader_LocalDriverTransformInit; // 0x348(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___SphericalPoseReader_CachedRotationOffset; // 0x358(0x10)(Edit, EditConst, NonTransactional)
	TArray<uint8>                                RigVMModel___SphericalPoseReader_bCachedInitTransforms; // 0x368(0x10)(Edit, EditConst, NonTransactional)
	uint8                                        Pad_383D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RigVMModel___Interpolate_1_Result;                 // 0x380(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Interpolate_1_T;                      // 0x3A0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_383E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___Set_Transform_CachedIndex;            // 0x3A8(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___SphericalPoseReader_1_OutputParam;    // 0x3B8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_383F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSphericalRegion>              RigVMModel___SphericalPoseReader_1_InnerRegion;    // 0x3C0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FSphericalRegion>              RigVMModel___SphericalPoseReader_1_OuterRegion;    // 0x3D0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___SphericalPoseReader_1_DriverNormal;   // 0x3E0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___SphericalPoseReader_1_Driver2D;       // 0x3F0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SphericalPoseReader_1_DriverCache;    // 0x400(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SphericalPoseReader_1_OptionalParentCache; // 0x410(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FTransform>                    RigVMModel___SphericalPoseReader_1_LocalDriverTransformInit; // 0x420(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___SphericalPoseReader_1_CachedRotationOffset; // 0x430(0x10)(Edit, EditConst, NonTransactional)
	TArray<uint8>                                RigVMModel___SphericalPoseReader_1_bCachedInitTransforms; // 0x440(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___Interpolate_1_1_Result;               // 0x450(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Interpolate_1_1_T;                    // 0x470(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3840[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___Set_Transform_1_CachedIndex;          // 0x478(0x10)(Edit, EditConst, NonTransactional)
	uint8                                        Pad_3841[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___Interpolate_Result;                   // 0x490(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_7_2_1_Transform; // 0x4F0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_7_2_1_CachedIndex; // 0x550(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___Cast_1_1_Result;                      // 0x560(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___Clamp_2_Result;                       // 0x580(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              RigVMModel___Cast_2_Result;                        // 0x598(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_7_2_Transform;   // 0x5B0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_7_2_CachedIndex; // 0x610(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___Cast_2_Value;                         // 0x620(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___Clamp_2_Value__IO;                    // 0x640(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              RigVMModel___Cast_1_1_Value__IO;                   // 0x658(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor)
	struct FTransform                            RigVMModel___Interpolate_B__IO;                    // 0x670(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Interpolate_T;                        // 0x6D0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3842[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___Interpolate_2_Result;                 // 0x6E0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_7_2_1_1_Transform; // 0x740(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_7_2_1_1_CachedIndex; // 0x7A0(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___Cast_1_1_2_Result;                    // 0x7B0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___Clamp_Result;                         // 0x7D0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              RigVMModel___Cast_2_2_Result;                      // 0x7E8(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_7_1_1_Transform; // 0x800(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_7_1_1_CachedIndex; // 0x860(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___Cast_2_2_Value;                       // 0x870(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___Clamp_Value__IO;                      // 0x890(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              RigVMModel___Cast_1_1_2_Value__IO;                 // 0x8A8(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor)
	struct FTransform                            RigVMModel___Interpolate_2_B__IO;                  // 0x8C0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Interpolate_2_T;                      // 0x920(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3843[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___GetTransform_3_1_Transform;           // 0x930(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_3_1_CachedIndex;         // 0x990(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FPBIKEffector>                 RigVMModel___PBIK_1_Effectors__IO;                 // 0x9A0(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<int32>>                        RigVMModel___PBIK_1_EffectorSolverIndices;         // 0x9B0(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<int32>>                        RigVMModel___PBIK_1_BoneSettingToSolverBoneIndex;  // 0x9C0(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<int32>>                        RigVMModel___PBIK_1_SolverBoneToElementIndex;      // 0x9D0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FPBIKSolver>                   RigVMModel___PBIK_1_Solver;                        // 0x9E0(0x10)(Edit, EditConst, NonTransactional)
	TArray<uint8>                                RigVMModel___PBIK_1_bNeedsInit;                    // 0x9F0(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___Cast_1_2_Result;                      // 0xA00(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___Add_3_Result;                         // 0xA20(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              RigVMModel___Cast_3_Result;                        // 0xA38(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_8_2_Transform;   // 0xA50(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_8_2_CachedIndex; // 0xAB0(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___Cast_3_Value;                         // 0xAC0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___Add_3_A__IO;                          // 0xAE0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              RigVMModel___Cast_1_2_Value__IO;                   // 0xAF8(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor)
	float                                        RigVMModel___Interpolate_3_Result;                 // 0xB10(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Interpolate_3_B;                      // 0xB14(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Interpolate_3_T;                      // 0xB18(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3844[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___Set_Transform_3_CachedIndex;          // 0xB20(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___Cast_1_1_1_Result;                    // 0xB30(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___Add_2_1_Result;                       // 0xB50(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              RigVMModel___Cast_2_1_Result;                      // 0xB68(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_8_1_1_Transform; // 0xB80(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_8_1_1_CachedIndex; // 0xBE0(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___Cast_2_1_Value;                       // 0xBF0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___Add_2_1_A__IO;                        // 0xC10(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              RigVMModel___Cast_1_1_1_Value__IO;                 // 0xC28(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor)
	float                                        RigVMModel___Interpolate_3_1_Result;               // 0xC40(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Interpolate_3_1_B;                    // 0xC44(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Interpolate_3_1_T;                    // 0xC48(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3845[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___Set_Transform_3_1_CachedIndex;        // 0xC50(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___GetTransform_Transform;               // 0xC60(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_CachedIndex;             // 0xCC0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_6_CachedIndex;   // 0xCD0(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___GetTransform_4_Transform;             // 0xCE0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_4_CachedIndex;           // 0xD40(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_7_CachedIndex;   // 0xD50(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___GetTransform_2_Transform;             // 0xD60(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_2_CachedIndex;           // 0xDC0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_4_CachedIndex;   // 0xDD0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_CachedIndex;     // 0xDE0(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___GetTransform_1_Transform;             // 0xDF0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_1_CachedIndex;           // 0xE50(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_2_CachedIndex;   // 0xE60(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___GetTransform_2_1_Transform;           // 0xE70(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_2_1_CachedIndex;         // 0xED0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_4_1_CachedIndex; // 0xEE0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_5_CachedIndex;   // 0xEF0(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___GetTransform_1_1_Transform;           // 0xF00(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_1_1_CachedIndex;         // 0xF60(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_2_2_CachedIndex; // 0xF70(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___MathVectorDistance_1_Result;          // 0xF80(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3846[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___GetTransform_5_1_1_Transform;         // 0xF90(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_5_1_1_CachedIndex;       // 0xFF0(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___MathVectorDistance_1_A;               // 0x1000(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3847[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___GetTransform_5_1_Transform;           // 0x1020(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_5_1_CachedIndex;         // 0x1080(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___MathVectorDistance_1_B;               // 0x1090(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathVectorDistance_1_1_Result;        // 0x10A8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3848[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___GetTransform_5_1_1_1_Transform;       // 0x10B0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_5_1_1_1_CachedIndex;     // 0x1110(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___MathVectorDistance_1_1_A;             // 0x1120(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3849[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___GetTransform_5_1_2_Transform;         // 0x1140(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_5_1_2_CachedIndex;       // 0x11A0(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___MathVectorDistance_1_1_B;             // 0x11B0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URigVMMemory_Work_PFISA* GetDefaultObj();

};

}


