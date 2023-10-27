#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_Player_Layering_Blocking.ABP_Player_Layering_Blocking_C
// (None)

class UClass* UABP_Player_Layering_Blocking_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_Player_Layering_Blocking_C");

	return Clss;
}


// ABP_Player_Layering_Blocking_C ABP_Player_Layering_Blocking.Default__ABP_Player_Layering_Blocking_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_Player_Layering_Blocking_C* UABP_Player_Layering_Blocking_C::GetDefaultObj()
{
	static class UABP_Player_Layering_Blocking_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_Player_Layering_Blocking_C*>(UABP_Player_Layering_Blocking_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_Player_Layering_Blocking.ABP_Player_Layering_Blocking_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   LayeredLocomotion                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   BaseLocomotion                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   BlockingOverlay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_Player_Layering_Blocking_C::AnimGraph(const struct FPoseLink& LayeredLocomotion, const struct FPoseLink& BaseLocomotion, const struct FPoseLink& BlockingOverlay, struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Layering_Blocking_C", "AnimGraph");

	Params::UABP_Player_Layering_Blocking_C_AnimGraph_Params Parms{};

	Parms.LayeredLocomotion = LayeredLocomotion;
	Parms.BaseLocomotion = BaseLocomotion;
	Parms.BlockingOverlay = BlockingOverlay;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_Player_Layering_Blocking.ABP_Player_Layering_Blocking_C.GetABP_Player
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UABP_Player_C*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// class UABP_Player_C*               K2Node_DynamicCast_AsABP_Player                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UABP_Player_C* UABP_Player_Layering_Blocking_C::GetABP_Player(class UABP_Player_C* K2Node_DynamicCast_AsABP_Player, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Layering_Blocking_C", "GetABP_Player");

	Params::UABP_Player_Layering_Blocking_C_GetABP_Player_Params Parms{};

	Parms.K2Node_DynamicCast_AsABP_Player = K2Node_DynamicCast_AsABP_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ABP_Player_Layering_Blocking.ABP_Player_Layering_Blocking_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Layering_Blocking_AnimGraphNode_TransitionResult_2AC4BE7345F1861FDDEADF99B0F2E6A1
// (BlueprintEvent)
// Parameters:

void UABP_Player_Layering_Blocking_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Layering_Blocking_AnimGraphNode_TransitionResult_2AC4BE7345F1861FDDEADF99B0F2E6A1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Layering_Blocking_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Layering_Blocking_AnimGraphNode_TransitionResult_2AC4BE7345F1861FDDEADF99B0F2E6A1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player_Layering_Blocking.ABP_Player_Layering_Blocking_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Layering_Blocking_AnimGraphNode_TransitionResult_47A326494179718657B8109D73025A94
// (BlueprintEvent)
// Parameters:

void UABP_Player_Layering_Blocking_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Layering_Blocking_AnimGraphNode_TransitionResult_47A326494179718657B8109D73025A94()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Layering_Blocking_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Layering_Blocking_AnimGraphNode_TransitionResult_47A326494179718657B8109D73025A94");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player_Layering_Blocking.ABP_Player_Layering_Blocking_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_Layering_Blocking_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Layering_Blocking_C", "BlueprintUpdateAnimation");

	Params::UABP_Player_Layering_Blocking_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player_Layering_Blocking.ABP_Player_Layering_Blocking_C.ExecuteUbergraph_ABP_Player_Layering_Blocking
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UABP_Player_C*               CallFunc_GetABP_Player_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UABP_Player_C*               CallFunc_GetABP_Player_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_Layering_Blocking_C::ExecuteUbergraph_ABP_Player_Layering_Blocking(int32 EntryPoint, float K2Node_Event_DeltaTimeX, class UABP_Player_C* CallFunc_GetABP_Player_ReturnValue, class UABP_Player_C* CallFunc_GetABP_Player_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Layering_Blocking_C", "ExecuteUbergraph_ABP_Player_Layering_Blocking");

	Params::UABP_Player_Layering_Blocking_C_ExecuteUbergraph_ABP_Player_Layering_Blocking_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_GetABP_Player_ReturnValue = CallFunc_GetABP_Player_ReturnValue;
	Parms.CallFunc_GetABP_Player_ReturnValue_1 = CallFunc_GetABP_Player_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


