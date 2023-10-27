#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Base_Pickup_BP.Base_Pickup_BP_C
// (Actor)

class UClass* ABase_Pickup_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Base_Pickup_BP_C");

	return Clss;
}


// Base_Pickup_BP_C Base_Pickup_BP.Default__Base_Pickup_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABase_Pickup_BP_C* ABase_Pickup_BP_C::GetDefaultObj()
{
	static class ABase_Pickup_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABase_Pickup_BP_C*>(ABase_Pickup_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Base_Pickup_BP.Base_Pickup_BP_C.BPI_PauseMothActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABase_Pickup_BP_C::BPI_PauseMothActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Base_Pickup_BP_C", "BPI_PauseMothActor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Base_Pickup_BP.Base_Pickup_BP_C.BPI KillMothAtractor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABase_Pickup_BP_C::BPI_KillMothAtractor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Base_Pickup_BP_C", "BPI KillMothAtractor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Base_Pickup_BP.Base_Pickup_BP_C.BPI MothActorRegister
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      MothActor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABase_Pickup_BP_C::BPI_MothActorRegister(class AActor* MothActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Base_Pickup_BP_C", "BPI MothActorRegister");

	Params::ABase_Pickup_BP_C_BPI_MothActorRegister_Params Parms{};

	Parms.MothActor = MothActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Base_Pickup_BP.Base_Pickup_BP_C.BPI_ResumeMothActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABase_Pickup_BP_C::BPI_ResumeMothActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Base_Pickup_BP_C", "BPI_ResumeMothActor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Base_Pickup_BP.Base_Pickup_BP_C.BPI Interact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor_that_called                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      InteractorPlayer                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABase_Pickup_BP_C::BPI_Interact(class AActor* Actor_that_called, class AActor* InteractorPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Base_Pickup_BP_C", "BPI Interact");

	Params::ABase_Pickup_BP_C_BPI_Interact_Params Parms{};

	Parms.Actor_that_called = Actor_that_called;
	Parms.InteractorPlayer = InteractorPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Base_Pickup_BP.Base_Pickup_BP_C.BPI Close Portculis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABase_Pickup_BP_C::BPI_Close_Portculis()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Base_Pickup_BP_C", "BPI Close Portculis");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Base_Pickup_BP.Base_Pickup_BP_C.BndEvt__Base_Pickup_BP_InteractionComponent_K2Node_ComponentBoundEvent_0_OnInteractionActivate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UInteractionContext*         Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABase_Pickup_BP_C::BndEvt__Base_Pickup_BP_InteractionComponent_K2Node_ComponentBoundEvent_0_OnInteractionActivate__DelegateSignature(class UInteractionContext* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Base_Pickup_BP_C", "BndEvt__Base_Pickup_BP_InteractionComponent_K2Node_ComponentBoundEvent_0_OnInteractionActivate__DelegateSignature");

	Params::ABase_Pickup_BP_C_BndEvt__Base_Pickup_BP_InteractionComponent_K2Node_ComponentBoundEvent_0_OnInteractionActivate__DelegateSignature_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Base_Pickup_BP.Base_Pickup_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABase_Pickup_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Base_Pickup_BP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Base_Pickup_BP.Base_Pickup_BP_C.BPI RegisterMothActor
// (BlueprintEvent)
// Parameters:
// class AActor*                      NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABase_Pickup_BP_C::BPI_RegisterMothActor(class AActor* NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Base_Pickup_BP_C", "BPI RegisterMothActor");

	Params::ABase_Pickup_BP_C_BPI_RegisterMothActor_Params Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Base_Pickup_BP.Base_Pickup_BP_C.ExecuteUbergraph_Base_Pickup_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_MothInteractions_C>K2Node_DynamicCast_AsBPI_Moth_Interactions                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_MothActor                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor_that_called                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_InteractorPlayer                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInteractionContext*         K2Node_ComponentBoundEvent_Context                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_NewParam                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABase_Pickup_BP_C::ExecuteUbergraph_Base_Pickup_BP(int32 EntryPoint, TScriptInterface<class IBPI_MothInteractions_C> K2Node_DynamicCast_AsBPI_Moth_Interactions, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesImplementInterface_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* K2Node_Event_MothActor, class AActor* K2Node_Event_Actor_that_called, class AActor* K2Node_Event_InteractorPlayer, class UInteractionContext* K2Node_ComponentBoundEvent_Context, class AActor* K2Node_Event_NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Base_Pickup_BP_C", "ExecuteUbergraph_Base_Pickup_BP");

	Params::ABase_Pickup_BP_C_ExecuteUbergraph_Base_Pickup_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsBPI_Moth_Interactions = K2Node_DynamicCast_AsBPI_Moth_Interactions;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_MothActor = K2Node_Event_MothActor;
	Parms.K2Node_Event_Actor_that_called = K2Node_Event_Actor_that_called;
	Parms.K2Node_Event_InteractorPlayer = K2Node_Event_InteractorPlayer;
	Parms.K2Node_ComponentBoundEvent_Context = K2Node_ComponentBoundEvent_Context;
	Parms.K2Node_Event_NewParam = K2Node_Event_NewParam;

	UObject::ProcessEvent(Func, &Parms);

}

}


