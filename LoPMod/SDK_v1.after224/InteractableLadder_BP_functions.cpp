#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass InteractableLadder_BP.InteractableLadder_BP_C
// (Actor)

class UClass* AInteractableLadder_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InteractableLadder_BP_C");

	return Clss;
}


// InteractableLadder_BP_C InteractableLadder_BP.Default__InteractableLadder_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AInteractableLadder_BP_C* AInteractableLadder_BP_C::GetDefaultObj()
{
	static class AInteractableLadder_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AInteractableLadder_BP_C*>(AInteractableLadder_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function InteractableLadder_BP.InteractableLadder_BP_C.Disable Ladder Interaction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AInteractableLadder_BP_C::Disable_Ladder_Interaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InteractableLadder_BP_C", "Disable Ladder Interaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InteractableLadder_BP.InteractableLadder_BP_C.Enable Ladder interaction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AInteractableLadder_BP_C::Enable_Ladder_interaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InteractableLadder_BP_C", "Enable Ladder interaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InteractableLadder_BP.InteractableLadder_BP_C.ExecuteUbergraph_InteractableLadder_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteractableLadder_BP_C::ExecuteUbergraph_InteractableLadder_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InteractableLadder_BP_C", "ExecuteUbergraph_InteractableLadder_BP");

	Params::AInteractableLadder_BP_C_ExecuteUbergraph_InteractableLadder_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


