#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffectAbility_ApplyBattleEffectOnHitToTarget.BattleEffectAbility_ApplyBattleEffectOnHitToTarget_C
// (None)

class UClass* UBattleEffectAbility_ApplyBattleEffectOnHitToTarget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffectAbility_ApplyBattleEffectOnHitToTarget_C");

	return Clss;
}


// BattleEffectAbility_ApplyBattleEffectOnHitToTarget_C BattleEffectAbility_ApplyBattleEffectOnHitToTarget.Default__BattleEffectAbility_ApplyBattleEffectOnHitToTarget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffectAbility_ApplyBattleEffectOnHitToTarget_C* UBattleEffectAbility_ApplyBattleEffectOnHitToTarget_C::GetDefaultObj()
{
	static class UBattleEffectAbility_ApplyBattleEffectOnHitToTarget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffectAbility_ApplyBattleEffectOnHitToTarget_C*>(UBattleEffectAbility_ApplyBattleEffectOnHitToTarget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleEffectAbility_ApplyBattleEffectOnHitToTarget.BattleEffectAbility_ApplyBattleEffectOnHitToTarget_C.K2_ShouldAbilityRespondToEvent
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo   ActorInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FGameplayEventData          Payload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexDamageEventData*         K2Node_DynamicCast_AsHex_Damage_Event_Data                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBattleEffectAbility_ApplyBattleEffectOnHitToTarget_C::K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload, class UHexDamageEventData* K2Node_DynamicCast_AsHex_Damage_Event_Data, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattleEffectAbility_ApplyBattleEffectOnHitToTarget_C", "K2_ShouldAbilityRespondToEvent");

	Params::UBattleEffectAbility_ApplyBattleEffectOnHitToTarget_C_K2_ShouldAbilityRespondToEvent_Params Parms{};

	Parms.ActorInfo = ActorInfo;
	Parms.Payload = Payload;
	Parms.K2Node_DynamicCast_AsHex_Damage_Event_Data = K2Node_DynamicCast_AsHex_Damage_Event_Data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleEffectAbility_ApplyBattleEffectOnHitToTarget.BattleEffectAbility_ApplyBattleEffectOnHitToTarget_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBattleEffectAbility_ApplyBattleEffectOnHitToTarget_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattleEffectAbility_ApplyBattleEffectOnHitToTarget_C", "K2_ActivateAbilityFromEvent");

	Params::UBattleEffectAbility_ApplyBattleEffectOnHitToTarget_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEffectAbility_ApplyBattleEffectOnHitToTarget.BattleEffectAbility_ApplyBattleEffectOnHitToTarget_C.ExecuteUbergraph_BattleEffectAbility_ApplyBattleEffectOnHitToTarget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// class ACharacter*                  CallFunc_CastToCharacter_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetBattleEffectStringParam_outValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBattleEffectStringParam_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FHexBattleEffectIdentifier  K2Node_MakeStruct_HexBattleEffectIdentifier                      (NoDestructor)
// struct FActiveGameplayEffectHandle CallFunc_ApplyBattleEffectToActor_ReturnValue                    (NoDestructor, HasGetValueTypeHash)

void UBattleEffectAbility_ApplyBattleEffectOnHitToTarget_C::ExecuteUbergraph_BattleEffectAbility_ApplyBattleEffectOnHitToTarget(int32 EntryPoint, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, bool Temp_bool_Variable, const struct FGameplayEventData& K2Node_Event_EventData, class ACharacter* CallFunc_CastToCharacter_ReturnValue, class AActor* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, class FName CallFunc_GetBattleEffectStringParam_outValue, bool CallFunc_GetBattleEffectStringParam_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, const struct FHexBattleEffectIdentifier& K2Node_MakeStruct_HexBattleEffectIdentifier, const struct FActiveGameplayEffectHandle& CallFunc_ApplyBattleEffectToActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattleEffectAbility_ApplyBattleEffectOnHitToTarget_C", "ExecuteUbergraph_BattleEffectAbility_ApplyBattleEffectOnHitToTarget");

	Params::UBattleEffectAbility_ApplyBattleEffectOnHitToTarget_C_ExecuteUbergraph_BattleEffectAbility_ApplyBattleEffectOnHitToTarget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_CastToCharacter_ReturnValue = CallFunc_CastToCharacter_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetBattleEffectStringParam_outValue = CallFunc_GetBattleEffectStringParam_outValue;
	Parms.CallFunc_GetBattleEffectStringParam_ReturnValue = CallFunc_GetBattleEffectStringParam_ReturnValue;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1 = CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1;
	Parms.K2Node_MakeStruct_HexBattleEffectIdentifier = K2Node_MakeStruct_HexBattleEffectIdentifier;
	Parms.CallFunc_ApplyBattleEffectToActor_ReturnValue = CallFunc_ApplyBattleEffectToActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


