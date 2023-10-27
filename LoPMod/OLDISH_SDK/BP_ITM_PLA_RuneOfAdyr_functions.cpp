#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ITM_PLA_RuneOfAdyr.BP_ITM_PLA_RuneOfAdyr_C
// (Actor)

class UClass* ABP_ITM_PLA_RuneOfAdyr_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ITM_PLA_RuneOfAdyr_C");

	return Clss;
}


// BP_ITM_PLA_RuneOfAdyr_C BP_ITM_PLA_RuneOfAdyr.Default__BP_ITM_PLA_RuneOfAdyr_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ITM_PLA_RuneOfAdyr_C* ABP_ITM_PLA_RuneOfAdyr_C::GetDefaultObj()
{
	static class ABP_ITM_PLA_RuneOfAdyr_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ITM_PLA_RuneOfAdyr_C*>(ABP_ITM_PLA_RuneOfAdyr_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ITM_PLA_RuneOfAdyr.BP_ITM_PLA_RuneOfAdyr_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ITM_PLA_RuneOfAdyr_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ITM_PLA_RuneOfAdyr_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ITM_PLA_RuneOfAdyr.BP_ITM_PLA_RuneOfAdyr_C.ExecuteUbergraph_BP_ITM_PLA_RuneOfAdyr
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ITM_PLA_RuneOfAdyr_C::ExecuteUbergraph_BP_ITM_PLA_RuneOfAdyr(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ITM_PLA_RuneOfAdyr_C", "ExecuteUbergraph_BP_ITM_PLA_RuneOfAdyr");

	Params::ABP_ITM_PLA_RuneOfAdyr_C_ExecuteUbergraph_BP_ITM_PLA_RuneOfAdyr_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


