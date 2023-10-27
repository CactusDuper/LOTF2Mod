#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffectAbility_501_ApplyBattleEffectOnKill.BattleEffectAbility_501_ApplyBattleEffectOnKill_C
// (None)

class UClass* UBattleEffectAbility_501_ApplyBattleEffectOnKill_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffectAbility_501_ApplyBattleEffectOnKill_C");

	return Clss;
}


// BattleEffectAbility_501_ApplyBattleEffectOnKill_C BattleEffectAbility_501_ApplyBattleEffectOnKill.Default__BattleEffectAbility_501_ApplyBattleEffectOnKill_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffectAbility_501_ApplyBattleEffectOnKill_C* UBattleEffectAbility_501_ApplyBattleEffectOnKill_C::GetDefaultObj()
{
	static class UBattleEffectAbility_501_ApplyBattleEffectOnKill_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffectAbility_501_ApplyBattleEffectOnKill_C*>(UBattleEffectAbility_501_ApplyBattleEffectOnKill_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleEffectAbility_501_ApplyBattleEffectOnKill.BattleEffectAbility_501_ApplyBattleEffectOnKill_C.K2_ShouldAbilityRespondToEvent
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo   ActorInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FGameplayEventData          Payload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBattleEffectAbility_501_ApplyBattleEffectOnKill_C::K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattleEffectAbility_501_ApplyBattleEffectOnKill_C", "K2_ShouldAbilityRespondToEvent");

	Params::UBattleEffectAbility_501_ApplyBattleEffectOnKill_C_K2_ShouldAbilityRespondToEvent_Params Parms{};

	Parms.ActorInfo = ActorInfo;
	Parms.Payload = Payload;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleEffectAbility_501_ApplyBattleEffectOnKill.BattleEffectAbility_501_ApplyBattleEffectOnKill_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBattleEffectAbility_501_ApplyBattleEffectOnKill_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattleEffectAbility_501_ApplyBattleEffectOnKill_C", "K2_ActivateAbilityFromEvent");

	Params::UBattleEffectAbility_501_ApplyBattleEffectOnKill_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEffectAbility_501_ApplyBattleEffectOnKill.BattleEffectAbility_501_ApplyBattleEffectOnKill_C.ExecuteUbergraph_BattleEffectAbility_501_ApplyBattleEffectOnKill
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// class FName                        CallFunc_GetBattleEffectStringParam_outValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBattleEffectStringParam_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_ApplyBattleEffectWithCurrentAbilityParamsToSelf_ReturnValue(NoDestructor, HasGetValueTypeHash)

void UBattleEffectAbility_501_ApplyBattleEffectOnKill_C::ExecuteUbergraph_BattleEffectAbility_501_ApplyBattleEffectOnKill(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, class FName CallFunc_GetBattleEffectStringParam_outValue, bool CallFunc_GetBattleEffectStringParam_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_ApplyBattleEffectWithCurrentAbilityParamsToSelf_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattleEffectAbility_501_ApplyBattleEffectOnKill_C", "ExecuteUbergraph_BattleEffectAbility_501_ApplyBattleEffectOnKill");

	Params::UBattleEffectAbility_501_ApplyBattleEffectOnKill_C_ExecuteUbergraph_BattleEffectAbility_501_ApplyBattleEffectOnKill_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_GetBattleEffectStringParam_outValue = CallFunc_GetBattleEffectStringParam_outValue;
	Parms.CallFunc_GetBattleEffectStringParam_ReturnValue = CallFunc_GetBattleEffectStringParam_ReturnValue;
	Parms.CallFunc_ApplyBattleEffectWithCurrentAbilityParamsToSelf_ReturnValue = CallFunc_ApplyBattleEffectWithCurrentAbilityParamsToSelf_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


