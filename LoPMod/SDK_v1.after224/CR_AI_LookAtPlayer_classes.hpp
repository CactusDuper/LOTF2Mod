#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x588 - 0x560)
// ControlRigBlueprintGeneratedClass CR_AI_LookAtPlayer.CR_AI_LookAtPlayer_C
class UCR_AI_LookAtPlayer_C : public UControlRig
{
public:
	struct FVector                               LooAt_TargetLocation;                              // 0x560(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Use_HeadOnly;                                      // 0x578(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35B9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       LookAt_AlphaBlend;                                 // 0x580(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCR_AI_LookAtPlayer_C* GetDefaultObj();

};

// 0x238 (0x260 - 0x28)
// RigVMMemoryStorageGeneratorClass CR_AI_LookAtPlayer.RigVMMemory_Literal
class URigVMMemory_Literal_ALAP : public URigVMMemoryStorage
{
public:
	struct FRigElementKey                        RigVMModel___RigUnit_SetTranslation_Item__Const;   // 0x28(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class EBoneGetterSetterMode             RigVMModel___RigUnit_SetTranslation_Space__Const;  // 0x34(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___RigUnit_SetTranslation_bInitial__Const : 1; // Mask: 0x1, PropSize: 0x10x35(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_25F : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_35BA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RigVMModel___RigUnit_SetTranslation_Weight__Const; // 0x38(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35BB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RigVMModel___Clamp_1_Value__Const;                 // 0x40(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigUnit_AimItem_Target               RigVMModel___AimBoneMath_1_Primary__Const;         // 0x58(0x48)(Edit, EditConst, NonTransactional, NoDestructor)
	struct FRigUnit_AimItem_Target               RigVMModel___AimBoneMath_1_Secondary__Const;       // 0xA0(0x48)(Edit, EditConst, NonTransactional, NoDestructor)
	uint8                                        Pad_35BC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_AimBone_DebugSettings        RigVMModel___AimBoneMath_1_DebugSettings__Const;   // 0xF0(0x70)(Edit, EditConst, NonTransactional, NoDestructor)
	struct FVector                               RigVMModel___MathQuaternionSwingTwist_1_TwistAxis__Const; // 0x160(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class EEulerRotationOrder               RigVMModel___MathQuaternionToEuler_1_1_RotationOrder__Const; // 0x178(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35BF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RigVMModel___Clamp_1_Minimum__Const;               // 0x180(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___Clamp_1_Maximum__Const;               // 0x198(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___SpringInterpQuaternionV2_1_Strength__Const; // 0x1B0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___SpringInterpQuaternionV2_1_CriticalDamping__Const; // 0x1B4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35C1[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RigVMModel___SpringInterpQuaternionV2_1_Current__Const; // 0x1C0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___SpringInterpQuaternionV2_1_TargetVelocityAmount__Const; // 0x1E0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___Set_Transform_1_bPropagateToChildren__Const : 1; // Mask: 0x1, PropSize: 0x10x1E4(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_260 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_35C3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                RigVMModel___If_True__Const;                       // 0x1E8(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FRigElementKey>                RigVMModel___If_False__Const;                      // 0x1F8(0x10)(Edit, EditConst, NonTransactional)
	struct FRigElementKey                        RigVMModel___ParentConstraint_Child__Const;        // 0x208(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransformFilter                      RigVMModel___ParentConstraint_Filter__Const;       // 0x214(0x9)(Edit, EditConst, NonTransactional, NoDestructor)
	uint8                                        Pad_35C5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FConstraintParent>             RigVMModel___ParentConstraint_Parents__Const;      // 0x220(0x10)(Edit, EditConst, NonTransactional)
	struct FRigUnit_ParentConstraint_AdvancedSettings RigVMModel___ParentConstraint_AdvancedSettings__Const; // 0x230(0x2)(Edit, EditConst, NonTransactional, NoDestructor)
	uint8                                        Pad_35C6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RigVMModel___If_1_True__Const;                     // 0x234(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___ParentConstraint_1_Child__Const;      // 0x238(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___ParentConstraint_1_1_Child__Const;    // 0x244(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FConstraintParent>             RigVMModel___ParentConstraint_1_1_Parents__Const;  // 0x250(0x10)(Edit, EditConst, NonTransactional)

