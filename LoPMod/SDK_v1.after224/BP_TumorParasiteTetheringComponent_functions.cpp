#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TumorParasiteTetheringComponent.BP_TumorParasiteTetheringComponent_C
// (None)

class UClass* UBP_TumorParasiteTetheringComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TumorParasiteTetheringComponent_C");

	return Clss;
}


// BP_TumorParasiteTetheringComponent_C BP_TumorParasiteTetheringComponent.Default__BP_TumorParasiteTetheringComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_TumorParasiteTetheringComponent_C* UBP_TumorParasiteTetheringComponent_C::GetDefaultObj()
{
	static class UBP_TumorParasiteTetheringComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_TumorParasiteTetheringComponent_C*>(UBP_TumorParasiteTetheringComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_TumorParasiteTetheringComponent.BP_TumorParasiteTetheringComponent_C.OnStartedTethering_BP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_TumorParasiteTetheringComponent_C::OnStartedTethering_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TumorParasiteTetheringComponent_C", "OnStartedTethering_BP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TumorParasiteTetheringComponent.BP_TumorParasiteTetheringComponent_C.OnDeath_Event_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      InstigatorActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       InstigatorTags                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               bDeathWasObserved                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TumorParasiteTetheringComponent_C::OnDeath_Event_0(class AActor* InstigatorActor, struct FGameplayTagContainer& InstigatorTags, bool bDeathWasObserved)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TumorParasiteTetheringComponent_C", "OnDeath_Event_0");

	Params::UBP_TumorParasiteTetheringComponent_C_OnDeath_Event_0_Params Parms{};

	Parms.InstigatorActor = InstigatorActor;
	Parms.InstigatorTags = InstigatorTags;
	Parms.bDeathWasObserved = bDeathWasObserved;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TumorParasiteTetheringComponent.BP_TumorParasiteTetheringComponent_C.DespawnOwnerParasite
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_TumorParasiteTetheringComponent_C::DespawnOwnerParasite()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TumorParasiteTetheringComponent_C", "DespawnOwnerParasite");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TumorParasiteTetheringComponent.BP_TumorParasiteTetheringComponent_C.ExecuteUbergraph_BP_TumorParasiteTetheringComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALOTF2Character*             CallFunc_GetLinkedCharacter_ReturnValue                          (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_InstigatorActor                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_CustomEvent_InstigatorTags                                (ConstParm)
// bool                               K2Node_CustomEvent_bDeathWasObserved                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FActiveGameplayEffectHandle>CallFunc_ApplyGameplayEffectsContainerToSelf_ReturnValue         (ReferenceParm)
// class ALOTF2Character*             K2Node_DynamicCast_AsLOTF2Character                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_TumorParasiteTetheringComponent_C::ExecuteUbergraph_BP_TumorParasiteTetheringComponent(int32 EntryPoint, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class ALOTF2Character* CallFunc_GetLinkedCharacter_ReturnValue, class AActor* K2Node_CustomEvent_InstigatorActor, const struct FGameplayTagContainer& K2Node_CustomEvent_InstigatorTags, bool K2Node_CustomEvent_bDeathWasObserved, class AActor* CallFunc_GetOwner_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_2, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_ApplyGameplayEffectsContainerToSelf_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TumorParasiteTetheringComponent_C", "ExecuteUbergraph_BP_TumorParasiteTetheringComponent");

	Params::UBP_TumorParasiteTetheringComponent_C_ExecuteUbergraph_BP_TumorParasiteTetheringComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetLinkedCharacter_ReturnValue = CallFunc_GetLinkedCharacter_ReturnValue;
	Parms.K2Node_CustomEvent_InstigatorActor = K2Node_CustomEvent_InstigatorActor;
	Parms.K2Node_CustomEvent_InstigatorTags = K2Node_CustomEvent_InstigatorTags;
	Parms.K2Node_CustomEvent_bDeathWasObserved = K2Node_CustomEvent_bDeathWasObserved;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue_2 = CallFunc_GetOwner_ReturnValue_2;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_ApplyGameplayEffectsContainerToSelf_ReturnValue = CallFunc_ApplyGameplayEffectsContainerToSelf_ReturnValue;
	Parms.K2Node_DynamicCast_AsLOTF2Character = K2Node_DynamicCast_AsLOTF2Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}


