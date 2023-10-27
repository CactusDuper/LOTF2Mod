#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Base_AnathemaItemContainer_BP.Base_AnathemaItemContainer_BP_C
// (Actor)

class UClass* ABase_AnathemaItemContainer_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Base_AnathemaItemContainer_BP_C");

	return Clss;
}


// Base_AnathemaItemContainer_BP_C Base_AnathemaItemContainer_BP.Default__Base_AnathemaItemContainer_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABase_AnathemaItemContainer_BP_C* ABase_AnathemaItemContainer_BP_C::GetDefaultObj()
{
	static class ABase_AnathemaItemContainer_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABase_AnathemaItemContainer_BP_C*>(ABase_AnathemaItemContainer_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Base_AnathemaItemContainer_BP.Base_AnathemaItemContainer_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABase_AnathemaItemContainer_BP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Base_AnathemaItemContainer_BP_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Base_AnathemaItemContainer_BP.Base_AnathemaItemContainer_BP_C.BPI_PauseMothActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABase_AnathemaItemContainer_BP_C::BPI_PauseMothActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Base_AnathemaItemContainer_BP_C", "BPI_PauseMothActor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Base_AnathemaItemContainer_BP.Base_AnathemaItemContainer_BP_C.BPI KillMothAtractor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABase_AnathemaItemContainer_BP_C::BPI_KillMothAtractor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Base_AnathemaItemContainer_BP_C", "BPI KillMothAtractor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Base_AnathemaItemContainer_BP.Base_AnathemaItemContainer_BP_C.BPI MothActorRegister
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      MothActor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABase_AnathemaItemContainer_BP_C::BPI_MothActorRegister(class AActor* MothActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Base_AnathemaItemContainer_BP_C", "BPI MothActorRegister");

	Params::ABase_AnathemaItemContainer_BP_C_BPI_MothActorRegister_Params Parms{};

	Parms.MothActor = MothActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Base_AnathemaItemContainer_BP.Base_AnathemaItemContainer_BP_C.BPI_ResumeMothActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABase_AnathemaItemContainer_BP_C::BPI_ResumeMothActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Base_AnathemaItemContainer_BP_C", "BPI_ResumeMothActor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Base_AnathemaItemContainer_BP.Base_AnathemaItemContainer_BP_C.BPI Interact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor_that_called                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      InteractorPlayer                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABase_AnathemaItemContainer_BP_C::BPI_Interact(class AActor* Actor_that_called, class AActor* InteractorPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Base_AnathemaItemContainer_BP_C", "BPI Interact");

	Params::ABase_AnathemaItemContainer_BP_C_BPI_Interact_Params Parms{};

	Parms.Actor_that_called = Actor_that_called;
	Parms.InteractorPlayer = InteractorPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Base_AnathemaItemContainer_BP.Base_AnathemaItemContainer_BP_C.BPI Close Portculis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABase_AnathemaItemContainer_BP_C::BPI_Close_Portculis()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Base_AnathemaItemContainer_BP_C", "BPI Close Portculis");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Base_AnathemaItemContainer_BP.Base_AnathemaItemContainer_BP_C.MCPlaySound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABase_AnathemaItemContainer_BP_C::MCPlaySound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Base_AnathemaItemContainer_BP_C", "MCPlaySound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Base_AnathemaItemContainer_BP.Base_AnathemaItemContainer_BP_C.OnInteraction
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UInteractionContext*         InteractionContext                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABase_AnathemaItemContainer_BP_C::OnInteraction(class UInteractionContext* InteractionContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Base_AnathemaItemContainer_BP_C", "OnInteraction");

	Params::ABase_AnathemaItemContainer_BP_C_OnInteraction_Params Parms{};

	Parms.InteractionContext = InteractionContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Base_AnathemaItemContainer_BP.Base_AnathemaItemContainer_BP_C.DisableFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABase_AnathemaItemContainer_BP_C::DisableFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Base_AnathemaItemContainer_BP_C", "DisableFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Base_AnathemaItemContainer_BP.Base_AnathemaItemContainer_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABase_AnathemaItemContainer_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Base_AnathemaItemContainer_BP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Base_AnathemaItemContainer_BP.Base_AnathemaItemContainer_BP_C.SilentDestroyFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABase_AnathemaItemContainer_BP_C::SilentDestroyFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Base_AnathemaItemContainer_BP_C", "SilentDestroyFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Base_AnathemaItemContainer_BP.Base_AnathemaItemContainer_BP_C.ExecuteUbergraph_Base_AnathemaItemContainer_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryOpenInteraction_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_MothActor                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor_that_called                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_InteractorPlayer                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEventAtLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_MothInteractions_C>K2Node_DynamicCast_AsBPI_Moth_Interactions                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInteractionContext*         K2Node_Event_interactionContext                                  (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetInteractor_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AAnathemaPlayerCharacter_BP_C*K2Node_DynamicCast_AsAnathema_Player_Character_BP                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_AddLocalOffset_SweepHitResult                        (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FInteractableCurrentState   CallFunc_GetCurrentState_ReturnValue                             (NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABase_AnathemaItemContainer_BP_C::ExecuteUbergraph_Base_AnathemaItemContainer_BP(int32 EntryPoint, bool CallFunc_TryOpenInteraction_ReturnValue, class AActor* K2Node_Event_MothActor, class AActor* K2Node_Event_Actor_that_called, class AActor* K2Node_Event_InteractorPlayer, bool CallFunc_HasAuthority_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, TScriptInterface<class IBPI_MothInteractions_C> K2Node_DynamicCast_AsBPI_Moth_Interactions, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesImplementInterface_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UInteractionContext* K2Node_Event_interactionContext, class AActor* CallFunc_GetInteractor_ReturnValue, class AAnathemaPlayerCharacter_BP_C* K2Node_DynamicCast_AsAnathema_Player_Character_BP, bool K2Node_DynamicCast_bSuccess_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult, const struct FInteractableCurrentState& CallFunc_GetCurrentState_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Base_AnathemaItemContainer_BP_C", "ExecuteUbergraph_Base_AnathemaItemContainer_BP");

	Params::ABase_AnathemaItemContainer_BP_C_ExecuteUbergraph_Base_AnathemaItemContainer_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_TryOpenInteraction_ReturnValue = CallFunc_TryOpenInteraction_ReturnValue;
	Parms.K2Node_Event_MothActor = K2Node_Event_MothActor;
	Parms.K2Node_Event_Actor_that_called = K2Node_Event_Actor_that_called;
	Parms.K2Node_Event_InteractorPlayer = K2Node_Event_InteractorPlayer;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_PostEventAtLocation_ReturnValue = CallFunc_PostEventAtLocation_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Moth_Interactions = K2Node_DynamicCast_AsBPI_Moth_Interactions;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_interactionContext = K2Node_Event_interactionContext;
	Parms.CallFunc_GetInteractor_ReturnValue = CallFunc_GetInteractor_ReturnValue;
	Parms.K2Node_DynamicCast_AsAnathema_Player_Character_BP = K2Node_DynamicCast_AsAnathema_Player_Character_BP;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue = CallFunc_SpawnSystemAtLocation_ReturnValue;
	Parms.CallFunc_K2_AddLocalOffset_SweepHitResult = CallFunc_K2_AddLocalOffset_SweepHitResult;
	Parms.CallFunc_GetCurrentState_ReturnValue = CallFunc_GetCurrentState_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


