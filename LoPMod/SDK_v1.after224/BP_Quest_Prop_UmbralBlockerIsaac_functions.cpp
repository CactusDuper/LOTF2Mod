#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Quest_Prop_UmbralBlockerIsaac.BP_Quest_Prop_UmbralBlockerIsaac_C
// (Actor, Pawn)

class UClass* ABP_Quest_Prop_UmbralBlockerIsaac_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Quest_Prop_UmbralBlockerIsaac_C");

	return Clss;
}


// BP_Quest_Prop_UmbralBlockerIsaac_C BP_Quest_Prop_UmbralBlockerIsaac.Default__BP_Quest_Prop_UmbralBlockerIsaac_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Quest_Prop_UmbralBlockerIsaac_C* ABP_Quest_Prop_UmbralBlockerIsaac_C::GetDefaultObj()
{
	static class ABP_Quest_Prop_UmbralBlockerIsaac_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Quest_Prop_UmbralBlockerIsaac_C*>(ABP_Quest_Prop_UmbralBlockerIsaac_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Quest_Prop_UmbralBlockerIsaac.BP_Quest_Prop_UmbralBlockerIsaac_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Quest_Prop_UmbralBlockerIsaac_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Quest_Prop_UmbralBlockerIsaac_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Quest_Prop_UmbralBlockerIsaac.BP_Quest_Prop_UmbralBlockerIsaac_C.ExecuteUbergraph_BP_Quest_Prop_UmbralBlockerIsaac
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Quest_Prop_UmbralBlockerIsaac_C::ExecuteUbergraph_BP_Quest_Prop_UmbralBlockerIsaac(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Quest_Prop_UmbralBlockerIsaac_C", "ExecuteUbergraph_BP_Quest_Prop_UmbralBlockerIsaac");

	Params::ABP_Quest_Prop_UmbralBlockerIsaac_C_ExecuteUbergraph_BP_Quest_Prop_UmbralBlockerIsaac_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


