#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UmbralExitPointActor_BP.UmbralExitPointActor_BP_C
// (Actor)

class UClass* AUmbralExitPointActor_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UmbralExitPointActor_BP_C");

	return Clss;
}


// UmbralExitPointActor_BP_C UmbralExitPointActor_BP.Default__UmbralExitPointActor_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AUmbralExitPointActor_BP_C* AUmbralExitPointActor_BP_C::GetDefaultObj()
{
	static class AUmbralExitPointActor_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AUmbralExitPointActor_BP_C*>(AUmbralExitPointActor_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UmbralExitPointActor_BP.UmbralExitPointActor_BP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUmbralExitPointActor_BP_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UmbralExitPointActor_BP_C", "ReceiveTick");

	Params::AUmbralExitPointActor_BP_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UmbralExitPointActor_BP.UmbralExitPointActor_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AUmbralExitPointActor_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UmbralExitPointActor_BP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UmbralExitPointActor_BP.UmbralExitPointActor_BP_C.BndEvt__UmbralExitPointActor_BP_InteractionComponent_K2Node_ComponentBoundEvent_0_OnInteractionActivate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UInteractionContext*         Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AUmbralExitPointActor_BP_C::BndEvt__UmbralExitPointActor_BP_InteractionComponent_K2Node_ComponentBoundEvent_0_OnInteractionActivate__DelegateSignature(class UInteractionContext* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UmbralExitPointActor_BP_C", "BndEvt__UmbralExitPointActor_BP_InteractionComponent_K2Node_ComponentBoundEvent_0_OnInteractionActivate__DelegateSignature");

	Params::AUmbralExitPointActor_BP_C_BndEvt__UmbralExitPointActor_BP_InteractionComponent_K2Node_ComponentBoundEvent_0_OnInteractionActivate__DelegateSignature_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UmbralExitPointActor_BP.UmbralExitPointActor_BP_C.OnVisualFXSpawned
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFXSystemComponent*          SpawnedVFX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void AUmbralExitPointActor_BP_C::OnVisualFXSpawned(class UFXSystemComponent* SpawnedVFX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UmbralExitPointActor_BP_C", "OnVisualFXSpawned");

	Params::AUmbralExitPointActor_BP_C_OnVisualFXSpawned_Params Parms{};

	Parms.SpawnedVFX = SpawnedVFX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UmbralExitPointActor_BP.UmbralExitPointActor_BP_C.ExecuteUbergraph_UmbralExitPointActor_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCharacterDead_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSpawningEnabled_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALOTF2Character*             CallFunc_GetSpawnedCharacter_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UInteractionContext*         K2Node_ComponentBoundEvent_Context                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class AAnathemaPlayerCharacter_BP_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class AAnathemaPlayerCharacter_BP_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFXSystemComponent*          K2Node_Event_spawnedVFX                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void AUmbralExitPointActor_BP_C::ExecuteUbergraph_UmbralExitPointActor_BP(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsCharacterDead_ReturnValue, bool CallFunc_IsSpawningEnabled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class ALOTF2Character* CallFunc_GetSpawnedCharacter_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, class UInteractionContext* K2Node_ComponentBoundEvent_Context, TArray<class AAnathemaPlayerCharacter_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AAnathemaPlayerCharacter_BP_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_3, float K2Node_Event_DeltaSeconds, class UFXSystemComponent* K2Node_Event_spawnedVFX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UmbralExitPointActor_BP_C", "ExecuteUbergraph_UmbralExitPointActor_BP");

	Params::AUmbralExitPointActor_BP_C_ExecuteUbergraph_UmbralExitPointActor_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsCharacterDead_ReturnValue = CallFunc_IsCharacterDead_ReturnValue;
	Parms.CallFunc_IsSpawningEnabled_ReturnValue = CallFunc_IsSpawningEnabled_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetSpawnedCharacter_ReturnValue = CallFunc_GetSpawnedCharacter_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue = CallFunc_SpawnSystemAttached_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Context = K2Node_ComponentBoundEvent_Context;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_Event_spawnedVFX = K2Node_Event_spawnedVFX;

	UObject::ProcessEvent(Func, &Parms);

}

}


