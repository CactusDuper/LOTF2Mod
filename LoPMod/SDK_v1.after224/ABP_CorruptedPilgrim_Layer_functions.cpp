#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_CorruptedPilgrim_Layer.ABP_CorruptedPilgrim_Layer_C
// (None)

class UClass* UABP_CorruptedPilgrim_Layer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_CorruptedPilgrim_Layer_C");

	return Clss;
}


// ABP_CorruptedPilgrim_Layer_C ABP_CorruptedPilgrim_Layer.Default__ABP_CorruptedPilgrim_Layer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_CorruptedPilgrim_Layer_C* UABP_CorruptedPilgrim_Layer_C::GetDefaultObj()
{
	static class UABP_CorruptedPilgrim_Layer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_CorruptedPilgrim_Layer_C*>(UABP_CorruptedPilgrim_Layer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_CorruptedPilgrim_Layer.ABP_CorruptedPilgrim_Layer_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_CorruptedPilgrim_Layer_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_CorruptedPilgrim_Layer_C", "AnimGraph");

	Params::UABP_CorruptedPilgrim_Layer_C_AnimGraph_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_CorruptedPilgrim_Layer.ABP_CorruptedPilgrim_Layer_C.ExecuteUbergraph_ABP_CorruptedPilgrim_Layer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_CorruptedPilgrim_Layer_C::ExecuteUbergraph_ABP_CorruptedPilgrim_Layer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_CorruptedPilgrim_Layer_C", "ExecuteUbergraph_ABP_CorruptedPilgrim_Layer");

	Params::UABP_CorruptedPilgrim_Layer_C_ExecuteUbergraph_ABP_CorruptedPilgrim_Layer_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


