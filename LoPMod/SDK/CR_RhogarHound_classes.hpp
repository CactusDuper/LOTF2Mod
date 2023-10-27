#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x580 - 0x560)
// ControlRigBlueprintGeneratedClass CR_RhogarHound.CR_RhogarHound_C
class UCR_RhogarHound_C : public UControlRig
{
public:
	struct FVector                               LookAt_Target;                                     // 0x560(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LookAt_Alpha;                                      // 0x578(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCR_RhogarHound_C* GetDefaultObj();

};

// 0x4C0 (0x4E8 - 0x28)
// RigVMMemoryStorageGeneratorClass CR_RhogarHound.RigVMMemory_Literal
class URigVMMemory_Literal : public URigVMMemoryStorage
{
public:
	enum class EBoneGetterSetterMode             RigVMModel___leg_twist_section_Set_Transform_Space__Const; // 0x28(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___leg_twist_section_Set_Transform_bInitial__Const : 1; // Mask: 0x1, PropSize: 0x10x29(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_274 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_38BC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RigVMModel___leg_twist_section_MathQuaternionFromEuler_Euler__Const; // 0x30(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class EEulerRotationOrder               RigVMModel___leg_twist_section_MathQuaternionToEuler_1_RotationOrder__Const; // 0x48(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38BD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        RigVMModel___leg_twist_section_GetTransform_1_Item__Const; // 0x4C(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___leg_twist_section_MathQuaternionSwingTwist_TwistAxis__Const; // 0x58(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___leg_twist_section_Divide_B__Const;    // 0x70(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___leg_twist_section_Set_Transform_Weight__Const; // 0x78(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___leg_twist_section_Set_Transform_bPropagateToChildren__Const : 1; // Mask: 0x1, PropSize: 0x10x7C(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_275 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_38BE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                RigVMModel___leg_twist_section_ArrayIterator_Array__Const; // 0x80(0x10)(Edit, EditConst, NonTransactional)
	struct FRigElementKey                        RigVMModel___leg_twist_section_1_GetTransform_1_Item__Const; // 0x90(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38BF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                RigVMModel___leg_twist_section_1_ArrayIterator_Array__Const; // 0xA0(0x10)(Edit, EditConst, NonTransactional)
	struct FRigElementKey                        RigVMModel___leg_twist_section_1_4_GetTransform_1_Item__Const; // 0xB0(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38C0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                RigVMModel___leg_twist_section_1_4_ArrayIterator_Array__Const; // 0xC0(0x10)(Edit, EditConst, NonTransactional)
	struct FRigElementKey                        RigVMModel___leg_twist_section_1_4_1_GetTransform_1_Item__Const; // 0xD0(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38C1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                RigVMModel___leg_twist_section_1_4_1_ArrayIterator_Array__Const; // 0xE0(0x10)(Edit, EditConst, NonTransactional)
	struct FRigElementKey                        RigVMModel___leg_twist_section_3_GetTransform_1_Item__Const; // 0xF0(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38C2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                RigVMModel___leg_twist_section_3_ArrayIterator_Array__Const; // 0x100(0x10)(Edit, EditConst, NonTransactional)
	struct FRigElementKey                        RigVMModel___leg_twist_section_3_1_GetTransform_1_Item__Const; // 0x110(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38C3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                RigVMModel___leg_twist_section_3_1_ArrayIterator_Array__Const; // 0x120(0x10)(Edit, EditConst, NonTransactional)
	struct FRigElementKey                        RigVMModel___leg_twist_section_3_1_1_GetTransform_1_Item__Const; // 0x130(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38C4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                RigVMModel___leg_twist_section_3_1_1_ArrayIterator_Array__Const; // 0x140(0x10)(Edit, EditConst, NonTransactional)
	struct FRigElementKey                        RigVMModel___SetTransform_1_3_Item__Const;         // 0x150(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class EBoneGetterSetterMode             RigVMModel___SetTransform_1_3_Space__Const;        // 0x15C(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38C5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___SetTransform_1_3_Value__Const;        // 0x160(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___AimItem_Item__Const;                  // 0x1C0(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38C6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_AimItem_Target               RigVMModel___AimItem_Primary__Const;               // 0x1D0(0x48)(Edit, EditConst, NonTransactional, NoDestructor)
	class FName                                  RigVMModel___GetControlTransform_Control__Const;   // 0x218(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___AccumulateVectorLerp_Blend__Const;    // 0x220(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38C7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_AimItem_Target               RigVMModel___AimItem_Secondary__Const;             // 0x228(0x48)(Edit, EditConst, NonTransactional, NoDestructor)
	struct FRigUnit_AimBone_DebugSettings        RigVMModel___AimItem_DebugSettings__Const;         // 0x270(0x70)(Edit, EditConst, NonTransactional, NoDestructor)
	struct FRigElementKey                        RigVMModel___AimItem_3_Item__Const;                // 0x2E0(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38C8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_AimItem_Target               RigVMModel___AimItem_3_Primary__Const;             // 0x2F0(0x48)(Edit, EditConst, NonTransactional, NoDestructor)
	struct FRigUnit_AimItem_Target               RigVMModel___AimItem_3_Secondary__Const;           // 0x338(0x48)(Edit, EditConst, NonTransactional, NoDestructor)
	struct FRigUnit_AimBone_DebugSettings        RigVMModel___AimItem_3_DebugSettings__Const;       // 0x380(0x70)(Edit, EditConst, NonTransactional, NoDestructor)
	struct FRigElementKey                        RigVMModel___AimItem_3_1_Item__Const;              // 0x3F0(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38C9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_AimItem_Target               RigVMModel___AimItem_3_1_Primary__Const;           // 0x400(0x48)(Edit, EditConst, NonTransactional, NoDestructor)
	struct FRigUnit_AimItem_Target               RigVMModel___AimItem_3_1_Secondary__Const;         // 0x448(0x48)(Edit, EditConst, NonTransactional, NoDestructor)
	struct FRigElementKey                        RigVMModel___SetTransform_6_Item__Const;           // 0x490(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___SetControlOffset_Control__Const;      // 0x49C(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___RigUnit_GetTransform_4_Item__Const;   // 0x4A4(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___SetControlOffset_1_Control__Const;    // 0x4B0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___RigUnit_GetTransform_1_1_Item__Const; // 0x4B8(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___SetTransform_5_1_Item__Const;         // 0x4C4(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___RigUnit_GetTransform_1_1_1_2_1_Item__Const; // 0x4D0(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___SetTransform_5_Item__Const;           // 0x4DC(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URigVMMemory_Literal* GetDefaultObj();

};

