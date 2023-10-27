#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass SKL_DoubleDoor_AnimBlueprint.SKL_DoubleDoor_AnimBlueprint_C
// (None)

class UClass* USKL_DoubleDoor_AnimBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SKL_DoubleDoor_AnimBlueprint_C");

	return Clss;
}


// SKL_DoubleDoor_AnimBlueprint_C SKL_DoubleDoor_AnimBlueprint.Default__SKL_DoubleDoor_AnimBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USKL_DoubleDoor_AnimBlueprint_C* USKL_DoubleDoor_AnimBlueprint_C::GetDefaultObj()
{
	static class USKL_DoubleDoor_AnimBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USKL_DoubleDoor_AnimBlueprint_C*>(USKL_DoubleDoor_AnimBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SKL_DoubleDoor_AnimBlueprint.SKL_DoubleDoor_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void USKL_DoubleDoor_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SKL_DoubleDoor_AnimBlueprint_C", "AnimGraph");

	Params::USKL_DoubleDoor_AnimBlueprint_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function SKL_DoubleDoor_AnimBlueprint.SKL_DoubleDoor_AnimBlueprint_C.ExecuteUbergraph_SKL_DoubleDoor_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USKL_DoubleDoor_AnimBlueprint_C::ExecuteUbergraph_SKL_DoubleDoor_AnimBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SKL_DoubleDoor_AnimBlueprint_C", "ExecuteUbergraph_SKL_DoubleDoor_AnimBlueprint");

	Params::USKL_DoubleDoor_AnimBlueprint_C_ExecuteUbergraph_SKL_DoubleDoor_AnimBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


