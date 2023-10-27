#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HexSoulFlayableObject_ReappearingYankableDude_BP.HexSoulFlayableObject_ReappearingYankableDude_BP_C
// (Actor)

class UClass* AHexSoulFlayableObject_ReappearingYankableDude_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HexSoulFlayableObject_ReappearingYankableDude_BP_C");

	return Clss;
}


// HexSoulFlayableObject_ReappearingYankableDude_BP_C HexSoulFlayableObject_ReappearingYankableDude_BP.Default__HexSoulFlayableObject_ReappearingYankableDude_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHexSoulFlayableObject_ReappearingYankableDude_BP_C* AHexSoulFlayableObject_ReappearingYankableDude_BP_C::GetDefaultObj()
{
	static class AHexSoulFlayableObject_ReappearingYankableDude_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHexSoulFlayableObject_ReappearingYankableDude_BP_C*>(AHexSoulFlayableObject_ReappearingYankableDude_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HexSoulFlayableObject_ReappearingYankableDude_BP.HexSoulFlayableObject_ReappearingYankableDude_BP_C.ResetForSoulFlay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHexSoulFlayableObject_ReappearingYankableDude_BP_C::ResetForSoulFlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HexSoulFlayableObject_ReappearingYankableDude_BP_C", "ResetForSoulFlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HexSoulFlayableObject_ReappearingYankableDude_BP.HexSoulFlayableObject_ReappearingYankableDude_BP_C.ExecuteUbergraph_HexSoulFlayableObject_ReappearingYankableDude_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHexSoulFlayableObject_ReappearingYankableDude_BP_C::ExecuteUbergraph_HexSoulFlayableObject_ReappearingYankableDude_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HexSoulFlayableObject_ReappearingYankableDude_BP_C", "ExecuteUbergraph_HexSoulFlayableObject_ReappearingYankableDude_BP");

	Params::AHexSoulFlayableObject_ReappearingYankableDude_BP_C_ExecuteUbergraph_HexSoulFlayableObject_ReappearingYankableDude_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


