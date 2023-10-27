#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x21 (0x581 - 0x560)
// ControlRigBlueprintGeneratedClass CR_Kukajin_LookAtPlayer.CR_Kukajin_LookAtPlayer_C
class UCR_Kukajin_LookAtPlayer_C : public UControlRig
{
public:
	struct FVector                               LooAt_TargetLocation;                              // 0x560(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LookAt_AlphaBlend;                                 // 0x578(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HeadOnly;                                          // 0x580(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCR_Kukajin_LookAtPlayer_C* GetDefaultObj();

};

// 0xD68 (0xD90 - 0x28)
// RigVMMemoryStorageGeneratorClass CR_Kukajin_LookAtPlayer.RigVMMemory_Literal
class URigVMMemory_Literal_KLAP : public URigVMMemoryStorage
{
public:
	struct FRigElementKey                        RigVMModel___RigUnit_SetTranslation_Item__Const;   // 0x28(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class EBoneGetterSetterMode             RigVMModel___RigUnit_SetTranslation_Space__Const;  // 0x34(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___RigUnit_SetTranslation_bInitial__Const : 1; // Mask: 0x1, PropSize: 0x10x35(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_24D : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_35F9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RigVMModel___Add_B__Const;                         // 0x38(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___RigUnit_SetTranslation_Weight__Const; // 0x50(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35FA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RigVMModel___Clamp_1_Value__Const;                 // 0x58(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigUnit_AimItem_Target               RigVMModel___AimBoneMath_1_Primary__Const;         // 0x70(0x48)(Edit, EditConst, NonTransactional, NoDestructor)
	struct FRigUnit_AimItem_Target               RigVMModel___AimBoneMath_1_Secondary__Const;       // 0xB8(0x48)(Edit, EditConst, NonTransactional, NoDestructor)
	struct FRigUnit_AimBone_DebugSettings        RigVMModel___AimBoneMath_1_DebugSettings__Const;   // 0x100(0x70)(Edit, EditConst, NonTransactional, NoDestructor)
	struct FVector                               RigVMModel___MathQuaternionSwingTwist_1_TwistAxis__Const; // 0x170(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class EEulerRotationOrder               RigVMModel___MathQuaternionToEuler_1_1_RotationOrder__Const; // 0x188(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35FB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RigVMModel___Clamp_1_Minimum__Const;               // 0x190(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___Clamp_1_Maximum__Const;               // 0x1A8(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___SpringInterpQuaternionV2_1_Strength__Const; // 0x1C0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___SpringInterpQuaternionV2_1_CriticalDamping__Const; // 0x1C4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35FC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RigVMModel___SpringInterpQuaternionV2_1_Current__Const; // 0x1D0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___SpringInterpQuaternionV2_1_TargetVelocityAmount__Const; // 0x1F0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___Set_Transform_1_bPropagateToChildren__Const : 1; // Mask: 0x1, PropSize: 0x10x1F4(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_24E : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_35FD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                RigVMModel___If_True__Const;                       // 0x1F8(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FRigElementKey>                RigVMModel___If_False__Const;                      // 0x208(0x10)(Edit, EditConst, NonTransactional)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_1_SpawnControl_Parent__Const; // 0x218(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___eyes_LookAt_module_1_SpawnControl_Name__Const; // 0x224(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35FE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___eyes_LookAt_module_1_SpawnControl_OffsetTransform__Const; // 0x230(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_1_GetTransform_2_Item__Const; // 0x290(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_1_GetTransform_1_1_Item__Const; // 0x29C(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___eyes_LookAt_module_1_Divide_2_B__Const; // 0x2A8(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigUnit_HierarchyAddControlVector_Settings RigVMModel___eyes_LookAt_module_1_SpawnControl_Settings__Const; // 0x2C0(0x100)(Edit, EditConst, NonTransactional)
	class FName                                  RigVMModel___eyes_LookAt_module_1_SpawnControl_1_Name__Const; // 0x3C0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___eyes_LookAt_module_1_Divide_1_B__Const; // 0x3C8(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigUnit_HierarchyAddControlVector_Settings RigVMModel___eyes_LookAt_module_1_SpawnControl_1_Settings__Const; // 0x3D0(0x100)(Edit, EditConst, NonTransactional)
	class FName                                  RigVMModel___eyes_LookAt_module_1_SpawnControl_1_1_Name__Const; // 0x4D0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___eyes_LookAt_module_1_Multiply_1_B__Const; // 0x4D8(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigUnit_HierarchyAddControlVector_Settings RigVMModel___eyes_LookAt_module_1_SpawnControl_1_1_Settings__Const; // 0x4E0(0x100)(Edit, EditConst, NonTransactional)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_1_SpawnControl_1_1_1_Parent__Const; // 0x5E0(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___eyes_LookAt_module_1_SpawnControl_1_1_1_Name__Const; // 0x5EC(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35FF[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_HierarchyAddControlVector_Settings RigVMModel___eyes_LookAt_module_1_SpawnControl_1_1_1_Settings__Const; // 0x600(0x100)(Edit, EditConst, NonTransactional)
	class FName                                  RigVMModel___eyes_LookAt_module_1_SpawnControl_1_1_1_1_Name__Const; // 0x700(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3600[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_HierarchyAddControlVector_Settings RigVMModel___eyes_LookAt_module_1_SpawnControl_1_1_1_1_Settings__Const; // 0x710(0x100)(Edit, EditConst, NonTransactional)
	class FName                                  RigVMModel___eyes_LookAt_module_1_SpawnControl_1_1_1_2_Name__Const; // 0x810(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___eyes_LookAt_module_1_SpawnControl_1_1_1_1_1_Name__Const; // 0x818(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigUnit_HierarchyAddControlVector_Settings RigVMModel___eyes_LookAt_module_1_SpawnControl_1_1_1_1_1_Settings__Const; // 0x820(0x100)(Edit, EditConst, NonTransactional)
	class FName                                  RigVMModel___eyes_LookAt_module_1_SpawnControl_1_1_1_3_Name__Const; // 0x920(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___eyes_LookAt_module_1_SpawnControl_1_1_1_1_2_Name__Const; // 0x928(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___eyes_LookAt_module_1_SpawnControl_1_1_1_4_Name__Const; // 0x930(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___eyes_LookAt_module_1_SpawnControl_1_1_1_1_3_Name__Const; // 0x938(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___eyes_LookAt_module_1_SpawnControl_1_1_1_5_Name__Const; // 0x940(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___eyes_LookAt_module_1_SpawnControl_1_1_1_1_4_Name__Const; // 0x948(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_1_Set_Transform_Item__Const; // 0x950(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class EBoneGetterSetterMode             RigVMModel___eyes_LookAt_module_1_Set_Transform_Space__Const; // 0x95C(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3601[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_1_Set_Transform_1_Item__Const; // 0x960(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3602[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___eyes_LookAt_module_1_Multiply_B__Const; // 0x970(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FRigElementKey>                RigVMModel___eyes_LookAt_module_1_ArrayIterator_3_Array__Const; // 0x978(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FRigElementKey>                RigVMModel___eyes_LookAt_module_1_ArrayIterator_Array__Const; // 0x988(0x10)(Edit, EditConst, NonTransactional)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_1_RigUnit_SetTranslation_Item__Const; // 0x998(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3603[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RigVMModel___Add_1_B__Const;                       // 0x9A8(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___eyes_LookAt_module_1_Add_B__Const;    // 0x9C0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FFilterOptionPerAxis                  RigVMModel___eyes_LookAt_module_1_PositionConstraintLocalSpaceOffset_Filter__Const; // 0x9D8(0x3)(Edit, EditConst, NonTransactional, NoDestructor)
	uint8                                        Pad_3604[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FConstraintParent>             RigVMModel___eyes_LookAt_module_1_PositionConstraintLocalSpaceOffset_Parents__Const; // 0x9E0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FConstraintParent>             RigVMModel___eyes_LookAt_module_1_PositionConstraintLocalSpaceOffset_1_Parents__Const; // 0x9F0(0x10)(Edit, EditConst, NonTransactional)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_1_ParentConstraint_1_Child__Const; // 0xA00(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransformFilter                      RigVMModel___eyes_LookAt_module_1_ParentConstraint_1_Filter__Const; // 0xA0C(0x9)(Edit, EditConst, NonTransactional, NoDestructor)
	struct FRigUnit_ParentConstraint_AdvancedSettings RigVMModel___eyes_LookAt_module_1_ParentConstraint_1_AdvancedSettings__Const; // 0xA15(0x2)(Edit, EditConst, NonTransactional, NoDestructor)
	uint8                                        Pad_3605[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_1_ParentConstraint_1_1_Child__Const; // 0xA18(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3606[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                RigVMModel___eyes_LookAt_module_1_SetControlVisibility_Pattern__Const; // 0xA28(0x10)(Edit, ZeroConstructor, EditConst, NonTransactional, HasGetValueTypeHash)
	TArray<struct FRigElementKey>                RigVMModel___eyes_LookAt_module_1_ArrayIterator_4_Array__Const; // 0xA38(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FRigElementKey>                RigVMModel___eyes_LookAt_module_1_ArrayIterator_1_1_Array__Const; // 0xA48(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FRigElementKey>                RigVMModel___eyes_LookAt_module_1_ArrayIterator_1_Array__Const; // 0xA58(0x10)(Edit, EditConst, NonTransactional)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_DriverItem__Const; // 0xA68(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3607[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_DriverAxis__Const; // 0xA78(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_RotationOffset__Const; // 0xA90(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_ActiveRegionSize__Const; // 0xAA8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRegionScaleFactors                   RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_ActiveRegionScaleFactors__Const; // 0xAAC(0x10)(Edit, EditConst, NonTransactional, NoDestructor)
	float                                        RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_FalloffSize__Const; // 0xABC(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRegionScaleFactors                   RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_FalloffRegionScaleFactors__Const; // 0xAC0(0x10)(Edit, EditConst, NonTransactional, NoDestructor)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_OptionalParentItem__Const; // 0xAD0(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FSphericalPoseReaderDebugSettings     RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_Debug__Const; // 0xADC(0x10)(Edit, EditConst, NonTransactional, NoDestructor)
	uint8                                        Pad_3608[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_AimConstraint_WorldUp        RigVMModel___eyes_LookAt_module_1_AimConstraintLocalSpaceOffset_WorldUp__Const; // 0xAF0(0x28)(Edit, EditConst, NonTransactional, NoDestructor)
	TArray<struct FConstraintParent>             RigVMModel___eyes_LookAt_module_1_AimConstraintLocalSpaceOffset_Parents__Const; // 0xB18(0x10)(Edit, EditConst, NonTransactional)
	uint8                                        Pad_3609[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_AimConstraint_AdvancedSettings RigVMModel___eyes_LookAt_module_1_AimConstraintLocalSpaceOffset_AdvancedSettings__Const; // 0xB30(0x80)(Edit, EditConst, NonTransactional, NoDestructor)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_1_Set_Transform_2_Item__Const; // 0xBB0(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_360A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FConstraintParent>             RigVMModel___eyes_LookAt_module_1_RotationConstraintLocalSpaceOffset_Parents__Const; // 0xBC0(0x10)(Edit, EditConst, NonTransactional)
	struct FRigUnit_RotationConstraint_AdvancedSettings RigVMModel___eyes_LookAt_module_1_RotationConstraintLocalSpaceOffset_AdvancedSettings__Const; // 0xBD0(0x2)(Edit, EditConst, NonTransactional, NoDestructor)
	uint8                                        Pad_360B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_1_DriverItem__Const; // 0xBD4(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FConstraintParent>             RigVMModel___eyes_LookAt_module_1_AimConstraintLocalSpaceOffset_1_Parents__Const; // 0xBE0(0x10)(Edit, EditConst, NonTransactional)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_1_RigUnit_SetRotation_1_1_Item__Const; // 0xBF0(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___eyes_LookAt_module_1_SpringInterpQuaternionV2_1_Strength__Const; // 0xBFC(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___eyes_LookAt_module_1_SpringInterpQuaternionV2_1_TargetVelocityAmount__Const; // 0xC00(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_360C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FConstraintParent>             RigVMModel___eyes_LookAt_module_1_RotationConstraintLocalSpaceOffset_1_Parents__Const; // 0xC08(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FRigElementKey>                RigVMModel___eyes_LookAt_module_1_ArrayIterator_2_Array__Const; // 0xC18(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FConstraintParent>             RigVMModel___eyes_LookAt_module_1_ParentConstraint_1_1_1_Parents__Const; // 0xC28(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FRigElementKey>                RigVMModel___eyes_LookAt_module_1_ArrayIterator_2_1_Array__Const; // 0xC38(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FConstraintParent>             RigVMModel___eyes_LookAt_module_1_ParentConstraint_1_1_1_2_1_Parents__Const; // 0xC48(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FRigElementKey>                RigVMModel___eyes_LookAt_module_1_ArrayIterator_2_2_Array__Const; // 0xC58(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FConstraintParent>             RigVMModel___eyes_LookAt_module_1_ParentConstraint_1_1_1_1_Parents__Const; // 0xC68(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FRigElementKey>                RigVMModel___eyes_LookAt_module_1_ArrayIterator_2_1_1_Array__Const; // 0xC78(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FConstraintParent>             RigVMModel___eyes_LookAt_module_1_ParentConstraint_1_1_1_2_1_1_Parents__Const; // 0xC88(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_2_RotationOffset__Const; // 0xC98(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRegionScaleFactors                   RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_2_ActiveRegionScaleFactors__Const; // 0xCB0(0x10)(Edit, EditConst, NonTransactional, NoDestructor)
	struct FRegionScaleFactors                   RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_2_FalloffRegionScaleFactors__Const; // 0xCC0(0x10)(Edit, EditConst, NonTransactional, NoDestructor)
	struct FSphericalPoseReaderDebugSettings     RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_2_Debug__Const; // 0xCD0(0x10)(Edit, EditConst, NonTransactional, NoDestructor)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_1_RotationConstraintLocalSpaceOffset_1_1_2_2_Child__Const; // 0xCE0(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_360F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FConstraintParent>             RigVMModel___eyes_LookAt_module_1_RotationConstraintLocalSpaceOffset_1_1_2_2_Parents__Const; // 0xCF0(0x10)(Edit, EditConst, NonTransactional)
	double                                       RigVMModel___eyes_LookAt_module_1_Remap_2_1_SourceMinimum__Const; // 0xD00(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___eyes_LookAt_module_1_Remap_2_1_TargetMaximum__Const; // 0xD08(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_2_2_RotationOffset__Const; // 0xD10(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FSphericalPoseReaderDebugSettings     RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_2_2_Debug__Const; // 0xD28(0x10)(Edit, EditConst, NonTransactional, NoDestructor)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_1_RotationConstraintLocalSpaceOffset_1_1_2_Child__Const; // 0xD38(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_1_RotationConstraintLocalSpaceOffset_1_1_1_Child__Const; // 0xD44(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FConstraintParent>             RigVMModel___eyes_LookAt_module_1_RotationConstraintLocalSpaceOffset_1_1_1_Parents__Const; // 0xD50(0x10)(Edit, EditConst, NonTransactional)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_1_RotationConstraintLocalSpaceOffset_1_1_2_1_Child__Const; // 0xD60(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3612[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                RigVMModel___eyes_LookAt_module_SetControlVisibility_Pattern__Const; // 0xD70(0x10)(Edit, ZeroConstructor, EditConst, NonTransactional, HasGetValueTypeHash)
	TArray<struct FRigElementKey>                RigVMModel___eyes_LookAt_module_ArrayIterator_2_Array__Const; // 0xD80(0x10)(Edit, EditConst, NonTransactional)

	static class UClass* StaticClass();
	static class URigVMMemory_Literal_KLAP* GetDefaultObj();

};

// 0x29F8 (0x2A20 - 0x28)
// RigVMMemoryStorageGeneratorClass CR_Kukajin_LookAtPlayer.RigVMMemory_Work
class URigVMMemory_Work_KLAP : public URigVMMemoryStorage
{
public:
	struct FControlRigExecuteContext             ExecuteContext_;                                   // 0x28(0x38)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___Add_Result;                           // 0x60(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___From_World_Global;                    // 0x78(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTranslation_CachedIndex;   // 0x90(0x10)(Edit, EditConst, NonTransactional)
	struct FRigElementKey                        RigVMModel___ArrayIterator_1_Element;              // 0xA0(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3613[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RigVMModel___SpringInterpQuaternionV2_1_Result;    // 0xB0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___Interpolate_Result;                   // 0xD0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___GetTransform_1_1_Transform;           // 0xF0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_1_1_CachedIndex;         // 0x150(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___Interpolate_A;                        // 0x160(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___MathQuaternionFromEuler_1_Result;     // 0x180(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___Scale_1_Result;                       // 0x1A0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___Clamp_1_Result;                       // 0x1B8(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___MathQuaternionToEuler_1_1_Result;     // 0x1D0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3614[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RigVMModel___MathQuaternionSwingTwist_1_Swing;     // 0x1F0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___AimBoneMath_1_Result;                 // 0x210(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_1_1_1_Transform; // 0x270(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_1_1_1_CachedIndex; // 0x2D0(0x10)(Edit, EditConst, NonTransactional)
	struct FRigUnit_AimItem_Target               RigVMModel___AimBoneMath_1_Primary__IO;            // 0x2E0(0x48)(Edit, EditConst, NonTransactional, NoDestructor)
	TArray<struct FCachedRigElement>             RigVMModel___AimBoneMath_1_PrimaryCachedSpace;     // 0x328(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___AimBoneMath_1_SecondaryCachedSpace;   // 0x338(0x10)(Edit, EditConst, NonTransactional)
	uint8                                        Pad_3615[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RigVMModel___MathQuaternionSwingTwist_1_Input;     // 0x350(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___MathQuaternionSwingTwist_1_Twist;     // 0x370(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___MathQuaternionToEuler_2_Result;       // 0x390(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___Clamp_1_Value__IO;                    // 0x3A8(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___ArrayIterator_1_Ratio;                // 0x3C0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Interpolate_T;                        // 0x3C4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___SpringInterpQuaternionV2_1_AngularVelocity; // 0x3C8(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FQuat>                         RigVMModel___SpringInterpQuaternionV2_1_SimulatedResult; // 0x3E0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FQuaternionSpringState>        RigVMModel___SpringInterpQuaternionV2_1_SpringState; // 0x3F0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___Set_Transform_1_CachedIndex;          // 0x400(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FRigElementKey>                RigVMModel___If_Result;                            // 0x410(0x10)(Edit, EditConst, NonTransactional)
	uint8                                        RigVMModel___If_Condition : 1;                     // Mask: 0x1, PropSize: 0x10x420(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_24F : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3616[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RigVMModel___ArrayIterator_1_Index;                // 0x424(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___ArrayIterator_1_Count;                // 0x428(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___ArrayIterator_1_Continue : 1;         // Mask: 0x1, PropSize: 0x10x42C(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_250 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3617[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_1_SpawnControl_Item; // 0x430(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3618[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RigVMModel___eyes_LookAt_module_1_Divide_2_Result; // 0x440(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___eyes_LookAt_module_1_Add_1_Result;    // 0x458(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___eyes_LookAt_module_1_GetTransform_2_Transform; // 0x470(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_1_GetTransform_2_CachedIndex; // 0x4D0(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___eyes_LookAt_module_1_Add_1_A;         // 0x4E0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3619[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___eyes_LookAt_module_1_GetTransform_1_1_Transform; // 0x500(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_1_GetTransform_1_1_CachedIndex; // 0x560(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___eyes_LookAt_module_1_Add_1_B;         // 0x570(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_361A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___eyes_LookAt_module_1_SpawnControl_OffsetTransform__IO; // 0x590(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_1_SpawnControl_1_Item; // 0x5F0(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_361B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___eyes_LookAt_module_1_Divide_1_Result; // 0x600(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___eyes_LookAt_module_1_MathVectorDistance_1_Result; // 0x608(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_361C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___eyes_LookAt_module_1_Divide_1_A;      // 0x610(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_361D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___eyes_LookAt_module_1_SpawnControl_1_OffsetTransform__IO; // 0x620(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_1_SpawnControl_1_1_Item; // 0x680(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_361E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___eyes_LookAt_module_1_Multiply_1_Result; // 0x690(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_361F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___eyes_LookAt_module_1_SpawnControl_1_1_OffsetTransform__IO; // 0x6A0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_1_SpawnControl_1_1_1_Item; // 0x700(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_1_SpawnControl_1_1_1_1_Item; // 0x70C(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_1_SpawnControl_1_1_1_2_Item; // 0x718(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_1_SpawnControl_1_1_1_1_1_Item; // 0x724(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_1_SpawnControl_1_1_1_3_Item; // 0x730(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_1_SpawnControl_1_1_1_1_2_Item; // 0x73C(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_1_SpawnControl_1_1_1_4_Item; // 0x748(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_1_SpawnControl_1_1_1_1_3_Item; // 0x754(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_1_SpawnControl_1_1_1_5_Item; // 0x760(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_1_SpawnControl_1_1_1_1_4_Item; // 0x76C(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_1_ArrayIterator_Element; // 0x778(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___eyes_LookAt_module_1_SetControlOffset_Control; // 0x784(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3620[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RigVMModel___eyes_LookAt_module_1_MathQuaternionFromEuler_Result; // 0x790(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___eyes_LookAt_module_1_RigUnit_GetTransform_Transform; // 0x7B0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_1_RigUnit_GetTransform_CachedIndex; // 0x810(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___eyes_LookAt_module_1_SetControlOffset_Offset__IO; // 0x820(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_1_SetControlOffset_CachedControlIndex; // 0x880(0x10)(Edit, EditConst, NonTransactional)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_1_ArrayIterator_3_Element; // 0x890(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___eyes_LookAt_module_1_SetControlOffset_1_Control; // 0x89C(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3621[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RigVMModel___eyes_LookAt_module_1_MathQuaternionFromEuler_1_Result; // 0x8B0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___eyes_LookAt_module_1_RigUnit_GetTransform_1_Transform; // 0x8D0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_1_RigUnit_GetTransform_1_CachedIndex; // 0x930(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___eyes_LookAt_module_1_SetControlOffset_1_Offset__IO; // 0x940(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_1_SetControlOffset_1_CachedControlIndex; // 0x9A0(0x10)(Edit, EditConst, NonTransactional)
	double                                       RigVMModel___eyes_LookAt_module_1_Divide_Result;   // 0x9B0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___eyes_LookAt_module_1_MathVectorDistance_Result; // 0x9B8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3622[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___eyes_LookAt_module_1_GetTransform_Transform; // 0x9C0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_1_GetTransform_CachedIndex; // 0xA20(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___eyes_LookAt_module_1_MathVectorDistance_A; // 0xA30(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3623[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___eyes_LookAt_module_1_GetTransform_1_Transform; // 0xA50(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_1_GetTransform_1_CachedIndex; // 0xAB0(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___eyes_LookAt_module_1_MathVectorDistance_B; // 0xAC0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___eyes_LookAt_module_1_Divide_A;        // 0xAD8(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___eyes_LookAt_module_1_Set_Transform_Value__IO; // 0xAE0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_1_Set_Transform_CachedIndex; // 0xB40(0x10)(Edit, EditConst, NonTransactional)
	double                                       RigVMModel___eyes_LookAt_module_1_Multiply_Result; // 0xB50(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3624[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___eyes_LookAt_module_1_Set_Transform_1_Value__IO; // 0xB60(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_1_Set_Transform_1_CachedIndex; // 0xBC0(0x10)(Edit, EditConst, NonTransactional)
	int32                                        RigVMModel___eyes_LookAt_module_1_ArrayIterator_3_Index; // 0xBD0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___eyes_LookAt_module_1_ArrayIterator_3_Count; // 0xBD4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___eyes_LookAt_module_1_ArrayIterator_3_Ratio; // 0xBD8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___eyes_LookAt_module_1_ArrayIterator_3_Continue : 1; // Mask: 0x1, PropSize: 0x10xBDC(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_251 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3625[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RigVMModel___eyes_LookAt_module_1_ArrayIterator_Index; // 0xBE0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___eyes_LookAt_module_1_ArrayIterator_Count; // 0xBE4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___eyes_LookAt_module_1_ArrayIterator_Ratio; // 0xBE8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___eyes_LookAt_module_1_ArrayIterator_Continue : 1; // Mask: 0x1, PropSize: 0x10xBEC(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_252 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3626[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RigVMModel___eyes_LookAt_module_1_Add_Result;      // 0xBF0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___eyes_LookAt_module_1_From_World_Global; // 0xC08(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___Add_1_Result;                         // 0xC20(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_1_RigUnit_SetTranslation_CachedIndex; // 0xC38(0x10)(Edit, EditConst, NonTransactional)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_1_ArrayIterator_1_Element; // 0xC48(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3627[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_1_PositionConstraintLocalSpaceOffset_ChildCache; // 0xC58(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<struct FCachedRigElement>>     RigVMModel___eyes_LookAt_module_1_PositionConstraintLocalSpaceOffset_ParentCaches; // 0xC68(0x10)(Edit, EditConst, NonTransactional)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_1_ArrayIterator_1_1_Element; // 0xC78(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3628[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_1_PositionConstraintLocalSpaceOffset_1_ChildCache; // 0xC88(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<struct FCachedRigElement>>     RigVMModel___eyes_LookAt_module_1_PositionConstraintLocalSpaceOffset_1_ParentCaches; // 0xC98(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_1_ParentConstraint_1_ChildCache; // 0xCA8(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<struct FCachedRigElement>>     RigVMModel___eyes_LookAt_module_1_ParentConstraint_1_ParentCaches; // 0xCB8(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_1_ParentConstraint_1_1_ChildCache; // 0xCC8(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<struct FCachedRigElement>>     RigVMModel___eyes_LookAt_module_1_ParentConstraint_1_1_ParentCaches; // 0xCD8(0x10)(Edit, EditConst, NonTransactional)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_1_ArrayIterator_4_Element; // 0xCE8(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3629[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TArray<struct FCachedRigElement>>     RigVMModel___eyes_LookAt_module_1_SetControlVisibility_CachedControlIndices; // 0xCF8(0x10)(Edit, EditConst, NonTransactional)
	int32                                        RigVMModel___eyes_LookAt_module_1_ArrayIterator_4_Index; // 0xD08(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___eyes_LookAt_module_1_ArrayIterator_4_Count; // 0xD0C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___eyes_LookAt_module_1_ArrayIterator_4_Ratio; // 0xD10(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___eyes_LookAt_module_1_ArrayIterator_4_Continue : 1; // Mask: 0x1, PropSize: 0x10xD14(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_253 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_362A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RigVMModel___eyes_LookAt_module_1_ArrayIterator_1_1_Index; // 0xD18(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___eyes_LookAt_module_1_ArrayIterator_1_1_Count; // 0xD1C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___eyes_LookAt_module_1_ArrayIterator_1_1_Ratio; // 0xD20(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___eyes_LookAt_module_1_ArrayIterator_1_1_Continue : 1; // Mask: 0x1, PropSize: 0x10xD24(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_254 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_362B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RigVMModel___eyes_LookAt_module_1_ArrayIterator_1_Index; // 0xD28(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___eyes_LookAt_module_1_ArrayIterator_1_Count; // 0xD2C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___eyes_LookAt_module_1_ArrayIterator_1_Ratio; // 0xD30(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___eyes_LookAt_module_1_ArrayIterator_1_Continue : 1; // Mask: 0x1, PropSize: 0x10xD34(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_255 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_362C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_OutputParam; // 0xD38(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_362D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSphericalRegion>              RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_InnerRegion; // 0xD40(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FSphericalRegion>              RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_OuterRegion; // 0xD50(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_DriverNormal; // 0xD60(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_Driver2D; // 0xD70(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_DriverCache; // 0xD80(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_OptionalParentCache; // 0xD90(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FTransform>                    RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_LocalDriverTransformInit; // 0xDA0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_CachedRotationOffset; // 0xDB0(0x10)(Edit, EditConst, NonTransactional)
	TArray<uint8>                                RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_bCachedInitTransforms; // 0xDC0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_1_AimConstraintLocalSpaceOffset_WorldUpSpaceCache; // 0xDD0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_1_AimConstraintLocalSpaceOffset_ChildCache; // 0xDE0(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<struct FCachedRigElement>>     RigVMModel___eyes_LookAt_module_1_AimConstraintLocalSpaceOffset_ParentCaches; // 0xDF0(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___eyes_LookAt_module_1_Interpolate_1_Result; // 0xE00(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___eyes_LookAt_module_1_RigUnit_GetTransform_7_1_2_Transform; // 0xE20(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_1_RigUnit_GetTransform_7_1_2_CachedIndex; // 0xE80(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___eyes_LookAt_module_1_Interpolate_1_A; // 0xE90(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___eyes_LookAt_module_1_RigUnit_GetTransform_7_1_Transform; // 0xEB0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_1_RigUnit_GetTransform_7_1_CachedIndex; // 0xF10(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___eyes_LookAt_module_1_Interpolate_1_B; // 0xF20(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_1_Set_Transform_2_CachedIndex; // 0xF40(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_1_RotationConstraintLocalSpaceOffset_ChildCache; // 0xF50(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<struct FCachedRigElement>>     RigVMModel___eyes_LookAt_module_1_RotationConstraintLocalSpaceOffset_ParentCaches; // 0xF60(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_1_OutputParam; // 0xF70(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_362E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSphericalRegion>              RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_1_InnerRegion; // 0xF78(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FSphericalRegion>              RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_1_OuterRegion; // 0xF88(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_1_DriverNormal; // 0xF98(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_1_Driver2D; // 0xFA8(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_1_DriverCache; // 0xFB8(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_1_OptionalParentCache; // 0xFC8(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FTransform>                    RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_1_LocalDriverTransformInit; // 0xFD8(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_1_CachedRotationOffset; // 0xFE8(0x10)(Edit, EditConst, NonTransactional)
	TArray<uint8>                                RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_1_bCachedInitTransforms; // 0xFF8(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_1_AimConstraintLocalSpaceOffset_1_WorldUpSpaceCache; // 0x1008(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_1_AimConstraintLocalSpaceOffset_1_ChildCache; // 0x1018(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<struct FCachedRigElement>>     RigVMModel___eyes_LookAt_module_1_AimConstraintLocalSpaceOffset_1_ParentCaches; // 0x1028(0x10)(Edit, EditConst, NonTransactional)
	uint8                                        Pad_362F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RigVMModel___eyes_LookAt_module_1_SpringInterpQuaternionV2_1_Result; // 0x1040(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___eyes_LookAt_module_1_Interpolate_1_1_Result; // 0x1060(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___eyes_LookAt_module_1_RigUnit_GetTransform_7_1_2_1_Transform; // 0x1080(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_1_RigUnit_GetTransform_7_1_2_1_CachedIndex; // 0x10E0(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___eyes_LookAt_module_1_Interpolate_1_1_A; // 0x10F0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___eyes_LookAt_module_1_RigUnit_GetTransform_3_1_Transform; // 0x1110(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_1_RigUnit_GetTransform_3_1_CachedIndex; // 0x1170(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___eyes_LookAt_module_1_Interpolate_1_1_B; // 0x1180(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___eyes_LookAt_module_1_RigUnit_GetTransform_7_2_Transform; // 0x11A0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_1_RigUnit_GetTransform_7_2_CachedIndex; // 0x1200(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___eyes_LookAt_module_1_SpringInterpQuaternionV2_1_Current; // 0x1210(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___eyes_LookAt_module_1_SpringInterpQuaternionV2_1_AngularVelocity; // 0x1230(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FQuat>                         RigVMModel___eyes_LookAt_module_1_SpringInterpQuaternionV2_1_SimulatedResult; // 0x1248(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FQuaternionSpringState>        RigVMModel___eyes_LookAt_module_1_SpringInterpQuaternionV2_1_SpringState; // 0x1258(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_1_RigUnit_SetRotation_1_1_CachedIndex; // 0x1268(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_1_RotationConstraintLocalSpaceOffset_1_ChildCache; // 0x1278(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<struct FCachedRigElement>>     RigVMModel___eyes_LookAt_module_1_RotationConstraintLocalSpaceOffset_1_ParentCaches; // 0x1288(0x10)(Edit, EditConst, NonTransactional)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_1_ArrayIterator_2_Element; // 0x1298(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___eyes_LookAt_module_1_ArrayIterator_2_Index; // 0x12A4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___eyes_LookAt_module_1_ArrayIterator_2_Count; // 0x12A8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___eyes_LookAt_module_1_ArrayIterator_2_Ratio; // 0x12AC(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___eyes_LookAt_module_1_ArrayIterator_2_Continue : 1; // Mask: 0x1, PropSize: 0x10x12B0(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_256 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3630[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_1_ParentConstraint_1_1_1_ChildCache; // 0x12B8(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<struct FCachedRigElement>>     RigVMModel___eyes_LookAt_module_1_ParentConstraint_1_1_1_ParentCaches; // 0x12C8(0x10)(Edit, EditConst, NonTransactional)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_1_ArrayIterator_2_1_Element; // 0x12D8(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___eyes_LookAt_module_1_ArrayIterator_2_1_Index; // 0x12E4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___eyes_LookAt_module_1_ArrayIterator_2_1_Count; // 0x12E8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___eyes_LookAt_module_1_ArrayIterator_2_1_Ratio; // 0x12EC(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___eyes_LookAt_module_1_ArrayIterator_2_1_Continue : 1; // Mask: 0x1, PropSize: 0x10x12F0(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_257 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3631[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_1_ParentConstraint_1_1_1_2_1_ChildCache; // 0x12F8(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<struct FCachedRigElement>>     RigVMModel___eyes_LookAt_module_1_ParentConstraint_1_1_1_2_1_ParentCaches; // 0x1308(0x10)(Edit, EditConst, NonTransactional)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_1_ArrayIterator_2_2_Element; // 0x1318(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___eyes_LookAt_module_1_ArrayIterator_2_2_Index; // 0x1324(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___eyes_LookAt_module_1_ArrayIterator_2_2_Count; // 0x1328(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___eyes_LookAt_module_1_ArrayIterator_2_2_Ratio; // 0x132C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___eyes_LookAt_module_1_ArrayIterator_2_2_Continue : 1; // Mask: 0x1, PropSize: 0x10x1330(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_258 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3632[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_1_ParentConstraint_1_1_1_1_ChildCache; // 0x1338(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<struct FCachedRigElement>>     RigVMModel___eyes_LookAt_module_1_ParentConstraint_1_1_1_1_ParentCaches; // 0x1348(0x10)(Edit, EditConst, NonTransactional)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_1_ArrayIterator_2_1_1_Element; // 0x1358(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___eyes_LookAt_module_1_ArrayIterator_2_1_1_Index; // 0x1364(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___eyes_LookAt_module_1_ArrayIterator_2_1_1_Count; // 0x1368(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___eyes_LookAt_module_1_ArrayIterator_2_1_1_Ratio; // 0x136C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___eyes_LookAt_module_1_ArrayIterator_2_1_1_Continue : 1; // Mask: 0x1, PropSize: 0x10x1370(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_259 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3633[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_1_ParentConstraint_1_1_1_2_1_1_ChildCache; // 0x1378(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<struct FCachedRigElement>>     RigVMModel___eyes_LookAt_module_1_ParentConstraint_1_1_1_2_1_1_ParentCaches; // 0x1388(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_2_OutputParam; // 0x1398(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3634[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSphericalRegion>              RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_2_InnerRegion; // 0x13A0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FSphericalRegion>              RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_2_OuterRegion; // 0x13B0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_2_DriverNormal; // 0x13C0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_2_Driver2D; // 0x13D0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_2_DriverCache; // 0x13E0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_2_OptionalParentCache; // 0x13F0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FTransform>                    RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_2_LocalDriverTransformInit; // 0x1400(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_2_CachedRotationOffset; // 0x1410(0x10)(Edit, EditConst, NonTransactional)
	TArray<uint8>                                RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_2_bCachedInitTransforms; // 0x1420(0x10)(Edit, EditConst, NonTransactional)
	double                                       RigVMModel___eyes_LookAt_module_1_Remap_2_1_Result; // 0x1430(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___eyes_LookAt_module_1_Remap_2_1_Value; // 0x1438(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FConstraintParent>             RigVMModel___eyes_LookAt_module_1_RotationConstraintLocalSpaceOffset_1_1_2_2_Parents__IO; // 0x1440(0x10)(Edit, EditConst, NonTransactional)
	double                                       RigVMModel___eyes_LookAt_module_1_Subtract_2_1_Result; // 0x1450(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___eyes_LookAt_module_1_RotationConstraintLocalSpaceOffset_1_1_2_2_Weight; // 0x1458(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3635[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_1_RotationConstraintLocalSpaceOffset_1_1_2_2_ChildCache; // 0x1460(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<struct FCachedRigElement>>     RigVMModel___eyes_LookAt_module_1_RotationConstraintLocalSpaceOffset_1_1_2_2_ParentCaches; // 0x1470(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_2_2_OutputParam; // 0x1480(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3636[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSphericalRegion>              RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_2_2_InnerRegion; // 0x1488(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FSphericalRegion>              RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_2_2_OuterRegion; // 0x1498(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_2_2_DriverNormal; // 0x14A8(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_2_2_Driver2D; // 0x14B8(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_2_2_DriverCache; // 0x14C8(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_2_2_OptionalParentCache; // 0x14D8(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FTransform>                    RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_2_2_LocalDriverTransformInit; // 0x14E8(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_2_2_CachedRotationOffset; // 0x14F8(0x10)(Edit, EditConst, NonTransactional)
	TArray<uint8>                                RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_2_2_bCachedInitTransforms; // 0x1508(0x10)(Edit, EditConst, NonTransactional)
	double                                       RigVMModel___eyes_LookAt_module_1_Remap_2_Result;  // 0x1518(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___eyes_LookAt_module_1_Remap_2_Value;   // 0x1520(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FConstraintParent>             RigVMModel___eyes_LookAt_module_1_RotationConstraintLocalSpaceOffset_1_1_2_Parents__IO; // 0x1528(0x10)(Edit, EditConst, NonTransactional)
	double                                       RigVMModel___eyes_LookAt_module_1_Subtract_2_Result; // 0x1538(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___eyes_LookAt_module_1_RotationConstraintLocalSpaceOffset_1_1_2_Weight; // 0x1540(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3637[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_1_RotationConstraintLocalSpaceOffset_1_1_2_ChildCache; // 0x1548(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<struct FCachedRigElement>>     RigVMModel___eyes_LookAt_module_1_RotationConstraintLocalSpaceOffset_1_1_2_ParentCaches; // 0x1558(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_2_1_OutputParam; // 0x1568(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3638[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSphericalRegion>              RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_2_1_InnerRegion; // 0x1570(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FSphericalRegion>              RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_2_1_OuterRegion; // 0x1580(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_2_1_DriverNormal; // 0x1590(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_2_1_Driver2D; // 0x15A0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_2_1_DriverCache; // 0x15B0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_2_1_OptionalParentCache; // 0x15C0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FTransform>                    RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_2_1_LocalDriverTransformInit; // 0x15D0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_2_1_CachedRotationOffset; // 0x15E0(0x10)(Edit, EditConst, NonTransactional)
	TArray<uint8>                                RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_2_1_bCachedInitTransforms; // 0x15F0(0x10)(Edit, EditConst, NonTransactional)
	double                                       RigVMModel___eyes_LookAt_module_1_Remap_1_Result;  // 0x1600(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___eyes_LookAt_module_1_Remap_1_Value;   // 0x1608(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FConstraintParent>             RigVMModel___eyes_LookAt_module_1_RotationConstraintLocalSpaceOffset_1_1_1_Parents__IO; // 0x1610(0x10)(Edit, EditConst, NonTransactional)
	double                                       RigVMModel___eyes_LookAt_module_1_Subtract_1_Result; // 0x1620(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___eyes_LookAt_module_1_RotationConstraintLocalSpaceOffset_1_1_1_Weight; // 0x1628(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3639[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_1_RotationConstraintLocalSpaceOffset_1_1_1_ChildCache; // 0x1630(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<struct FCachedRigElement>>     RigVMModel___eyes_LookAt_module_1_RotationConstraintLocalSpaceOffset_1_1_1_ParentCaches; // 0x1640(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_2_1_1_OutputParam; // 0x1650(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_363A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSphericalRegion>              RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_2_1_1_InnerRegion; // 0x1658(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FSphericalRegion>              RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_2_1_1_OuterRegion; // 0x1668(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_2_1_1_DriverNormal; // 0x1678(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_2_1_1_Driver2D; // 0x1688(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_2_1_1_DriverCache; // 0x1698(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_2_1_1_OptionalParentCache; // 0x16A8(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FTransform>                    RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_2_1_1_LocalDriverTransformInit; // 0x16B8(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_2_1_1_CachedRotationOffset; // 0x16C8(0x10)(Edit, EditConst, NonTransactional)
	TArray<uint8>                                RigVMModel___eyes_LookAt_module_1_SphericalPoseReader_2_1_1_bCachedInitTransforms; // 0x16D8(0x10)(Edit, EditConst, NonTransactional)
	double                                       RigVMModel___eyes_LookAt_module_1_Remap_1_1_Result; // 0x16E8(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___eyes_LookAt_module_1_Remap_1_1_Value; // 0x16F0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___eyes_LookAt_module_1_Subtract_1_1_Result; // 0x16F8(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FConstraintParent>             RigVMModel___eyes_LookAt_module_1_RotationConstraintLocalSpaceOffset_1_1_2_1_Parents__IO; // 0x1700(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_1_RotationConstraintLocalSpaceOffset_1_1_2_1_ChildCache; // 0x1710(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<struct FCachedRigElement>>     RigVMModel___eyes_LookAt_module_1_RotationConstraintLocalSpaceOffset_1_1_2_1_ParentCaches; // 0x1720(0x10)(Edit, EditConst, NonTransactional)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_SpawnControl_Item; // 0x1730(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_363B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RigVMModel___eyes_LookAt_module_Divide_2_Result;   // 0x1740(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___eyes_LookAt_module_Add_1_Result;      // 0x1758(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___eyes_LookAt_module_GetTransform_2_Transform; // 0x1770(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_GetTransform_2_CachedIndex; // 0x17D0(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___eyes_LookAt_module_Add_1_A;           // 0x17E0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_363C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___eyes_LookAt_module_GetTransform_1_1_Transform; // 0x1800(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_GetTransform_1_1_CachedIndex; // 0x1860(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___eyes_LookAt_module_Add_1_B;           // 0x1870(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_363D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___eyes_LookAt_module_SpawnControl_OffsetTransform__IO; // 0x1890(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_SpawnControl_1_Item; // 0x18F0(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_363E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___eyes_LookAt_module_Divide_1_Result;   // 0x1900(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___eyes_LookAt_module_MathVectorDistance_1_Result; // 0x1908(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_363F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___eyes_LookAt_module_Divide_1_A;        // 0x1910(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3640[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___eyes_LookAt_module_SpawnControl_1_OffsetTransform__IO; // 0x1920(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_SpawnControl_1_1_Item; // 0x1980(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3641[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___eyes_LookAt_module_Multiply_1_Result; // 0x1990(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3642[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___eyes_LookAt_module_SpawnControl_1_1_OffsetTransform__IO; // 0x19A0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_SpawnControl_1_1_1_Item; // 0x1A00(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_SpawnControl_1_1_1_1_Item; // 0x1A0C(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_SpawnControl_1_1_1_2_Item; // 0x1A18(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_SpawnControl_1_1_1_1_1_Item; // 0x1A24(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_SpawnControl_1_1_1_3_Item; // 0x1A30(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_SpawnControl_1_1_1_1_2_Item; // 0x1A3C(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_SpawnControl_1_1_1_4_Item; // 0x1A48(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_SpawnControl_1_1_1_1_3_Item; // 0x1A54(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_SpawnControl_1_1_1_5_Item; // 0x1A60(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_SpawnControl_1_1_1_1_4_Item; // 0x1A6C(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_ArrayIterator_Element; // 0x1A78(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___eyes_LookAt_module_SetControlOffset_Control; // 0x1A84(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3643[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RigVMModel___eyes_LookAt_module_MathQuaternionFromEuler_Result; // 0x1A90(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___eyes_LookAt_module_RigUnit_GetTransform_Transform; // 0x1AB0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_RigUnit_GetTransform_CachedIndex; // 0x1B10(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___eyes_LookAt_module_SetControlOffset_Offset__IO; // 0x1B20(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_SetControlOffset_CachedControlIndex; // 0x1B80(0x10)(Edit, EditConst, NonTransactional)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_ArrayIterator_3_Element; // 0x1B90(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___eyes_LookAt_module_SetControlOffset_1_Control; // 0x1B9C(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3644[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RigVMModel___eyes_LookAt_module_MathQuaternionFromEuler_1_Result; // 0x1BB0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___eyes_LookAt_module_RigUnit_GetTransform_1_Transform; // 0x1BD0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_RigUnit_GetTransform_1_CachedIndex; // 0x1C30(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___eyes_LookAt_module_SetControlOffset_1_Offset__IO; // 0x1C40(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_SetControlOffset_1_CachedControlIndex; // 0x1CA0(0x10)(Edit, EditConst, NonTransactional)
	double                                       RigVMModel___eyes_LookAt_module_Divide_Result;     // 0x1CB0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___eyes_LookAt_module_MathVectorDistance_Result; // 0x1CB8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3645[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___eyes_LookAt_module_GetTransform_Transform; // 0x1CC0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_GetTransform_CachedIndex; // 0x1D20(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___eyes_LookAt_module_MathVectorDistance_A; // 0x1D30(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3646[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___eyes_LookAt_module_GetTransform_1_Transform; // 0x1D50(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_GetTransform_1_CachedIndex; // 0x1DB0(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___eyes_LookAt_module_MathVectorDistance_B; // 0x1DC0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___eyes_LookAt_module_Divide_A;          // 0x1DD8(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___eyes_LookAt_module_Set_Transform_Value__IO; // 0x1DE0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_Set_Transform_CachedIndex; // 0x1E40(0x10)(Edit, EditConst, NonTransactional)
	double                                       RigVMModel___eyes_LookAt_module_Multiply_Result;   // 0x1E50(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3647[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___eyes_LookAt_module_Set_Transform_1_Value__IO; // 0x1E60(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_Set_Transform_1_CachedIndex; // 0x1EC0(0x10)(Edit, EditConst, NonTransactional)
	int32                                        RigVMModel___eyes_LookAt_module_ArrayIterator_3_Index; // 0x1ED0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___eyes_LookAt_module_ArrayIterator_3_Count; // 0x1ED4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___eyes_LookAt_module_ArrayIterator_3_Ratio; // 0x1ED8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___eyes_LookAt_module_ArrayIterator_3_Continue : 1; // Mask: 0x1, PropSize: 0x10x1EDC(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_25A : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3648[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RigVMModel___eyes_LookAt_module_ArrayIterator_Index; // 0x1EE0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___eyes_LookAt_module_ArrayIterator_Count; // 0x1EE4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___eyes_LookAt_module_ArrayIterator_Ratio; // 0x1EE8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___eyes_LookAt_module_ArrayIterator_Continue : 1; // Mask: 0x1, PropSize: 0x10x1EEC(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_25B : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3649[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RigVMModel___eyes_LookAt_module_Add_Result;        // 0x1EF0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___eyes_LookAt_module_From_World_Global; // 0x1F08(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_RigUnit_SetTranslation_CachedIndex; // 0x1F20(0x10)(Edit, EditConst, NonTransactional)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_ArrayIterator_1_Element; // 0x1F30(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_364A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_PositionConstraintLocalSpaceOffset_ChildCache; // 0x1F40(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<struct FCachedRigElement>>     RigVMModel___eyes_LookAt_module_PositionConstraintLocalSpaceOffset_ParentCaches; // 0x1F50(0x10)(Edit, EditConst, NonTransactional)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_ArrayIterator_1_1_Element; // 0x1F60(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_364B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_PositionConstraintLocalSpaceOffset_1_ChildCache; // 0x1F70(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<struct FCachedRigElement>>     RigVMModel___eyes_LookAt_module_PositionConstraintLocalSpaceOffset_1_ParentCaches; // 0x1F80(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_ParentConstraint_1_ChildCache; // 0x1F90(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<struct FCachedRigElement>>     RigVMModel___eyes_LookAt_module_ParentConstraint_1_ParentCaches; // 0x1FA0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_ParentConstraint_1_1_ChildCache; // 0x1FB0(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<struct FCachedRigElement>>     RigVMModel___eyes_LookAt_module_ParentConstraint_1_1_ParentCaches; // 0x1FC0(0x10)(Edit, EditConst, NonTransactional)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_ArrayIterator_4_Element; // 0x1FD0(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_364C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TArray<struct FCachedRigElement>>     RigVMModel___eyes_LookAt_module_SetControlVisibility_CachedControlIndices; // 0x1FE0(0x10)(Edit, EditConst, NonTransactional)
	int32                                        RigVMModel___eyes_LookAt_module_ArrayIterator_4_Index; // 0x1FF0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___eyes_LookAt_module_ArrayIterator_4_Count; // 0x1FF4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___eyes_LookAt_module_ArrayIterator_4_Ratio; // 0x1FF8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___eyes_LookAt_module_ArrayIterator_4_Continue : 1; // Mask: 0x1, PropSize: 0x10x1FFC(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_25C : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_364D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RigVMModel___eyes_LookAt_module_ArrayIterator_1_1_Index; // 0x2000(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___eyes_LookAt_module_ArrayIterator_1_1_Count; // 0x2004(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___eyes_LookAt_module_ArrayIterator_1_1_Ratio; // 0x2008(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___eyes_LookAt_module_ArrayIterator_1_1_Continue : 1; // Mask: 0x1, PropSize: 0x10x200C(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_25D : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_364E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RigVMModel___eyes_LookAt_module_ArrayIterator_1_Index; // 0x2010(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___eyes_LookAt_module_ArrayIterator_1_Count; // 0x2014(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___eyes_LookAt_module_ArrayIterator_1_Ratio; // 0x2018(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___eyes_LookAt_module_ArrayIterator_1_Continue : 1; // Mask: 0x1, PropSize: 0x10x201C(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_25E : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_364F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RigVMModel___eyes_LookAt_module_SphericalPoseReader_OutputParam; // 0x2020(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3650[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSphericalRegion>              RigVMModel___eyes_LookAt_module_SphericalPoseReader_InnerRegion; // 0x2028(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FSphericalRegion>              RigVMModel___eyes_LookAt_module_SphericalPoseReader_OuterRegion; // 0x2038(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___eyes_LookAt_module_SphericalPoseReader_DriverNormal; // 0x2048(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___eyes_LookAt_module_SphericalPoseReader_Driver2D; // 0x2058(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_SphericalPoseReader_DriverCache; // 0x2068(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_SphericalPoseReader_OptionalParentCache; // 0x2078(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FTransform>                    RigVMModel___eyes_LookAt_module_SphericalPoseReader_LocalDriverTransformInit; // 0x2088(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___eyes_LookAt_module_SphericalPoseReader_CachedRotationOffset; // 0x2098(0x10)(Edit, EditConst, NonTransactional)
	TArray<uint8>                                RigVMModel___eyes_LookAt_module_SphericalPoseReader_bCachedInitTransforms; // 0x20A8(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_AimConstraintLocalSpaceOffset_WorldUpSpaceCache; // 0x20B8(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_AimConstraintLocalSpaceOffset_ChildCache; // 0x20C8(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<struct FCachedRigElement>>     RigVMModel___eyes_LookAt_module_AimConstraintLocalSpaceOffset_ParentCaches; // 0x20D8(0x10)(Edit, EditConst, NonTransactional)
	uint8                                        Pad_3651[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RigVMModel___eyes_LookAt_module_Interpolate_1_Result; // 0x20F0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___eyes_LookAt_module_RigUnit_GetTransform_7_1_2_Transform; // 0x2110(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_RigUnit_GetTransform_7_1_2_CachedIndex; // 0x2170(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___eyes_LookAt_module_Interpolate_1_A;   // 0x2180(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___eyes_LookAt_module_RigUnit_GetTransform_7_1_Transform; // 0x21A0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_RigUnit_GetTransform_7_1_CachedIndex; // 0x2200(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___eyes_LookAt_module_Interpolate_1_B;   // 0x2210(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_Set_Transform_2_CachedIndex; // 0x2230(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_RotationConstraintLocalSpaceOffset_ChildCache; // 0x2240(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<struct FCachedRigElement>>     RigVMModel___eyes_LookAt_module_RotationConstraintLocalSpaceOffset_ParentCaches; // 0x2250(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___eyes_LookAt_module_SphericalPoseReader_1_OutputParam; // 0x2260(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3652[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSphericalRegion>              RigVMModel___eyes_LookAt_module_SphericalPoseReader_1_InnerRegion; // 0x2268(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FSphericalRegion>              RigVMModel___eyes_LookAt_module_SphericalPoseReader_1_OuterRegion; // 0x2278(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___eyes_LookAt_module_SphericalPoseReader_1_DriverNormal; // 0x2288(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___eyes_LookAt_module_SphericalPoseReader_1_Driver2D; // 0x2298(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_SphericalPoseReader_1_DriverCache; // 0x22A8(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_SphericalPoseReader_1_OptionalParentCache; // 0x22B8(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FTransform>                    RigVMModel___eyes_LookAt_module_SphericalPoseReader_1_LocalDriverTransformInit; // 0x22C8(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___eyes_LookAt_module_SphericalPoseReader_1_CachedRotationOffset; // 0x22D8(0x10)(Edit, EditConst, NonTransactional)
	TArray<uint8>                                RigVMModel___eyes_LookAt_module_SphericalPoseReader_1_bCachedInitTransforms; // 0x22E8(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_AimConstraintLocalSpaceOffset_1_WorldUpSpaceCache; // 0x22F8(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_AimConstraintLocalSpaceOffset_1_ChildCache; // 0x2308(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<struct FCachedRigElement>>     RigVMModel___eyes_LookAt_module_AimConstraintLocalSpaceOffset_1_ParentCaches; // 0x2318(0x10)(Edit, EditConst, NonTransactional)
	uint8                                        Pad_3653[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RigVMModel___eyes_LookAt_module_SpringInterpQuaternionV2_1_Result; // 0x2330(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___eyes_LookAt_module_Interpolate_1_1_Result; // 0x2350(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___eyes_LookAt_module_RigUnit_GetTransform_7_1_2_1_Transform; // 0x2370(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_RigUnit_GetTransform_7_1_2_1_CachedIndex; // 0x23D0(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___eyes_LookAt_module_Interpolate_1_1_A; // 0x23E0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___eyes_LookAt_module_RigUnit_GetTransform_3_1_Transform; // 0x2400(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_RigUnit_GetTransform_3_1_CachedIndex; // 0x2460(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___eyes_LookAt_module_Interpolate_1_1_B; // 0x2470(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___eyes_LookAt_module_RigUnit_GetTransform_7_2_Transform; // 0x2490(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_RigUnit_GetTransform_7_2_CachedIndex; // 0x24F0(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___eyes_LookAt_module_SpringInterpQuaternionV2_1_Current; // 0x2500(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___eyes_LookAt_module_SpringInterpQuaternionV2_1_AngularVelocity; // 0x2520(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FQuat>                         RigVMModel___eyes_LookAt_module_SpringInterpQuaternionV2_1_SimulatedResult; // 0x2538(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FQuaternionSpringState>        RigVMModel___eyes_LookAt_module_SpringInterpQuaternionV2_1_SpringState; // 0x2548(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_RigUnit_SetRotation_1_1_CachedIndex; // 0x2558(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_RotationConstraintLocalSpaceOffset_1_ChildCache; // 0x2568(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<struct FCachedRigElement>>     RigVMModel___eyes_LookAt_module_RotationConstraintLocalSpaceOffset_1_ParentCaches; // 0x2578(0x10)(Edit, EditConst, NonTransactional)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_ArrayIterator_2_Element; // 0x2588(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___eyes_LookAt_module_ArrayIterator_2_Index; // 0x2594(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___eyes_LookAt_module_ArrayIterator_2_Count; // 0x2598(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___eyes_LookAt_module_ArrayIterator_2_Ratio; // 0x259C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___eyes_LookAt_module_ArrayIterator_2_Continue : 1; // Mask: 0x1, PropSize: 0x10x25A0(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_25F : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3654[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_ParentConstraint_1_1_1_ChildCache; // 0x25A8(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<struct FCachedRigElement>>     RigVMModel___eyes_LookAt_module_ParentConstraint_1_1_1_ParentCaches; // 0x25B8(0x10)(Edit, EditConst, NonTransactional)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_ArrayIterator_2_1_Element; // 0x25C8(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___eyes_LookAt_module_ArrayIterator_2_1_Index; // 0x25D4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___eyes_LookAt_module_ArrayIterator_2_1_Count; // 0x25D8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___eyes_LookAt_module_ArrayIterator_2_1_Ratio; // 0x25DC(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___eyes_LookAt_module_ArrayIterator_2_1_Continue : 1; // Mask: 0x1, PropSize: 0x10x25E0(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_260 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3655[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_ParentConstraint_1_1_1_2_1_ChildCache; // 0x25E8(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<struct FCachedRigElement>>     RigVMModel___eyes_LookAt_module_ParentConstraint_1_1_1_2_1_ParentCaches; // 0x25F8(0x10)(Edit, EditConst, NonTransactional)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_ArrayIterator_2_2_Element; // 0x2608(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___eyes_LookAt_module_ArrayIterator_2_2_Index; // 0x2614(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___eyes_LookAt_module_ArrayIterator_2_2_Count; // 0x2618(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___eyes_LookAt_module_ArrayIterator_2_2_Ratio; // 0x261C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___eyes_LookAt_module_ArrayIterator_2_2_Continue : 1; // Mask: 0x1, PropSize: 0x10x2620(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_261 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3656[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_ParentConstraint_1_1_1_1_ChildCache; // 0x2628(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<struct FCachedRigElement>>     RigVMModel___eyes_LookAt_module_ParentConstraint_1_1_1_1_ParentCaches; // 0x2638(0x10)(Edit, EditConst, NonTransactional)
	struct FRigElementKey                        RigVMModel___eyes_LookAt_module_ArrayIterator_2_1_1_Element; // 0x2648(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___eyes_LookAt_module_ArrayIterator_2_1_1_Index; // 0x2654(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___eyes_LookAt_module_ArrayIterator_2_1_1_Count; // 0x2658(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___eyes_LookAt_module_ArrayIterator_2_1_1_Ratio; // 0x265C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___eyes_LookAt_module_ArrayIterator_2_1_1_Continue : 1; // Mask: 0x1, PropSize: 0x10x2660(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_262 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3657[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_ParentConstraint_1_1_1_2_1_1_ChildCache; // 0x2668(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<struct FCachedRigElement>>     RigVMModel___eyes_LookAt_module_ParentConstraint_1_1_1_2_1_1_ParentCaches; // 0x2678(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___eyes_LookAt_module_SphericalPoseReader_2_OutputParam; // 0x2688(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3658[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSphericalRegion>              RigVMModel___eyes_LookAt_module_SphericalPoseReader_2_InnerRegion; // 0x2690(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FSphericalRegion>              RigVMModel___eyes_LookAt_module_SphericalPoseReader_2_OuterRegion; // 0x26A0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___eyes_LookAt_module_SphericalPoseReader_2_DriverNormal; // 0x26B0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___eyes_LookAt_module_SphericalPoseReader_2_Driver2D; // 0x26C0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_SphericalPoseReader_2_DriverCache; // 0x26D0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_SphericalPoseReader_2_OptionalParentCache; // 0x26E0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FTransform>                    RigVMModel___eyes_LookAt_module_SphericalPoseReader_2_LocalDriverTransformInit; // 0x26F0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___eyes_LookAt_module_SphericalPoseReader_2_CachedRotationOffset; // 0x2700(0x10)(Edit, EditConst, NonTransactional)
	TArray<uint8>                                RigVMModel___eyes_LookAt_module_SphericalPoseReader_2_bCachedInitTransforms; // 0x2710(0x10)(Edit, EditConst, NonTransactional)
	double                                       RigVMModel___eyes_LookAt_module_Remap_2_1_Result;  // 0x2720(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___eyes_LookAt_module_Remap_2_1_Value;   // 0x2728(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FConstraintParent>             RigVMModel___eyes_LookAt_module_RotationConstraintLocalSpaceOffset_1_1_2_2_Parents__IO; // 0x2730(0x10)(Edit, EditConst, NonTransactional)
	double                                       RigVMModel___eyes_LookAt_module_Subtract_2_1_Result; // 0x2740(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___eyes_LookAt_module_RotationConstraintLocalSpaceOffset_1_1_2_2_Weight; // 0x2748(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3659[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_RotationConstraintLocalSpaceOffset_1_1_2_2_ChildCache; // 0x2750(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<struct FCachedRigElement>>     RigVMModel___eyes_LookAt_module_RotationConstraintLocalSpaceOffset_1_1_2_2_ParentCaches; // 0x2760(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___eyes_LookAt_module_SphericalPoseReader_2_2_OutputParam; // 0x2770(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_365A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSphericalRegion>              RigVMModel___eyes_LookAt_module_SphericalPoseReader_2_2_InnerRegion; // 0x2778(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FSphericalRegion>              RigVMModel___eyes_LookAt_module_SphericalPoseReader_2_2_OuterRegion; // 0x2788(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___eyes_LookAt_module_SphericalPoseReader_2_2_DriverNormal; // 0x2798(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___eyes_LookAt_module_SphericalPoseReader_2_2_Driver2D; // 0x27A8(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_SphericalPoseReader_2_2_DriverCache; // 0x27B8(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_SphericalPoseReader_2_2_OptionalParentCache; // 0x27C8(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FTransform>                    RigVMModel___eyes_LookAt_module_SphericalPoseReader_2_2_LocalDriverTransformInit; // 0x27D8(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___eyes_LookAt_module_SphericalPoseReader_2_2_CachedRotationOffset; // 0x27E8(0x10)(Edit, EditConst, NonTransactional)
	TArray<uint8>                                RigVMModel___eyes_LookAt_module_SphericalPoseReader_2_2_bCachedInitTransforms; // 0x27F8(0x10)(Edit, EditConst, NonTransactional)
	double                                       RigVMModel___eyes_LookAt_module_Remap_2_Result;    // 0x2808(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___eyes_LookAt_module_Remap_2_Value;     // 0x2810(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FConstraintParent>             RigVMModel___eyes_LookAt_module_RotationConstraintLocalSpaceOffset_1_1_2_Parents__IO; // 0x2818(0x10)(Edit, EditConst, NonTransactional)
	double                                       RigVMModel___eyes_LookAt_module_Subtract_2_Result; // 0x2828(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___eyes_LookAt_module_RotationConstraintLocalSpaceOffset_1_1_2_Weight; // 0x2830(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_365B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_RotationConstraintLocalSpaceOffset_1_1_2_ChildCache; // 0x2838(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<struct FCachedRigElement>>     RigVMModel___eyes_LookAt_module_RotationConstraintLocalSpaceOffset_1_1_2_ParentCaches; // 0x2848(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___eyes_LookAt_module_SphericalPoseReader_2_1_OutputParam; // 0x2858(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_365C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSphericalRegion>              RigVMModel___eyes_LookAt_module_SphericalPoseReader_2_1_InnerRegion; // 0x2860(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FSphericalRegion>              RigVMModel___eyes_LookAt_module_SphericalPoseReader_2_1_OuterRegion; // 0x2870(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___eyes_LookAt_module_SphericalPoseReader_2_1_DriverNormal; // 0x2880(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___eyes_LookAt_module_SphericalPoseReader_2_1_Driver2D; // 0x2890(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_SphericalPoseReader_2_1_DriverCache; // 0x28A0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_SphericalPoseReader_2_1_OptionalParentCache; // 0x28B0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FTransform>                    RigVMModel___eyes_LookAt_module_SphericalPoseReader_2_1_LocalDriverTransformInit; // 0x28C0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___eyes_LookAt_module_SphericalPoseReader_2_1_CachedRotationOffset; // 0x28D0(0x10)(Edit, EditConst, NonTransactional)
	TArray<uint8>                                RigVMModel___eyes_LookAt_module_SphericalPoseReader_2_1_bCachedInitTransforms; // 0x28E0(0x10)(Edit, EditConst, NonTransactional)
	double                                       RigVMModel___eyes_LookAt_module_Remap_1_Result;    // 0x28F0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___eyes_LookAt_module_Remap_1_Value;     // 0x28F8(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FConstraintParent>             RigVMModel___eyes_LookAt_module_RotationConstraintLocalSpaceOffset_1_1_1_Parents__IO; // 0x2900(0x10)(Edit, EditConst, NonTransactional)
	double                                       RigVMModel___eyes_LookAt_module_Subtract_1_Result; // 0x2910(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___eyes_LookAt_module_RotationConstraintLocalSpaceOffset_1_1_1_Weight; // 0x2918(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_365D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_RotationConstraintLocalSpaceOffset_1_1_1_ChildCache; // 0x2920(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<struct FCachedRigElement>>     RigVMModel___eyes_LookAt_module_RotationConstraintLocalSpaceOffset_1_1_1_ParentCaches; // 0x2930(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___eyes_LookAt_module_SphericalPoseReader_2_1_1_OutputParam; // 0x2940(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_365E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSphericalRegion>              RigVMModel___eyes_LookAt_module_SphericalPoseReader_2_1_1_InnerRegion; // 0x2948(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FSphericalRegion>              RigVMModel___eyes_LookAt_module_SphericalPoseReader_2_1_1_OuterRegion; // 0x2958(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___eyes_LookAt_module_SphericalPoseReader_2_1_1_DriverNormal; // 0x2968(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___eyes_LookAt_module_SphericalPoseReader_2_1_1_Driver2D; // 0x2978(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_SphericalPoseReader_2_1_1_DriverCache; // 0x2988(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_SphericalPoseReader_2_1_1_OptionalParentCache; // 0x2998(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FTransform>                    RigVMModel___eyes_LookAt_module_SphericalPoseReader_2_1_1_LocalDriverTransformInit; // 0x29A8(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___eyes_LookAt_module_SphericalPoseReader_2_1_1_CachedRotationOffset; // 0x29B8(0x10)(Edit, EditConst, NonTransactional)
	TArray<uint8>                                RigVMModel___eyes_LookAt_module_SphericalPoseReader_2_1_1_bCachedInitTransforms; // 0x29C8(0x10)(Edit, EditConst, NonTransactional)
	double                                       RigVMModel___eyes_LookAt_module_Remap_1_1_Result;  // 0x29D8(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___eyes_LookAt_module_Remap_1_1_Value;   // 0x29E0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___eyes_LookAt_module_Subtract_1_1_Result; // 0x29E8(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FConstraintParent>             RigVMModel___eyes_LookAt_module_RotationConstraintLocalSpaceOffset_1_1_2_1_Parents__IO; // 0x29F0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___eyes_LookAt_module_RotationConstraintLocalSpaceOffset_1_1_2_1_ChildCache; // 0x2A00(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<struct FCachedRigElement>>     RigVMModel___eyes_LookAt_module_RotationConstraintLocalSpaceOffset_1_1_2_1_ParentCaches; // 0x2A10(0x10)(Edit, EditConst, NonTransactional)

	static class UClass* StaticClass();
	static class URigVMMemory_Work_KLAP* GetDefaultObj();

};

}


