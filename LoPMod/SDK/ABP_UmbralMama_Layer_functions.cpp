#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_UmbralMama_Layer.ABP_UmbralMama_Layer_C
// (None)

class UClass* UABP_UmbralMama_Layer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_UmbralMama_Layer_C");

	return Clss;
}


// ABP_UmbralMama_Layer_C ABP_UmbralMama_Layer.Default__ABP_UmbralMama_Layer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_UmbralMama_Layer_C* UABP_UmbralMama_Layer_C::GetDefaultObj()
{
	static class UABP_UmbralMama_Layer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_UmbralMama_Layer_C*>(UABP_UmbralMama_Layer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_UmbralMama_Layer.ABP_UmbralMama_Layer_C.FeetLock_FlinchesPP
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   FlinchedInput                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   FeetLock_FlinchesPP                                              (Parm, OutParm, NoDestructor)

void UABP_UmbralMama_Layer_C::FeetLock_FlinchesPP(const struct FPoseLink& FlinchedInput, struct FPoseLink* FeetLock_FlinchesPP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_UmbralMama_Layer_C", "FeetLock_FlinchesPP");

	Params::UABP_UmbralMama_Layer_C_FeetLock_FlinchesPP_Params Parms{};

	Parms.FlinchedInput = FlinchedInput;

	UObject::ProcessEvent(Func, &Parms);

	if (FeetLock_FlinchesPP != nullptr)
		*FeetLock_FlinchesPP = std::move(Parms.FeetLock_FlinchesPP);

}


// Function ABP_UmbralMama_Layer.ABP_UmbralMama_Layer_C.FeetIk_Override
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// int32                              IsInUmbral                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             EnemySpeed                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   FeetIk_Override                                                  (Parm, OutParm, NoDestructor)

void UABP_UmbralMama_Layer_C::FeetIk_Override(const struct FPoseLink& InPose, int32 IsInUmbral, double EnemySpeed, struct FPoseLink* FeetIk_Override)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_UmbralMama_Layer_C", "FeetIk_Override");

	Params::UABP_UmbralMama_Layer_C_FeetIk_Override_Params Parms{};

	Parms.InPose = InPose;
	Parms.IsInUmbral = IsInUmbral;
	Parms.EnemySpeed = EnemySpeed;

	UObject::ProcessEvent(Func, &Parms);

	if (FeetIk_Override != nullptr)
		*FeetIk_Override = std::move(Parms.FeetIk_Override);

}


// Function ABP_UmbralMama_Layer.ABP_UmbralMama_Layer_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_UmbralMama_Layer_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_UmbralMama_Layer_C", "AnimGraph");

	Params::UABP_UmbralMama_Layer_C_AnimGraph_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_UmbralMama_Layer.ABP_UmbralMama_Layer_C.ExecuteUbergraph_ABP_UmbralMama_Layer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_UmbralMama_Layer_C::ExecuteUbergraph_ABP_UmbralMama_Layer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_UmbralMama_Layer_C", "ExecuteUbergraph_ABP_UmbralMama_Layer");

	Params::UABP_UmbralMama_Layer_C_ExecuteUbergraph_ABP_UmbralMama_Layer_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


