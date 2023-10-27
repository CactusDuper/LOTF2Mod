#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Pickup_WipTreasure_BP.Pickup_WipTreasure_BP_C
// (Actor)

class UClass* APickup_WipTreasure_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Pickup_WipTreasure_BP_C");

	return Clss;
}


// Pickup_WipTreasure_BP_C Pickup_WipTreasure_BP.Default__Pickup_WipTreasure_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APickup_WipTreasure_BP_C* APickup_WipTreasure_BP_C::GetDefaultObj()
{
	static class APickup_WipTreasure_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APickup_WipTreasure_BP_C*>(APickup_WipTreasure_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Pickup_WipTreasure_BP.Pickup_WipTreasure_BP_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void APickup_WipTreasure_BP_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Pickup_WipTreasure_BP_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Pickup_WipTreasure_BP.Pickup_WipTreasure_BP_C.BndEvt__Pickup_WipTreasure_BP_InteractionComponent_K2Node_ComponentBoundEvent_0_OnInteractionActivate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UInteractionContext*         Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void APickup_WipTreasure_BP_C::BndEvt__Pickup_WipTreasure_BP_InteractionComponent_K2Node_ComponentBoundEvent_0_OnInteractionActivate__DelegateSignature(class UInteractionContext* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Pickup_WipTreasure_BP_C", "BndEvt__Pickup_WipTreasure_BP_InteractionComponent_K2Node_ComponentBoundEvent_0_OnInteractionActivate__DelegateSignature");

	Params::APickup_WipTreasure_BP_C_BndEvt__Pickup_WipTreasure_BP_InteractionComponent_K2Node_ComponentBoundEvent_0_OnInteractionActivate__DelegateSignature_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Pickup_WipTreasure_BP.Pickup_WipTreasure_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void APickup_WipTreasure_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Pickup_WipTreasure_BP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Pickup_WipTreasure_BP.Pickup_WipTreasure_BP_C.ExecuteUbergraph_Pickup_WipTreasure_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInteractionContext*         K2Node_ComponentBoundEvent_Context                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue_1                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void APickup_WipTreasure_BP_C::ExecuteUbergraph_Pickup_WipTreasure_BP(int32 EntryPoint, class UInteractionContext* K2Node_ComponentBoundEvent_Context, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Pickup_WipTreasure_BP_C", "ExecuteUbergraph_Pickup_WipTreasure_BP");

	Params::APickup_WipTreasure_BP_C_ExecuteUbergraph_Pickup_WipTreasure_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Context = K2Node_ComponentBoundEvent_Context;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue = CallFunc_SpawnSystemAtLocation_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue_1 = CallFunc_SpawnSystemAtLocation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


