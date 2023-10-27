#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_LanternCompass.ABP_LanternCompass_C
// (None)

class UClass* UABP_LanternCompass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_LanternCompass_C");

	return Clss;
}


// ABP_LanternCompass_C ABP_LanternCompass.Default__ABP_LanternCompass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_LanternCompass_C* UABP_LanternCompass_C::GetDefaultObj()
{
	static class UABP_LanternCompass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_LanternCompass_C*>(UABP_LanternCompass_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_LanternCompass.ABP_LanternCompass_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_LanternCompass_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_LanternCompass_C", "AnimGraph");

	Params::UABP_LanternCompass_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_LanternCompass.ABP_LanternCompass_C.ExecuteUbergraph_ABP_LanternCompass
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_LanternCompass_C::ExecuteUbergraph_ABP_LanternCompass(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_LanternCompass_C", "ExecuteUbergraph_ABP_LanternCompass");

	Params::UABP_LanternCompass_C_ExecuteUbergraph_ABP_LanternCompass_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


