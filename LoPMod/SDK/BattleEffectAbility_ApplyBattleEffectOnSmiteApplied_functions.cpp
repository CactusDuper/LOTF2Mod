#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffectAbility_ApplyBattleEffectOnSmiteApplied.BattleEffectAbility_ApplyBattleEffectOnSmiteApplied_C
// (None)

class UClass* UBattleEffectAbility_ApplyBattleEffectOnSmiteApplied_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffectAbility_ApplyBattleEffectOnSmiteApplied_C");

	return Clss;
}


// BattleEffectAbility_ApplyBattleEffectOnSmiteApplied_C BattleEffectAbility_ApplyBattleEffectOnSmiteApplied.Default__BattleEffectAbility_ApplyBattleEffectOnSmiteApplied_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffectAbility_ApplyBattleEffectOnSmiteApplied_C* UBattleEffectAbility_ApplyBattleEffectOnSmiteApplied_C::GetDefaultObj()
{
	static class UBattleEffectAbility_ApplyBattleEffectOnSmiteApplied_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffectAbility_ApplyBattleEffectOnSmiteApplied_C*>(UBattleEffectAbility_ApplyBattleEffectOnSmiteApplied_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleEffectAbility_ApplyBattleEffectOnSmiteApplied.BattleEffectAbility_ApplyBattleEffectOnSmiteApplied_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattleEffectAbility_ApplyBattleEffectOnSmiteApplied_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattleEffectAbility_ApplyBattleEffectOnSmiteApplied_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEffectAbility_ApplyBattleEffectOnSmiteApplied.BattleEffectAbility_ApplyBattleEffectOnSmiteApplied_C.ExecuteUbergraph_BattleEffectAbility_ApplyBattleEffectOnSmiteApplied
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetBattleEffectStringParam_outValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBattleEffectStringParam_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_ApplyBattleEffectWithCurrentAbilityParamsToSelf_ReturnValue(NoDestructor, HasGetValueTypeHash)

void UBattleEffectAbility_ApplyBattleEffectOnSmiteApplied_C::ExecuteUbergraph_BattleEffectAbility_ApplyBattleEffectOnSmiteApplied(int32 EntryPoint, class FName CallFunc_GetBattleEffectStringParam_outValue, bool CallFunc_GetBattleEffectStringParam_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_ApplyBattleEffectWithCurrentAbilityParamsToSelf_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattleEffectAbility_ApplyBattleEffectOnSmiteApplied_C", "ExecuteUbergraph_BattleEffectAbility_ApplyBattleEffectOnSmiteApplied");

	Params::UBattleEffectAbility_ApplyBattleEffectOnSmiteApplied_C_ExecuteUbergraph_BattleEffectAbility_ApplyBattleEffectOnSmiteApplied_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetBattleEffectStringParam_outValue = CallFunc_GetBattleEffectStringParam_outValue;
	Parms.CallFunc_GetBattleEffectStringParam_ReturnValue = CallFunc_GetBattleEffectStringParam_ReturnValue;
	Parms.CallFunc_ApplyBattleEffectWithCurrentAbilityParamsToSelf_ReturnValue = CallFunc_ApplyBattleEffectWithCurrentAbilityParamsToSelf_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


