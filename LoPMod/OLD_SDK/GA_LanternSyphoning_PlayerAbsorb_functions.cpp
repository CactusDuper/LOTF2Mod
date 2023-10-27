#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_LanternSyphoning_PlayerAbsorb.GA_LanternSyphoning_PlayerAbsorb_C
// (None)

class UClass* UGA_LanternSyphoning_PlayerAbsorb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_LanternSyphoning_PlayerAbsorb_C");

	return Clss;
}


// GA_LanternSyphoning_PlayerAbsorb_C GA_LanternSyphoning_PlayerAbsorb.Default__GA_LanternSyphoning_PlayerAbsorb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_LanternSyphoning_PlayerAbsorb_C* UGA_LanternSyphoning_PlayerAbsorb_C::GetDefaultObj()
{
	static class UGA_LanternSyphoning_PlayerAbsorb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_LanternSyphoning_PlayerAbsorb_C*>(UGA_LanternSyphoning_PlayerAbsorb_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_LanternSyphoning_PlayerAbsorb.GA_LanternSyphoning_PlayerAbsorb_C.RemoveLanternFeedbackGameplayCue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                GameplayCueTag                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class ASoulsLanternActor*          CallFunc_GetOwningPlayerSoulsLanternActor_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_LanternSyphoning_PlayerAbsorb_C::RemoveLanternFeedbackGameplayCue(const struct FGameplayTag& GameplayCueTag, class ASoulsLanternActor* CallFunc_GetOwningPlayerSoulsLanternActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LanternSyphoning_PlayerAbsorb_C", "RemoveLanternFeedbackGameplayCue");

	Params::UGA_LanternSyphoning_PlayerAbsorb_C_RemoveLanternFeedbackGameplayCue_Params Parms{};

	Parms.GameplayCueTag = GameplayCueTag;
	Parms.CallFunc_GetOwningPlayerSoulsLanternActor_ReturnValue = CallFunc_GetOwningPlayerSoulsLanternActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LanternSyphoning_PlayerAbsorb.GA_LanternSyphoning_PlayerAbsorb_C.AddLanternFeedbackGameplayCue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                GameplayCueTag                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class ASoulsLanternActor*          CallFunc_GetOwningPlayerSoulsLanternActor_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_LanternSyphoning_PlayerAbsorb_C::AddLanternFeedbackGameplayCue(const struct FGameplayTag& GameplayCueTag, class ASoulsLanternActor* CallFunc_GetOwningPlayerSoulsLanternActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LanternSyphoning_PlayerAbsorb_C", "AddLanternFeedbackGameplayCue");

	Params::UGA_LanternSyphoning_PlayerAbsorb_C_AddLanternFeedbackGameplayCue_Params Parms{};

	Parms.GameplayCueTag = GameplayCueTag;
	Parms.CallFunc_GetOwningPlayerSoulsLanternActor_ReturnValue = CallFunc_GetOwningPlayerSoulsLanternActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LanternSyphoning_PlayerAbsorb.GA_LanternSyphoning_PlayerAbsorb_C.RemoveGameplayCue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                GameplayCueTag                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      CallFunc_MakeGameplayCueParameters_ReturnValue                   (ContainsInstancedReference)

void UGA_LanternSyphoning_PlayerAbsorb_C::RemoveGameplayCue(class AActor* TargetActor, const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LanternSyphoning_PlayerAbsorb_C", "RemoveGameplayCue");

	Params::UGA_LanternSyphoning_PlayerAbsorb_C_RemoveGameplayCue_Params Parms{};

	Parms.TargetActor = TargetActor;
	Parms.GameplayCueTag = GameplayCueTag;
	Parms.CallFunc_MakeGameplayCueParameters_ReturnValue = CallFunc_MakeGameplayCueParameters_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LanternSyphoning_PlayerAbsorb.GA_LanternSyphoning_PlayerAbsorb_C.AddGameplayCue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                GameplayCueTag                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      CallFunc_MakeGameplayCueParameters_ReturnValue                   (ContainsInstancedReference)

void UGA_LanternSyphoning_PlayerAbsorb_C::AddGameplayCue(class AActor* TargetActor, const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LanternSyphoning_PlayerAbsorb_C", "AddGameplayCue");

	Params::UGA_LanternSyphoning_PlayerAbsorb_C_AddGameplayCue_Params Parms{};

	Parms.TargetActor = TargetActor;
	Parms.GameplayCueTag = GameplayCueTag;
	Parms.CallFunc_MakeGameplayCueParameters_ReturnValue = CallFunc_MakeGameplayCueParameters_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LanternSyphoning_PlayerAbsorb.GA_LanternSyphoning_PlayerAbsorb_C.GetOwningPlayerSoulsLanternActor
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASoulsLanternActor*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            K2Node_DynamicCast_AsPlayer_Character                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEquipableInventorySoulsLantern*CallFunc_GetSoulsLanternEquipment_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ASoulsLanternActor*          CallFunc_GetSpawnedSoulsLanternActor_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class ASoulsLanternActor* UGA_LanternSyphoning_PlayerAbsorb_C::GetOwningPlayerSoulsLanternActor(class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class UEquipableInventorySoulsLantern* CallFunc_GetSoulsLanternEquipment_ReturnValue, class ASoulsLanternActor* CallFunc_GetSpawnedSoulsLanternActor_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LanternSyphoning_PlayerAbsorb_C", "GetOwningPlayerSoulsLanternActor");

	Params::UGA_LanternSyphoning_PlayerAbsorb_C_GetOwningPlayerSoulsLanternActor_Params Parms{};

	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue = CallFunc_GetOwningActorFromActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Character = K2Node_DynamicCast_AsPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSoulsLanternEquipment_ReturnValue = CallFunc_GetSoulsLanternEquipment_ReturnValue;
	Parms.CallFunc_GetSpawnedSoulsLanternActor_ReturnValue = CallFunc_GetSpawnedSoulsLanternActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_LanternSyphoning_PlayerAbsorb.GA_LanternSyphoning_PlayerAbsorb_C.OnStateInterrupted_8F2110454D4E91002E0638B0A5B8672D
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_LanternSyphoning_PlayerAbsorb_C::OnStateInterrupted_8F2110454D4E91002E0638B0A5B8672D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LanternSyphoning_PlayerAbsorb_C", "OnStateInterrupted_8F2110454D4E91002E0638B0A5B8672D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_LanternSyphoning_PlayerAbsorb.GA_LanternSyphoning_PlayerAbsorb_C.OnStateEnded_8F2110454D4E91002E0638B0A5B8672D
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_LanternSyphoning_PlayerAbsorb_C::OnStateEnded_8F2110454D4E91002E0638B0A5B8672D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LanternSyphoning_PlayerAbsorb_C", "OnStateEnded_8F2110454D4E91002E0638B0A5B8672D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_LanternSyphoning_PlayerAbsorb.GA_LanternSyphoning_PlayerAbsorb_C.OnStateInterrupted_DB2933834D3BAD8F1DD66D85DD20369A
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_LanternSyphoning_PlayerAbsorb_C::OnStateInterrupted_DB2933834D3BAD8F1DD66D85DD20369A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LanternSyphoning_PlayerAbsorb_C", "OnStateInterrupted_DB2933834D3BAD8F1DD66D85DD20369A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_LanternSyphoning_PlayerAbsorb.GA_LanternSyphoning_PlayerAbsorb_C.OnStateEnded_DB2933834D3BAD8F1DD66D85DD20369A
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_LanternSyphoning_PlayerAbsorb_C::OnStateEnded_DB2933834D3BAD8F1DD66D85DD20369A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LanternSyphoning_PlayerAbsorb_C", "OnStateEnded_DB2933834D3BAD8F1DD66D85DD20369A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_LanternSyphoning_PlayerAbsorb.GA_LanternSyphoning_PlayerAbsorb_C.SetCollisionConeLengthForSyphoning
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_LanternSyphoning_PlayerAbsorb_C::SetCollisionConeLengthForSyphoning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LanternSyphoning_PlayerAbsorb_C", "SetCollisionConeLengthForSyphoning");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_LanternSyphoning_PlayerAbsorb.GA_LanternSyphoning_PlayerAbsorb_C.ResetCollisionConeLengthAfterSyphoning
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_LanternSyphoning_PlayerAbsorb_C::ResetCollisionConeLengthAfterSyphoning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LanternSyphoning_PlayerAbsorb_C", "ResetCollisionConeLengthAfterSyphoning");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_LanternSyphoning_PlayerAbsorb.GA_LanternSyphoning_PlayerAbsorb_C.OnBeginSyphoning_BP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_LanternSyphoning_PlayerAbsorb_C::OnBeginSyphoning_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LanternSyphoning_PlayerAbsorb_C", "OnBeginSyphoning_BP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_LanternSyphoning_PlayerAbsorb.GA_LanternSyphoning_PlayerAbsorb_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_LanternSyphoning_PlayerAbsorb_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LanternSyphoning_PlayerAbsorb_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_LanternSyphoning_PlayerAbsorb.GA_LanternSyphoning_PlayerAbsorb_C.OnUpdateActiveSyphoningTargets_BP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_LanternSyphoning_PlayerAbsorb_C::OnUpdateActiveSyphoningTargets_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LanternSyphoning_PlayerAbsorb_C", "OnUpdateActiveSyphoningTargets_BP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_LanternSyphoning_PlayerAbsorb.GA_LanternSyphoning_PlayerAbsorb_C.OnEndSyphoning_BP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_LanternSyphoning_PlayerAbsorb_C::OnEndSyphoning_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LanternSyphoning_PlayerAbsorb_C", "OnEndSyphoning_BP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_LanternSyphoning_PlayerAbsorb.GA_LanternSyphoning_PlayerAbsorb_C.ExecuteUbergraph_GA_LanternSyphoning_PlayerAbsorb
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundManager_BP_C*          CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundManager_BP_C*          CallFunc_GetWorldSubsystem_ReturnValue_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_StartAbilityState*CallFunc_StartAbilityState_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_StartAbilityState*CallFunc_StartAbilityState_ReturnValue_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASoulsLanternActor*          CallFunc_GetOwningPlayerSoulsLanternActor_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ADualRealmSoulsLanternActor_BP_C*K2Node_DynamicCast_AsDual_Realm_Souls_Lantern_Actor_BP           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Collider_LanternSyphoning_C*CallFunc_GetSyphoningCollider_LanternSyphoningCollider           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            K2Node_DynamicCast_AsPlayer_Character                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAnathemaComponent*        CallFunc_GetAkComponentHead_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Set_IsNotEmpty_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue_1               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            K2Node_DynamicCast_AsPlayer_Character_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Collider_LanternSyphoning_C*K2Node_DynamicCast_AsBP_Collider_Lantern_Syphoning               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAnathemaComponent*        CallFunc_GetAkComponentHead_ReturnValue_1                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ABP_Collider_LanternSyphoning_C*K2Node_DynamicCast_AsBP_Collider_Lantern_Syphoning_1             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UpdateConeLength_NewScaleMultiplier_ImplicitCast        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_LanternSyphoning_PlayerAbsorb_C::ExecuteUbergraph_GA_LanternSyphoning_PlayerAbsorb(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName CallFunc_MakeLiteralName_ReturnValue, class UAbilityTask_StartAbilityState* CallFunc_StartAbilityState_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, class UAbilityTask_StartAbilityState* CallFunc_StartAbilityState_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue, class ASoulsLanternActor* CallFunc_GetOwningPlayerSoulsLanternActor_ReturnValue, class ADualRealmSoulsLanternActor_BP_C* K2Node_DynamicCast_AsDual_Realm_Souls_Lantern_Actor_BP, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class ABP_Collider_LanternSyphoning_C* CallFunc_GetSyphoningCollider_LanternSyphoningCollider, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess_1, class UAkAnathemaComponent* CallFunc_GetAkComponentHead_ReturnValue, bool CallFunc_Set_IsNotEmpty_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_1, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_2, class ABP_Collider_LanternSyphoning_C* K2Node_DynamicCast_AsBP_Collider_Lantern_Syphoning, bool K2Node_DynamicCast_bSuccess_3, class UAkAnathemaComponent* CallFunc_GetAkComponentHead_ReturnValue_1, class ABP_Collider_LanternSyphoning_C* K2Node_DynamicCast_AsBP_Collider_Lantern_Syphoning_1, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsValid_ReturnValue_2, double CallFunc_UpdateConeLength_NewScaleMultiplier_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LanternSyphoning_PlayerAbsorb_C", "ExecuteUbergraph_GA_LanternSyphoning_PlayerAbsorb");

	Params::UGA_LanternSyphoning_PlayerAbsorb_C_ExecuteUbergraph_GA_LanternSyphoning_PlayerAbsorb_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_1 = CallFunc_GetWorldSubsystem_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_StartAbilityState_ReturnValue = CallFunc_StartAbilityState_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue_1 = CallFunc_MakeLiteralName_ReturnValue_1;
	Parms.CallFunc_StartAbilityState_ReturnValue_1 = CallFunc_StartAbilityState_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_1 = CallFunc_NotEqual_NameName_ReturnValue_1;
	Parms.CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue = CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute = CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue = CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_GetOwningPlayerSoulsLanternActor_ReturnValue = CallFunc_GetOwningPlayerSoulsLanternActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsDual_Realm_Souls_Lantern_Actor_BP = K2Node_DynamicCast_AsDual_Realm_Souls_Lantern_Actor_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetSyphoningCollider_LanternSyphoningCollider = CallFunc_GetSyphoningCollider_LanternSyphoningCollider;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue = CallFunc_GetOwningActorFromActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Character = K2Node_DynamicCast_AsPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetAkComponentHead_ReturnValue = CallFunc_GetAkComponentHead_ReturnValue;
	Parms.CallFunc_Set_IsNotEmpty_ReturnValue = CallFunc_Set_IsNotEmpty_ReturnValue;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue_1 = CallFunc_GetOwningActorFromActorInfo_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPlayer_Character_1 = K2Node_DynamicCast_AsPlayer_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsBP_Collider_Lantern_Syphoning = K2Node_DynamicCast_AsBP_Collider_Lantern_Syphoning;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetAkComponentHead_ReturnValue_1 = CallFunc_GetAkComponentHead_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Collider_Lantern_Syphoning_1 = K2Node_DynamicCast_AsBP_Collider_Lantern_Syphoning_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_UpdateConeLength_NewScaleMultiplier_ImplicitCast = CallFunc_UpdateConeLength_NewScaleMultiplier_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