	static class UClass* StaticClass();
	static class URigVMMemory_Literal_ALAP* GetDefaultObj();

};

// 0x468 (0x490 - 0x28)
// RigVMMemoryStorageGeneratorClass CR_AI_LookAtPlayer.RigVMMemory_Work
class URigVMMemory_Work_ALAP : public URigVMMemoryStorage
{
public:
	struct FControlRigExecuteContext             ExecuteContext_;                                   // 0x28(0x38)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___From_World_Global;                    // 0x60(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTranslation_CachedIndex;   // 0x78(0x10)(Edit, EditConst, NonTransactional)
	struct FRigElementKey                        RigVMModel___ArrayIterator_1_Element;              // 0x88(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35C9[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RigVMModel___SpringInterpQuaternionV2_1_Result;    // 0xA0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___Interpolate_Result;                   // 0xC0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___GetTransform_1_1_Transform;           // 0xE0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_1_1_CachedIndex;         // 0x140(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___Interpolate_A;                        // 0x150(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___MathQuaternionFromEuler_1_Result;     // 0x170(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___Scale_1_Result;                       // 0x190(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___Clamp_1_Result;                       // 0x1A8(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___MathQuaternionToEuler_1_1_Result;     // 0x1C0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35CB[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RigVMModel___MathQuaternionSwingTwist_1_Swing;     // 0x1E0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___AimBoneMath_1_Result;                 // 0x200(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_1_1_1_Transform; // 0x260(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_1_1_1_CachedIndex; // 0x2C0(0x10)(Edit, EditConst, NonTransactional)
	struct FRigUnit_AimItem_Target               RigVMModel___AimBoneMath_1_Primary__IO;            // 0x2D0(0x48)(Edit, EditConst, NonTransactional, NoDestructor)
	float                                        RigVMModel___AimBoneMath_1_Weight;                 // 0x318(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35CF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___AimBoneMath_1_PrimaryCachedSpace;     // 0x320(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___AimBoneMath_1_SecondaryCachedSpace;   // 0x330(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___MathQuaternionSwingTwist_1_Input;     // 0x340(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___MathQuaternionSwingTwist_1_Twist;     // 0x360(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___MathQuaternionToEuler_2_Result;       // 0x380(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___Clamp_1_Value__IO;                    // 0x398(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___ArrayIterator_1_Ratio;                // 0x3B0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Interpolate_T;                        // 0x3B4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___SpringInterpQuaternionV2_1_AngularVelocity; // 0x3B8(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FQuat>                         RigVMModel___SpringInterpQuaternionV2_1_SimulatedResult; // 0x3D0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FQuaternionSpringState>        RigVMModel___SpringInterpQuaternionV2_1_SpringState; // 0x3E0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___Set_Transform_1_CachedIndex;          // 0x3F0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FRigElementKey>                RigVMModel___If_Result;                            // 0x400(0x10)(Edit, EditConst, NonTransactional)
	uint8                                        RigVMModel___If_Condition : 1;                     // Mask: 0x1, PropSize: 0x10x410(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_261 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_35D3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RigVMModel___ArrayIterator_1_Index;                // 0x414(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___ArrayIterator_1_Count;                // 0x418(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___ArrayIterator_1_Continue : 1;         // Mask: 0x1, PropSize: 0x10x41C(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_262 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_35D4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RigVMModel___If_1_Result;                          // 0x420(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___If_1_Condition : 1;                   // Mask: 0x1, PropSize: 0x10x424(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_263 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_35D5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RigVMModel___If_1_False;                           // 0x428(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35D6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___ParentConstraint_ChildCache;          // 0x430(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<struct FCachedRigElement>>     RigVMModel___ParentConstraint_ParentCaches;        // 0x440(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___ParentConstraint_1_ChildCache;        // 0x450(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<struct FCachedRigElement>>     RigVMModel___ParentConstraint_1_ParentCaches;      // 0x460(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___ParentConstraint_1_1_ChildCache;      // 0x470(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<struct FCachedRigElement>>     RigVMModel___ParentConstraint_1_1_ParentCaches;    // 0x480(0x10)(Edit, EditConst, NonTransactional)

	static class UClass* StaticClass();
	static class URigVMMemory_Work_ALAP* GetDefaultObj();

};

}


