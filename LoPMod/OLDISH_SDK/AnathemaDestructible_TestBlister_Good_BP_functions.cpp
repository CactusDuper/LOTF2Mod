#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnathemaDestructible_TestBlister_Good_BP.AnathemaDestructible_TestBlister_Good_BP_C
// (Actor)

class UClass* AAnathemaDestructible_TestBlister_Good_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnathemaDestructible_TestBlister_Good_BP_C");

	return Clss;
}


// AnathemaDestructible_TestBlister_Good_BP_C AnathemaDestructible_TestBlister_Good_BP.Default__AnathemaDestructible_TestBlister_Good_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAnathemaDestructible_TestBlister_Good_BP_C* AAnathemaDestructible_TestBlister_Good_BP_C::GetDefaultObj()
{
	static class AAnathemaDestructible_TestBlister_Good_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAnathemaDestructible_TestBlister_Good_BP_C*>(AAnathemaDestructible_TestBlister_Good_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AnathemaDestructible_TestBlister_Good_BP.AnathemaDestructible_TestBlister_Good_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AAnathemaDestructible_TestBlister_Good_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnathemaDestructible_TestBlister_Good_BP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AnathemaDestructible_TestBlister_Good_BP.AnathemaDestructible_TestBlister_Good_BP_C.ExecuteUbergraph_AnathemaDestructible_TestBlister_Good_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnathemaDestructible_TestBlister_Good_BP_C::ExecuteUbergraph_AnathemaDestructible_TestBlister_Good_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnathemaDestructible_TestBlister_Good_BP_C", "ExecuteUbergraph_AnathemaDestructible_TestBlister_Good_BP");

	Params::AAnathemaDestructible_TestBlister_Good_BP_C_ExecuteUbergraph_AnathemaDestructible_TestBlister_Good_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


