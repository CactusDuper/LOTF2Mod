#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x48 - 0x0)
// UserDefinedStruct FAttackDebugRange.FAttackDebugRange
struct FFAttackDebugRange
{
public:
	struct FVector                               StartLocation_6_89ECF0D642FEB123AE4162861049B6A6;  // 0x0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               FinalLocation_7_44C0B50F4538D9B0D899C1AFA12C2328;  // 0x18(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AttackID_12_C5183DCD48069FC3E81771B543158AAC;      // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bDataFinalized__16_5315F65B4675A2816769B298D91927EF; // 0x34(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C9B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFAttackDebugReachData>        AttackReachArray_25_29B8BC4A41FDF3A3370786A4C3040883; // 0x38(0x10)(Edit, BlueprintVisible)
};

}


