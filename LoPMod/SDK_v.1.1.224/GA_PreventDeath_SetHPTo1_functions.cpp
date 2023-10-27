#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_PreventDeath_SetHPTo1.GA_PreventDeath_SetHPTo1_C
// (None)

class UClass* UGA_PreventDeath_SetHPTo1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_PreventDeath_SetHPTo1_C");

	return Clss;
}


// GA_PreventDeath_SetHPTo1_C GA_PreventDeath_SetHPTo1.Default__GA_PreventDeath_SetHPTo1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_PreventDeath_SetHPTo1_C* UGA_PreventDeath_SetHPTo1_C::GetDefaultObj()
{
	static class UGA_PreventDeath_SetHPTo1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_PreventDeath_SetHPTo1_C*>(UGA_PreventDeath_SetHPTo1_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_PreventDeath_SetHPTo1.GA_PreventDeath_SetHPTo1_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_PreventDeath_SetHPTo1_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_PreventDeath_SetHPTo1_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_PreventDeath_SetHPTo1.GA_PreventDeath_SetHPTo1_C.ExecuteUbergraph_GA_PreventDeath_SetHPTo1
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue               (NoDestructor, HasGetValueTypeHash)

void UGA_PreventDeath_SetHPTo1_C::ExecuteUbergraph_GA_PreventDeath_SetHPTo1(int32 EntryPoint, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_PreventDeath_SetHPTo1_C", "ExecuteUbergraph_GA_PreventDeath_SetHPTo1");

	Params::UGA_PreventDeath_SetHPTo1_C_ExecuteUbergraph_GA_PreventDeath_SetHPTo1_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


