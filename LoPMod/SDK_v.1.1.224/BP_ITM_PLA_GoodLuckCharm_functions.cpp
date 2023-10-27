#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ITM_PLA_GoodLuckCharm.BP_ITM_PLA_GoodLuckCharm_C
// (Actor)

class UClass* ABP_ITM_PLA_GoodLuckCharm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ITM_PLA_GoodLuckCharm_C");

	return Clss;
}


// BP_ITM_PLA_GoodLuckCharm_C BP_ITM_PLA_GoodLuckCharm.Default__BP_ITM_PLA_GoodLuckCharm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ITM_PLA_GoodLuckCharm_C* ABP_ITM_PLA_GoodLuckCharm_C::GetDefaultObj()
{
	static class ABP_ITM_PLA_GoodLuckCharm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ITM_PLA_GoodLuckCharm_C*>(ABP_ITM_PLA_GoodLuckCharm_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ITM_PLA_GoodLuckCharm.BP_ITM_PLA_GoodLuckCharm_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ITM_PLA_GoodLuckCharm_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ITM_PLA_GoodLuckCharm_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ITM_PLA_GoodLuckCharm.BP_ITM_PLA_GoodLuckCharm_C.ExecuteUbergraph_BP_ITM_PLA_GoodLuckCharm
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ITM_PLA_GoodLuckCharm_C::ExecuteUbergraph_BP_ITM_PLA_GoodLuckCharm(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ITM_PLA_GoodLuckCharm_C", "ExecuteUbergraph_BP_ITM_PLA_GoodLuckCharm");

	Params::ABP_ITM_PLA_GoodLuckCharm_C_ExecuteUbergraph_BP_ITM_PLA_GoodLuckCharm_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


