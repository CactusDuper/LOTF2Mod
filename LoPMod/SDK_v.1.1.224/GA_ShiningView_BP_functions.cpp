#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_ShiningView_BP.GA_ShiningView_BP_C
// (None)

class UClass* UGA_ShiningView_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_ShiningView_BP_C");

	return Clss;
}


// GA_ShiningView_BP_C GA_ShiningView_BP.Default__GA_ShiningView_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_ShiningView_BP_C* UGA_ShiningView_BP_C::GetDefaultObj()
{
	static class UGA_ShiningView_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_ShiningView_BP_C*>(UGA_ShiningView_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_ShiningView_BP.GA_ShiningView_BP_C.GetSoulsLanternFromOwningPlayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ADualRealmSoulsLanternActor_BP_C*SoulsLanternActor                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            K2Node_DynamicCast_AsPlayer_Character                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEquipableInventorySoulsLantern*CallFunc_GetSoulsLanternEquipment_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetSpawnedActorInstance_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADualRealmSoulsLanternActor_BP_C*K2Node_DynamicCast_AsDual_Realm_Souls_Lantern_Actor_BP           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ShiningView_BP_C::GetSoulsLanternFromOwningPlayer(class ADualRealmSoulsLanternActor_BP_C** SoulsLanternActor, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class UEquipableInventorySoulsLantern* CallFunc_GetSoulsLanternEquipment_ReturnValue, class AActor* CallFunc_GetSpawnedActorInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ADualRealmSoulsLanternActor_BP_C* K2Node_DynamicCast_AsDual_Realm_Souls_Lantern_Actor_BP, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ShiningView_BP_C", "GetSoulsLanternFromOwningPlayer");

	Params::UGA_ShiningView_BP_C_GetSoulsLanternFromOwningPlayer_Params Parms{};

	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue = CallFunc_GetOwningActorFromActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Character = K2Node_DynamicCast_AsPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSoulsLanternEquipment_ReturnValue = CallFunc_GetSoulsLanternEquipment_ReturnValue;
	Parms.CallFunc_GetSpawnedActorInstance_ReturnValue = CallFunc_GetSpawnedActorInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsDual_Realm_Souls_Lantern_Actor_BP = K2Node_DynamicCast_AsDual_Realm_Souls_Lantern_Actor_BP;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (SoulsLanternActor != nullptr)
		*SoulsLanternActor = Parms.SoulsLanternActor;

}


// Function GA_ShiningView_BP.GA_ShiningView_BP_C.OnTimelineEnd_527D67AB4D61185EE1AAA6A3FCE48CC4
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_ShiningView_BP_C::OnTimelineEnd_527D67AB4D61185EE1AAA6A3FCE48CC4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ShiningView_BP_C", "OnTimelineEnd_527D67AB4D61185EE1AAA6A3FCE48CC4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_ShiningView_BP.GA_ShiningView_BP_C.OnTimelineTick_527D67AB4D61185EE1AAA6A3FCE48CC4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CurveValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Curve2Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Curve3Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Curve4Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ShiningView_BP_C::OnTimelineTick_527D67AB4D61185EE1AAA6A3FCE48CC4(float CurveValue, float Curve2Value, float Curve3Value, float Curve4Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ShiningView_BP_C", "OnTimelineTick_527D67AB4D61185EE1AAA6A3FCE48CC4");

	Params::UGA_ShiningView_BP_C_OnTimelineTick_527D67AB4D61185EE1AAA6A3FCE48CC4_Params Parms{};

	Parms.CurveValue = CurveValue;
	Parms.Curve2Value = Curve2Value;
	Parms.Curve3Value = Curve3Value;
	Parms.Curve4Value = Curve4Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ShiningView_BP.GA_ShiningView_BP_C.EventReceived_57B6E619468E3E534BFEEF8772B81423
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          Payload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_ShiningView_BP_C::EventReceived_57B6E619468E3E534BFEEF8772B81423(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ShiningView_BP_C", "EventReceived_57B6E619468E3E534BFEEF8772B81423");

	Params::UGA_ShiningView_BP_C_EventReceived_57B6E619468E3E534BFEEF8772B81423_Params Parms{};

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ShiningView_BP.GA_ShiningView_BP_C.OnTimelineEnd_8AD5C0A84EE66231F12BEC920099D861
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_ShiningView_BP_C::OnTimelineEnd_8AD5C0A84EE66231F12BEC920099D861()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ShiningView_BP_C", "OnTimelineEnd_8AD5C0A84EE66231F12BEC920099D861");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_ShiningView_BP.GA_ShiningView_BP_C.OnTimelineTick_8AD5C0A84EE66231F12BEC920099D861
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CurveValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Curve2Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Curve3Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Curve4Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ShiningView_BP_C::OnTimelineTick_8AD5C0A84EE66231F12BEC920099D861(float CurveValue, float Curve2Value, float Curve3Value, float Curve4Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ShiningView_BP_C", "OnTimelineTick_8AD5C0A84EE66231F12BEC920099D861");

	Params::UGA_ShiningView_BP_C_OnTimelineTick_8AD5C0A84EE66231F12BEC920099D861_Params Parms{};

	Parms.CurveValue = CurveValue;
	Parms.Curve2Value = Curve2Value;
	Parms.Curve3Value = Curve3Value;
	Parms.Curve4Value = Curve4Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ShiningView_BP.GA_ShiningView_BP_C.StartShiningVisuals
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               InstantVisuals                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ShiningView_BP_C::StartShiningVisuals(bool InstantVisuals)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ShiningView_BP_C", "StartShiningVisuals");

	Params::UGA_ShiningView_BP_C_StartShiningVisuals_Params Parms{};

	Parms.InstantVisuals = InstantVisuals;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ShiningView_BP.GA_ShiningView_BP_C.StopShiningVisuals
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_ShiningView_BP_C::StopShiningVisuals()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ShiningView_BP_C", "StopShiningVisuals");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_ShiningView_BP.GA_ShiningView_BP_C.SetLanternParameters
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Cone_Half_Angle                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Cone_Length                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Sphere_Radius                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Init_Radius                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              End_Radius                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Cone_PostPro_Master                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ShiningView_BP_C::SetLanternParameters(double Cone_Half_Angle, double Cone_Length, double Sphere_Radius, float Init_Radius, float End_Radius, double Cone_PostPro_Master)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ShiningView_BP_C", "SetLanternParameters");

	Params::UGA_ShiningView_BP_C_SetLanternParameters_Params Parms{};

	Parms.Cone_Half_Angle = Cone_Half_Angle;
	Parms.Cone_Length = Cone_Length;
	Parms.Sphere_Radius = Sphere_Radius;
	Parms.Init_Radius = Init_Radius;
	Parms.End_Radius = End_Radius;
	Parms.Cone_PostPro_Master = Cone_PostPro_Master;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ShiningView_BP.GA_ShiningView_BP_C.RunShiningTimeline
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InstantVisuals                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ShiningView_BP_C::RunShiningTimeline(bool InstantVisuals)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ShiningView_BP_C", "RunShiningTimeline");

	Params::UGA_ShiningView_BP_C_RunShiningTimeline_Params Parms{};

	Parms.InstantVisuals = InstantVisuals;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ShiningView_BP.GA_ShiningView_BP_C.SetDualRealmMaskParameters
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             InnerAxiomMask                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             InnerUmbralMask                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             OuterAxiomMask                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             OuterUmbralMask                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ShiningView_BP_C::SetDualRealmMaskParameters(double InnerAxiomMask, double InnerUmbralMask, double OuterAxiomMask, double OuterUmbralMask)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ShiningView_BP_C", "SetDualRealmMaskParameters");

	Params::UGA_ShiningView_BP_C_SetDualRealmMaskParameters_Params Parms{};

	Parms.InnerAxiomMask = InnerAxiomMask;
	Parms.InnerUmbralMask = InnerUmbralMask;
	Parms.OuterAxiomMask = OuterAxiomMask;
	Parms.OuterUmbralMask = OuterUmbralMask;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ShiningView_BP.GA_ShiningView_BP_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_ShiningView_BP_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ShiningView_BP_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_ShiningView_BP_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ShiningView_BP.GA_ShiningView_BP_C.EndTimeline
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_ShiningView_BP_C::EndTimeline()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ShiningView_BP_C", "EndTimeline");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_ShiningView_BP.GA_ShiningView_BP_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ShiningView_BP_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ShiningView_BP_C", "K2_OnEndAbility");

	Params::UGA_ShiningView_BP_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ShiningView_BP.GA_ShiningView_BP_C.ExecuteUbergraph_GA_ShiningView_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_InstantVisuals                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpecHandle   CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue              (None)
// double                             K2Node_CustomEvent_Cone_Half_Angle                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Cone_Length                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Sphere_Radius                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Init_Radius                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_End_Radius                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Cone_PostPro_Master                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_InnerAxiomMask                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_InnerUmbralMask                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_OuterAxiomMask                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_OuterUmbralMask                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpecHandle   CallFunc_AssignTagSetByCallerMagnitude_ReturnValue               (None)
// struct FGameplayEffectSpecHandle   CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue_1            (None)
// struct FGameplayEffectSpecHandle   CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_1             (None)
// struct FGameplayEffectSpecHandle   CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_2             (None)
// struct FGameplayEffectSpecHandle   CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_3             (None)
// struct FGameplayEffectSpecHandle   CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_4             (None)
// bool                               K2Node_Event_instantVisuals                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// class UAbilityTask_WaitGameplayEvent*CallFunc_WaitGameplayEvent_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpecHandle   CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_5             (None)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpecHandle   CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_6             (None)
// int32                              CallFunc_GetGameplayTagCount_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpecHandle   CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_7             (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpecHandle   CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_8             (None)
// class UDualRealmDirector*          CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpecHandle   CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_9             (None)
// enum class EGameRealm              CallFunc_GetCurrentGameRealm_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_Timeline*       CallFunc_AbilityTask_Timeline_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_curveValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_curve2Value                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_curve3Value                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_curve4Value                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDualRealmDirector*          CallFunc_GetWorldSubsystem_ReturnValue_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EGameRealm              CallFunc_GetCurrentGameRealm_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameRealm              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameRealm              Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameRealm              Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameRealm              Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameRealm              Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDualRealmDirector*          CallFunc_GetWorldSubsystem_ReturnValue_2                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EGameRealm              CallFunc_GetCurrentGameRealm_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          Temp_struct_Variable                                             (None)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_Timeline*       CallFunc_AbilityTask_Timeline_ReturnValue_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_CustomEvent_Payload                                       (None)
// class ADualRealmSoulsLanternActor_BP_C*CallFunc_GetSoulsLanternFromOwningPlayer_SoulsLanternActor       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnathemaAbilitySystemComponent*K2Node_DynamicCast_AsAnathema_Ability_System_Component           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue            (NoDestructor, HasGetValueTypeHash)
// class ADualRealmSoulsLanternActor_BP_C*CallFunc_GetSoulsLanternFromOwningPlayer_SoulsLanternActor_1     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ADualRealmSoulsLanternActor_BP_C*CallFunc_GetSoulsLanternFromOwningPlayer_SoulsLanternActor_2     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue_1                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UDualRealmDirector*          CallFunc_GetWorldSubsystem_ReturnValue_3                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnathemaAbilitySystemComponent*K2Node_DynamicCast_AsAnathema_Ability_System_Component_1         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameRealm              CallFunc_GetCurrentGameRealm_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue_1          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADualRealmSoulsLanternActor_BP_C*CallFunc_GetSoulsLanternFromOwningPlayer_SoulsLanternActor_3     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDualRealmDirector*          CallFunc_GetWorldSubsystem_ReturnValue_4                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDualRealmDirector*          CallFunc_GetWorldSubsystem_ReturnValue_5                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EGameRealm              CallFunc_GetCurrentGameRealm_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameRealm              CallFunc_GetCurrentGameRealm_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameRealm              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADualRealmSoulsLanternActor_BP_C*CallFunc_GetSoulsLanternFromOwningPlayer_SoulsLanternActor_4     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsClientLanternOnHostEnabled_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_5                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_6                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_7                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_8                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_9                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsClientLanternOnHostEnabled_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_curveValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_curve2Value_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_curve3Value_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_curve4Value_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_1  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_2  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_3  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_4  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_5  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_6  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_7  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetLanternParameters_End_Radius_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetLanternParameters_Init_Radius_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetLanternParameters_Cone_PostPro_Master_ImplicitCast   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetLanternParameters_End_Radius_ImplicitCast_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetLanternParameters_Init_Radius_ImplicitCast_1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ShiningView_BP_C::ExecuteUbergraph_GA_ShiningView_BP(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_InstantVisuals, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, double K2Node_CustomEvent_Cone_Half_Angle, double K2Node_CustomEvent_Cone_Length, double K2Node_CustomEvent_Sphere_Radius, float K2Node_CustomEvent_Init_Radius, float K2Node_CustomEvent_End_Radius, double K2Node_CustomEvent_Cone_PostPro_Master, double K2Node_CustomEvent_InnerAxiomMask, double K2Node_CustomEvent_InnerUmbralMask, double K2Node_CustomEvent_OuterAxiomMask, double K2Node_CustomEvent_OuterUmbralMask, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue_1, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_1, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_2, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_3, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_4, bool K2Node_Event_instantVisuals, const struct FGameplayEventData& K2Node_Event_EventData, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_SelectFloat_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_5, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_6, int32 CallFunc_GetGameplayTagCount_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_7, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_8, class UDualRealmDirector* CallFunc_GetWorldSubsystem_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_9, enum class EGameRealm CallFunc_GetCurrentGameRealm_ReturnValue, class UAbilityTask_Timeline* CallFunc_AbilityTask_Timeline_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float Temp_real_Variable, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, float Temp_real_Variable_1, float Temp_real_Variable_2, float Temp_real_Variable_3, float K2Node_CustomEvent_curveValue, float K2Node_CustomEvent_curve2Value, float K2Node_CustomEvent_curve3Value, float K2Node_CustomEvent_curve4Value, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UDualRealmDirector* CallFunc_GetWorldSubsystem_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, enum class EGameRealm CallFunc_GetCurrentGameRealm_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, enum class EGameRealm Temp_byte_Variable, enum class EGameRealm Temp_byte_Variable_1, enum class EGameRealm Temp_byte_Variable_2, enum class EGameRealm Temp_byte_Variable_3, enum class EGameRealm Temp_byte_Variable_4, class UDualRealmDirector* CallFunc_GetWorldSubsystem_ReturnValue_2, class UCurveFloat* Temp_object_Variable, enum class EGameRealm CallFunc_GetCurrentGameRealm_ReturnValue_2, bool CallFunc_NotEqual_ByteByte_ReturnValue_2, class UCurveFloat* Temp_object_Variable_1, bool Temp_bool_Variable, const struct FGameplayEventData& Temp_struct_Variable, bool K2Node_Event_bWasCancelled, class UCurveFloat* K2Node_Select_Default, class UAbilityTask_Timeline* CallFunc_AbilityTask_Timeline_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FGameplayEventData& K2Node_CustomEvent_Payload, class ADualRealmSoulsLanternActor_BP_C* CallFunc_GetSoulsLanternFromOwningPlayer_SoulsLanternActor, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue_3, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, class UAnathemaAbilitySystemComponent* K2Node_DynamicCast_AsAnathema_Ability_System_Component, bool K2Node_DynamicCast_bSuccess, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue, class ADualRealmSoulsLanternActor_BP_C* CallFunc_GetSoulsLanternFromOwningPlayer_SoulsLanternActor_1, class ADualRealmSoulsLanternActor_BP_C* CallFunc_GetSoulsLanternFromOwningPlayer_SoulsLanternActor_2, bool CallFunc_IsValid_ReturnValue_4, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_SelectFloat_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_5, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, class UDualRealmDirector* CallFunc_GetWorldSubsystem_ReturnValue_3, class UAnathemaAbilitySystemComponent* K2Node_DynamicCast_AsAnathema_Ability_System_Component_1, bool K2Node_DynamicCast_bSuccess_1, enum class EGameRealm CallFunc_GetCurrentGameRealm_ReturnValue_3, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class ADualRealmSoulsLanternActor_BP_C* CallFunc_GetSoulsLanternFromOwningPlayer_SoulsLanternActor_3, double CallFunc_Lerp_ReturnValue, double CallFunc_Lerp_ReturnValue_1, double CallFunc_Lerp_ReturnValue_2, double CallFunc_Lerp_ReturnValue_3, double CallFunc_Lerp_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_6, class UDualRealmDirector* CallFunc_GetWorldSubsystem_ReturnValue_4, class UDualRealmDirector* CallFunc_GetWorldSubsystem_ReturnValue_5, enum class EGameRealm CallFunc_GetCurrentGameRealm_ReturnValue_4, enum class EGameRealm CallFunc_GetCurrentGameRealm_ReturnValue_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, enum class EGameRealm K2Node_Select_Default_1, class ADualRealmSoulsLanternActor_BP_C* CallFunc_GetSoulsLanternFromOwningPlayer_SoulsLanternActor_4, bool CallFunc_IsValid_ReturnValue_7, float Temp_real_Variable_4, bool CallFunc_IsClientLanternOnHostEnabled_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, double CallFunc_Lerp_ReturnValue_5, double CallFunc_Lerp_ReturnValue_6, double CallFunc_Lerp_ReturnValue_7, double CallFunc_Lerp_ReturnValue_8, double CallFunc_Lerp_ReturnValue_9, bool CallFunc_IsClientLanternOnHostEnabled_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, float Temp_real_Variable_5, float Temp_real_Variable_6, float Temp_real_Variable_7, float K2Node_CustomEvent_curveValue_1, float K2Node_CustomEvent_curve2Value_1, float K2Node_CustomEvent_curve3Value_1, float K2Node_CustomEvent_curve4Value_1, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_1, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_2, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_3, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_4, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_5, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_6, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_7, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, float CallFunc_SetLanternParameters_End_Radius_ImplicitCast, float CallFunc_SetLanternParameters_Init_Radius_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast_1, double CallFunc_SetLanternParameters_Cone_PostPro_Master_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast_2, double CallFunc_Lerp_Alpha_ImplicitCast_3, double CallFunc_Lerp_Alpha_ImplicitCast_4, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast_1, float CallFunc_SetLanternParameters_End_Radius_ImplicitCast_1, float CallFunc_SetLanternParameters_Init_Radius_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ShiningView_BP_C", "ExecuteUbergraph_GA_ShiningView_BP");

	Params::UGA_ShiningView_BP_C_ExecuteUbergraph_GA_ShiningView_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_InstantVisuals = K2Node_CustomEvent_InstantVisuals;
	Parms.CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue = CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue;
	Parms.K2Node_CustomEvent_Cone_Half_Angle = K2Node_CustomEvent_Cone_Half_Angle;
	Parms.K2Node_CustomEvent_Cone_Length = K2Node_CustomEvent_Cone_Length;
	Parms.K2Node_CustomEvent_Sphere_Radius = K2Node_CustomEvent_Sphere_Radius;
	Parms.K2Node_CustomEvent_Init_Radius = K2Node_CustomEvent_Init_Radius;
	Parms.K2Node_CustomEvent_End_Radius = K2Node_CustomEvent_End_Radius;
	Parms.K2Node_CustomEvent_Cone_PostPro_Master = K2Node_CustomEvent_Cone_PostPro_Master;
	Parms.K2Node_CustomEvent_InnerAxiomMask = K2Node_CustomEvent_InnerAxiomMask;
	Parms.K2Node_CustomEvent_InnerUmbralMask = K2Node_CustomEvent_InnerUmbralMask;
	Parms.K2Node_CustomEvent_OuterAxiomMask = K2Node_CustomEvent_OuterAxiomMask;
	Parms.K2Node_CustomEvent_OuterUmbralMask = K2Node_CustomEvent_OuterUmbralMask;
	Parms.CallFunc_AssignTagSetByCallerMagnitude_ReturnValue = CallFunc_AssignTagSetByCallerMagnitude_ReturnValue;
	Parms.CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue_1 = CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue_1;
	Parms.CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_1 = CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_1;
	Parms.CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_2 = CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_2;
	Parms.CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_3 = CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_3;
	Parms.CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_4 = CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_4;
	Parms.K2Node_Event_instantVisuals = K2Node_Event_instantVisuals;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_WaitGameplayEvent_ReturnValue = CallFunc_WaitGameplayEvent_ReturnValue;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_5 = CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_5;
	Parms.CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue = CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue;
	Parms.CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_6 = CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_6;
	Parms.CallFunc_GetGameplayTagCount_ReturnValue = CallFunc_GetGameplayTagCount_ReturnValue;
	Parms.CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_7 = CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_7;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_8 = CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_8;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_9 = CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_9;
	Parms.CallFunc_GetCurrentGameRealm_ReturnValue = CallFunc_GetCurrentGameRealm_ReturnValue;
	Parms.CallFunc_AbilityTask_Timeline_ReturnValue = CallFunc_AbilityTask_Timeline_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_real_Variable_2 = Temp_real_Variable_2;
	Parms.Temp_real_Variable_3 = Temp_real_Variable_3;
	Parms.K2Node_CustomEvent_curveValue = K2Node_CustomEvent_curveValue;
	Parms.K2Node_CustomEvent_curve2Value = K2Node_CustomEvent_curve2Value;
	Parms.K2Node_CustomEvent_curve3Value = K2Node_CustomEvent_curve3Value;
	Parms.K2Node_CustomEvent_curve4Value = K2Node_CustomEvent_curve4Value;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_1 = CallFunc_GetWorldSubsystem_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetCurrentGameRealm_ReturnValue_1 = CallFunc_GetCurrentGameRealm_ReturnValue_1;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_2 = CallFunc_GetWorldSubsystem_ReturnValue_2;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetCurrentGameRealm_ReturnValue_2 = CallFunc_GetCurrentGameRealm_ReturnValue_2;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_2 = CallFunc_NotEqual_ByteByte_ReturnValue_2;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_AbilityTask_Timeline_ReturnValue_1 = CallFunc_AbilityTask_Timeline_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CustomEvent_Payload = K2Node_CustomEvent_Payload;
	Parms.CallFunc_GetSoulsLanternFromOwningPlayer_SoulsLanternActor = CallFunc_GetSoulsLanternFromOwningPlayer_SoulsLanternActor;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.K2Node_DynamicCast_AsAnathema_Ability_System_Component = K2Node_DynamicCast_AsAnathema_Ability_System_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue;
	Parms.CallFunc_GetSoulsLanternFromOwningPlayer_SoulsLanternActor_1 = CallFunc_GetSoulsLanternFromOwningPlayer_SoulsLanternActor_1;
	Parms.CallFunc_GetSoulsLanternFromOwningPlayer_SoulsLanternActor_2 = CallFunc_GetSoulsLanternFromOwningPlayer_SoulsLanternActor_2;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_2 = CallFunc_SelectFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_SelectFloat_ReturnValue_3 = CallFunc_SelectFloat_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue_1 = CallFunc_GetAbilitySystemComponent_ReturnValue_1;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_3 = CallFunc_GetWorldSubsystem_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsAnathema_Ability_System_Component_1 = K2Node_DynamicCast_AsAnathema_Ability_System_Component_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetCurrentGameRealm_ReturnValue_3 = CallFunc_GetCurrentGameRealm_ReturnValue_3;
	Parms.CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue_1 = CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetSoulsLanternFromOwningPlayer_SoulsLanternActor_3 = CallFunc_GetSoulsLanternFromOwningPlayer_SoulsLanternActor_3;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_Lerp_ReturnValue_3 = CallFunc_Lerp_ReturnValue_3;
	Parms.CallFunc_Lerp_ReturnValue_4 = CallFunc_Lerp_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_4 = CallFunc_GetWorldSubsystem_ReturnValue_4;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_5 = CallFunc_GetWorldSubsystem_ReturnValue_5;
	Parms.CallFunc_GetCurrentGameRealm_ReturnValue_4 = CallFunc_GetCurrentGameRealm_ReturnValue_4;
	Parms.CallFunc_GetCurrentGameRealm_ReturnValue_5 = CallFunc_GetCurrentGameRealm_ReturnValue_5;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetSoulsLanternFromOwningPlayer_SoulsLanternActor_4 = CallFunc_GetSoulsLanternFromOwningPlayer_SoulsLanternActor_4;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.Temp_real_Variable_4 = Temp_real_Variable_4;
	Parms.CallFunc_IsClientLanternOnHostEnabled_ReturnValue = CallFunc_IsClientLanternOnHostEnabled_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1 = CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_5 = CallFunc_Lerp_ReturnValue_5;
	Parms.CallFunc_Lerp_ReturnValue_6 = CallFunc_Lerp_ReturnValue_6;
	Parms.CallFunc_Lerp_ReturnValue_7 = CallFunc_Lerp_ReturnValue_7;
	Parms.CallFunc_Lerp_ReturnValue_8 = CallFunc_Lerp_ReturnValue_8;
	Parms.CallFunc_Lerp_ReturnValue_9 = CallFunc_Lerp_ReturnValue_9;
	Parms.CallFunc_IsClientLanternOnHostEnabled_ReturnValue_1 = CallFunc_IsClientLanternOnHostEnabled_ReturnValue_1;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.Temp_real_Variable_5 = Temp_real_Variable_5;
	Parms.Temp_real_Variable_6 = Temp_real_Variable_6;
	Parms.Temp_real_Variable_7 = Temp_real_Variable_7;
	Parms.K2Node_CustomEvent_curveValue_1 = K2Node_CustomEvent_curveValue_1;
	Parms.K2Node_CustomEvent_curve2Value_1 = K2Node_CustomEvent_curve2Value_1;
	Parms.K2Node_CustomEvent_curve3Value_1 = K2Node_CustomEvent_curve3Value_1;
	Parms.K2Node_CustomEvent_curve4Value_1 = K2Node_CustomEvent_curve4Value_1;
	Parms.CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast = CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast;
	Parms.CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_1 = CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_1;
	Parms.CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_2 = CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_2;
	Parms.CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_3 = CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_3;
	Parms.CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_4 = CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_4;
	Parms.CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_5 = CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_5;
	Parms.CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_6 = CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_6;
	Parms.CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_7 = CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_7;
	Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_B_ImplicitCast = CallFunc_Subtract_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_SetLanternParameters_End_Radius_ImplicitCast = CallFunc_SetLanternParameters_End_Radius_ImplicitCast;
	Parms.CallFunc_SetLanternParameters_Init_Radius_ImplicitCast = CallFunc_SetLanternParameters_Init_Radius_ImplicitCast;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast = CallFunc_Lerp_Alpha_ImplicitCast;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_1 = CallFunc_Lerp_Alpha_ImplicitCast_1;
	Parms.CallFunc_SetLanternParameters_Cone_PostPro_Master_ImplicitCast = CallFunc_SetLanternParameters_Cone_PostPro_Master_ImplicitCast;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_2 = CallFunc_Lerp_Alpha_ImplicitCast_2;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_3 = CallFunc_Lerp_Alpha_ImplicitCast_3;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_4 = CallFunc_Lerp_Alpha_ImplicitCast_4;
	Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast_1 = CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_SetLanternParameters_End_Radius_ImplicitCast_1 = CallFunc_SetLanternParameters_End_Radius_ImplicitCast_1;
	Parms.CallFunc_SetLanternParameters_Init_Radius_ImplicitCast_1 = CallFunc_SetLanternParameters_Init_Radius_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


