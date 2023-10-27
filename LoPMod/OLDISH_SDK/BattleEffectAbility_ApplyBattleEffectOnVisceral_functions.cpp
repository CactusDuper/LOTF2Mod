#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffectAbility_ApplyBattleEffectOnVisceral.BattleEffectAbility_ApplyBattleEffectOnVisceral_C
// (None)

class UClass* UBattleEffectAbility_ApplyBattleEffectOnVisceral_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffectAbility_ApplyBattleEffectOnVisceral_C");

	return Clss;
}


// BattleEffectAbility_ApplyBattleEffectOnVisceral_C BattleEffectAbility_ApplyBattleEffectOnVisceral.Default__BattleEffectAbility_ApplyBattleEffectOnVisceral_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffectAbility_ApplyBattleEffectOnVisceral_C* UBattleEffectAbility_ApplyBattleEffectOnVisceral_C::GetDefaultObj()
{
	static class UBattleEffectAbility_ApplyBattleEffectOnVisceral_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffectAbility_ApplyBattleEffectOnVisceral_C*>(UBattleEffectAbility_ApplyBattleEffectOnVisceral_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleEffectAbility_ApplyBattleEffectOnVisceral.BattleEffectAbility_ApplyBattleEffectOnVisceral_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattleEffectAbility_ApplyBattleEffectOnVisceral_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattleEffectAbility_ApplyBattleEffectOnVisceral_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEffectAbility_ApplyBattleEffectOnVisceral.BattleEffectAbility_ApplyBattleEffectOnVisceral_C.ExecuteUbergraph_BattleEffectAbility_ApplyBattleEffectOnVisceral
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetBattleEffectStringParam_outValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBattleEffectStringParam_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_ApplyBattleEffectWithCurrentAbilityParamsToSelf_ReturnValue(NoDestructor, HasGetValueTypeHash)

void UBattleEffectAbility_ApplyBattleEffectOnVisceral_C::ExecuteUbergraph_BattleEffectAbility_ApplyBattleEffectOnVisceral(int32 EntryPoint, class FName CallFunc_GetBattleEffectStringParam_outValue, bool CallFunc_GetBattleEffectStringParam_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_ApplyBattleEffectWithCurrentAbilityParamsToSelf_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattleEffectAbility_ApplyBattleEffectOnVisceral_C", "ExecuteUbergraph_BattleEffectAbility_ApplyBattleEffectOnVisceral");

	Params::UBattleEffectAbility_ApplyBattleEffectOnVisceral_C_ExecuteUbergraph_BattleEffectAbility_ApplyBattleEffectOnVisceral_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetBattleEffectStringParam_outValue = CallFunc_GetBattleEffectStringParam_outValue;
	Parms.CallFunc_GetBattleEffectStringParam_ReturnValue = CallFunc_GetBattleEffectStringParam_ReturnValue;
	Parms.CallFunc_ApplyBattleEffectWithCurrentAbilityParamsToSelf_ReturnValue = CallFunc_ApplyBattleEffectWithCurrentAbilityParamsToSelf_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


