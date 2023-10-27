#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xB8 - 0xB0)
// BlueprintGeneratedClass AN_SetRotationRate.AN_SetRotationRate_C
class UAN_SetRotationRate_C : public UANS_HexSetRotationRate
{
public:
	double                                       TargetRotationRate;                                // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAN_SetRotationRate_C* GetDefaultObj();

	float GetRotationRate(float K2Node_FunctionResult_ReturnValue_ImplicitCast);
	class FString GetNotifyName(const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
};

}


