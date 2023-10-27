#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_InLanternShardMenu.GA_InLanternShardMenu_C
// (None)

class UClass* UGA_InLanternShardMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_InLanternShardMenu_C");

	return Clss;
}


// GA_InLanternShardMenu_C GA_InLanternShardMenu.Default__GA_InLanternShardMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_InLanternShardMenu_C* UGA_InLanternShardMenu_C::GetDefaultObj()
{
	static class UGA_InLanternShardMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_InLanternShardMenu_C*>(UGA_InLanternShardMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_InLanternShardMenu.GA_InLanternShardMenu_C.SetPlayerAsLevelSequenceOrigin
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelSequence*              LevelSequence                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Settings_Pause_At_End                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FMovieSceneSequencePlaybackSettingsK2Node_MakeStruct_MovieSceneSequencePlaybackSettings             (NoDestructor)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ALevelSequenceActor*         CallFunc_CreateLevelSequencePlayer_OutActor                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_CreateLevelSequencePlayer_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_GetSequencePlayer_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDefaultLevelSequenceInstanceData*K2Node_DynamicCast_AsDefault_Level_Sequence_Instance_Data        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_CastToCharacter_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScaledCapsuleHalfHeight_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeVector_Z_ImplicitCast                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class ULevelSequencePlayer* UGA_InLanternShardMenu_C::SetPlayerAsLevelSequenceOrigin(class ULevelSequence* LevelSequence, bool Settings_Pause_At_End, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, const struct FMovieSceneSequencePlaybackSettings& K2Node_MakeStruct_MovieSceneSequencePlaybackSettings, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, class ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, class ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue, class UDefaultLevelSequenceInstanceData* K2Node_DynamicCast_AsDefault_Level_Sequence_Instance_Data, bool K2Node_DynamicCast_bSuccess, class ACharacter* CallFunc_CastToCharacter_ReturnValue, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, double CallFunc_MakeVector_Z_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_InLanternShardMenu_C", "SetPlayerAsLevelSequenceOrigin");

	Params::UGA_InLanternShardMenu_C_SetPlayerAsLevelSequenceOrigin_Params Parms{};

	Parms.LevelSequence = LevelSequence;
	Parms.Settings_Pause_At_End = Settings_Pause_At_End;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue = CallFunc_GetOwningActorFromActorInfo_ReturnValue;
	Parms.K2Node_MakeStruct_MovieSceneSequencePlaybackSettings = K2Node_MakeStruct_MovieSceneSequencePlaybackSettings;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_CreateLevelSequencePlayer_OutActor = CallFunc_CreateLevelSequencePlayer_OutActor;
	Parms.CallFunc_CreateLevelSequencePlayer_ReturnValue = CallFunc_CreateLevelSequencePlayer_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetSequencePlayer_ReturnValue = CallFunc_GetSequencePlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsDefault_Level_Sequence_Instance_Data = K2Node_DynamicCast_AsDefault_Level_Sequence_Instance_Data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CastToCharacter_ReturnValue = CallFunc_CastToCharacter_ReturnValue;
	Parms.CallFunc_GetScaledCapsuleHalfHeight_ReturnValue = CallFunc_GetScaledCapsuleHalfHeight_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_MakeVector_Z_ImplicitCast = CallFunc_MakeVector_Z_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_InLanternShardMenu.GA_InLanternShardMenu_C.OnNotifyEnd_D68F23394418A75FDBA6698A8000F3C0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBranchingPointNotifyPayloadBranchingPointPayload                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UGA_InLanternShardMenu_C::OnNotifyEnd_D68F23394418A75FDBA6698A8000F3C0(class FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_InLanternShardMenu_C", "OnNotifyEnd_D68F23394418A75FDBA6698A8000F3C0");

	Params::UGA_InLanternShardMenu_C_OnNotifyEnd_D68F23394418A75FDBA6698A8000F3C0_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.BranchingPointPayload = BranchingPointPayload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_InLanternShardMenu.GA_InLanternShardMenu_C.OnNotifyBegin_D68F23394418A75FDBA6698A8000F3C0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBranchingPointNotifyPayloadBranchingPointPayload                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UGA_InLanternShardMenu_C::OnNotifyBegin_D68F23394418A75FDBA6698A8000F3C0(class FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_InLanternShardMenu_C", "OnNotifyBegin_D68F23394418A75FDBA6698A8000F3C0");

	Params::UGA_InLanternShardMenu_C_OnNotifyBegin_D68F23394418A75FDBA6698A8000F3C0_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.BranchingPointPayload = BranchingPointPayload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_InLanternShardMenu.GA_InLanternShardMenu_C.OnDone_D68F23394418A75FDBA6698A8000F3C0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EOnMontageDoneReason    DoneReason                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_InLanternShardMenu_C::OnDone_D68F23394418A75FDBA6698A8000F3C0(enum class EOnMontageDoneReason DoneReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_InLanternShardMenu_C", "OnDone_D68F23394418A75FDBA6698A8000F3C0");

	Params::UGA_InLanternShardMenu_C_OnDone_D68F23394418A75FDBA6698A8000F3C0_Params Parms{};

	Parms.DoneReason = DoneReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_InLanternShardMenu.GA_InLanternShardMenu_C.OnCancelled_D68F23394418A75FDBA6698A8000F3C0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_InLanternShardMenu_C::OnCancelled_D68F23394418A75FDBA6698A8000F3C0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_InLanternShardMenu_C", "OnCancelled_D68F23394418A75FDBA6698A8000F3C0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_InLanternShardMenu.GA_InLanternShardMenu_C.OnInterrupted_D68F23394418A75FDBA6698A8000F3C0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_InLanternShardMenu_C::OnInterrupted_D68F23394418A75FDBA6698A8000F3C0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_InLanternShardMenu_C", "OnInterrupted_D68F23394418A75FDBA6698A8000F3C0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_InLanternShardMenu.GA_InLanternShardMenu_C.OnBlendOut_D68F23394418A75FDBA6698A8000F3C0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_InLanternShardMenu_C::OnBlendOut_D68F23394418A75FDBA6698A8000F3C0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_InLanternShardMenu_C", "OnBlendOut_D68F23394418A75FDBA6698A8000F3C0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_InLanternShardMenu.GA_InLanternShardMenu_C.OnCompleted_D68F23394418A75FDBA6698A8000F3C0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_InLanternShardMenu_C::OnCompleted_D68F23394418A75FDBA6698A8000F3C0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_InLanternShardMenu_C", "OnCompleted_D68F23394418A75FDBA6698A8000F3C0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_InLanternShardMenu.GA_InLanternShardMenu_C.OnNotifyEnd_7128C6DC45FEB79FA68140A089947FF2
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBranchingPointNotifyPayloadBranchingPointPayload                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UGA_InLanternShardMenu_C::OnNotifyEnd_7128C6DC45FEB79FA68140A089947FF2(class FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_InLanternShardMenu_C", "OnNotifyEnd_7128C6DC45FEB79FA68140A089947FF2");

	Params::UGA_InLanternShardMenu_C_OnNotifyEnd_7128C6DC45FEB79FA68140A089947FF2_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.BranchingPointPayload = BranchingPointPayload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_InLanternShardMenu.GA_InLanternShardMenu_C.OnNotifyBegin_7128C6DC45FEB79FA68140A089947FF2
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBranchingPointNotifyPayloadBranchingPointPayload                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UGA_InLanternShardMenu_C::OnNotifyBegin_7128C6DC45FEB79FA68140A089947FF2(class FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_InLanternShardMenu_C", "OnNotifyBegin_7128C6DC45FEB79FA68140A089947FF2");

	Params::UGA_InLanternShardMenu_C_OnNotifyBegin_7128C6DC45FEB79FA68140A089947FF2_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.BranchingPointPayload = BranchingPointPayload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_InLanternShardMenu.GA_InLanternShardMenu_C.OnDone_7128C6DC45FEB79FA68140A089947FF2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EOnMontageDoneReason    DoneReason                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_InLanternShardMenu_C::OnDone_7128C6DC45FEB79FA68140A089947FF2(enum class EOnMontageDoneReason DoneReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_InLanternShardMenu_C", "OnDone_7128C6DC45FEB79FA68140A089947FF2");

	Params::UGA_InLanternShardMenu_C_OnDone_7128C6DC45FEB79FA68140A089947FF2_Params Parms{};

	Parms.DoneReason = DoneReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_InLanternShardMenu.GA_InLanternShardMenu_C.OnCancelled_7128C6DC45FEB79FA68140A089947FF2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_InLanternShardMenu_C::OnCancelled_7128C6DC45FEB79FA68140A089947FF2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_InLanternShardMenu_C", "OnCancelled_7128C6DC45FEB79FA68140A089947FF2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_InLanternShardMenu.GA_InLanternShardMenu_C.OnInterrupted_7128C6DC45FEB79FA68140A089947FF2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_InLanternShardMenu_C::OnInterrupted_7128C6DC45FEB79FA68140A089947FF2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_InLanternShardMenu_C", "OnInterrupted_7128C6DC45FEB79FA68140A089947FF2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_InLanternShardMenu.GA_InLanternShardMenu_C.OnBlendOut_7128C6DC45FEB79FA68140A089947FF2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_InLanternShardMenu_C::OnBlendOut_7128C6DC45FEB79FA68140A089947FF2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_InLanternShardMenu_C", "OnBlendOut_7128C6DC45FEB79FA68140A089947FF2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_InLanternShardMenu.GA_InLanternShardMenu_C.OnCompleted_7128C6DC45FEB79FA68140A089947FF2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_InLanternShardMenu_C::OnCompleted_7128C6DC45FEB79FA68140A089947FF2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_InLanternShardMenu_C", "OnCompleted_7128C6DC45FEB79FA68140A089947FF2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_InLanternShardMenu.GA_InLanternShardMenu_C.EventReceived_760EE38741E1946FEDFDCA94095BD97B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          Payload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_InLanternShardMenu_C::EventReceived_760EE38741E1946FEDFDCA94095BD97B(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_InLanternShardMenu_C", "EventReceived_760EE38741E1946FEDFDCA94095BD97B");

	Params::UGA_InLanternShardMenu_C_EventReceived_760EE38741E1946FEDFDCA94095BD97B_Params Parms{};

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_InLanternShardMenu.GA_InLanternShardMenu_C.EventReceived_1E9A0B0C477A94BB052F3DA5B929A8C6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          Payload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_InLanternShardMenu_C::EventReceived_1E9A0B0C477A94BB052F3DA5B929A8C6(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_InLanternShardMenu_C", "EventReceived_1E9A0B0C477A94BB052F3DA5B929A8C6");

	Params::UGA_InLanternShardMenu_C_EventReceived_1E9A0B0C477A94BB052F3DA5B929A8C6_Params Parms{};

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_InLanternShardMenu.GA_InLanternShardMenu_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_InLanternShardMenu_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_InLanternShardMenu_C", "K2_OnEndAbility");

	Params::UGA_InLanternShardMenu_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_InLanternShardMenu.GA_InLanternShardMenu_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_InLanternShardMenu_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_InLanternShardMenu_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_InLanternShardMenu_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_InLanternShardMenu.GA_InLanternShardMenu_C.ExecuteUbergraph_GA_InLanternShardMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetAnimMontageFromTag_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_notifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBranchingPointNotifyPayloadK2Node_CustomEvent_branchingPointPayload_3                       (ConstParm, NoDestructor)
// class UAnathemaTask_PlayMontage*   CallFunc_CreatePlayMontageProxy_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_notifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBranchingPointNotifyPayloadK2Node_CustomEvent_branchingPointPayload_2                       (ConstParm, NoDestructor)
// enum class EOnMontageDoneReason    K2Node_CustomEvent_doneReason_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_notifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBranchingPointNotifyPayloadK2Node_CustomEvent_branchingPointPayload_1                       (ConstParm, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_notifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBranchingPointNotifyPayloadK2Node_CustomEvent_branchingPointPayload                         (ConstParm, NoDestructor)
// enum class EOnMontageDoneReason    K2Node_CustomEvent_doneReason                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_CustomEvent_Payload_1                                     (None)
// struct FGameplayEventData          Temp_struct_Variable                                             (None)
// class UAbilityTask_WaitGameplayEvent*CallFunc_WaitGameplayEvent_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_CustomEvent_Payload                                       (None)
// struct FGameplayEventData          Temp_struct_Variable_1                                           (None)
// class UAbilityTask_WaitGameplayEvent*CallFunc_WaitGameplayEvent_ReturnValue_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue_1               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_CastToCharacter_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalPlayerController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_SetPlayerAsLevelSequenceOrigin_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_SetPlayerAsLevelSequenceOrigin_ReturnValue_1            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue_2               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetAnimMontageFromTag_ReturnValue_1                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnathemaTask_PlayMontage*   CallFunc_CreatePlayMontageProxy_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_InLanternShardMenu_C::ExecuteUbergraph_GA_InLanternShardMenu(int32 EntryPoint, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class UAnimMontage* CallFunc_GetAnimMontageFromTag_ReturnValue, class FName K2Node_CustomEvent_notifyName_3, const struct FBranchingPointNotifyPayload& K2Node_CustomEvent_branchingPointPayload_3, class UAnathemaTask_PlayMontage* CallFunc_CreatePlayMontageProxy_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class FName K2Node_CustomEvent_notifyName_2, const struct FBranchingPointNotifyPayload& K2Node_CustomEvent_branchingPointPayload_2, enum class EOnMontageDoneReason K2Node_CustomEvent_doneReason_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_notifyName_1, const struct FBranchingPointNotifyPayload& K2Node_CustomEvent_branchingPointPayload_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_notifyName, const struct FBranchingPointNotifyPayload& K2Node_CustomEvent_branchingPointPayload, enum class EOnMontageDoneReason K2Node_CustomEvent_doneReason, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, const struct FGameplayEventData& K2Node_CustomEvent_Payload_1, const struct FGameplayEventData& Temp_struct_Variable, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, const struct FGameplayEventData& K2Node_CustomEvent_Payload, const struct FGameplayEventData& Temp_struct_Variable_1, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_1, class ACharacter* CallFunc_CastToCharacter_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsLocalPlayerController_ReturnValue, bool K2Node_Event_bWasCancelled, class ULevelSequencePlayer* CallFunc_SetPlayerAsLevelSequenceOrigin_ReturnValue, class ULevelSequencePlayer* CallFunc_SetPlayerAsLevelSequenceOrigin_ReturnValue_1, const struct FGameplayEventData& K2Node_Event_EventData, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_2, class UAnimMontage* CallFunc_GetAnimMontageFromTag_ReturnValue_1, class UAnathemaTask_PlayMontage* CallFunc_CreatePlayMontageProxy_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_InLanternShardMenu_C", "ExecuteUbergraph_GA_InLanternShardMenu");

	Params::UGA_InLanternShardMenu_C_ExecuteUbergraph_GA_InLanternShardMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue = CallFunc_GetOwningActorFromActorInfo_ReturnValue;
	Parms.CallFunc_GetAnimMontageFromTag_ReturnValue = CallFunc_GetAnimMontageFromTag_ReturnValue;
	Parms.K2Node_CustomEvent_notifyName_3 = K2Node_CustomEvent_notifyName_3;
	Parms.K2Node_CustomEvent_branchingPointPayload_3 = K2Node_CustomEvent_branchingPointPayload_3;
	Parms.CallFunc_CreatePlayMontageProxy_ReturnValue = CallFunc_CreatePlayMontageProxy_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_notifyName_2 = K2Node_CustomEvent_notifyName_2;
	Parms.K2Node_CustomEvent_branchingPointPayload_2 = K2Node_CustomEvent_branchingPointPayload_2;
	Parms.K2Node_CustomEvent_doneReason_1 = K2Node_CustomEvent_doneReason_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CustomEvent_notifyName_1 = K2Node_CustomEvent_notifyName_1;
	Parms.K2Node_CustomEvent_branchingPointPayload_1 = K2Node_CustomEvent_branchingPointPayload_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CustomEvent_notifyName = K2Node_CustomEvent_notifyName;
	Parms.K2Node_CustomEvent_branchingPointPayload = K2Node_CustomEvent_branchingPointPayload;
	Parms.K2Node_CustomEvent_doneReason = K2Node_CustomEvent_doneReason;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.K2Node_CustomEvent_Payload_1 = K2Node_CustomEvent_Payload_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_WaitGameplayEvent_ReturnValue = CallFunc_WaitGameplayEvent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.K2Node_CustomEvent_Payload = K2Node_CustomEvent_Payload;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_WaitGameplayEvent_ReturnValue_1 = CallFunc_WaitGameplayEvent_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue_1 = CallFunc_GetOwningActorFromActorInfo_ReturnValue_1;
	Parms.CallFunc_CastToCharacter_ReturnValue = CallFunc_CastToCharacter_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_IsLocalPlayerController_ReturnValue = CallFunc_IsLocalPlayerController_ReturnValue;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_SetPlayerAsLevelSequenceOrigin_ReturnValue = CallFunc_SetPlayerAsLevelSequenceOrigin_ReturnValue;
	Parms.CallFunc_SetPlayerAsLevelSequenceOrigin_ReturnValue_1 = CallFunc_SetPlayerAsLevelSequenceOrigin_ReturnValue_1;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue_2 = CallFunc_GetOwningActorFromActorInfo_ReturnValue_2;
	Parms.CallFunc_GetAnimMontageFromTag_ReturnValue_1 = CallFunc_GetAnimMontageFromTag_ReturnValue_1;
	Parms.CallFunc_CreatePlayMontageProxy_ReturnValue_1 = CallFunc_CreatePlayMontageProxy_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


