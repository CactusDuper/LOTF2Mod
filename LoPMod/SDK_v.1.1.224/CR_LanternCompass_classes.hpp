#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x138 (0x160 - 0x28)
// RigVMMemoryStorageGeneratorClass CR_LanternCompass.RigVMMemory_Work
class URigVMMemory_Work_LC : public URigVMMemoryStorage
{
public:
	struct FControlRigExecuteContext             ExecuteContext_;                                   // 0x28(0x38)(Edit, EditConst, NonTransactional)
	TArray<struct FRigElementKey>                RigVMModel___CollectionChainArray_Items;           // 0x60(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___VerletIntegrateVector_Position;       // 0x70(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___ToRigSpace_Location_Global;           // 0x88(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___VerletIntegrateVector_Velocity;       // 0xA0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___VerletIntegrateVector_Acceleration;   // 0xB8(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCRSimPoint>                   RigVMModel___VerletIntegrateVector_Point;          // 0xD0(0x10)(Edit, EditConst, NonTransactional)
	TArray<uint8>                                RigVMModel___VerletIntegrateVector_bInitialized;   // 0xE0(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___CCDIKItemArray_EffectorTransform__IO; // 0xF0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FRigUnit_CCDIK_WorkData>       RigVMModel___CCDIKItemArray_WorkData;              // 0x150(0x10)(Edit, EditConst, NonTransactional)

	static class UClass* StaticClass();
	static class URigVMMemory_Work_LC* GetDefaultObj();

};

// 0xD0 (0xF8 - 0x28)
// RigVMMemoryStorageGeneratorClass CR_LanternCompass.RigVMMemory_Literal
class URigVMMemory_Literal_LC : public URigVMMemoryStorage
{
public:
	struct FRigElementKey                        RigVMModel___CollectionChainArray_FirstItem__Const; // 0x28(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___CollectionChainArray_LastItem__Const; // 0x34(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___CollectionChainArray_Reverse__Const : 1; // Mask: 0x1, PropSize: 0x10x40(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_281 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3E93[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___CCDIKItemArray_EffectorTransform__Const; // 0x50(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___VerletIntegrateVector_Strength__Const; // 0xB0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___VerletIntegrateVector_Damp__Const;    // 0xB4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___VerletIntegrateVector_Blend__Const;   // 0xB8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E94[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RigVMModel___VerletIntegrateVector_Force__Const;   // 0xC0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___CCDIKItemArray_Precision__Const;      // 0xD8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___CCDIKItemArray_MaxIterations__Const;  // 0xDC(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___CCDIKItemArray_BaseRotationLimit__Const; // 0xE0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E95[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigUnit_CCDIK_RotationLimitPerItem> RigVMModel___CCDIKItemArray_RotationLimits__Const; // 0xE8(0x10)(Edit, EditConst, NonTransactional)

	static class UClass* StaticClass();
	static class URigVMMemory_Literal_LC* GetDefaultObj();

};

// 0x18 (0x578 - 0x560)
// ControlRigBlueprintGeneratedClass CR_LanternCompass.CR_LanternCompass_C
class UCR_LanternCompass_C : public UControlRig
{
public:
	struct FVector                               EffectorLocation;                                  // 0x560(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCR_LanternCompass_C* GetDefaultObj();

};

}

