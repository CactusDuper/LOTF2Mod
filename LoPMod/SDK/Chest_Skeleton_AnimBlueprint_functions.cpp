#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Chest_Skeleton_AnimBlueprint.Chest_Skeleton_AnimBlueprint_C
// (None)

class UClass* UChest_Skeleton_AnimBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Chest_Skeleton_AnimBlueprint_C");

	return Clss;
}


// Chest_Skeleton_AnimBlueprint_C Chest_Skeleton_AnimBlueprint.Default__Chest_Skeleton_AnimBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChest_Skeleton_AnimBlueprint_C* UChest_Skeleton_AnimBlueprint_C::GetDefaultObj()
{
	static class UChest_Skeleton_AnimBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChest_Skeleton_AnimBlueprint_C*>(UChest_Skeleton_AnimBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Chest_Skeleton_AnimBlueprint.Chest_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UChest_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chest_Skeleton_AnimBlueprint_C", "AnimGraph");

	Params::UChest_Skeleton_AnimBlueprint_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Chest_Skeleton_AnimBlueprint.Chest_Skeleton_AnimBlueprint_C.ExecuteUbergraph_Chest_Skeleton_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChest_Skeleton_AnimBlueprint_C::ExecuteUbergraph_Chest_Skeleton_AnimBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chest_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_Chest_Skeleton_AnimBlueprint");

	Params::UChest_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Chest_Skeleton_AnimBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


