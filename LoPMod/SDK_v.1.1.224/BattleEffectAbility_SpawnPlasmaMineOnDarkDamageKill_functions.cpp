#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffectAbility_SpawnPlasmaMineOnDarkDamageKill.BattleEffectAbility_SpawnPlasmaMineOnDarkDamageKill_C
// (None)

class UClass* UBattleEffectAbility_SpawnPlasmaMineOnDarkDamageKill_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffectAbility_SpawnPlasmaMineOnDarkDamageKill_C");

	return Clss;
}


// BattleEffectAbility_SpawnPlasmaMineOnDarkDamageKill_C BattleEffectAbility_SpawnPlasmaMineOnDarkDamageKill.Default__BattleEffectAbility_SpawnPlasmaMineOnDarkDamageKill_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffectAbility_SpawnPlasmaMineOnDarkDamageKill_C* UBattleEffectAbility_SpawnPlasmaMineOnDarkDamageKill_C::GetDefaultObj()
{
	static class UBattleEffectAbility_SpawnPlasmaMineOnDarkDamageKill_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffectAbility_SpawnPlasmaMineOnDarkDamageKill_C*>(UBattleEffectAbility_SpawnPlasmaMineOnDarkDamageKill_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleEffectAbility_SpawnPlasmaMineOnDarkDamageKill.BattleEffectAbility_SpawnPlasmaMineOnDarkDamageKill_C.K2_ShouldAbilityRespondToEvent
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo   ActorInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FGameplayEventData          Payload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAttribute          Temp_struct_Variable                                             (ConstParm, HasGetValueTypeHash)
// class UHexDamageExecutionResult*   K2Node_DynamicCast_AsHex_Damage_Execution_Result                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBattleEffectAbility_SpawnPlasmaMineOnDarkDamageKill_C::K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload, const struct FGameplayAttribute& Temp_struct_Variable, class UHexDamageExecutionResult* K2Node_DynamicCast_AsHex_Damage_Execution_Result, bool K2Node_DynamicCast_bSuccess, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattleEffectAbility_SpawnPlasmaMineOnDarkDamageKill_C", "K2_ShouldAbilityRespondToEvent");

	Params::UBattleEffectAbility_SpawnPlasmaMineOnDarkDamageKill_C_K2_ShouldAbilityRespondToEvent_Params Parms{};

	Parms.ActorInfo = ActorInfo;
	Parms.Payload = Payload;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_DynamicCast_AsHex_Damage_Execution_Result = K2Node_DynamicCast_AsHex_Damage_Execution_Result;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleEffectAbility_SpawnPlasmaMineOnDarkDamageKill.BattleEffectAbility_SpawnPlasmaMineOnDarkDamageKill_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBattleEffectAbility_SpawnPlasmaMineOnDarkDamageKill_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattleEffectAbility_SpawnPlasmaMineOnDarkDamageKill_C", "K2_ActivateAbilityFromEvent");

	Params::UBattleEffectAbility_SpawnPlasmaMineOnDarkDamageKill_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEffectAbility_SpawnPlasmaMineOnDarkDamageKill.BattleEffectAbility_SpawnPlasmaMineOnDarkDamageKill_C.ExecuteUbergraph_BattleEffectAbility_SpawnPlasmaMineOnDarkDamageKill
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_DynamicCast_AsPawn                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_SpawnAutonomousAbilityActor_ReturnValue                 (ReferenceParm)

void UBattleEffectAbility_SpawnPlasmaMineOnDarkDamageKill_C::ExecuteUbergraph_BattleEffectAbility_SpawnPlasmaMineOnDarkDamageKill(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, TArray<class AActor*>& CallFunc_SpawnAutonomousAbilityActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattleEffectAbility_SpawnPlasmaMineOnDarkDamageKill_C", "ExecuteUbergraph_BattleEffectAbility_SpawnPlasmaMineOnDarkDamageKill");

	Params::UBattleEffectAbility_SpawnPlasmaMineOnDarkDamageKill_C_ExecuteUbergraph_BattleEffectAbility_SpawnPlasmaMineOnDarkDamageKill_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsPawn = K2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SpawnAutonomousAbilityActor_ReturnValue = CallFunc_SpawnAutonomousAbilityActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


