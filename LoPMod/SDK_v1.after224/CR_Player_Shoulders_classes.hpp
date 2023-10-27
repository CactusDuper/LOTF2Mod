#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x6B8 (0x6E0 - 0x28)
// RigVMMemoryStorageGeneratorClass CR_Player_Shoulders.RigVMMemory_Work
class URigVMMemory_Work_PS : public URigVMMemoryStorage
{
public:
	struct FControlRigExecuteContext             ExecuteContext_;                                   // 0x28(0x38)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___ParentConstraint_ChildCache;          // 0x60(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<struct FCachedRigElement>>     RigVMModel___ParentConstraint_ParentCaches;        // 0x70(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___ParentConstraint_1_ChildCache;        // 0x80(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<struct FCachedRigElement>>     RigVMModel___ParentConstraint_1_ParentCaches;      // 0x90(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___GetTransform_2_Transform;             // 0xA0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_2_CachedIndex;           // 0x100(0x10)(Edit, EditConst, NonTransactional)
	struct FRigUnit_AimConstraint_WorldUp        RigVMModel___AimConstraintLocalSpaceOffset_WorldUp__IO; // 0x110(0x28)(Edit, EditConst, NonTransactional, NoDestructor)
	TArray<struct FCachedRigElement>             RigVMModel___AimConstraintLocalSpaceOffset_WorldUpSpaceCache; // 0x138(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___AimConstraintLocalSpaceOffset_ChildCache; // 0x148(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<struct FCachedRigElement>>     RigVMModel___AimConstraintLocalSpaceOffset_ParentCaches; // 0x158(0x10)(Edit, EditConst, NonTransactional)
	uint8                                        Pad_1A3B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___GetTransform_2_1_Transform;           // 0x170(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_2_1_CachedIndex;         // 0x1D0(0x10)(Edit, EditConst, NonTransactional)
	struct FRigUnit_AimConstraint_WorldUp        RigVMModel___AimConstraintLocalSpaceOffset_1_WorldUp__IO; // 0x1E0(0x28)(Edit, EditConst, NonTransactional, NoDestructor)
	TArray<struct FCachedRigElement>             RigVMModel___AimConstraintLocalSpaceOffset_1_WorldUpSpaceCache; // 0x208(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___AimConstraintLocalSpaceOffset_1_ChildCache; // 0x218(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<struct FCachedRigElement>>     RigVMModel___AimConstraintLocalSpaceOffset_1_ParentCaches; // 0x228(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___SphericalPoseReader_OutputParam;      // 0x238(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A3C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSphericalRegion>              RigVMModel___SphericalPoseReader_InnerRegion;      // 0x240(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FSphericalRegion>              RigVMModel___SphericalPoseReader_OuterRegion;      // 0x250(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___SphericalPoseReader_DriverNormal;     // 0x260(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___SphericalPoseReader_Driver2D;         // 0x270(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SphericalPoseReader_DriverCache;      // 0x280(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SphericalPoseReader_OptionalParentCache; // 0x290(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FTransform>                    RigVMModel___SphericalPoseReader_LocalDriverTransformInit; // 0x2A0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___SphericalPoseReader_CachedRotationOffset; // 0x2B0(0x10)(Edit, EditConst, NonTransactional)
	TArray<uint8>                                RigVMModel___SphericalPoseReader_bCachedInitTransforms; // 0x2C0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___OffsetTransformForItem_CachedIndex;   // 0x2D0(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___SphericalPoseReader_3_OutputParam;    // 0x2E0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A3D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSphericalRegion>              RigVMModel___SphericalPoseReader_3_InnerRegion;    // 0x2E8(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FSphericalRegion>              RigVMModel___SphericalPoseReader_3_OuterRegion;    // 0x2F8(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___SphericalPoseReader_3_DriverNormal;   // 0x308(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___SphericalPoseReader_3_Driver2D;       // 0x318(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SphericalPoseReader_3_DriverCache;    // 0x328(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SphericalPoseReader_3_OptionalParentCache; // 0x338(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FTransform>                    RigVMModel___SphericalPoseReader_3_LocalDriverTransformInit; // 0x348(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___SphericalPoseReader_3_CachedRotationOffset; // 0x358(0x10)(Edit, EditConst, NonTransactional)
	TArray<uint8>                                RigVMModel___SphericalPoseReader_3_bCachedInitTransforms; // 0x368(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___OffsetTransformForItem_3_CachedIndex; // 0x378(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___SphericalPoseReader_1_OutputParam;    // 0x388(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A3E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSphericalRegion>              RigVMModel___SphericalPoseReader_1_InnerRegion;    // 0x390(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FSphericalRegion>              RigVMModel___SphericalPoseReader_1_OuterRegion;    // 0x3A0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___SphericalPoseReader_1_DriverNormal;   // 0x3B0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___SphericalPoseReader_1_Driver2D;       // 0x3C0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SphericalPoseReader_1_DriverCache;    // 0x3D0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SphericalPoseReader_1_OptionalParentCache; // 0x3E0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FTransform>                    RigVMModel___SphericalPoseReader_1_LocalDriverTransformInit; // 0x3F0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___SphericalPoseReader_1_CachedRotationOffset; // 0x400(0x10)(Edit, EditConst, NonTransactional)
	TArray<uint8>                                RigVMModel___SphericalPoseReader_1_bCachedInitTransforms; // 0x410(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___OffsetTransformForItem_1_CachedIndex; // 0x420(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___SphericalPoseReader_1_1_OutputParam;  // 0x430(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A3F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSphericalRegion>              RigVMModel___SphericalPoseReader_1_1_InnerRegion;  // 0x438(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FSphericalRegion>              RigVMModel___SphericalPoseReader_1_1_OuterRegion;  // 0x448(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___SphericalPoseReader_1_1_DriverNormal; // 0x458(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___SphericalPoseReader_1_1_Driver2D;     // 0x468(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SphericalPoseReader_1_1_DriverCache;  // 0x478(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SphericalPoseReader_1_1_OptionalParentCache; // 0x488(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FTransform>                    RigVMModel___SphericalPoseReader_1_1_LocalDriverTransformInit; // 0x498(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVector>                       RigVMModel___SphericalPoseReader_1_1_CachedRotationOffset; // 0x4A8(0x10)(Edit, EditConst, NonTransactional)
	TArray<uint8>                                RigVMModel___SphericalPoseReader_1_1_bCachedInitTransforms; // 0x4B8(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___OffsetTransformForItem_1_1_CachedIndex; // 0x4C8(0x10)(Edit, EditConst, NonTransactional)
	uint8                                        Pad_1A44[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___GetTransform_Transform;               // 0x4E0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_CachedIndex;             // 0x540(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetTransform_CachedIndex;             // 0x550(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___GetTransform_1_Transform;             // 0x560(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_1_CachedIndex;           // 0x5C0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetTransform_1_CachedIndex;           // 0x5D0(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___GetTransform_1_2_Transform;           // 0x5E0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_1_2_CachedIndex;         // 0x640(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetTransform_1_2_CachedIndex;         // 0x650(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___GetTransform_1_2_1_Transform;         // 0x660(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_1_2_1_CachedIndex;       // 0x6C0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetTransform_1_2_1_CachedIndex;       // 0x6D0(0x10)(Edit, EditConst, NonTransactional)

	static class UClass* StaticClass();
	static class URigVMMemory_Work_PS* GetDefaultObj();

};

// 0x424 (0x44C - 0x28)
// RigVMMemoryStorageGeneratorClass CR_Player_Shoulders.RigVMMemory_Literal
class URigVMMemory_Literal_PS : public URigVMMemoryStorage
{
public:
	struct FRigElementKey                        RigVMModel___ParentConstraint_Child__Const;        // 0x28(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___ParentConstraint_bMaintainOffset__Const : 1; // Mask: 0x1, PropSize: 0x10x34(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_168 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	struct FTransformFilter                      RigVMModel___ParentConstraint_Filter__Const;       // 0x35(0x9)(Edit, EditConst, NonTransactional, NoDestructor)
	uint8                                        Pad_1A55[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FConstraintParent>             RigVMModel___ParentConstraint_Parents__Const;      // 0x40(0x10)(Edit, EditConst, NonTransactional)
	struct FRigUnit_ParentConstraint_AdvancedSettings RigVMModel___ParentConstraint_AdvancedSettings__Const; // 0x50(0x2)(Edit, EditConst, NonTransactional, NoDestructor)
	uint8                                        Pad_1A56[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RigVMModel___ParentConstraint_Weight__Const;       // 0x54(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___ParentConstraint_1_Child__Const;      // 0x58(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A57[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FConstraintParent>             RigVMModel___ParentConstraint_1_Parents__Const;    // 0x68(0x10)(Edit, EditConst, NonTransactional)
	struct FRigElementKey                        RigVMModel___AimConstraintLocalSpaceOffset_Child__Const; // 0x78(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FFilterOptionPerAxis                  RigVMModel___AimConstraintLocalSpaceOffset_Filter__Const; // 0x84(0x3)(Edit, EditConst, NonTransactional, NoDestructor)
	uint8                                        Pad_1A5F[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RigVMModel___AimConstraintLocalSpaceOffset_AimAxis__Const; // 0x88(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___AimConstraintLocalSpaceOffset_UpAxis__Const; // 0xA0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigUnit_AimConstraint_WorldUp        RigVMModel___AimConstraintLocalSpaceOffset_WorldUp__Const; // 0xB8(0x28)(Edit, EditConst, NonTransactional, NoDestructor)
	struct FRigElementKey                        RigVMModel___GetTransform_2_Item__Const;           // 0xE0(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class EBoneGetterSetterMode             RigVMModel___GetTransform_2_Space__Const;          // 0xEC(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___GetTransform_2_bInitial__Const : 1;   // Mask: 0x1, PropSize: 0x10xED(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_169 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1A82[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FConstraintParent>             RigVMModel___AimConstraintLocalSpaceOffset_Parents__Const; // 0xF0(0x10)(Edit, EditConst, NonTransactional)
	struct FRigUnit_AimConstraint_AdvancedSettings RigVMModel___AimConstraintLocalSpaceOffset_AdvancedSettings__Const; // 0x100(0x80)(Edit, EditConst, NonTransactional, NoDestructor)
	struct FRigElementKey                        RigVMModel___AimConstraintLocalSpaceOffset_1_Child__Const; // 0x180(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A84[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RigVMModel___AimConstraintLocalSpaceOffset_1_AimAxis__Const; // 0x190(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___SphericalPoseReader_DriverItem__Const; // 0x1A8(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A85[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RigVMModel___SphericalPoseReader_RotationOffset__Const; // 0x1B8(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___SphericalPoseReader_ActiveRegionSize__Const; // 0x1D0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRegionScaleFactors                   RigVMModel___SphericalPoseReader_ActiveRegionScaleFactors__Const; // 0x1D4(0x10)(Edit, EditConst, NonTransactional, NoDestructor)
	float                                        RigVMModel___SphericalPoseReader_FalloffSize__Const; // 0x1E4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___SphericalPoseReader_OptionalParentItem__Const; // 0x1E8(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FSphericalPoseReaderDebugSettings     RigVMModel___SphericalPoseReader_Debug__Const;     // 0x1F4(0x10)(Edit, EditConst, NonTransactional, NoDestructor)
	struct FRigElementKey                        RigVMModel___OffsetTransformForItem_Item__Const;   // 0x204(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___OffsetTransformForItem_OffsetTransform__Const; // 0x210(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___SphericalPoseReader_3_RotationOffset__Const; // 0x270(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___SphericalPoseReader_3_FalloffSize__Const; // 0x288(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A8A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___OffsetTransformForItem_3_OffsetTransform__Const; // 0x290(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___SphericalPoseReader_1_DriverItem__Const; // 0x2F0(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A8B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RigVMModel___SphericalPoseReader_1_RotationOffset__Const; // 0x300(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___OffsetTransformForItem_1_Item__Const; // 0x318(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A8D[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___OffsetTransformForItem_1_OffsetTransform__Const; // 0x330(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___SphericalPoseReader_1_1_RotationOffset__Const; // 0x390(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A8E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___OffsetTransformForItem_1_1_OffsetTransform__Const; // 0x3B0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___SetTransform_Item__Const;             // 0x410(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___SetTransform_1_Item__Const;           // 0x41C(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___SetTransform_1_2_Item__Const;         // 0x428(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___SetTransform_1_2_1_Item__Const;       // 0x434(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___GetTransform_1_2_1_Item__Const;       // 0x440(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URigVMMemory_Literal_PS* GetDefaultObj();

};

// 0x0 (0x560 - 0x560)
// ControlRigBlueprintGeneratedClass CR_Player_Shoulders.CR_Player_Shoulders_C
class UCR_Player_Shoulders_C : public UControlRig
{
public:

	static class UClass* StaticClass();
	static class UCR_Player_Shoulders_C* GetDefaultObj();

};

}


