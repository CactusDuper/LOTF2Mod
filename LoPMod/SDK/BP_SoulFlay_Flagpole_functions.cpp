#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SoulFlay_Flagpole.BP_SoulFlay_Flagpole_C
// (Actor)

class UClass* ABP_SoulFlay_Flagpole_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SoulFlay_Flagpole_C");

	return Clss;
}


// BP_SoulFlay_Flagpole_C BP_SoulFlay_Flagpole.Default__BP_SoulFlay_Flagpole_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SoulFlay_Flagpole_C* ABP_SoulFlay_Flagpole_C::GetDefaultObj()
{
	static class ABP_SoulFlay_Flagpole_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SoulFlay_Flagpole_C*>(ABP_SoulFlay_Flagpole_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SoulFlay_Flagpole.BP_SoulFlay_Flagpole_C.OnActorSpawned_539FC3ED458ACA8D5ED8228DF18DA30B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      SpawnedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SoulFlay_Flagpole_C::OnActorSpawned_539FC3ED458ACA8D5ED8228DF18DA30B(class AActor* SpawnedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SoulFlay_Flagpole_C", "OnActorSpawned_539FC3ED458ACA8D5ED8228DF18DA30B");

	Params::ABP_SoulFlay_Flagpole_C_OnActorSpawned_539FC3ED458ACA8D5ED8228DF18DA30B_Params Parms{};

	Parms.SpawnedActor = SpawnedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SoulFlay_Flagpole.BP_SoulFlay_Flagpole_C.OnApplySoulFlay
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVector                     PullDirection                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SoulFlay_Flagpole_C::OnApplySoulFlay(struct FVector& PullDirection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SoulFlay_Flagpole_C", "OnApplySoulFlay");

	Params::ABP_SoulFlay_Flagpole_C_OnApplySoulFlay_Params Parms{};

	Parms.PullDirection = PullDirection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SoulFlay_Flagpole.BP_SoulFlay_Flagpole_C.SetOwningRaft
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_SoulFlay_Raft_C*         OwningRaft                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SoulFlay_Flagpole_C::SetOwningRaft(class ABP_SoulFlay_Raft_C* OwningRaft)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SoulFlay_Flagpole_C", "SetOwningRaft");

	Params::ABP_SoulFlay_Flagpole_C_SetOwningRaft_Params Parms{};

	Parms.OwningRaft = OwningRaft;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SoulFlay_Flagpole.BP_SoulFlay_Flagpole_C.GetLinkedLocation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SoulFlay_Flagpole_C::GetLinkedLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SoulFlay_Flagpole_C", "GetLinkedLocation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SoulFlay_Flagpole.BP_SoulFlay_Flagpole_C.MulticastSoulFlayReact
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SoulFlay_Flagpole_C::MulticastSoulFlayReact()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SoulFlay_Flagpole_C", "MulticastSoulFlayReact");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SoulFlay_Flagpole.BP_SoulFlay_Flagpole_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_SoulFlay_Flagpole_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SoulFlay_Flagpole_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SoulFlay_Flagpole.BP_SoulFlay_Flagpole_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SoulFlay_Flagpole_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SoulFlay_Flagpole_C", "ReceiveEndPlay");

	Params::ABP_SoulFlay_Flagpole_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SoulFlay_Flagpole.BP_SoulFlay_Flagpole_C.ExecuteUbergraph_BP_SoulFlay_Flagpole
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_spawnedActor                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_pullDirection                                       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SoulFlay_Raft_C*         K2Node_CustomEvent_OwningRaft                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UHexReplaceChildActorForMultiplayerLatent*CallFunc_ReplaceChildActorForMultiplayer_ReturnValue             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue                (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveGameplayEffectByHandle_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHexSoulFlayableObject_SimpleYankableDude_BP_C*K2Node_DynamicCast_AsHex_Soul_Flayable_Object_Simple_Yankable_Dude_BP(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SoulFlay_Flagpole_C::ExecuteUbergraph_BP_SoulFlay_Flagpole(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class AActor* Temp_object_Variable, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, class AActor* K2Node_CustomEvent_spawnedActor, const struct FVector& K2Node_Event_pullDirection, class ABP_SoulFlay_Raft_C* K2Node_CustomEvent_OwningRaft, bool CallFunc_IsValid_ReturnValue_1, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UHexReplaceChildActorForMultiplayerLatent* CallFunc_ReplaceChildActorForMultiplayer_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, bool CallFunc_RemoveGameplayEffectByHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class AHexSoulFlayableObject_SimpleYankableDude_BP_C* K2Node_DynamicCast_AsHex_Soul_Flayable_Object_Simple_Yankable_Dude_BP, bool K2Node_DynamicCast_bSuccess, enum class EEndPlayReason K2Node_Event_EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SoulFlay_Flagpole_C", "ExecuteUbergraph_BP_SoulFlay_Flagpole");

	Params::ABP_SoulFlay_Flagpole_C_ExecuteUbergraph_BP_SoulFlay_Flagpole_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.CallFunc_HasAuthority_ReturnValue_2 = CallFunc_HasAuthority_ReturnValue_2;
	Parms.K2Node_CustomEvent_spawnedActor = K2Node_CustomEvent_spawnedActor;
	Parms.K2Node_Event_pullDirection = K2Node_Event_pullDirection;
	Parms.K2Node_CustomEvent_OwningRaft = K2Node_CustomEvent_OwningRaft;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue_3 = CallFunc_HasAuthority_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_ReplaceChildActorForMultiplayer_ReturnValue = CallFunc_ReplaceChildActorForMultiplayer_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;
	Parms.CallFunc_RemoveGameplayEffectByHandle_ReturnValue = CallFunc_RemoveGameplayEffectByHandle_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsHex_Soul_Flayable_Object_Simple_Yankable_Dude_BP = K2Node_DynamicCast_AsHex_Soul_Flayable_Object_Simple_Yankable_Dude_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}

}


