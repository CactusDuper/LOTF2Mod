#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_NPC_LayeringTemplate.ABP_NPC_LayeringTemplate_C
// (None)

class UClass* UABP_NPC_LayeringTemplate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_NPC_LayeringTemplate_C");

	return Clss;
}


// ABP_NPC_LayeringTemplate_C ABP_NPC_LayeringTemplate.Default__ABP_NPC_LayeringTemplate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_NPC_LayeringTemplate_C* UABP_NPC_LayeringTemplate_C::GetDefaultObj()
{
	static class UABP_NPC_LayeringTemplate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_NPC_LayeringTemplate_C*>(UABP_NPC_LayeringTemplate_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_NPC_LayeringTemplate.ABP_NPC_LayeringTemplate_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InputLocomotion                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_NPC_LayeringTemplate_C::AnimGraph(const struct FPoseLink& InputLocomotion, struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_NPC_LayeringTemplate_C", "AnimGraph");

	Params::UABP_NPC_LayeringTemplate_C_AnimGraph_Params Parms{};

	Parms.InputLocomotion = InputLocomotion;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_NPC_LayeringTemplate.ABP_NPC_LayeringTemplate_C.GetABP_EnemyThreadSafe
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UABP_EnemyBase_C*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// class UABP_EnemyBase_C*            K2Node_DynamicCast_AsABP_Enemy_Base                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UABP_EnemyBase_C* UABP_NPC_LayeringTemplate_C::GetABP_EnemyThreadSafe(class UABP_EnemyBase_C* K2Node_DynamicCast_AsABP_Enemy_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_NPC_LayeringTemplate_C", "GetABP_EnemyThreadSafe");

	Params::UABP_NPC_LayeringTemplate_C_GetABP_EnemyThreadSafe_Params Parms{};

	Parms.K2Node_DynamicCast_AsABP_Enemy_Base = K2Node_DynamicCast_AsABP_Enemy_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ABP_NPC_LayeringTemplate.ABP_NPC_LayeringTemplate_C.ExecuteUbergraph_ABP_NPC_LayeringTemplate
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_NPC_LayeringTemplate_C::ExecuteUbergraph_ABP_NPC_LayeringTemplate(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_NPC_LayeringTemplate_C", "ExecuteUbergraph_ABP_NPC_LayeringTemplate");

	Params::UABP_NPC_LayeringTemplate_C_ExecuteUbergraph_ABP_NPC_LayeringTemplate_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


