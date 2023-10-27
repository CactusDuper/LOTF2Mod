#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Dying_Player.GA_Dying_Player_C
// (None)

class UClass* UGA_Dying_Player_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Dying_Player_C");

	return Clss;
}


// GA_Dying_Player_C GA_Dying_Player.Default__GA_Dying_Player_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Dying_Player_C* UGA_Dying_Player_C::GetDefaultObj()
{
	static class UGA_Dying_Player_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Dying_Player_C*>(UGA_Dying_Player_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Dying_Player.GA_Dying_Player_C.StartRagdollState
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Dying_Player_C::StartRagdollState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Dying_Player_C", "StartRagdollState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Dying_Player.GA_Dying_Player_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Dying_Player_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Dying_Player_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_Dying_Player_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Dying_Player.GA_Dying_Player_C.DyingWithoutAnimMontage
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Dying_Player_C::DyingWithoutAnimMontage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Dying_Player_C", "DyingWithoutAnimMontage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Dying_Player.GA_Dying_Player_C.ExecuteUbergraph_GA_Dying_Player
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Dying_Player_C::ExecuteUbergraph_GA_Dying_Player(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, bool CallFunc_HasTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Dying_Player_C", "ExecuteUbergraph_GA_Dying_Player");

	Params::UGA_Dying_Player_C_ExecuteUbergraph_GA_Dying_Player_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


