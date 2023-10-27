#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x580 - 0x560)
// ControlRigBlueprintGeneratedClass CR_Player_2HIK.CR_Player_2HIK_C
class UCR_Player_2HIK_C : public UControlRig
{
public:
	double                                       Spring_Strength;                                   // 0x560(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Spring_CriticalDamping;                            // 0x568(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LHand_Alpha;                                       // 0x570(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RHand_Alpha;                                       // 0x578(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCR_Player_2HIK_C* GetDefaultObj();

};

// 0x204 (0x22C - 0x28)
// RigVMMemoryStorageGeneratorClass CR_Player_2HIK.RigVMMemory_Literal
class URigVMMemory_Literal : public URigVMMemoryStorage
{
public:
	struct FRigElementKey                        RigVMModel___RigUnit_SetTransform_7_Item__Const;   // 0x28(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class EBoneGetterSetterMode             RigVMModel___RigUnit_SetTransform_7_Space__Const;  // 0x34(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___RigUnit_SetTransform_7_bInitial__Const : 1; // Mask: 0x1, PropSize: 0x10x35(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_26C : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_382F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        RigVMModel___RigUnit_GetTransform_6_Item__Const;   // 0x38(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___RigUnit_SetTransform_7_Weight__Const; // 0x44(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___RigUnit_SetTransform_7_bPropagateToChildren__Const : 1; // Mask: 0x1, PropSize: 0x10x48(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_26D : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3830[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        RigVMModel___RigUnit_SetTranslation_Item__Const;   // 0x4C(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___RigUnit_SetTranslation_Value__Const;  // 0x58(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___SpringInterp_Force__Const;            // 0x70(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___SpringInterp_TargetVelocityAmount__Const; // 0x88(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___RigUnit_SetTransform_8_Item__Const;   // 0x8C(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class EBoneGetterSetterMode             RigVMModel___RigUnit_SetTransform_8_Space__Const;  // 0x98(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3831[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        RigVMModel___RigUnit_GetTransform_4_Item__Const;   // 0x9C(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___TwoBoneIKSimplePerItem_ItemA__Const;  // 0xA8(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___TwoBoneIKSimplePerItem_ItemB__Const;  // 0xB4(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___TwoBoneIKSimplePerItem_EffectorItem__Const; // 0xC0(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___RigUnit_GetTransform_9_Item__Const;   // 0xCC(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___TwoBoneIKSimplePerItem_PrimaryAxis__Const; // 0xD8(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___TwoBoneIKSimplePerItem_SecondaryAxis__Const; // 0xF0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class EControlRigVectorKind             RigVMModel___TwoBoneIKSimplePerItem_PoleVectorKind__Const; // 0x108(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3832[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        RigVMModel___TwoBoneIKSimplePerItem_PoleVectorSpace__Const; // 0x10C(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___TwoBoneIKSimplePerItem_StretchStartRatio__Const; // 0x118(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___TwoBoneIKSimplePerItem_StretchMaximumRatio__Const; // 0x11C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigUnit_TwoBoneIKSimple_DebugSettings RigVMModel___TwoBoneIKSimplePerItem_DebugSettings__Const; // 0x120(0x70)(Edit, EditConst, NonTransactional, NoDestructor)
	struct FRigElementKey                        RigVMModel___TwoBoneIKSimplePerItem_1_ItemA__Const; // 0x190(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___TwoBoneIKSimplePerItem_1_ItemB__Const; // 0x19C(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___TwoBoneIKSimplePerItem_1_EffectorItem__Const; // 0x1A8(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___RigUnit_GetTransform_9_1_Item__Const; // 0x1B4(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___TwoBoneIKSimplePerItem_1_PrimaryAxis__Const; // 0x1C0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___TwoBoneIKSimplePerItem_1_SecondaryAxis__Const; // 0x1D8(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___TwoBoneIKSimplePerItem_1_PoleVectorSpace__Const; // 0x1F0(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___RigUnit_SetTransform_Item__Const;     // 0x1FC(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___RigUnit_GetTransform_Item__Const;     // 0x208(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___RigUnit_SetTransform_3_Item__Const;   // 0x214(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___RigUnit_GetTransform_3_Item__Const;   // 0x220(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URigVMMemory_Literal* GetDefaultObj();

};

