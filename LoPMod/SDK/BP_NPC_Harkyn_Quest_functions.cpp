#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_NPC_Harkyn_Quest.BP_NPC_Harkyn_Quest_C
// (Actor, Pawn)

class UClass* ABP_NPC_Harkyn_Quest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_NPC_Harkyn_Quest_C");

	return Clss;
}


// BP_NPC_Harkyn_Quest_C BP_NPC_Harkyn_Quest.Default__BP_NPC_Harkyn_Quest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_NPC_Harkyn_Quest_C* ABP_NPC_Harkyn_Quest_C::GetDefaultObj()
{
	static class ABP_NPC_Harkyn_Quest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_NPC_Harkyn_Quest_C*>(ABP_NPC_Harkyn_Quest_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_NPC_Harkyn_Quest.BP_NPC_Harkyn_Quest_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_NPC_Harkyn_Quest_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPC_Harkyn_Quest_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_NPC_Harkyn_Quest.BP_NPC_Harkyn_Quest_C.ExecuteUbergraph_BP_NPC_Harkyn_Quest
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPC_Harkyn_Quest_C::ExecuteUbergraph_BP_NPC_Harkyn_Quest(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPC_Harkyn_Quest_C", "ExecuteUbergraph_BP_NPC_Harkyn_Quest");

	Params::ABP_NPC_Harkyn_Quest_C_ExecuteUbergraph_BP_NPC_Harkyn_Quest_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


