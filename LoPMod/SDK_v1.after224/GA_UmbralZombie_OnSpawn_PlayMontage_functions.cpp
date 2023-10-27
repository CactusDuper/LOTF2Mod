#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_UmbralZombie_OnSpawn_PlayMontage.GA_UmbralZombie_OnSpawn_PlayMontage_C
// (None)

class UClass* UGA_UmbralZombie_OnSpawn_PlayMontage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_UmbralZombie_OnSpawn_PlayMontage_C");

	return Clss;
}


// GA_UmbralZombie_OnSpawn_PlayMontage_C GA_UmbralZombie_OnSpawn_PlayMontage.Default__GA_UmbralZombie_OnSpawn_PlayMontage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_UmbralZombie_OnSpawn_PlayMontage_C* UGA_UmbralZombie_OnSpawn_PlayMontage_C::GetDefaultObj()
{
	static class UGA_UmbralZombie_OnSpawn_PlayMontage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_UmbralZombie_OnSpawn_PlayMontage_C*>(UGA_UmbralZombie_OnSpawn_PlayMontage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_UmbralZombie_OnSpawn_PlayMontage.GA_UmbralZombie_OnSpawn_PlayMontage_C.OnNotifyEnd_A92C9DCF4606E09322E3E3BCF7969A6D
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBranchingPointNotifyPayloadBranchingPointPayload                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UGA_UmbralZombie_OnSpawn_PlayMontage_C::OnNotifyEnd_A92C9DCF4606E09322E3E3BCF7969A6D(class FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_UmbralZombie_OnSpawn_PlayMontage_C", "OnNotifyEnd_A92C9DCF4606E09322E3E3BCF7969A6D");

	Params::UGA_UmbralZombie_OnSpawn_PlayMontage_C_OnNotifyEnd_A92C9DCF4606E09322E3E3BCF7969A6D_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.BranchingPointPayload = BranchingPointPayload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_UmbralZombie_OnSpawn_PlayMontage.GA_UmbralZombie_OnSpawn_PlayMontage_C.OnNotifyBegin_A92C9DCF4606E09322E3E3BCF7969A6D
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBranchingPointNotifyPayloadBranchingPointPayload                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UGA_UmbralZombie_OnSpawn_PlayMontage_C::OnNotifyBegin_A92C9DCF4606E09322E3E3BCF7969A6D(class FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_UmbralZombie_OnSpawn_PlayMontage_C", "OnNotifyBegin_A92C9DCF4606E09322E3E3BCF7969A6D");

	Params::UGA_UmbralZombie_OnSpawn_PlayMontage_C_OnNotifyBegin_A92C9DCF4606E09322E3E3BCF7969A6D_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.BranchingPointPayload = BranchingPointPayload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_UmbralZombie_OnSpawn_PlayMontage.GA_UmbralZombie_OnSpawn_PlayMontage_C.OnDone_A92C9DCF4606E09322E3E3BCF7969A6D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EOnMontageDoneReason    DoneReason                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_UmbralZombie_OnSpawn_PlayMontage_C::OnDone_A92C9DCF4606E09322E3E3BCF7969A6D(enum class EOnMontageDoneReason DoneReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_UmbralZombie_OnSpawn_PlayMontage_C", "OnDone_A92C9DCF4606E09322E3E3BCF7969A6D");

	Params::UGA_UmbralZombie_OnSpawn_PlayMontage_C_OnDone_A92C9DCF4606E09322E3E3BCF7969A6D_Params Parms{};

	Parms.DoneReason = DoneReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_UmbralZombie_OnSpawn_PlayMontage.GA_UmbralZombie_OnSpawn_PlayMontage_C.OnCancelled_A92C9DCF4606E09322E3E3BCF7969A6D
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_UmbralZombie_OnSpawn_PlayMontage_C::OnCancelled_A92C9DCF4606E09322E3E3BCF7969A6D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_UmbralZombie_OnSpawn_PlayMontage_C", "OnCancelled_A92C9DCF4606E09322E3E3BCF7969A6D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_UmbralZombie_OnSpawn_PlayMontage.GA_UmbralZombie_OnSpawn_PlayMontage_C.OnInterrupted_A92C9DCF4606E09322E3E3BCF7969A6D
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_UmbralZombie_OnSpawn_PlayMontage_C::OnInterrupted_A92C9DCF4606E09322E3E3BCF7969A6D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_UmbralZombie_OnSpawn_PlayMontage_C", "OnInterrupted_A92C9DCF4606E09322E3E3BCF7969A6D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_UmbralZombie_OnSpawn_PlayMontage.GA_UmbralZombie_OnSpawn_PlayMontage_C.OnBlendOut_A92C9DCF4606E09322E3E3BCF7969A6D
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_UmbralZombie_OnSpawn_PlayMontage_C::OnBlendOut_A92C9DCF4606E09322E3E3BCF7969A6D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_UmbralZombie_OnSpawn_PlayMontage_C", "OnBlendOut_A92C9DCF4606E09322E3E3BCF7969A6D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_UmbralZombie_OnSpawn_PlayMontage.GA_UmbralZombie_OnSpawn_PlayMontage_C.OnCompleted_A92C9DCF4606E09322E3E3BCF7969A6D
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_UmbralZombie_OnSpawn_PlayMontage_C::OnCompleted_A92C9DCF4606E09322E3E3BCF7969A6D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_UmbralZombie_OnSpawn_PlayMontage_C", "OnCompleted_A92C9DCF4606E09322E3E3BCF7969A6D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_UmbralZombie_OnSpawn_PlayMontage.GA_UmbralZombie_OnSpawn_PlayMontage_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_UmbralZombie_OnSpawn_PlayMontage_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_UmbralZombie_OnSpawn_PlayMontage_C", "K2_OnEndAbility");

	Params::UGA_UmbralZombie_OnSpawn_PlayMontage_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_UmbralZombie_OnSpawn_PlayMontage.GA_UmbralZombie_OnSpawn_PlayMontage_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_UmbralZombie_OnSpawn_PlayMontage_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_UmbralZombie_OnSpawn_PlayMontage_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_UmbralZombie_OnSpawn_PlayMontage.GA_UmbralZombie_OnSpawn_PlayMontage_C.ExecuteUbergraph_GA_UmbralZombie_OnSpawn_PlayMontage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_notifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBranchingPointNotifyPayloadK2Node_CustomEvent_branchingPointPayload_1                       (ConstParm, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_notifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBranchingPointNotifyPayloadK2Node_CustomEvent_branchingPointPayload                         (ConstParm, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EOnMontageDoneReason    K2Node_CustomEvent_doneReason                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// class UCharacterConfigComponent*   CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetAnimMontageByTag_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnathemaTask_PlayMontage*   CallFunc_CreatePlayMontageProxy_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ALOTF2Character*             K2Node_DynamicCast_AsLOTF2Character                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_UmbralZombie_OnSpawn_PlayMontage_C::ExecuteUbergraph_GA_UmbralZombie_OnSpawn_PlayMontage(int32 EntryPoint, class FName K2Node_CustomEvent_notifyName_1, const struct FBranchingPointNotifyPayload& K2Node_CustomEvent_branchingPointPayload_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_notifyName, const struct FBranchingPointNotifyPayload& K2Node_CustomEvent_branchingPointPayload, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EOnMontageDoneReason K2Node_CustomEvent_doneReason, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, class UCharacterConfigComponent* CallFunc_GetComponentByClass_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue, class UAnimMontage* CallFunc_GetAnimMontageByTag_ReturnValue, class UAnathemaTask_PlayMontage* CallFunc_CreatePlayMontageProxy_ReturnValue, bool K2Node_Event_bWasCancelled, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_UmbralZombie_OnSpawn_PlayMontage_C", "ExecuteUbergraph_GA_UmbralZombie_OnSpawn_PlayMontage");

	Params::UGA_UmbralZombie_OnSpawn_PlayMontage_C_ExecuteUbergraph_GA_UmbralZombie_OnSpawn_PlayMontage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_notifyName_1 = K2Node_CustomEvent_notifyName_1;
	Parms.K2Node_CustomEvent_branchingPointPayload_1 = K2Node_CustomEvent_branchingPointPayload_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_notifyName = K2Node_CustomEvent_notifyName;
	Parms.K2Node_CustomEvent_branchingPointPayload = K2Node_CustomEvent_branchingPointPayload;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_doneReason = K2Node_CustomEvent_doneReason;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue = CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue;
	Parms.CallFunc_GetAnimMontageByTag_ReturnValue = CallFunc_GetAnimMontageByTag_ReturnValue;
	Parms.CallFunc_CreatePlayMontageProxy_ReturnValue = CallFunc_CreatePlayMontageProxy_ReturnValue;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1 = CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsLOTF2Character = K2Node_DynamicCast_AsLOTF2Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


