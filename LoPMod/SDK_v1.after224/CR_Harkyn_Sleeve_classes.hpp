#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x5C8 - 0x560)
// ControlRigBlueprintGeneratedClass CR_Harkyn_Sleeve.CR_Harkyn_Sleeve_C
class UCR_Harkyn_Sleeve_C : public UControlRig
{
public:
	struct FTransform                            RelativeTransform;                                 // 0x560(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  GetRelativeTransformForItem_Parent_Name;           // 0x5C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCR_Harkyn_Sleeve_C* GetDefaultObj();

};

// 0x1A9 (0x1D1 - 0x28)
// RigVMMemoryStorageGeneratorClass CR_Harkyn_Sleeve.RigVMMemory_Literal
class URigVMMemory_Literal_CRHS : public URigVMMemoryStorage
{
public:
	struct FRigElementKey                        RigVMModel___ParentConstraint_1_Child__Const;      // 0x28(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___ParentConstraint_1_bMaintainOffset__Const : 1; // Mask: 0x1, PropSize: 0x10x34(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_29E : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	struct FTransformFilter                      RigVMModel___ParentConstraint_1_Filter__Const;     // 0x35(0x9)(Edit, EditConst, NonTransactional, NoDestructor)
	uint8                                        Pad_43FB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FConstraintParent>             RigVMModel___ParentConstraint_1_Parents__Const;    // 0x40(0x10)(Edit, EditConst, NonTransactional)
	struct FRigUnit_ParentConstraint_AdvancedSettings RigVMModel___ParentConstraint_1_AdvancedSettings__Const; // 0x50(0x2)(Edit, EditConst, NonTransactional, NoDestructor)
	uint8                                        Pad_43FC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RigVMModel___ParentConstraint_1_Weight__Const;     // 0x54(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___PositionConstraintLocalSpaceOffset_1_Child__Const; // 0x58(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FFilterOptionPerAxis                  RigVMModel___PositionConstraintLocalSpaceOffset_1_Filter__Const; // 0x64(0x3)(Edit, EditConst, NonTransactional, NoDestructor)
	uint8                                        Pad_43FD[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FConstraintParent>             RigVMModel___PositionConstraintLocalSpaceOffset_1_Parents__Const; // 0x68(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___AimConstraintLocalSpaceOffset_1_AimAxis__Const; // 0x78(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___AimConstraintLocalSpaceOffset_1_UpAxis__Const; // 0x90(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigUnit_AimConstraint_WorldUp        RigVMModel___AimConstraintLocalSpaceOffset_1_WorldUp__Const; // 0xA8(0x28)(Edit, EditConst, NonTransactional, NoDestructor)
	struct FRigElementKey                        RigVMModel___RigUnit_GetTransform_1_Item__Const;   // 0xD0(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class EBoneGetterSetterMode             RigVMModel___RigUnit_GetTransform_1_Space__Const;  // 0xDC(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43FE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FConstraintParent>             RigVMModel___AimConstraintLocalSpaceOffset_1_Parents__Const; // 0xE0(0x10)(Edit, EditConst, NonTransactional)
	struct FRigUnit_AimConstraint_AdvancedSettings RigVMModel___AimConstraintLocalSpaceOffset_1_AdvancedSettings__Const; // 0xF0(0x80)(Edit, EditConst, NonTransactional, NoDestructor)
	struct FTransform                            RigVMModel___OffsetTransformForItem_OffsetTransform__Const; // 0x170(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___OffsetTransformForItem_bPropagateToChildren__Const : 1; // Mask: 0x1, PropSize: 0x10x1D0(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URigVMMemory_Literal_CRHS* GetDefaultObj();

};

// 0x150 (0x178 - 0x28)
// RigVMMemoryStorageGeneratorClass CR_Harkyn_Sleeve.RigVMMemory_Work
class URigVMMemory_Work_CRHS : public URigVMMemoryStorage
{
public:
	struct FControlRigExecuteContext             ExecuteContext_;                                   // 0x28(0x38)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___ParentConstraint_1_ChildCache;        // 0x60(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<struct FCachedRigElement>>     RigVMModel___ParentConstraint_1_ParentCaches;      // 0x70(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___PositionConstraintLocalSpaceOffset_1_ChildCache; // 0x80(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<struct FCachedRigElement>>     RigVMModel___PositionConstraintLocalSpaceOffset_1_ParentCaches; // 0x90(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_1_Transform;     // 0xA0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_1_CachedIndex;   // 0x100(0x10)(Edit, EditConst, NonTransactional)
	struct FRigUnit_AimConstraint_WorldUp        RigVMModel___AimConstraintLocalSpaceOffset_1_WorldUp__IO; // 0x110(0x28)(Edit, EditConst, NonTransactional, NoDestructor)
	TArray<struct FCachedRigElement>             RigVMModel___AimConstraintLocalSpaceOffset_1_WorldUpSpaceCache; // 0x138(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___AimConstraintLocalSpaceOffset_1_ChildCache; // 0x148(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<struct FCachedRigElement>>     RigVMModel___AimConstraintLocalSpaceOffset_1_ParentCaches; // 0x158(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___OffsetTransformForItem_CachedIndex;   // 0x168(0x10)(Edit, EditConst, NonTransactional)

	static class UClass* StaticClass();
	static class URigVMMemory_Work_CRHS* GetDefaultObj();

};

}


