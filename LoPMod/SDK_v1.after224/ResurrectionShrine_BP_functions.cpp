#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ResurrectionShrine_BP.ResurrectionShrine_BP_C
// (Actor)

class UClass* AResurrectionShrine_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ResurrectionShrine_BP_C");

	return Clss;
}


// ResurrectionShrine_BP_C ResurrectionShrine_BP.Default__ResurrectionShrine_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AResurrectionShrine_BP_C* AResurrectionShrine_BP_C::GetDefaultObj()
{
	static class AResurrectionShrine_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AResurrectionShrine_BP_C*>(AResurrectionShrine_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ResurrectionShrine_BP.ResurrectionShrine_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AResurrectionShrine_BP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResurrectionShrine_BP_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ResurrectionShrine_BP.ResurrectionShrine_BP_C.OnDispose
// (Event, Protected, BlueprintEvent)
// Parameters:

void AResurrectionShrine_BP_C::OnDispose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResurrectionShrine_BP_C", "OnDispose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ResurrectionShrine_BP.ResurrectionShrine_BP_C.ExecuteUbergraph_ResurrectionShrine_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AResurrectionShrine_BP_C::ExecuteUbergraph_ResurrectionShrine_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResurrectionShrine_BP_C", "ExecuteUbergraph_ResurrectionShrine_BP");

	Params::AResurrectionShrine_BP_C_ExecuteUbergraph_ResurrectionShrine_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


