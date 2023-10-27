#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_AnathemaHitReactDamageReceived.GA_AnathemaHitReactDamageReceived_C
// (None)

class UClass* UGA_AnathemaHitReactDamageReceived_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_AnathemaHitReactDamageReceived_C");

	return Clss;
}


// GA_AnathemaHitReactDamageReceived_C GA_AnathemaHitReactDamageReceived.Default__GA_AnathemaHitReactDamageReceived_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_AnathemaHitReactDamageReceived_C* UGA_AnathemaHitReactDamageReceived_C::GetDefaultObj()
{
	static class UGA_AnathemaHitReactDamageReceived_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_AnathemaHitReactDamageReceived_C*>(UGA_AnathemaHitReactDamageReceived_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_AnathemaHitReactDamageReceived.GA_AnathemaHitReactDamageReceived_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_AnathemaHitReactDamageReceived_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_AnathemaHitReactDamageReceived_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_AnathemaHitReactDamageReceived.GA_AnathemaHitReactDamageReceived_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_AnathemaHitReactDamageReceived_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_AnathemaHitReactDamageReceived_C", "K2_OnEndAbility");

	Params::UGA_AnathemaHitReactDamageReceived_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_AnathemaHitReactDamageReceived.GA_AnathemaHitReactDamageReceived_C.ExecuteUbergraph_GA_AnathemaHitReactDamageReceived
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_AnathemaHitReactDamageReceived_C::ExecuteUbergraph_GA_AnathemaHitReactDamageReceived(int32 EntryPoint, bool K2Node_Event_bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_AnathemaHitReactDamageReceived_C", "ExecuteUbergraph_GA_AnathemaHitReactDamageReceived");

	Params::UGA_AnathemaHitReactDamageReceived_C_ExecuteUbergraph_GA_AnathemaHitReactDamageReceived_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}

}


