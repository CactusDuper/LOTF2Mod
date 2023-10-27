#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x560 - 0x560)
// ControlRigBlueprintGeneratedClass CR_S_CorruptedPilgrim.CR_S_CorruptedPilgrim_C
class UCR_S_CorruptedPilgrim_C : public UControlRig
{
public:

	static class UClass* StaticClass();
	static class UCR_S_CorruptedPilgrim_C* GetDefaultObj();

};

// 0x4D (0x75 - 0x28)
// RigVMMemoryStorageGeneratorClass CR_S_CorruptedPilgrim.RigVMMemory_Literal
class URigVMMemory_Literal_CP : public URigVMMemoryStorage
{
public:
	struct FRigElementKey                        RigVMModel___SetScale_Item__Const;                 // 0x28(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class EBoneGetterSetterMode             RigVMModel___SetScale_Space__Const;                // 0x34(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___SetScale_bInitial__Const : 1;         // Mask: 0x1, PropSize: 0x10x35(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_26D : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3639[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RigVMModel___SetScale_Scale__Const;                // 0x38(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Timeline_Speed__Const;                // 0x50(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___RandomFloat_Seed__Const;              // 0x54(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___RandomFloat_Minimum__Const;           // 0x58(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___RandomFloat_Maximum__Const;           // 0x5C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___RandomFloat_Duration__Const;          // 0x60(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathFloatMul_B__Const;                // 0x64(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathFloatClamp_Minimum__Const;        // 0x68(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathFloatClamp_Maximum__Const;        // 0x6C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___SetScale_Weight__Const;               // 0x70(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___SetScale_bPropagateToChildren__Const : 1; // Mask: 0x1, PropSize: 0x10x74(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URigVMMemory_Literal* GetDefaultObj();

};

// 0xD0 (0xF8 - 0x28)
// RigVMMemoryStorageGeneratorClass CR_S_CorruptedPilgrim.RigVMMemory_Work
class URigVMMemory_Work_CP : public URigVMMemoryStorage
{
public:
	struct FControlRigExecuteContext             ExecuteContext_;                                   // 0x28(0x38)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___MathFloatClamp_Result;                // 0x60(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathFloatMul_Result;                  // 0x64(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathFloatAbs_Result;                  // 0x68(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathFloatSin_Result;                  // 0x6C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathFloatAdd_Result;                  // 0x70(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Timeline_Time;                        // 0x74(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                RigVMModel___Timeline_AccumulatedValue;            // 0x78(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___RandomFloat_Result;                   // 0x88(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_363A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___RandomFloat_LastResult;               // 0x90(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___RandomFloat_LastSeed;                 // 0xA0(0x10)(Edit, EditConst, NonTransactional)
	TArray<int32>                                RigVMModel___RandomFloat_BaseSeed;                 // 0xB0(0x10)(Edit, EditConst, NonTransactional)
	TArray<float>                                RigVMModel___RandomFloat_TimeLeft;                 // 0xC0(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___SetScale_Scale__IO;                   // 0xD0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___SetScale_CachedIndex;                 // 0xE8(0x10)(Edit, EditConst, NonTransactional)

	static class UClass* StaticClass();
	static class URigVMMemory_Work_CP* GetDefaultObj();

};

}