// 0x678 (0x6A0 - 0x28)
// RigVMMemoryStorageGeneratorClass CR_Player_2HIK.RigVMMemory_Work
class URigVMMemory_Work : public URigVMMemoryStorage
{
public:
	struct FControlRigExecuteContext             ExecuteContext_;                                   // 0x28(0x38)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_6_Transform;     // 0x60(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_6_CachedIndex;   // 0xC0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_7_CachedIndex;   // 0xD0(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_7_Transform;     // 0xE0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_7_CachedIndex;   // 0x140(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___SpringInterp_Result;                  // 0x150(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___SpringInterp_Target;                  // 0x168(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___SpringInterp_Strength;                // 0x180(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___SpringInterp_CriticalDamping;         // 0x184(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3833[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___RigUnit_GetTransform_8_Transform;     // 0x190(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_8_CachedIndex;   // 0x1F0(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___SpringInterp_Current;                 // 0x200(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___SpringInterp_Velocity;                // 0x218(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                       RigVMModel___SpringInterp_SimulatedResult;         // 0x230(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FVectorSpringState>            RigVMModel___SpringInterp_SpringState;             // 0x240(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___RigUnit_SetTranslation_Value__IO;     // 0x250(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTranslation_CachedIndex;   // 0x268(0x10)(Edit, EditConst, NonTransactional)
	uint8                                        Pad_3834[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___RigUnit_GetTransform_4_Transform;     // 0x280(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_4_CachedIndex;   // 0x2E0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_8_CachedIndex;   // 0x2F0(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_9_Transform;     // 0x300(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_9_CachedIndex;   // 0x360(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___TwoBoneIKSimplePerItem_Weight;        // 0x370(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3835[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___TwoBoneIKSimplePerItem_CachedItemAIndex; // 0x378(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___TwoBoneIKSimplePerItem_CachedItemBIndex; // 0x388(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___TwoBoneIKSimplePerItem_CachedEffectorItemIndex; // 0x398(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___TwoBoneIKSimplePerItem_CachedPoleVectorSpaceIndex; // 0x3A8(0x10)(Edit, EditConst, NonTransactional)
	uint8                                        Pad_3836[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___RigUnit_GetTransform_9_1_Transform;   // 0x3C0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_9_1_CachedIndex; // 0x420(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___TwoBoneIKSimplePerItem_1_Weight;      // 0x430(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3837[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___TwoBoneIKSimplePerItem_1_CachedItemAIndex; // 0x438(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___TwoBoneIKSimplePerItem_1_CachedItemBIndex; // 0x448(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___TwoBoneIKSimplePerItem_1_CachedEffectorItemIndex; // 0x458(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___TwoBoneIKSimplePerItem_1_CachedPoleVectorSpaceIndex; // 0x468(0x10)(Edit, EditConst, NonTransactional)
	uint8                                        Pad_3838[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___RigUnit_GetTransform_Transform;       // 0x480(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_CachedIndex;     // 0x4E0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_CachedIndex;     // 0x4F0(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_1_Transform;     // 0x500(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_1_CachedIndex;   // 0x560(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_6_CachedIndex;   // 0x570(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_2_Transform;     // 0x580(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_2_CachedIndex;   // 0x5E0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_2_CachedIndex;   // 0x5F0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_4_CachedIndex;   // 0x600(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_3_Transform;     // 0x610(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_3_CachedIndex;   // 0x670(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_3_CachedIndex;   // 0x680(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_5_CachedIndex;   // 0x690(0x10)(Edit, EditConst, NonTransactional)

	static class UClass* StaticClass();
	static class URigVMMemory_Work* GetDefaultObj();

};

}