// 0x1638 (0x1660 - 0x28)
// RigVMMemoryStorageGeneratorClass CR_RhogarHound.RigVMMemory_Work
class URigVMMemory_Work : public URigVMMemoryStorage
{
public:
	struct FControlRigExecuteContext             ExecuteContext_;                                   // 0x28(0x38)(Edit, EditConst, NonTransactional)
	struct FRigElementKey                        RigVMModel___leg_twist_section_ArrayIterator_Element; // 0x60(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38CA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RigVMModel___leg_twist_section_MathQuaternionFromEuler_Result; // 0x70(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___leg_twist_section_MathQuaternionToEuler_1_Result; // 0x90(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38CB[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___leg_twist_section_GetTransform_Transform; // 0xB0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___leg_twist_section_GetTransform_CachedIndex; // 0x110(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___leg_twist_section_MathQuaternionToEuler_1_Value; // 0x120(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___leg_twist_section_Divide_Result;      // 0x140(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___leg_twist_section_MathQuaternionToEuler_Result; // 0x148(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___leg_twist_section_MathQuaternionSwingTwist_Twist; // 0x160(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___leg_twist_section_GetTransform_1_Transform; // 0x180(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___leg_twist_section_GetTransform_1_CachedIndex; // 0x1E0(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___leg_twist_section_MathQuaternionSwingTwist_Input; // 0x1F0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___leg_twist_section_MathQuaternionSwingTwist_Swing; // 0x210(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___leg_twist_section_Divide_A;           // 0x230(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___leg_twist_section_MathQuaternionFromEuler_Euler__IO; // 0x238(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___leg_twist_section_Set_Transform_CachedIndex; // 0x250(0x10)(Edit, EditConst, NonTransactional)
	int32                                        RigVMModel___leg_twist_section_ArrayIterator_Index; // 0x260(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___leg_twist_section_ArrayIterator_Count; // 0x264(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___leg_twist_section_ArrayIterator_Ratio; // 0x268(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___leg_twist_section_ArrayIterator_Continue : 1; // Mask: 0x1, PropSize: 0x10x26C(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_276 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_38CC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        RigVMModel___leg_twist_section_1_ArrayIterator_Element; // 0x270(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38CD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RigVMModel___leg_twist_section_1_MathQuaternionFromEuler_Result; // 0x280(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___leg_twist_section_1_MathQuaternionToEuler_1_Result; // 0x2A0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38CE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___leg_twist_section_1_GetTransform_Transform; // 0x2C0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___leg_twist_section_1_GetTransform_CachedIndex; // 0x320(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___leg_twist_section_1_MathQuaternionToEuler_1_Value; // 0x330(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___leg_twist_section_1_Divide_Result;    // 0x350(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___leg_twist_section_1_MathQuaternionToEuler_Result; // 0x358(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___leg_twist_section_1_MathQuaternionSwingTwist_Twist; // 0x370(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___leg_twist_section_1_GetTransform_1_Transform; // 0x390(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___leg_twist_section_1_GetTransform_1_CachedIndex; // 0x3F0(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___leg_twist_section_1_MathQuaternionSwingTwist_Input; // 0x400(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___leg_twist_section_1_MathQuaternionSwingTwist_Swing; // 0x420(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___leg_twist_section_1_Divide_A;         // 0x440(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___leg_twist_section_1_MathQuaternionFromEuler_Euler__IO; // 0x448(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___leg_twist_section_1_Set_Transform_CachedIndex; // 0x460(0x10)(Edit, EditConst, NonTransactional)
	int32                                        RigVMModel___leg_twist_section_1_ArrayIterator_Index; // 0x470(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___leg_twist_section_1_ArrayIterator_Count; // 0x474(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___leg_twist_section_1_ArrayIterator_Ratio; // 0x478(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___leg_twist_section_1_ArrayIterator_Continue : 1; // Mask: 0x1, PropSize: 0x10x47C(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_277 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_38CF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        RigVMModel___leg_twist_section_1_4_ArrayIterator_Element; // 0x480(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38D0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RigVMModel___leg_twist_section_1_4_MathQuaternionFromEuler_Result; // 0x490(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___leg_twist_section_1_4_MathQuaternionToEuler_1_Result; // 0x4B0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38D1[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___leg_twist_section_1_4_GetTransform_Transform; // 0x4D0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___leg_twist_section_1_4_GetTransform_CachedIndex; // 0x530(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___leg_twist_section_1_4_MathQuaternionToEuler_1_Value; // 0x540(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___leg_twist_section_1_4_Divide_Result;  // 0x560(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___leg_twist_section_1_4_MathQuaternionToEuler_Result; // 0x568(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___leg_twist_section_1_4_MathQuaternionSwingTwist_Twist; // 0x580(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___leg_twist_section_1_4_GetTransform_1_Transform; // 0x5A0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___leg_twist_section_1_4_GetTransform_1_CachedIndex; // 0x600(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___leg_twist_section_1_4_MathQuaternionSwingTwist_Input; // 0x610(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___leg_twist_section_1_4_MathQuaternionSwingTwist_Swing; // 0x630(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___leg_twist_section_1_4_Divide_A;       // 0x650(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___leg_twist_section_1_4_MathQuaternionFromEuler_Euler__IO; // 0x658(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___leg_twist_section_1_4_Set_Transform_CachedIndex; // 0x670(0x10)(Edit, EditConst, NonTransactional)
	int32                                        RigVMModel___leg_twist_section_1_4_ArrayIterator_Index; // 0x680(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___leg_twist_section_1_4_ArrayIterator_Count; // 0x684(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___leg_twist_section_1_4_ArrayIterator_Ratio; // 0x688(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___leg_twist_section_1_4_ArrayIterator_Continue : 1; // Mask: 0x1, PropSize: 0x10x68C(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_278 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_38D2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        RigVMModel___leg_twist_section_1_4_1_ArrayIterator_Element; // 0x690(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38D3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RigVMModel___leg_twist_section_1_4_1_MathQuaternionFromEuler_Result; // 0x6A0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___leg_twist_section_1_4_1_MathQuaternionToEuler_1_Result; // 0x6C0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38D4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___leg_twist_section_1_4_1_GetTransform_Transform; // 0x6E0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___leg_twist_section_1_4_1_GetTransform_CachedIndex; // 0x740(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___leg_twist_section_1_4_1_MathQuaternionToEuler_1_Value; // 0x750(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___leg_twist_section_1_4_1_Divide_Result; // 0x770(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___leg_twist_section_1_4_1_MathQuaternionToEuler_Result; // 0x778(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___leg_twist_section_1_4_1_MathQuaternionSwingTwist_Twist; // 0x790(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___leg_twist_section_1_4_1_GetTransform_1_Transform; // 0x7B0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___leg_twist_section_1_4_1_GetTransform_1_CachedIndex; // 0x810(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___leg_twist_section_1_4_1_MathQuaternionSwingTwist_Input; // 0x820(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___leg_twist_section_1_4_1_MathQuaternionSwingTwist_Swing; // 0x840(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___leg_twist_section_1_4_1_Divide_A;     // 0x860(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___leg_twist_section_1_4_1_MathQuaternionFromEuler_Euler__IO; // 0x868(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___leg_twist_section_1_4_1_Set_Transform_CachedIndex; // 0x880(0x10)(Edit, EditConst, NonTransactional)
	int32                                        RigVMModel___leg_twist_section_1_4_1_ArrayIterator_Index; // 0x890(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___leg_twist_section_1_4_1_ArrayIterator_Count; // 0x894(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___leg_twist_section_1_4_1_ArrayIterator_Ratio; // 0x898(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___leg_twist_section_1_4_1_ArrayIterator_Continue : 1; // Mask: 0x1, PropSize: 0x10x89C(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_279 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_38D5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        RigVMModel___leg_twist_section_3_ArrayIterator_Element; // 0x8A0(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38D6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RigVMModel___leg_twist_section_3_MathQuaternionFromEuler_Result; // 0x8B0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___leg_twist_section_3_MathQuaternionToEuler_1_Result; // 0x8D0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38D7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___leg_twist_section_3_GetTransform_Transform; // 0x8F0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___leg_twist_section_3_GetTransform_CachedIndex; // 0x950(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___leg_twist_section_3_MathQuaternionToEuler_1_Value; // 0x960(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___leg_twist_section_3_Divide_Result;    // 0x980(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___leg_twist_section_3_MathQuaternionToEuler_Result; // 0x988(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___leg_twist_section_3_MathQuaternionSwingTwist_Twist; // 0x9A0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___leg_twist_section_3_GetTransform_1_Transform; // 0x9C0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___leg_twist_section_3_GetTransform_1_CachedIndex; // 0xA20(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___leg_twist_section_3_MathQuaternionSwingTwist_Input; // 0xA30(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___leg_twist_section_3_MathQuaternionSwingTwist_Swing; // 0xA50(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___leg_twist_section_3_Divide_A;         // 0xA70(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___leg_twist_section_3_MathQuaternionFromEuler_Euler__IO; // 0xA78(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___leg_twist_section_3_Set_Transform_CachedIndex; // 0xA90(0x10)(Edit, EditConst, NonTransactional)
	int32                                        RigVMModel___leg_twist_section_3_ArrayIterator_Index; // 0xAA0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___leg_twist_section_3_ArrayIterator_Count; // 0xAA4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___leg_twist_section_3_ArrayIterator_Ratio; // 0xAA8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___leg_twist_section_3_ArrayIterator_Continue : 1; // Mask: 0x1, PropSize: 0x10xAAC(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_27A : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_38D8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        RigVMModel___leg_twist_section_3_1_ArrayIterator_Element; // 0xAB0(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38D9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RigVMModel___leg_twist_section_3_1_MathQuaternionFromEuler_Result; // 0xAC0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___leg_twist_section_3_1_MathQuaternionToEuler_1_Result; // 0xAE0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38DA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___leg_twist_section_3_1_GetTransform_Transform; // 0xB00(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___leg_twist_section_3_1_GetTransform_CachedIndex; // 0xB60(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___leg_twist_section_3_1_MathQuaternionToEuler_1_Value; // 0xB70(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___leg_twist_section_3_1_Divide_Result;  // 0xB90(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___leg_twist_section_3_1_MathQuaternionToEuler_Result; // 0xB98(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___leg_twist_section_3_1_MathQuaternionSwingTwist_Twist; // 0xBB0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___leg_twist_section_3_1_GetTransform_1_Transform; // 0xBD0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___leg_twist_section_3_1_GetTransform_1_CachedIndex; // 0xC30(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___leg_twist_section_3_1_MathQuaternionSwingTwist_Input; // 0xC40(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___leg_twist_section_3_1_MathQuaternionSwingTwist_Swing; // 0xC60(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___leg_twist_section_3_1_Divide_A;       // 0xC80(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___leg_twist_section_3_1_MathQuaternionFromEuler_Euler__IO; // 0xC88(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___leg_twist_section_3_1_Set_Transform_CachedIndex; // 0xCA0(0x10)(Edit, EditConst, NonTransactional)
	int32                                        RigVMModel___leg_twist_section_3_1_ArrayIterator_Index; // 0xCB0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___leg_twist_section_3_1_ArrayIterator_Count; // 0xCB4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___leg_twist_section_3_1_ArrayIterator_Ratio; // 0xCB8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___leg_twist_section_3_1_ArrayIterator_Continue : 1; // Mask: 0x1, PropSize: 0x10xCBC(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_27B : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_38DB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        RigVMModel___leg_twist_section_3_1_1_ArrayIterator_Element; // 0xCC0(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38DC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RigVMModel___leg_twist_section_3_1_1_MathQuaternionFromEuler_Result; // 0xCD0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___leg_twist_section_3_1_1_MathQuaternionToEuler_1_Result; // 0xCF0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38DD[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___leg_twist_section_3_1_1_GetTransform_Transform; // 0xD10(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___leg_twist_section_3_1_1_GetTransform_CachedIndex; // 0xD70(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___leg_twist_section_3_1_1_MathQuaternionToEuler_1_Value; // 0xD80(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___leg_twist_section_3_1_1_Divide_Result; // 0xDA0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___leg_twist_section_3_1_1_MathQuaternionToEuler_Result; // 0xDA8(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___leg_twist_section_3_1_1_MathQuaternionSwingTwist_Twist; // 0xDC0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___leg_twist_section_3_1_1_GetTransform_1_Transform; // 0xDE0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___leg_twist_section_3_1_1_GetTransform_1_CachedIndex; // 0xE40(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___leg_twist_section_3_1_1_MathQuaternionSwingTwist_Input; // 0xE50(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___leg_twist_section_3_1_1_MathQuaternionSwingTwist_Swing; // 0xE70(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___leg_twist_section_3_1_1_Divide_A;     // 0xE90(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___leg_twist_section_3_1_1_MathQuaternionFromEuler_Euler__IO; // 0xE98(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___leg_twist_section_3_1_1_Set_Transform_CachedIndex; // 0xEB0(0x10)(Edit, EditConst, NonTransactional)
	int32                                        RigVMModel___leg_twist_section_3_1_1_ArrayIterator_Index; // 0xEC0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___leg_twist_section_3_1_1_ArrayIterator_Count; // 0xEC4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___leg_twist_section_3_1_1_ArrayIterator_Ratio; // 0xEC8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___leg_twist_section_3_1_1_ArrayIterator_Continue : 1; // Mask: 0x1, PropSize: 0x10xECC(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_27C : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_38DE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RigVMModel___ToRigSpace_Location_Global;           // 0xED0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38DF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___SetTransform_1_3_Value__IO;           // 0xEF0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___SetTransform_1_3_CachedIndex;         // 0xF50(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___AccumulateVectorLerp_Result;          // 0xF60(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38E0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___GetControlTransform_Transform;        // 0xF80(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___GetControlTransform_Minimum;          // 0xFE0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___GetControlTransform_Maximum;          // 0x1040(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetControlTransform_CachedControlIndex; // 0x10A0(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___AccumulateVectorLerp_TargetValue;     // 0x10B0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38E1[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___GetTransform_4_1_Transform;           // 0x10D0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_4_1_CachedIndex;         // 0x1130(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___AccumulateVectorLerp_InitialValue;    // 0x1140(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                       RigVMModel___AccumulateVectorLerp_AccumulatedValue; // 0x1158(0x10)(Edit, EditConst, NonTransactional)
	struct FRigUnit_AimItem_Target               RigVMModel___AimItem_Primary__IO;                  // 0x1168(0x48)(Edit, EditConst, NonTransactional, NoDestructor)
	float                                        RigVMModel___AimItem_Weight;                       // 0x11B0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38E2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___AimItem_CachedItem;                   // 0x11B8(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___AimItem_PrimaryCachedSpace;           // 0x11C8(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___AimItem_SecondaryCachedSpace;         // 0x11D8(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___AccumulateVectorLerp_1_Result;        // 0x11E8(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___GetTransform_4_1_1_Transform;         // 0x1200(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_4_1_1_CachedIndex;       // 0x1260(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___AccumulateVectorLerp_1_InitialValue;  // 0x1270(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                       RigVMModel___AccumulateVectorLerp_1_AccumulatedValue; // 0x1288(0x10)(Edit, EditConst, NonTransactional)
	struct FRigUnit_AimItem_Target               RigVMModel___AimItem_3_Primary__IO;                // 0x1298(0x48)(Edit, EditConst, NonTransactional, NoDestructor)
	float                                        RigVMModel___AimItem_3_Weight;                     // 0x12E0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38E3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___AimItem_3_CachedItem;                 // 0x12E8(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___AimItem_3_PrimaryCachedSpace;         // 0x12F8(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___AimItem_3_SecondaryCachedSpace;       // 0x1308(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___AccumulateVectorLerp_1_1_Result;      // 0x1318(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___GetTransform_4_1_1_1_Transform;       // 0x1330(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_4_1_1_1_CachedIndex;     // 0x1390(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___AccumulateVectorLerp_1_1_InitialValue; // 0x13A0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                       RigVMModel___AccumulateVectorLerp_1_1_AccumulatedValue; // 0x13B8(0x10)(Edit, EditConst, NonTransactional)
	struct FRigUnit_AimItem_Target               RigVMModel___AimItem_3_1_Primary__IO;              // 0x13C8(0x48)(Edit, EditConst, NonTransactional, NoDestructor)
	float                                        RigVMModel___AimItem_3_1_Weight;                   // 0x1410(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38E4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___AimItem_3_1_CachedItem;               // 0x1418(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___AimItem_3_1_PrimaryCachedSpace;       // 0x1428(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___AimItem_3_1_SecondaryCachedSpace;     // 0x1438(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetTransform_6_CachedIndex;           // 0x1448(0x10)(Edit, EditConst, NonTransactional)
	uint8                                        Pad_38E5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___RigUnit_GetTransform_4_Transform;     // 0x1460(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_4_CachedIndex;   // 0x14C0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetControlOffset_CachedControlIndex;  // 0x14D0(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_1_1_Transform;   // 0x14E0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_1_1_CachedIndex; // 0x1540(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetControlOffset_1_CachedControlIndex; // 0x1550(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_1_1_1_2_1_Transform; // 0x1560(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_1_1_1_2_1_CachedIndex; // 0x15C0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetTransform_5_1_CachedIndex;         // 0x15D0(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_1_1_1_2_Transform; // 0x15E0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_1_1_1_2_CachedIndex; // 0x1640(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetTransform_5_CachedIndex;           // 0x1650(0x10)(Edit, EditConst, NonTransactional)

	static class UClass* StaticClass();
	static class URigVMMemory_Work* GetDefaultObj();

};

}

