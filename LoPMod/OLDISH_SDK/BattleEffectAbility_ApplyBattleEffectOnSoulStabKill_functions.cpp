#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffectAbility_ApplyBattleEffectOnSoulStabKill.BattleEffectAbility_ApplyBattleEffectOnSoulStabKill_C
// (None)

class UClass* UBattleEffectAbility_ApplyBattleEffectOnSoulStabKill_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffectAbility_ApplyBattleEffectOnSoulStabKill_C");

	return Clss;
}


// BattleEffectAbility_ApplyBattleEffectOnSoulStabKill_C BattleEffectAbility_ApplyBattleEffectOnSoulStabKill.Default__BattleEffectAbility_ApplyBattleEffectOnSoulStabKill_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffectAbility_ApplyBattleEffectOnSoulStabKill_C* UBattleEffectAbility_ApplyBattleEffectOnSoulStabKill_C::GetDefaultObj()
{
	static class UBattleEffectAbility_ApplyBattleEffectOnSoulStabKill_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffectAbility_ApplyBattleEffectOnSoulStabKill_C*>(UBattleEffectAbility_ApplyBattleEffectOnSoulStabKill_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleEffectAbility_ApplyBattleEffectOnSoulStabKill.BattleEffectAbility_ApplyBattleEffectOnSoulStabKill_C.K2_ShouldAbilityRespondToEvent
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo   ActorInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FGameplayEventData          Payload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBattleEffectAbility_ApplyBattleEffectOnSoulStabKill_C::K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload, bool CallFunc_HasTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattleEffectAbility_ApplyBattleEffectOnSoulStabKill_C", "K2_ShouldAbilityRespondToEvent");

	Params::UBattleEffectAbility_ApplyBattleEffectOnSoulStabKill_C_K2_ShouldAbilityRespondToEvent_Params Parms{};

	Parms.ActorInfo = ActorInfo;
	Parms.Payload = Payload;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleEffectAbility_ApplyBattleEffectOnSoulStabKill.BattleEffectAbility_ApplyBattleEffectOnSoulStabKill_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBattleEffectAbility_ApplyBattleEffectOnSoulStabKill_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattleEffectAbility_ApplyBattleEffectOnSoulStabKill_C", "K2_ActivateAbilityFromEvent");

	Params::UBattleEffectAbility_ApplyBattleEffectOnSoulStabKill_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEffectAbility_ApplyBattleEffectOnSoulStabKill.BattleEffectAbility_ApplyBattleEffectOnSoulStabKill_C.ExecuteUbergraph_BattleEffectAbility_ApplyBattleEffectOnSoulStabKill
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// class FName                        CallFunc_GetBattleEffectStringParam_outValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBattleEffectStringParam_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FHexBattleEffectIdentifier  K2Node_MakeStruct_HexBattleEffectIdentifier                      (NoDestructor)
// struct FActiveGameplayEffectHandle CallFunc_ApplyBattleEffectFromDefinition_ReturnValue             (NoDestructor, HasGetValueTypeHash)

void UBattleEffectAbility_ApplyBattleEffectOnSoulStabKill_C::ExecuteUbergraph_BattleEffectAbility_ApplyBattleEffectOnSoulStabKill(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, class FName CallFunc_GetBattleEffectStringParam_outValue, bool CallFunc_GetBattleEffectStringParam_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue, const struct FHexBattleEffectIdentifier& K2Node_MakeStruct_HexBattleEffectIdentifier, const struct FActiveGameplayEffectHandle& CallFunc_ApplyBattleEffectFromDefinition_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattleEffectAbility_ApplyBattleEffectOnSoulStabKill_C", "ExecuteUbergraph_BattleEffectAbility_ApplyBattleEffectOnSoulStabKill");

	Params::UBattleEffectAbility_ApplyBattleEffectOnSoulStabKill_C_ExecuteUbergraph_BattleEffectAbility_ApplyBattleEffectOnSoulStabKill_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_GetBattleEffectStringParam_outValue = CallFunc_GetBattleEffectStringParam_outValue;
	Parms.CallFunc_GetBattleEffectStringParam_ReturnValue = CallFunc_GetBattleEffectStringParam_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue = CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue;
	Parms.K2Node_MakeStruct_HexBattleEffectIdentifier = K2Node_MakeStruct_HexBattleEffectIdentifier;
	Parms.CallFunc_ApplyBattleEffectFromDefinition_ReturnValue = CallFunc_ApplyBattleEffectFromDefinition_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


