#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffectAbility_CombatModifierImmuneToHealthDamageAfterResurrecting.BattleEffectAbility_CombatModifierImmuneToHealthDamageAfterResurrecting_C
// (None)

class UClass* UBattleEffectAbility_CombatModifierImmuneToHealthDamageAfterResurrecting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffectAbility_CombatModifierImmuneToHealthDamageAfterResurrecting_C");

	return Clss;
}


// BattleEffectAbility_CombatModifierImmuneToHealthDamageAfterResurrecting_C BattleEffectAbility_CombatModifierImmuneToHealthDamageAfterResurrecting.Default__BattleEffectAbility_CombatModifierImmuneToHealthDamageAfterResurrecting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffectAbility_CombatModifierImmuneToHealthDamageAfterResurrecting_C* UBattleEffectAbility_CombatModifierImmuneToHealthDamageAfterResurrecting_C::GetDefaultObj()
{
	static class UBattleEffectAbility_CombatModifierImmuneToHealthDamageAfterResurrecting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffectAbility_CombatModifierImmuneToHealthDamageAfterResurrecting_C*>(UBattleEffectAbility_CombatModifierImmuneToHealthDamageAfterResurrecting_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleEffectAbility_CombatModifierImmuneToHealthDamageAfterResurrecting.BattleEffectAbility_CombatModifierImmuneToHealthDamageAfterResurrecting_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattleEffectAbility_CombatModifierImmuneToHealthDamageAfterResurrecting_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattleEffectAbility_CombatModifierImmuneToHealthDamageAfterResurrecting_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEffectAbility_CombatModifierImmuneToHealthDamageAfterResurrecting.BattleEffectAbility_CombatModifierImmuneToHealthDamageAfterResurrecting_C.ExecuteUbergraph_BattleEffectAbility_CombatModifierImmuneToHealthDamageAfterResurrecting
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetBattleEffectStringParam_outValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBattleEffectStringParam_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_ApplyBattleEffectWithCurrentAbilityParamsToSelf_ReturnValue(NoDestructor, HasGetValueTypeHash)

void UBattleEffectAbility_CombatModifierImmuneToHealthDamageAfterResurrecting_C::ExecuteUbergraph_BattleEffectAbility_CombatModifierImmuneToHealthDamageAfterResurrecting(int32 EntryPoint, class FName CallFunc_GetBattleEffectStringParam_outValue, bool CallFunc_GetBattleEffectStringParam_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_ApplyBattleEffectWithCurrentAbilityParamsToSelf_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattleEffectAbility_CombatModifierImmuneToHealthDamageAfterResurrecting_C", "ExecuteUbergraph_BattleEffectAbility_CombatModifierImmuneToHealthDamageAfterResurrecting");

	Params::UBattleEffectAbility_CombatModifierImmuneToHealthDamageAfterResurrecting_C_ExecuteUbergraph_BattleEffectAbility_CombatModifierImmuneToHealthDamageAfterResurrecting_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetBattleEffectStringParam_outValue = CallFunc_GetBattleEffectStringParam_outValue;
	Parms.CallFunc_GetBattleEffectStringParam_ReturnValue = CallFunc_GetBattleEffectStringParam_ReturnValue;
	Parms.CallFunc_ApplyBattleEffectWithCurrentAbilityParamsToSelf_ReturnValue = CallFunc_ApplyBattleEffectWithCurrentAbilityParamsToSelf_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


