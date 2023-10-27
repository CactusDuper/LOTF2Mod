#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_SoulFlayQuick_BP.GA_SoulFlayQuick_BP_C
// (None)

class UClass* UGA_SoulFlayQuick_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_SoulFlayQuick_BP_C");

	return Clss;
}


// GA_SoulFlayQuick_BP_C GA_SoulFlayQuick_BP.Default__GA_SoulFlayQuick_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_SoulFlayQuick_BP_C* UGA_SoulFlayQuick_BP_C::GetDefaultObj()
{
	static class UGA_SoulFlayQuick_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_SoulFlayQuick_BP_C*>(UGA_SoulFlayQuick_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_SoulFlayQuick_BP.GA_SoulFlayQuick_BP_C.K2_CanActivateAbility
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo   ActorInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FGameplayAbilitySpecHandle  Handle                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       RelevantTags                                                     (Parm, OutParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDeveloperMenuSubsystem*     CallFunc_GetEngineSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDeveloperMenuRuntimeSettingsValueByName_ReturnValue  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGA_SoulFlayQuick_BP_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags, class UDeveloperMenuSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, bool CallFunc_GetDeveloperMenuRuntimeSettingsValueByName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SoulFlayQuick_BP_C", "K2_CanActivateAbility");

	Params::UGA_SoulFlayQuick_BP_C_K2_CanActivateAbility_Params Parms{};

	Parms.ActorInfo = ActorInfo;
	Parms.Handle = Handle;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.CallFunc_GetDeveloperMenuRuntimeSettingsValueByName_ReturnValue = CallFunc_GetDeveloperMenuRuntimeSettingsValueByName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (RelevantTags != nullptr)
		*RelevantTags = std::move(Parms.RelevantTags);

	return Parms.ReturnValue;

}


// Function GA_SoulFlayQuick_BP.GA_SoulFlayQuick_BP_C.K2_ShouldAbilityRespondToEvent
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo   ActorInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FGameplayEventData          Payload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGA_SoulFlayQuick_BP_C::K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload, bool Temp_bool_Variable, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasMatchingGameplayTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SoulFlayQuick_BP_C", "K2_ShouldAbilityRespondToEvent");

	Params::UGA_SoulFlayQuick_BP_C_K2_ShouldAbilityRespondToEvent_Params Parms{};

	Parms.ActorInfo = ActorInfo;
	Parms.Payload = Payload;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_SoulFlayQuick_BP.GA_SoulFlayQuick_BP_C.OnNotifyEnd_7A9393DA44E74A872FB10B98735EC6A4
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBranchingPointNotifyPayloadBranchingPointPayload                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UGA_SoulFlayQuick_BP_C::OnNotifyEnd_7A9393DA44E74A872FB10B98735EC6A4(class FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SoulFlayQuick_BP_C", "OnNotifyEnd_7A9393DA44E74A872FB10B98735EC6A4");

	Params::UGA_SoulFlayQuick_BP_C_OnNotifyEnd_7A9393DA44E74A872FB10B98735EC6A4_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.BranchingPointPayload = BranchingPointPayload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_SoulFlayQuick_BP.GA_SoulFlayQuick_BP_C.OnNotifyBegin_7A9393DA44E74A872FB10B98735EC6A4
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBranchingPointNotifyPayloadBranchingPointPayload                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UGA_SoulFlayQuick_BP_C::OnNotifyBegin_7A9393DA44E74A872FB10B98735EC6A4(class FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SoulFlayQuick_BP_C", "OnNotifyBegin_7A9393DA44E74A872FB10B98735EC6A4");

	Params::UGA_SoulFlayQuick_BP_C_OnNotifyBegin_7A9393DA44E74A872FB10B98735EC6A4_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.BranchingPointPayload = BranchingPointPayload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_SoulFlayQuick_BP.GA_SoulFlayQuick_BP_C.OnDone_7A9393DA44E74A872FB10B98735EC6A4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EOnMontageDoneReason    DoneReason                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SoulFlayQuick_BP_C::OnDone_7A9393DA44E74A872FB10B98735EC6A4(enum class EOnMontageDoneReason DoneReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SoulFlayQuick_BP_C", "OnDone_7A9393DA44E74A872FB10B98735EC6A4");

	Params::UGA_SoulFlayQuick_BP_C_OnDone_7A9393DA44E74A872FB10B98735EC6A4_Params Parms{};

	Parms.DoneReason = DoneReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_SoulFlayQuick_BP.GA_SoulFlayQuick_BP_C.OnCancelled_7A9393DA44E74A872FB10B98735EC6A4
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_SoulFlayQuick_BP_C::OnCancelled_7A9393DA44E74A872FB10B98735EC6A4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SoulFlayQuick_BP_C", "OnCancelled_7A9393DA44E74A872FB10B98735EC6A4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_SoulFlayQuick_BP.GA_SoulFlayQuick_BP_C.OnInterrupted_7A9393DA44E74A872FB10B98735EC6A4
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_SoulFlayQuick_BP_C::OnInterrupted_7A9393DA44E74A872FB10B98735EC6A4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SoulFlayQuick_BP_C", "OnInterrupted_7A9393DA44E74A872FB10B98735EC6A4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_SoulFlayQuick_BP.GA_SoulFlayQuick_BP_C.OnBlendOut_7A9393DA44E74A872FB10B98735EC6A4
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_SoulFlayQuick_BP_C::OnBlendOut_7A9393DA44E74A872FB10B98735EC6A4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SoulFlayQuick_BP_C", "OnBlendOut_7A9393DA44E74A872FB10B98735EC6A4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_SoulFlayQuick_BP.GA_SoulFlayQuick_BP_C.OnCompleted_7A9393DA44E74A872FB10B98735EC6A4
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_SoulFlayQuick_BP_C::OnCompleted_7A9393DA44E74A872FB10B98735EC6A4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SoulFlayQuick_BP_C", "OnCompleted_7A9393DA44E74A872FB10B98735EC6A4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_SoulFlayQuick_BP.GA_SoulFlayQuick_BP_C.OnFinish_3A8DA409462B6054A3E2C2A2A2085A90
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_SoulFlayQuick_BP_C::OnFinish_3A8DA409462B6054A3E2C2A2A2085A90()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SoulFlayQuick_BP_C", "OnFinish_3A8DA409462B6054A3E2C2A2A2085A90");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_SoulFlayQuick_BP.GA_SoulFlayQuick_BP_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_SoulFlayQuick_BP_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SoulFlayQuick_BP_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_SoulFlayQuick_BP_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_SoulFlayQuick_BP.GA_SoulFlayQuick_BP_C.ExecuteUbergraph_GA_SoulFlayQuick_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_CommitAbilityCost_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_notifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBranchingPointNotifyPayloadK2Node_CustomEvent_branchingPointPayload_1                       (ConstParm, NoDestructor)
// class FName                        K2Node_CustomEvent_notifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBranchingPointNotifyPayloadK2Node_CustomEvent_branchingPointPayload                         (ConstParm, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EOnMontageDoneReason    K2Node_CustomEvent_doneReason                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_WaitDelay*      CallFunc_WaitDelay_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetAnimMontageFromTag_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnathemaTask_PlayMontage*   CallFunc_CreatePlayMontageProxy_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SoulFlayQuick_BP_C::ExecuteUbergraph_GA_SoulFlayQuick_BP(int32 EntryPoint, bool CallFunc_K2_CommitAbilityCost_ReturnValue, class FName K2Node_CustomEvent_notifyName_1, const struct FBranchingPointNotifyPayload& K2Node_CustomEvent_branchingPointPayload_1, class FName K2Node_CustomEvent_notifyName, const struct FBranchingPointNotifyPayload& K2Node_CustomEvent_branchingPointPayload, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EOnMontageDoneReason K2Node_CustomEvent_doneReason, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class UAnimMontage* CallFunc_GetAnimMontageFromTag_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class UAnathemaTask_PlayMontage* CallFunc_CreatePlayMontageProxy_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SoulFlayQuick_BP_C", "ExecuteUbergraph_GA_SoulFlayQuick_BP");

	Params::UGA_SoulFlayQuick_BP_C_ExecuteUbergraph_GA_SoulFlayQuick_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_CommitAbilityCost_ReturnValue = CallFunc_K2_CommitAbilityCost_ReturnValue;
	Parms.K2Node_CustomEvent_notifyName_1 = K2Node_CustomEvent_notifyName_1;
	Parms.K2Node_CustomEvent_branchingPointPayload_1 = K2Node_CustomEvent_branchingPointPayload_1;
	Parms.K2Node_CustomEvent_notifyName = K2Node_CustomEvent_notifyName;
	Parms.K2Node_CustomEvent_branchingPointPayload = K2Node_CustomEvent_branchingPointPayload;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_doneReason = K2Node_CustomEvent_doneReason;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_WaitDelay_ReturnValue = CallFunc_WaitDelay_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.CallFunc_GetAnimMontageFromTag_ReturnValue = CallFunc_GetAnimMontageFromTag_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_CreatePlayMontageProxy_ReturnValue = CallFunc_CreatePlayMontageProxy_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


