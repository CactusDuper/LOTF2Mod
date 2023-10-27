#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ANS_MultiplyStaminaRegenRate.ANS_MultiplyStaminaRegenRate_C
// (None)

class UClass* UANS_MultiplyStaminaRegenRate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANS_MultiplyStaminaRegenRate_C");

	return Clss;
}


// ANS_MultiplyStaminaRegenRate_C ANS_MultiplyStaminaRegenRate.Default__ANS_MultiplyStaminaRegenRate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANS_MultiplyStaminaRegenRate_C* UANS_MultiplyStaminaRegenRate_C::GetDefaultObj()
{
	static class UANS_MultiplyStaminaRegenRate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANS_MultiplyStaminaRegenRate_C*>(UANS_MultiplyStaminaRegenRate_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANS_MultiplyStaminaRegenRate.ANS_MultiplyStaminaRegenRate_C.GetNotifyName
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

class FString UANS_MultiplyStaminaRegenRate_C::GetNotifyName(const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANS_MultiplyStaminaRegenRate_C", "GetNotifyName");

	Params::UANS_MultiplyStaminaRegenRate_C_GetNotifyName_Params Parms{};

	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ANS_MultiplyStaminaRegenRate.ANS_MultiplyStaminaRegenRate_C.BP_ModifySpecHandle
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayEffectSpecHandle   SpecHandle                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayEffectSpecHandle   CallFunc_AssignTagSetByCallerMagnitude_ReturnValue               (None)
// float                              CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANS_MultiplyStaminaRegenRate_C::BP_ModifySpecHandle(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANS_MultiplyStaminaRegenRate_C", "BP_ModifySpecHandle");

	Params::UANS_MultiplyStaminaRegenRate_C_BP_ModifySpecHandle_Params Parms{};

	Parms.SpecHandle = SpecHandle;
	Parms.CallFunc_AssignTagSetByCallerMagnitude_ReturnValue = CallFunc_AssignTagSetByCallerMagnitude_ReturnValue;
	Parms.CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast = CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


