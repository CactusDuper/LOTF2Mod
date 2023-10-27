#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AoE_wadingArea_Buffer.AoE_wadingArea_Buffer_C
// (Actor)

class UClass* AAoE_wadingArea_Buffer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AoE_wadingArea_Buffer_C");

	return Clss;
}


// AoE_wadingArea_Buffer_C AoE_wadingArea_Buffer.Default__AoE_wadingArea_Buffer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAoE_wadingArea_Buffer_C* AAoE_wadingArea_Buffer_C::GetDefaultObj()
{
	static class AAoE_wadingArea_Buffer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAoE_wadingArea_Buffer_C*>(AAoE_wadingArea_Buffer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AoE_wadingArea_Buffer.AoE_wadingArea_Buffer_C.BPI Close Portculis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAoE_wadingArea_Buffer_C::BPI_Close_Portculis()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AoE_wadingArea_Buffer_C", "BPI Close Portculis");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AoE_wadingArea_Buffer.AoE_wadingArea_Buffer_C.BPI Interact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor_that_called                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      InteractorPlayer                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AAoE_wadingArea_Buffer_C::BPI_Interact(class AActor* Actor_that_called, class AActor* InteractorPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AoE_wadingArea_Buffer_C", "BPI Interact");

	Params::AAoE_wadingArea_Buffer_C_BPI_Interact_Params Parms{};

	Parms.Actor_that_called = Actor_that_called;
	Parms.InteractorPlayer = InteractorPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AoE_wadingArea_Buffer.AoE_wadingArea_Buffer_C.BndEvt__AoE_killingArea_Drowning_Proto_Lantern_DualRealmBehaviour_K2Node_ComponentBoundEvent_0_OnUpdateRealmVisuals__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class EGameRealm              NewRealm                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAoE_wadingArea_Buffer_C::BndEvt__AoE_killingArea_Drowning_Proto_Lantern_DualRealmBehaviour_K2Node_ComponentBoundEvent_0_OnUpdateRealmVisuals__DelegateSignature(enum class EGameRealm NewRealm)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AoE_wadingArea_Buffer_C", "BndEvt__AoE_killingArea_Drowning_Proto_Lantern_DualRealmBehaviour_K2Node_ComponentBoundEvent_0_OnUpdateRealmVisuals__DelegateSignature");

	Params::AAoE_wadingArea_Buffer_C_BndEvt__AoE_killingArea_Drowning_Proto_Lantern_DualRealmBehaviour_K2Node_ComponentBoundEvent_0_OnUpdateRealmVisuals__DelegateSignature_Params Parms{};

	Parms.NewRealm = NewRealm;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AoE_wadingArea_Buffer.AoE_wadingArea_Buffer_C.ExecuteUbergraph_AoE_wadingArea_Buffer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor_that_called                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_InteractorPlayer                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EGameRealm              K2Node_ComponentBoundEvent_newRealm                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAoE_wadingArea_Buffer_C::ExecuteUbergraph_AoE_wadingArea_Buffer(int32 EntryPoint, class AActor* K2Node_Event_Actor_that_called, class AActor* K2Node_Event_InteractorPlayer, enum class EGameRealm K2Node_ComponentBoundEvent_newRealm, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AoE_wadingArea_Buffer_C", "ExecuteUbergraph_AoE_wadingArea_Buffer");

	Params::AAoE_wadingArea_Buffer_C_ExecuteUbergraph_AoE_wadingArea_Buffer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Actor_that_called = K2Node_Event_Actor_that_called;
	Parms.K2Node_Event_InteractorPlayer = K2Node_Event_InteractorPlayer;
	Parms.K2Node_ComponentBoundEvent_newRealm = K2Node_ComponentBoundEvent_newRealm;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


