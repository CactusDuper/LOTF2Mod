#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AoE_killingArea_Fire.AoE_killingArea_Fire_C
// (Actor)

class UClass* AAoE_killingArea_Fire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AoE_killingArea_Fire_C");

	return Clss;
}


// AoE_killingArea_Fire_C AoE_killingArea_Fire.Default__AoE_killingArea_Fire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAoE_killingArea_Fire_C* AAoE_killingArea_Fire_C::GetDefaultObj()
{
	static class AAoE_killingArea_Fire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAoE_killingArea_Fire_C*>(AAoE_killingArea_Fire_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AoE_killingArea_Fire.AoE_killingArea_Fire_C.BPI Close Portculis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAoE_killingArea_Fire_C::BPI_Close_Portculis()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AoE_killingArea_Fire_C", "BPI Close Portculis");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AoE_killingArea_Fire.AoE_killingArea_Fire_C.BPI Interact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor_that_called                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      InteractorPlayer                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AAoE_killingArea_Fire_C::BPI_Interact(class AActor* Actor_that_called, class AActor* InteractorPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AoE_killingArea_Fire_C", "BPI Interact");

	Params::AAoE_killingArea_Fire_C_BPI_Interact_Params Parms{};

	Parms.Actor_that_called = Actor_that_called;
	Parms.InteractorPlayer = InteractorPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AoE_killingArea_Fire.AoE_killingArea_Fire_C.ExecuteUbergraph_AoE_killingArea_Fire
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor_that_called                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_InteractorPlayer                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AAoE_killingArea_Fire_C::ExecuteUbergraph_AoE_killingArea_Fire(int32 EntryPoint, class AActor* K2Node_Event_Actor_that_called, class AActor* K2Node_Event_InteractorPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AoE_killingArea_Fire_C", "ExecuteUbergraph_AoE_killingArea_Fire");

	Params::AAoE_killingArea_Fire_C_ExecuteUbergraph_AoE_killingArea_Fire_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Actor_that_called = K2Node_Event_Actor_that_called;
	Parms.K2Node_Event_InteractorPlayer = K2Node_Event_InteractorPlayer;

	UObject::ProcessEvent(Func, &Parms);

}

}


