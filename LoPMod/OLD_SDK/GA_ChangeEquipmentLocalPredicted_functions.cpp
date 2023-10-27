#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_ChangeEquipmentLocalPredicted.GA_ChangeEquipmentLocalPredicted_C
// (None)

class UClass* UGA_ChangeEquipmentLocalPredicted_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_ChangeEquipmentLocalPredicted_C");

	return Clss;
}


// GA_ChangeEquipmentLocalPredicted_C GA_ChangeEquipmentLocalPredicted.Default__GA_ChangeEquipmentLocalPredicted_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_ChangeEquipmentLocalPredicted_C* UGA_ChangeEquipmentLocalPredicted_C::GetDefaultObj()
{
	static class UGA_ChangeEquipmentLocalPredicted_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_ChangeEquipmentLocalPredicted_C*>(UGA_ChangeEquipmentLocalPredicted_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_ChangeEquipmentLocalPredicted.GA_ChangeEquipmentLocalPredicted_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ChangeEquipmentLocalPredicted_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ChangeEquipmentLocalPredicted_C", "K2_OnEndAbility");

	Params::UGA_ChangeEquipmentLocalPredicted_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ChangeEquipmentLocalPredicted.GA_ChangeEquipmentLocalPredicted_C.ExecuteUbergraph_GA_ChangeEquipmentLocalPredicted
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ChangeEquipmentLocalPredicted_C::ExecuteUbergraph_GA_ChangeEquipmentLocalPredicted(int32 EntryPoint, bool K2Node_Event_bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ChangeEquipmentLocalPredicted_C", "ExecuteUbergraph_GA_ChangeEquipmentLocalPredicted");

	Params::UGA_ChangeEquipmentLocalPredicted_C_ExecuteUbergraph_GA_ChangeEquipmentLocalPredicted_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}

}


