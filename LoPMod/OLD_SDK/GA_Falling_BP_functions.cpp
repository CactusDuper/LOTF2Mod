#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Falling_BP.GA_Falling_BP_C
// (None)

class UClass* UGA_Falling_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Falling_BP_C");

	return Clss;
}


// GA_Falling_BP_C GA_Falling_BP.Default__GA_Falling_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Falling_BP_C* UGA_Falling_BP_C::GetDefaultObj()
{
	static class UGA_Falling_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Falling_BP_C*>(UGA_Falling_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Falling_BP.GA_Falling_BP_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Falling_BP_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Falling_BP_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Falling_BP.GA_Falling_BP_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Falling_BP_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Falling_BP_C", "K2_OnEndAbility");

	Params::UGA_Falling_BP_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Falling_BP.GA_Falling_BP_C.ExecuteUbergraph_GA_Falling_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Falling_BP_C::ExecuteUbergraph_GA_Falling_BP(int32 EntryPoint, bool K2Node_Event_bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Falling_BP_C", "ExecuteUbergraph_GA_Falling_BP");

	Params::UGA_Falling_BP_C_ExecuteUbergraph_GA_Falling_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}

}


