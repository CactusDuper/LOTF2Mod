#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_EnvInteraction_InfluencerTrigger.BP_EnvInteraction_InfluencerTrigger_C
// (Actor)

class UClass* ABP_EnvInteraction_InfluencerTrigger_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_EnvInteraction_InfluencerTrigger_C");

	return Clss;
}


// BP_EnvInteraction_InfluencerTrigger_C BP_EnvInteraction_InfluencerTrigger.Default__BP_EnvInteraction_InfluencerTrigger_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_EnvInteraction_InfluencerTrigger_C* ABP_EnvInteraction_InfluencerTrigger_C::GetDefaultObj()
{
	static class ABP_EnvInteraction_InfluencerTrigger_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_EnvInteraction_InfluencerTrigger_C*>(ABP_EnvInteraction_InfluencerTrigger_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_EnvInteraction_InfluencerTrigger.BP_EnvInteraction_InfluencerTrigger_C.CheckInfluencers
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UBP_Comp_EnvInteraction_C*>New_Influencers                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class AActor*>              Overlaping                                                       (Edit, BlueprintVisible, DisableEditOnTemplate)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_Comp_EnvInteraction_C*   CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetOverlappingActors_OverlappingActors                  (ReferenceParm)

void ABP_EnvInteraction_InfluencerTrigger_C::CheckInfluencers(TArray<class UBP_Comp_EnvInteraction_C*>& New_Influencers, const TArray<class AActor*>& Overlaping, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UBP_Comp_EnvInteraction_C* CallFunc_Array_Get_Item, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EnvInteraction_InfluencerTrigger_C", "CheckInfluencers");

	Params::ABP_EnvInteraction_InfluencerTrigger_C_CheckInfluencers_Params Parms{};

	Parms.New_Influencers = New_Influencers;
	Parms.Overlaping = Overlaping;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetOverlappingActors_OverlappingActors = CallFunc_GetOverlappingActors_OverlappingActors;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EnvInteraction_InfluencerTrigger.BP_EnvInteraction_InfluencerTrigger_C.ActivateInfluencer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_Comp_EnvInteraction_C*   InputPin                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_EnvInteraction_InfluencerTrigger_C::ActivateInfluencer(class UBP_Comp_EnvInteraction_C* InputPin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EnvInteraction_InfluencerTrigger_C", "ActivateInfluencer");

	Params::ABP_EnvInteraction_InfluencerTrigger_C_ActivateInfluencer_Params Parms{};

	Parms.InputPin = InputPin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EnvInteraction_InfluencerTrigger.BP_EnvInteraction_InfluencerTrigger_C.DeactivateInfluencer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_Comp_EnvInteraction_C*   Influencer                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_EnvInteraction_InfluencerTrigger_C::DeactivateInfluencer(class UBP_Comp_EnvInteraction_C* Influencer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EnvInteraction_InfluencerTrigger_C", "DeactivateInfluencer");

	Params::ABP_EnvInteraction_InfluencerTrigger_C_DeactivateInfluencer_Params Parms{};

	Parms.Influencer = Influencer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EnvInteraction_InfluencerTrigger.BP_EnvInteraction_InfluencerTrigger_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_EnvInteraction_InfluencerTrigger_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EnvInteraction_InfluencerTrigger_C", "ReceiveActorBeginOverlap");

	Params::ABP_EnvInteraction_InfluencerTrigger_C_ReceiveActorBeginOverlap_Params Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EnvInteraction_InfluencerTrigger.BP_EnvInteraction_InfluencerTrigger_C.ReceiveActorEndOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_EnvInteraction_InfluencerTrigger_C::ReceiveActorEndOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EnvInteraction_InfluencerTrigger_C", "ReceiveActorEndOverlap");

	Params::ABP_EnvInteraction_InfluencerTrigger_C_ReceiveActorEndOverlap_Params Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EnvInteraction_InfluencerTrigger.BP_EnvInteraction_InfluencerTrigger_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EnvInteraction_InfluencerTrigger_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EnvInteraction_InfluencerTrigger_C", "ReceiveEndPlay");

	Params::ABP_EnvInteraction_InfluencerTrigger_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EnvInteraction_InfluencerTrigger.BP_EnvInteraction_InfluencerTrigger_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_EnvInteraction_InfluencerTrigger_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EnvInteraction_InfluencerTrigger_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EnvInteraction_InfluencerTrigger.BP_EnvInteraction_InfluencerTrigger_C.NewInfluencerHandler
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_Comp_EnvInteraction_C*   Influencer                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_EnvInteraction_InfluencerTrigger_C::NewInfluencerHandler(class UBP_Comp_EnvInteraction_C* Influencer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EnvInteraction_InfluencerTrigger_C", "NewInfluencerHandler");

	Params::ABP_EnvInteraction_InfluencerTrigger_C_NewInfluencerHandler_Params Parms{};

	Parms.Influencer = Influencer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EnvInteraction_InfluencerTrigger.BP_EnvInteraction_InfluencerTrigger_C.RegisterTrigger
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_EnvInteraction_InfluencerTrigger_C::RegisterTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EnvInteraction_InfluencerTrigger_C", "RegisterTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EnvInteraction_InfluencerTrigger.BP_EnvInteraction_InfluencerTrigger_C.ExecuteUbergraph_BP_EnvInteraction_InfluencerTrigger
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OtherActor_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OtherActor                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_Comp_EnvInteraction_C*   CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_Comp_EnvInteraction_C*   CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexObjectTrackingSubsystem* CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AHexEnvInteraction*          CallFunc_GetEnvInteraction_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_EnvInteraction_C*        K2Node_DynamicCast_AsBP_Env_Interaction                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_Comp_EnvInteraction_C*   K2Node_CustomEvent_Influencer                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UHexObjectTrackingSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AHexEnvInteraction*          CallFunc_GetEnvInteraction_ReturnValue_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetOverlappingActors_OverlappingActors                  (ReferenceParm)
// class ABP_EnvInteraction_C*        K2Node_DynamicCast_AsBP_Env_Interaction_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)

void ABP_EnvInteraction_InfluencerTrigger_C::ExecuteUbergraph_BP_EnvInteraction_InfluencerTrigger(int32 EntryPoint, class AActor* K2Node_Event_OtherActor_1, class AActor* K2Node_Event_OtherActor, class UBP_Comp_EnvInteraction_C* CallFunc_GetComponentByClass_ReturnValue, class UBP_Comp_EnvInteraction_C* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, enum class EEndPlayReason K2Node_Event_EndPlayReason, class UHexObjectTrackingSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class AHexEnvInteraction* CallFunc_GetEnvInteraction_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_EnvInteraction_C* K2Node_DynamicCast_AsBP_Env_Interaction, bool K2Node_DynamicCast_bSuccess, class UBP_Comp_EnvInteraction_C* K2Node_CustomEvent_Influencer, class AActor* CallFunc_GetOwner_ReturnValue, class UHexObjectTrackingSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1, class UClass* CallFunc_GetObjectClass_ReturnValue, class AHexEnvInteraction* CallFunc_GetEnvInteraction_ReturnValue_1, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, class ABP_EnvInteraction_C* K2Node_DynamicCast_AsBP_Env_Interaction_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Array_Contains_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EnvInteraction_InfluencerTrigger_C", "ExecuteUbergraph_BP_EnvInteraction_InfluencerTrigger");

	Params::ABP_EnvInteraction_InfluencerTrigger_C_ExecuteUbergraph_BP_EnvInteraction_InfluencerTrigger_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OtherActor_1 = K2Node_Event_OtherActor_1;
	Parms.K2Node_Event_OtherActor = K2Node_Event_OtherActor;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_GetEnvInteraction_ReturnValue = CallFunc_GetEnvInteraction_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsBP_Env_Interaction = K2Node_DynamicCast_AsBP_Env_Interaction;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_Influencer = K2Node_CustomEvent_Influencer;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_1 = CallFunc_GetWorldSubsystem_ReturnValue_1;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_GetEnvInteraction_ReturnValue_1 = CallFunc_GetEnvInteraction_ReturnValue_1;
	Parms.CallFunc_GetOverlappingActors_OverlappingActors = CallFunc_GetOverlappingActors_OverlappingActors;
	Parms.K2Node_DynamicCast_AsBP_Env_Interaction_1 = K2Node_DynamicCast_AsBP_Env_Interaction_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


