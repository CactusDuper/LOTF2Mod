#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DefaultCameraActor.BP_DefaultCameraActor_C
// (Actor)

class UClass* ABP_DefaultCameraActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DefaultCameraActor_C");

	return Clss;
}


// BP_DefaultCameraActor_C BP_DefaultCameraActor.Default__BP_DefaultCameraActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DefaultCameraActor_C* ABP_DefaultCameraActor_C::GetDefaultObj()
{
	static class ABP_DefaultCameraActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DefaultCameraActor_C*>(ABP_DefaultCameraActor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DefaultCameraActor.BP_DefaultCameraActor_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DefaultCameraActor_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DefaultCameraActor_C", "ReceiveTick");

	Params::ABP_DefaultCameraActor_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DefaultCameraActor.BP_DefaultCameraActor_C.ExecuteUbergraph_BP_DefaultCameraActor
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DefaultCameraActor_C::ExecuteUbergraph_BP_DefaultCameraActor(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DefaultCameraActor_C", "ExecuteUbergraph_BP_DefaultCameraActor");

	Params::ABP_DefaultCameraActor_C_ExecuteUbergraph_BP_DefaultCameraActor_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


