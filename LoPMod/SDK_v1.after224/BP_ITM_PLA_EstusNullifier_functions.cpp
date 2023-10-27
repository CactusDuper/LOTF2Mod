#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ITM_PLA_EstusNullifier.BP_ITM_PLA_EstusNullifier_C
// (Actor)

class UClass* ABP_ITM_PLA_EstusNullifier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ITM_PLA_EstusNullifier_C");

	return Clss;
}


// BP_ITM_PLA_EstusNullifier_C BP_ITM_PLA_EstusNullifier.Default__BP_ITM_PLA_EstusNullifier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ITM_PLA_EstusNullifier_C* ABP_ITM_PLA_EstusNullifier_C::GetDefaultObj()
{
	static class ABP_ITM_PLA_EstusNullifier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ITM_PLA_EstusNullifier_C*>(ABP_ITM_PLA_EstusNullifier_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ITM_PLA_EstusNullifier.BP_ITM_PLA_EstusNullifier_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ITM_PLA_EstusNullifier_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ITM_PLA_EstusNullifier_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ITM_PLA_EstusNullifier.BP_ITM_PLA_EstusNullifier_C.ExecuteUbergraph_BP_ITM_PLA_EstusNullifier
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ITM_PLA_EstusNullifier_C::ExecuteUbergraph_BP_ITM_PLA_EstusNullifier(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ITM_PLA_EstusNullifier_C", "ExecuteUbergraph_BP_ITM_PLA_EstusNullifier");

	Params::ABP_ITM_PLA_EstusNullifier_C_ExecuteUbergraph_BP_ITM_PLA_EstusNullifier_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


