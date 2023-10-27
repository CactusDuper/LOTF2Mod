#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_SoulsLanternShining.GA_SoulsLanternShining_C
// (None)

class UClass* UGA_SoulsLanternShining_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_SoulsLanternShining_C");

	return Clss;
}


// GA_SoulsLanternShining_C GA_SoulsLanternShining.Default__GA_SoulsLanternShining_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_SoulsLanternShining_C* UGA_SoulsLanternShining_C::GetDefaultObj()
{
	static class UGA_SoulsLanternShining_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_SoulsLanternShining_C*>(UGA_SoulsLanternShining_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_SoulsLanternShining.GA_SoulsLanternShining_C.GetSoulsLanternActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ADualRealmSoulsLanternActor_BP_C*AsDual_Realm_Souls_Lantern_Actor_BP                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            K2Node_DynamicCast_AsPlayer_Character                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEquipableInventorySoulsLantern*CallFunc_GetSoulsLanternEquipment_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetSpawnedActorInstance_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADualRealmSoulsLanternActor_BP_C*K2Node_DynamicCast_AsDual_Realm_Souls_Lantern_Actor_BP           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SoulsLanternShining_C::GetSoulsLanternActor(class ADualRealmSoulsLanternActor_BP_C** AsDual_Realm_Souls_Lantern_Actor_BP, class UObject* CallFunc_GetOuterObject_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class UEquipableInventorySoulsLantern* CallFunc_GetSoulsLanternEquipment_ReturnValue, class AActor* CallFunc_GetSpawnedActorInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ADualRealmSoulsLanternActor_BP_C* K2Node_DynamicCast_AsDual_Realm_Souls_Lantern_Actor_BP, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SoulsLanternShining_C", "GetSoulsLanternActor");

	Params::UGA_SoulsLanternShining_C_GetSoulsLanternActor_Params Parms{};

	Parms.CallFunc_GetOuterObject_ReturnValue = CallFunc_GetOuterObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Character = K2Node_DynamicCast_AsPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSoulsLanternEquipment_ReturnValue = CallFunc_GetSoulsLanternEquipment_ReturnValue;
	Parms.CallFunc_GetSpawnedActorInstance_ReturnValue = CallFunc_GetSpawnedActorInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsDual_Realm_Souls_Lantern_Actor_BP = K2Node_DynamicCast_AsDual_Realm_Souls_Lantern_Actor_BP;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (AsDual_Realm_Souls_Lantern_Actor_BP != nullptr)
		*AsDual_Realm_Souls_Lantern_Actor_BP = Parms.AsDual_Realm_Souls_Lantern_Actor_BP;

}


// Function GA_SoulsLanternShining.GA_SoulsLanternShining_C.OnTimelineEnd_50D99A954F907F40DC1945BED0D104D3
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_SoulsLanternShining_C::OnTimelineEnd_50D99A954F907F40DC1945BED0D104D3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SoulsLanternShining_C", "OnTimelineEnd_50D99A954F907F40DC1945BED0D104D3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_SoulsLanternShining.GA_SoulsLanternShining_C.OnTimelineTick_50D99A954F907F40DC1945BED0D104D3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CurveValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Curve2Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Curve3Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Curve4Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SoulsLanternShining_C::OnTimelineTick_50D99A954F907F40DC1945BED0D104D3(float CurveValue, float Curve2Value, float Curve3Value, float Curve4Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SoulsLanternShining_C", "OnTimelineTick_50D99A954F907F40DC1945BED0D104D3");

	Params::UGA_SoulsLanternShining_C_OnTimelineTick_50D99A954F907F40DC1945BED0D104D3_Params Parms{};

	Parms.CurveValue = CurveValue;
	Parms.Curve2Value = Curve2Value;
	Parms.Curve3Value = Curve3Value;
	Parms.Curve4Value = Curve4Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_SoulsLanternShining.GA_SoulsLanternShining_C.OnTick_AFCA4AE3439F731505120EBE6A516A68
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SoulsLanternShining_C::OnTick_AFCA4AE3439F731505120EBE6A516A68(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SoulsLanternShining_C", "OnTick_AFCA4AE3439F731505120EBE6A516A68");

	Params::UGA_SoulsLanternShining_C_OnTick_AFCA4AE3439F731505120EBE6A516A68_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_SoulsLanternShining.GA_SoulsLanternShining_C.OnFinish_A7340A50490D2C3A75DA4C82D1413001
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_SoulsLanternShining_C::OnFinish_A7340A50490D2C3A75DA4C82D1413001()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SoulsLanternShining_C", "OnFinish_A7340A50490D2C3A75DA4C82D1413001");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_SoulsLanternShining.GA_SoulsLanternShining_C.Removed_DF070E8F479C827A6AD99892D863C6D8
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_SoulsLanternShining_C::Removed_DF070E8F479C827A6AD99892D863C6D8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SoulsLanternShining_C", "Removed_DF070E8F479C827A6AD99892D863C6D8");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_SoulsLanternShining.GA_SoulsLanternShining_C.Added_79E474BB4354B5FF36E1D48141F59BFB
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_SoulsLanternShining_C::Added_79E474BB4354B5FF36E1D48141F59BFB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SoulsLanternShining_C", "Added_79E474BB4354B5FF36E1D48141F59BFB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_SoulsLanternShining.GA_SoulsLanternShining_C.RunShiningTimeline
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_SoulsLanternShining_C::RunShiningTimeline()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SoulsLanternShining_C", "RunShiningTimeline");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_SoulsLanternShining.GA_SoulsLanternShining_C.OnStartShiningVisuals
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_SoulsLanternShining_C::OnStartShiningVisuals()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SoulsLanternShining_C", "OnStartShiningVisuals");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_SoulsLanternShining.GA_SoulsLanternShining_C.OnStopShiningVisuals
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_SoulsLanternShining_C::OnStopShiningVisuals()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SoulsLanternShining_C", "OnStopShiningVisuals");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_SoulsLanternShining.GA_SoulsLanternShining_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_SoulsLanternShining_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SoulsLanternShining_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_SoulsLanternShining.GA_SoulsLanternShining_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SoulsLanternShining_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SoulsLanternShining_C", "K2_OnEndAbility");

	Params::UGA_SoulsLanternShining_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_SoulsLanternShining.GA_SoulsLanternShining_C.OnShiningInhibited
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_SoulsLanternShining_C::OnShiningInhibited()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SoulsLanternShining_C", "OnShiningInhibited");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_SoulsLanternShining.GA_SoulsLanternShining_C.OnShiningActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_SoulsLanternShining_C::OnShiningActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SoulsLanternShining_C", "OnShiningActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_SoulsLanternShining.GA_SoulsLanternShining_C.AudioSFX_LanternON
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_SoulsLanternShining_C::AudioSFX_LanternON()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SoulsLanternShining_C", "AudioSFX_LanternON");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_SoulsLanternShining.GA_SoulsLanternShining_C.AudioSFX_LanternOFF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_SoulsLanternShining_C::AudioSFX_LanternOFF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SoulsLanternShining_C", "AudioSFX_LanternOFF");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_SoulsLanternShining.GA_SoulsLanternShining_C.ExecuteUbergraph_GA_SoulsLanternShining
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDualRealmDirector*          CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UPointLightComponent*>CallFunc_GetComponentsByTag_ReturnValue                          (ReferenceParm, ContainsInstancedReference)
// enum class EGameRealm              CallFunc_GetCurrentGameRealm_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPointLightComponent*        CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDualRealmDirector*          CallFunc_GetWorldSubsystem_ReturnValue_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDualRealmDirector*          CallFunc_GetWorldSubsystem_ReturnValue_2                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameRealm              CallFunc_GetCurrentGameRealm_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_WaitGameplayTagAdded*CallFunc_WaitGameplayTagAdd_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_WaitGameplayTagRemoved*CallFunc_WaitGameplayTagRemove_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_WaitDelay*      CallFunc_WaitDelay_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            K2Node_DynamicCast_AsPlayer_Character                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_DynamicCast_AsActor                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEquipableInventorySoulsLantern*CallFunc_GetSoulsLanternEquipment_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UPointLightComponent*>CallFunc_GetComponentsByTag_ReturnValue_1                        (ReferenceParm, ContainsInstancedReference)
// class AActor*                      CallFunc_GetSpawnedActorInstance_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPointLightComponent*        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ADualRealmSoulsLanternActor_BP_C*K2Node_DynamicCast_AsDual_Realm_Souls_Lantern_Actor_BP           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADualRealmSoulsLanternActor_BP_C*CallFunc_GetSoulsLanternActor_AsDual_Realm_Souls_Lantern_Actor_BP(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_Timeline*       CallFunc_AbilityTask_Timeline_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADualRealmSoulsLanternActor_BP_C*CallFunc_GetSoulsLanternActor_AsDual_Realm_Souls_Lantern_Actor_BP_1(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexObjectTrackingSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_3                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue_2                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANaturalLighting*            CallFunc_GetNaturalLighting_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            K2Node_DynamicCast_AsPlayer_Character_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNaturalLightingPlayerLightDataCallFunc_GetPlayerLightData_ReturnValue                          (NoDestructor)
// class ADualRealmSoulsLanternActor_BP_C*CallFunc_GetSoulsLanternActor_AsDual_Realm_Souls_Lantern_Actor_BP_2(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_ClampVectorSize_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexObjectTrackingSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_4                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_FloatToVector_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANaturalLighting*            CallFunc_GetNaturalLighting_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNaturalLightingPlayerLightDataCallFunc_GetPlayerLightData_ReturnValue_1                        (NoDestructor)
// class UAbilityTask_Tick*           CallFunc_CreateTickTask_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADualRealmSoulsLanternActor_BP_C*CallFunc_GetSoulsLanternActor_AsDual_Realm_Souls_Lantern_Actor_BP_3(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_HasMatchingGameplayTag_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_DeltaTime                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_curveValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_curve2Value                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_curve3Value                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_curve4Value                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue_1               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            K2Node_DynamicCast_AsPlayer_Character_2                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAnathemaComponent*        CallFunc_GetAkComponentHead_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      CallFunc_MakeGameplayCueParameters_ReturnValue                   (ContainsInstancedReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetOuterConeAngle_NewOuterConeAngle_ImplicitCast        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_A_ImplicitCast                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_A_ImplicitCast_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetIntensity_NewIntensity_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetIntensity_NewIntensity_ImplicitCast_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SoulsLanternShining_C::ExecuteUbergraph_GA_SoulsLanternShining(int32 EntryPoint, bool CallFunc_IsLocallyControlled_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class UDualRealmDirector* CallFunc_GetWorldSubsystem_ReturnValue, TArray<class UPointLightComponent*>& CallFunc_GetComponentsByTag_ReturnValue, enum class EGameRealm CallFunc_GetCurrentGameRealm_ReturnValue, class UPointLightComponent* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class UDualRealmDirector* CallFunc_GetWorldSubsystem_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class UDualRealmDirector* CallFunc_GetWorldSubsystem_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, enum class EGameRealm CallFunc_GetCurrentGameRealm_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAbilityTask_WaitGameplayTagRemoved* CallFunc_WaitGameplayTagRemove_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_4, class UObject* CallFunc_GetOuterObject_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_GetOuterObject_ReturnValue_1, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess_1, class UEquipableInventorySoulsLantern* CallFunc_GetSoulsLanternEquipment_ReturnValue, TArray<class UPointLightComponent*>& CallFunc_GetComponentsByTag_ReturnValue_1, class AActor* CallFunc_GetSpawnedActorInstance_ReturnValue, class UPointLightComponent* CallFunc_Array_Get_Item_1, class ADualRealmSoulsLanternActor_BP_C* K2Node_DynamicCast_AsDual_Realm_Souls_Lantern_Actor_BP, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Array_IsValidIndex_ReturnValue_1, class ADualRealmSoulsLanternActor_BP_C* CallFunc_GetSoulsLanternActor_AsDual_Realm_Souls_Lantern_Actor_BP, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_5, class UAbilityTask_Timeline* CallFunc_AbilityTask_Timeline_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, class ADualRealmSoulsLanternActor_BP_C* CallFunc_GetSoulsLanternActor_AsDual_Realm_Souls_Lantern_Actor_BP_1, bool CallFunc_IsValid_ReturnValue_7, float Temp_real_Variable, double CallFunc_Lerp_ReturnValue, double CallFunc_Lerp_ReturnValue_1, double CallFunc_Lerp_ReturnValue_2, class UHexObjectTrackingSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_3, class UObject* CallFunc_GetOuterObject_ReturnValue_2, class ANaturalLighting* CallFunc_GetNaturalLighting_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue_8, const struct FNaturalLightingPlayerLightData& CallFunc_GetPlayerLightData_ReturnValue, class ADualRealmSoulsLanternActor_BP_C* CallFunc_GetSoulsLanternActor_AsDual_Realm_Souls_Lantern_Actor_BP_2, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_10, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, float Temp_real_Variable_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool K2Node_Event_bWasCancelled, const struct FVector& CallFunc_ClampVectorSize_ReturnValue, class UHexObjectTrackingSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_4, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, class ANaturalLighting* CallFunc_GetNaturalLighting_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue_11, const struct FNaturalLightingPlayerLightData& CallFunc_GetPlayerLightData_ReturnValue_1, class UAbilityTask_Tick* CallFunc_CreateTickTask_ReturnValue, double CallFunc_Lerp_ReturnValue_3, double CallFunc_Lerp_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_12, float Temp_real_Variable_2, float Temp_real_Variable_3, class ADualRealmSoulsLanternActor_BP_C* CallFunc_GetSoulsLanternActor_AsDual_Realm_Souls_Lantern_Actor_BP_3, float Temp_real_Variable_4, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, float K2Node_CustomEvent_DeltaTime, float K2Node_CustomEvent_curveValue, float K2Node_CustomEvent_curve2Value, float K2Node_CustomEvent_curve3Value, float K2Node_CustomEvent_curve4Value, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_1, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_2, bool K2Node_DynamicCast_bSuccess_4, class UAkAnathemaComponent* CallFunc_GetAkComponentHead_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_IsLocallyControlled_ReturnValue_1, double CallFunc_Lerp_Alpha_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast_1, double CallFunc_Lerp_Alpha_ImplicitCast_2, float CallFunc_SetOuterConeAngle_NewOuterConeAngle_ImplicitCast, float CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast, float CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_1, double CallFunc_Lerp_Alpha_ImplicitCast_3, double CallFunc_Lerp_Alpha_ImplicitCast_4, double CallFunc_Lerp_A_ImplicitCast, double CallFunc_Lerp_A_ImplicitCast_1, float CallFunc_SetIntensity_NewIntensity_ImplicitCast, float CallFunc_SetIntensity_NewIntensity_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SoulsLanternShining_C", "ExecuteUbergraph_GA_SoulsLanternShining");

	Params::UGA_SoulsLanternShining_C_ExecuteUbergraph_GA_SoulsLanternShining_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue = CallFunc_GetOwningActorFromActorInfo_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_GetComponentsByTag_ReturnValue = CallFunc_GetComponentsByTag_ReturnValue;
	Parms.CallFunc_GetCurrentGameRealm_ReturnValue = CallFunc_GetCurrentGameRealm_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_1 = CallFunc_GetWorldSubsystem_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_2 = CallFunc_GetWorldSubsystem_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetCurrentGameRealm_ReturnValue_1 = CallFunc_GetCurrentGameRealm_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_WaitGameplayTagAdd_ReturnValue = CallFunc_WaitGameplayTagAdd_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_WaitGameplayTagRemove_ReturnValue = CallFunc_WaitGameplayTagRemove_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_WaitDelay_ReturnValue = CallFunc_WaitDelay_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetOuterObject_ReturnValue = CallFunc_GetOuterObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Character = K2Node_DynamicCast_AsPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOuterObject_ReturnValue_1 = CallFunc_GetOuterObject_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsActor = K2Node_DynamicCast_AsActor;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetSoulsLanternEquipment_ReturnValue = CallFunc_GetSoulsLanternEquipment_ReturnValue;
	Parms.CallFunc_GetComponentsByTag_ReturnValue_1 = CallFunc_GetComponentsByTag_ReturnValue_1;
	Parms.CallFunc_GetSpawnedActorInstance_ReturnValue = CallFunc_GetSpawnedActorInstance_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_DynamicCast_AsDual_Realm_Souls_Lantern_Actor_BP = K2Node_DynamicCast_AsDual_Realm_Souls_Lantern_Actor_BP;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_1 = CallFunc_Array_IsValidIndex_ReturnValue_1;
	Parms.CallFunc_GetSoulsLanternActor_AsDual_Realm_Souls_Lantern_Actor_BP = CallFunc_GetSoulsLanternActor_AsDual_Realm_Souls_Lantern_Actor_BP;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_AbilityTask_Timeline_ReturnValue = CallFunc_AbilityTask_Timeline_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_GetSoulsLanternActor_AsDual_Realm_Souls_Lantern_Actor_BP_1 = CallFunc_GetSoulsLanternActor_AsDual_Realm_Souls_Lantern_Actor_BP_1;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_3 = CallFunc_GetWorldSubsystem_ReturnValue_3;
	Parms.CallFunc_GetOuterObject_ReturnValue_2 = CallFunc_GetOuterObject_ReturnValue_2;
	Parms.CallFunc_GetNaturalLighting_ReturnValue = CallFunc_GetNaturalLighting_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Character_1 = K2Node_DynamicCast_AsPlayer_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_GetPlayerLightData_ReturnValue = CallFunc_GetPlayerLightData_ReturnValue;
	Parms.CallFunc_GetSoulsLanternActor_AsDual_Realm_Souls_Lantern_Actor_BP_2 = CallFunc_GetSoulsLanternActor_AsDual_Realm_Souls_Lantern_Actor_BP_2;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_ClampVectorSize_ReturnValue = CallFunc_ClampVectorSize_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_4 = CallFunc_GetWorldSubsystem_ReturnValue_4;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue = CallFunc_Conv_FloatToVector_ReturnValue;
	Parms.CallFunc_GetNaturalLighting_ReturnValue_1 = CallFunc_GetNaturalLighting_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.CallFunc_GetPlayerLightData_ReturnValue_1 = CallFunc_GetPlayerLightData_ReturnValue_1;
	Parms.CallFunc_CreateTickTask_ReturnValue = CallFunc_CreateTickTask_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_3 = CallFunc_Lerp_ReturnValue_3;
	Parms.CallFunc_Lerp_ReturnValue_4 = CallFunc_Lerp_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.Temp_real_Variable_2 = Temp_real_Variable_2;
	Parms.Temp_real_Variable_3 = Temp_real_Variable_3;
	Parms.CallFunc_GetSoulsLanternActor_AsDual_Realm_Souls_Lantern_Actor_BP_3 = CallFunc_GetSoulsLanternActor_AsDual_Realm_Souls_Lantern_Actor_BP_3;
	Parms.Temp_real_Variable_4 = Temp_real_Variable_4;
	Parms.CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue = CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue;
	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput = CallFunc_HasMatchingGameplayTag_self_CastInput;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.K2Node_CustomEvent_DeltaTime = K2Node_CustomEvent_DeltaTime;
	Parms.K2Node_CustomEvent_curveValue = K2Node_CustomEvent_curveValue;
	Parms.K2Node_CustomEvent_curve2Value = K2Node_CustomEvent_curve2Value;
	Parms.K2Node_CustomEvent_curve3Value = K2Node_CustomEvent_curve3Value;
	Parms.K2Node_CustomEvent_curve4Value = K2Node_CustomEvent_curve4Value;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue_1 = CallFunc_GetOwningActorFromActorInfo_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPlayer_Character_2 = K2Node_DynamicCast_AsPlayer_Character_2;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetAkComponentHead_ReturnValue = CallFunc_GetAkComponentHead_ReturnValue;
	Parms.CallFunc_MakeGameplayCueParameters_ReturnValue = CallFunc_MakeGameplayCueParameters_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_1 = CallFunc_IsLocallyControlled_ReturnValue_1;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast = CallFunc_Lerp_Alpha_ImplicitCast;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_1 = CallFunc_Lerp_Alpha_ImplicitCast_1;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_2 = CallFunc_Lerp_Alpha_ImplicitCast_2;
	Parms.CallFunc_SetOuterConeAngle_NewOuterConeAngle_ImplicitCast = CallFunc_SetOuterConeAngle_NewOuterConeAngle_ImplicitCast;
	Parms.CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast = CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast;
	Parms.CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_1 = CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_1;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_3 = CallFunc_Lerp_Alpha_ImplicitCast_3;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_4 = CallFunc_Lerp_Alpha_ImplicitCast_4;
	Parms.CallFunc_Lerp_A_ImplicitCast = CallFunc_Lerp_A_ImplicitCast;
	Parms.CallFunc_Lerp_A_ImplicitCast_1 = CallFunc_Lerp_A_ImplicitCast_1;
	Parms.CallFunc_SetIntensity_NewIntensity_ImplicitCast = CallFunc_SetIntensity_NewIntensity_ImplicitCast;
	Parms.CallFunc_SetIntensity_NewIntensity_ImplicitCast_1 = CallFunc_SetIntensity_NewIntensity_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


