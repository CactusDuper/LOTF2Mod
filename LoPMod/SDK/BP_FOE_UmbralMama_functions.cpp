#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FOE_UmbralMama.BP_FOE_UmbralMama_C
// (Actor, Pawn)

class UClass* ABP_FOE_UmbralMama_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FOE_UmbralMama_C");

	return Clss;
}


// BP_FOE_UmbralMama_C BP_FOE_UmbralMama.Default__BP_FOE_UmbralMama_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FOE_UmbralMama_C* ABP_FOE_UmbralMama_C::GetDefaultObj()
{
	static class ABP_FOE_UmbralMama_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FOE_UmbralMama_C*>(ABP_FOE_UmbralMama_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_FOE_UmbralMama.BP_FOE_UmbralMama_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_FOE_UmbralMama_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FOE_UmbralMama_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FOE_UmbralMama.BP_FOE_UmbralMama_C.ExecuteUbergraph_BP_FOE_UmbralMama
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FOE_UmbralMama_C::ExecuteUbergraph_BP_FOE_UmbralMama(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FOE_UmbralMama_C", "ExecuteUbergraph_BP_FOE_UmbralMama");

	Params::ABP_FOE_UmbralMama_C_ExecuteUbergraph_BP_FOE_UmbralMama_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


