#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ITM_PLA_Seedpod.BP_ITM_PLA_Seedpod_C
// (Actor)

class UClass* ABP_ITM_PLA_Seedpod_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ITM_PLA_Seedpod_C");

	return Clss;
}


// BP_ITM_PLA_Seedpod_C BP_ITM_PLA_Seedpod.Default__BP_ITM_PLA_Seedpod_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ITM_PLA_Seedpod_C* ABP_ITM_PLA_Seedpod_C::GetDefaultObj()
{
	static class ABP_ITM_PLA_Seedpod_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ITM_PLA_Seedpod_C*>(ABP_ITM_PLA_Seedpod_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ITM_PLA_Seedpod.BP_ITM_PLA_Seedpod_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ITM_PLA_Seedpod_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ITM_PLA_Seedpod_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ITM_PLA_Seedpod.BP_ITM_PLA_Seedpod_C.ExecuteUbergraph_BP_ITM_PLA_Seedpod
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ITM_PLA_Seedpod_C::ExecuteUbergraph_BP_ITM_PLA_Seedpod(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ITM_PLA_Seedpod_C", "ExecuteUbergraph_BP_ITM_PLA_Seedpod");

	Params::ABP_ITM_PLA_Seedpod_C_ExecuteUbergraph_BP_ITM_PLA_Seedpod_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


