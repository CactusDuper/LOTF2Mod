#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xB0 - 0xA8)
// BlueprintGeneratedClass ANS_MultiplyStaminaRegenRate.ANS_MultiplyStaminaRegenRate_C
class UANS_MultiplyStaminaRegenRate_C : public UAnimNotifyState_GameplayEffect
{
public:
	double                                       RegenRateMultiplier;                               // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UANS_MultiplyStaminaRegenRate_C* GetDefaultObj();

	class FString GetNotifyName(const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void BP_ModifySpecHandle(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast);
};

}


