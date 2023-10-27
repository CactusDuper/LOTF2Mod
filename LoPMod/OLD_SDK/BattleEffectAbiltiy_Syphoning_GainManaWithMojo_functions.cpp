#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffectAbiltiy_Syphoning_GainManaWithMojo.BattleEffectAbiltiy_Syphoning_GainManaWithMojo_C
// (None)

class UClass* UBattleEffectAbiltiy_Syphoning_GainManaWithMojo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffectAbiltiy_Syphoning_GainManaWithMojo_C");

	return Clss;
}


// BattleEffectAbiltiy_Syphoning_GainManaWithMojo_C BattleEffectAbiltiy_Syphoning_GainManaWithMojo.Default__BattleEffectAbiltiy_Syphoning_GainManaWithMojo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffectAbiltiy_Syphoning_GainManaWithMojo_C* UBattleEffectAbiltiy_Syphoning_GainManaWithMojo_C::GetDefaultObj()
{
	static class UBattleEffectAbiltiy_Syphoning_GainManaWithMojo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffectAbiltiy_Syphoning_GainManaWithMojo_C*>(UBattleEffectAbiltiy_Syphoning_GainManaWithMojo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleEffectAbiltiy_Syphoning_GainManaWithMojo.BattleEffectAbiltiy_Syphoning_GainManaWithMojo_C.EventReceived_8988C7854FFBBB099C23A78E1C3E75A7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          Payload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UBattleEffectAbiltiy_Syphoning_GainManaWithMojo_C::EventReceived_8988C7854FFBBB099C23A78E1C3E75A7(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattleEffectAbiltiy_Syphoning_GainManaWithMojo_C", "EventReceived_8988C7854FFBBB099C23A78E1C3E75A7");

	Params::UBattleEffectAbiltiy_Syphoning_GainManaWithMojo_C_EventReceived_8988C7854FFBBB099C23A78E1C3E75A7_Params Parms{};

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEffectAbiltiy_Syphoning_GainManaWithMojo.BattleEffectAbiltiy_Syphoning_GainManaWithMojo_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattleEffectAbiltiy_Syphoning_GainManaWithMojo_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattleEffectAbiltiy_Syphoning_GainManaWithMojo_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEffectAbiltiy_Syphoning_GainManaWithMojo.BattleEffectAbiltiy_Syphoning_GainManaWithMojo_C.ExecuteUbergraph_BattleEffectAbiltiy_Syphoning_GainManaWithMojo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpecHandle   CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue              (None)
// struct FGameplayEventData          K2Node_CustomEvent_Payload                                       (None)
// struct FGameplayEventData          Temp_struct_Variable                                             (None)
// class UAbilityTask_WaitGameplayEvent*CallFunc_WaitGameplayEvent_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USyphoningExtractionTickData*K2Node_DynamicCast_AsSyphoning_Extraction_Tick_Data              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayAttributeGameplayAttribute_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpecHandle   CallFunc_AssignTagSetByCallerMagnitude_ReturnValue               (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue           (NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleEffectAbiltiy_Syphoning_GainManaWithMojo_C::ExecuteUbergraph_BattleEffectAbiltiy_Syphoning_GainManaWithMojo(int32 EntryPoint, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, const struct FGameplayEventData& K2Node_CustomEvent_Payload, const struct FGameplayEventData& Temp_struct_Variable, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class USyphoningExtractionTickData* K2Node_DynamicCast_AsSyphoning_Extraction_Tick_Data, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_GameplayAttributeGameplayAttribute_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattleEffectAbiltiy_Syphoning_GainManaWithMojo_C", "ExecuteUbergraph_BattleEffectAbiltiy_Syphoning_GainManaWithMojo");

	Params::UBattleEffectAbiltiy_Syphoning_GainManaWithMojo_C_ExecuteUbergraph_BattleEffectAbiltiy_Syphoning_GainManaWithMojo_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue = CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue;
	Parms.K2Node_CustomEvent_Payload = K2Node_CustomEvent_Payload;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_WaitGameplayEvent_ReturnValue = CallFunc_WaitGameplayEvent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsSyphoning_Extraction_Tick_Data = K2Node_DynamicCast_AsSyphoning_Extraction_Tick_Data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_GameplayAttributeGameplayAttribute_ReturnValue = CallFunc_EqualEqual_GameplayAttributeGameplayAttribute_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_AssignTagSetByCallerMagnitude_ReturnValue = CallFunc_AssignTagSetByCallerMagnitude_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue = CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast = CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


