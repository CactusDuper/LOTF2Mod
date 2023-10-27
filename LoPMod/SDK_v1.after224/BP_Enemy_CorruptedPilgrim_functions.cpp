#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Enemy_CorruptedPilgrim.BP_Enemy_CorruptedPilgrim_C
// (Actor, Pawn)

class UClass* ABP_Enemy_CorruptedPilgrim_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Enemy_CorruptedPilgrim_C");

	return Clss;
}


// BP_Enemy_CorruptedPilgrim_C BP_Enemy_CorruptedPilgrim.Default__BP_Enemy_CorruptedPilgrim_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Enemy_CorruptedPilgrim_C* ABP_Enemy_CorruptedPilgrim_C::GetDefaultObj()
{
	static class ABP_Enemy_CorruptedPilgrim_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Enemy_CorruptedPilgrim_C*>(ABP_Enemy_CorruptedPilgrim_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Enemy_CorruptedPilgrim.BP_Enemy_CorruptedPilgrim_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Enemy_CorruptedPilgrim_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Enemy_CorruptedPilgrim_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Enemy_CorruptedPilgrim.BP_Enemy_CorruptedPilgrim_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Enemy_CorruptedPilgrim_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Enemy_CorruptedPilgrim_C", "ReceiveTick");

	Params::ABP_Enemy_CorruptedPilgrim_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Enemy_CorruptedPilgrim.BP_Enemy_CorruptedPilgrim_C.ExecuteUbergraph_BP_Enemy_CorruptedPilgrim
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Enemy_CorruptedPilgrim_C::ExecuteUbergraph_BP_Enemy_CorruptedPilgrim(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Enemy_CorruptedPilgrim_C", "ExecuteUbergraph_BP_Enemy_CorruptedPilgrim");

	Params::ABP_Enemy_CorruptedPilgrim_C_ExecuteUbergraph_BP_Enemy_CorruptedPilgrim_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


