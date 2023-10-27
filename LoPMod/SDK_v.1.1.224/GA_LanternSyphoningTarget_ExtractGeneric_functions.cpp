#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_LanternSyphoningTarget_ExtractGeneric.GA_LanternSyphoningTarget_ExtractGeneric_C
// (None)

class UClass* UGA_LanternSyphoningTarget_ExtractGeneric_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_LanternSyphoningTarget_ExtractGeneric_C");

	return Clss;
}


// GA_LanternSyphoningTarget_ExtractGeneric_C GA_LanternSyphoningTarget_ExtractGeneric.Default__GA_LanternSyphoningTarget_ExtractGeneric_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_LanternSyphoningTarget_ExtractGeneric_C* UGA_LanternSyphoningTarget_ExtractGeneric_C::GetDefaultObj()
{
	static class UGA_LanternSyphoningTarget_ExtractGeneric_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_LanternSyphoningTarget_ExtractGeneric_C*>(UGA_LanternSyphoningTarget_ExtractGeneric_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_LanternSyphoningTarget_ExtractGeneric.GA_LanternSyphoningTarget_ExtractGeneric_C.SetAllowedRealmForSyphoning
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EDualRealmState         AllowedRealm                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_LanternSyphoningTarget_ExtractGeneric_C::SetAllowedRealmForSyphoning(enum class EDualRealmState AllowedRealm)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LanternSyphoningTarget_ExtractGeneric_C", "SetAllowedRealmForSyphoning");

	Params::UGA_LanternSyphoningTarget_ExtractGeneric_C_SetAllowedRealmForSyphoning_Params Parms{};

	Parms.AllowedRealm = AllowedRealm;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LanternSyphoningTarget_ExtractGeneric.GA_LanternSyphoningTarget_ExtractGeneric_C.SpawnSyphoningTrailVFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAttribute          GameplayAttribute                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_Map_Find_Value                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASoulsLanternActor*          CallFunc_GetSyphoningPlayerSoulsLanternActor_ReturnValue         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      CallFunc_MakeGameplayCueParameters_ReturnValue                   (ContainsInstancedReference)

void UGA_LanternSyphoningTarget_ExtractGeneric_C::SpawnSyphoningTrailVFX(const struct FGameplayAttribute& GameplayAttribute, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, const struct FGameplayTag& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class ASoulsLanternActor* CallFunc_GetSyphoningPlayerSoulsLanternActor_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LanternSyphoningTarget_ExtractGeneric_C", "SpawnSyphoningTrailVFX");

	Params::UGA_LanternSyphoningTarget_ExtractGeneric_C_SpawnSyphoningTrailVFX_Params Parms{};

	Parms.GameplayAttribute = GameplayAttribute;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue = CallFunc_GetOwningActorFromActorInfo_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetSyphoningPlayerSoulsLanternActor_ReturnValue = CallFunc_GetSyphoningPlayerSoulsLanternActor_ReturnValue;
	Parms.CallFunc_MakeGameplayCueParameters_ReturnValue = CallFunc_MakeGameplayCueParameters_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LanternSyphoningTarget_ExtractGeneric.GA_LanternSyphoningTarget_ExtractGeneric_C.GetSyphoningPlayerSoulsLanternActor
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASoulsLanternActor*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            K2Node_DynamicCast_AsPlayer_Character                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEquipableInventorySoulsLantern*CallFunc_GetSoulsLanternEquipment_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ASoulsLanternActor*          CallFunc_GetSpawnedSoulsLanternActor_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class ASoulsLanternActor* UGA_LanternSyphoningTarget_ExtractGeneric_C::GetSyphoningPlayerSoulsLanternActor(class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class UEquipableInventorySoulsLantern* CallFunc_GetSoulsLanternEquipment_ReturnValue, class ASoulsLanternActor* CallFunc_GetSpawnedSoulsLanternActor_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LanternSyphoningTarget_ExtractGeneric_C", "GetSyphoningPlayerSoulsLanternActor");

	Params::UGA_LanternSyphoningTarget_ExtractGeneric_C_GetSyphoningPlayerSoulsLanternActor_Params Parms{};

	Parms.K2Node_DynamicCast_AsPlayer_Character = K2Node_DynamicCast_AsPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSoulsLanternEquipment_ReturnValue = CallFunc_GetSoulsLanternEquipment_ReturnValue;
	Parms.CallFunc_GetSpawnedSoulsLanternActor_ReturnValue = CallFunc_GetSpawnedSoulsLanternActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_LanternSyphoningTarget_ExtractGeneric.GA_LanternSyphoningTarget_ExtractGeneric_C.OnBeginSyphoning_BP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_LanternSyphoningTarget_ExtractGeneric_C::OnBeginSyphoning_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LanternSyphoningTarget_ExtractGeneric_C", "OnBeginSyphoning_BP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_LanternSyphoningTarget_ExtractGeneric.GA_LanternSyphoningTarget_ExtractGeneric_C.OnEndSyphoning_BP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_LanternSyphoningTarget_ExtractGeneric_C::OnEndSyphoning_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LanternSyphoningTarget_ExtractGeneric_C", "OnEndSyphoning_BP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_LanternSyphoningTarget_ExtractGeneric.GA_LanternSyphoningTarget_ExtractGeneric_C.OnSyphoningExtractionTick_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayAttribute          ExtractedAttribute                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// float                              ExtractedAmount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_LanternSyphoningTarget_ExtractGeneric_C::OnSyphoningExtractionTick_BP(const struct FGameplayAttribute& ExtractedAttribute, float ExtractedAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LanternSyphoningTarget_ExtractGeneric_C", "OnSyphoningExtractionTick_BP");

	Params::UGA_LanternSyphoningTarget_ExtractGeneric_C_OnSyphoningExtractionTick_BP_Params Parms{};

	Parms.ExtractedAttribute = ExtractedAttribute;
	Parms.ExtractedAmount = ExtractedAmount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LanternSyphoningTarget_ExtractGeneric.GA_LanternSyphoningTarget_ExtractGeneric_C.ExecuteUbergraph_GA_LanternSyphoningTarget_ExtractGeneric
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAttribute          K2Node_Event_extractedAttribute                                  (HasGetValueTypeHash)
// float                              K2Node_Event_extractedAmount                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_LanternSyphoningTarget_ExtractGeneric_C::ExecuteUbergraph_GA_LanternSyphoningTarget_ExtractGeneric(int32 EntryPoint, const struct FGameplayAttribute& K2Node_Event_extractedAttribute, float K2Node_Event_extractedAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LanternSyphoningTarget_ExtractGeneric_C", "ExecuteUbergraph_GA_LanternSyphoningTarget_ExtractGeneric");

	Params::UGA_LanternSyphoningTarget_ExtractGeneric_C_ExecuteUbergraph_GA_LanternSyphoningTarget_ExtractGeneric_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_extractedAttribute = K2Node_Event_extractedAttribute;
	Parms.K2Node_Event_extractedAmount = K2Node_Event_extractedAmount;

	UObject::ProcessEvent(Func, &Parms);

}

}


