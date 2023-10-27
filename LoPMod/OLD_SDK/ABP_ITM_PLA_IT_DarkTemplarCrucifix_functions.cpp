#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_ITM_PLA_IT_DarkTemplarCrucifix.ABP_ITM_PLA_IT_DarkTemplarCrucifix_C
// (None)

class UClass* UABP_ITM_PLA_IT_DarkTemplarCrucifix_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_ITM_PLA_IT_DarkTemplarCrucifix_C");

	return Clss;
}


// ABP_ITM_PLA_IT_DarkTemplarCrucifix_C ABP_ITM_PLA_IT_DarkTemplarCrucifix.Default__ABP_ITM_PLA_IT_DarkTemplarCrucifix_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_ITM_PLA_IT_DarkTemplarCrucifix_C* UABP_ITM_PLA_IT_DarkTemplarCrucifix_C::GetDefaultObj()
{
	static class UABP_ITM_PLA_IT_DarkTemplarCrucifix_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_ITM_PLA_IT_DarkTemplarCrucifix_C*>(UABP_ITM_PLA_IT_DarkTemplarCrucifix_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_ITM_PLA_IT_DarkTemplarCrucifix.ABP_ITM_PLA_IT_DarkTemplarCrucifix_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_ITM_PLA_IT_DarkTemplarCrucifix_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_ITM_PLA_IT_DarkTemplarCrucifix_C", "AnimGraph");

	Params::UABP_ITM_PLA_IT_DarkTemplarCrucifix_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_ITM_PLA_IT_DarkTemplarCrucifix.ABP_ITM_PLA_IT_DarkTemplarCrucifix_C.ExecuteUbergraph_ABP_ITM_PLA_IT_DarkTemplarCrucifix
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_ITM_PLA_IT_DarkTemplarCrucifix_C::ExecuteUbergraph_ABP_ITM_PLA_IT_DarkTemplarCrucifix(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_ITM_PLA_IT_DarkTemplarCrucifix_C", "ExecuteUbergraph_ABP_ITM_PLA_IT_DarkTemplarCrucifix");

	Params::UABP_ITM_PLA_IT_DarkTemplarCrucifix_C_ExecuteUbergraph_ABP_ITM_PLA_IT_DarkTemplarCrucifix_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


