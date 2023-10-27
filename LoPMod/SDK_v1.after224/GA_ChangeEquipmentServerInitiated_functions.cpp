#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_ChangeEquipmentServerInitiated.GA_ChangeEquipmentServerInitiated_C
// (None)

class UClass* UGA_ChangeEquipmentServerInitiated_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_ChangeEquipmentServerInitiated_C");

	return Clss;
}


// GA_ChangeEquipmentServerInitiated_C GA_ChangeEquipmentServerInitiated.Default__GA_ChangeEquipmentServerInitiated_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_ChangeEquipmentServerInitiated_C* UGA_ChangeEquipmentServerInitiated_C::GetDefaultObj()
{
	static class UGA_ChangeEquipmentServerInitiated_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_ChangeEquipmentServerInitiated_C*>(UGA_ChangeEquipmentServerInitiated_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_ChangeEquipmentServerInitiated.GA_ChangeEquipmentServerInitiated_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ChangeEquipmentServerInitiated_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ChangeEquipmentServerInitiated_C", "K2_OnEndAbility");

	Params::UGA_ChangeEquipmentServerInitiated_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ChangeEquipmentServerInitiated.GA_ChangeEquipmentServerInitiated_C.ExecuteUbergraph_GA_ChangeEquipmentServerInitiated
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ChangeEquipmentServerInitiated_C::ExecuteUbergraph_GA_ChangeEquipmentServerInitiated(int32 EntryPoint, bool K2Node_Event_bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ChangeEquipmentServerInitiated_C", "ExecuteUbergraph_GA_ChangeEquipmentServerInitiated");

	Params::UGA_ChangeEquipmentServerInitiated_C_ExecuteUbergraph_GA_ChangeEquipmentServerInitiated_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}

}


