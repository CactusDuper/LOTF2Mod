#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffectAbility_CauseBuildupWhenOtherBuildupIsCaused.BattleEffectAbility_CauseBuildupWhenOtherBuildupIsCaused_C
// (None)

class UClass* UBattleEffectAbility_CauseBuildupWhenOtherBuildupIsCaused_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffectAbility_CauseBuildupWhenOtherBuildupIsCaused_C");

	return Clss;
}


// BattleEffectAbility_CauseBuildupWhenOtherBuildupIsCaused_C BattleEffectAbility_CauseBuildupWhenOtherBuildupIsCaused.Default__BattleEffectAbility_CauseBuildupWhenOtherBuildupIsCaused_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffectAbility_CauseBuildupWhenOtherBuildupIsCaused_C* UBattleEffectAbility_CauseBuildupWhenOtherBuildupIsCaused_C::GetDefaultObj()
{
	static class UBattleEffectAbility_CauseBuildupWhenOtherBuildupIsCaused_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffectAbility_CauseBuildupWhenOtherBuildupIsCaused_C*>(UBattleEffectAbility_CauseBuildupWhenOtherBuildupIsCaused_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleEffectAbility_CauseBuildupWhenOtherBuildupIsCaused.BattleEffectAbility_CauseBuildupWhenOtherBuildupIsCaused_C.K2_ShouldAbilityRespondToEvent
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo   ActorInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FGameplayEventData          Payload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexDamageExecutionResult*   K2Node_DynamicCast_AsHex_Damage_Execution_Result                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAttribute          CallFunc_GetBattleEffectAttributeParam_outValue                  (HasGetValueTypeHash)
// bool                               CallFunc_GetBattleEffectAttributeParam_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBattleEffectAbility_CauseBuildupWhenOtherBuildupIsCaused_C::K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload, class UHexDamageExecutionResult* K2Node_DynamicCast_AsHex_Damage_Execution_Result, bool K2Node_DynamicCast_bSuccess, const struct FGameplayAttribute& CallFunc_GetBattleEffectAttributeParam_outValue, bool CallFunc_GetBattleEffectAttributeParam_ReturnValue, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattleEffectAbility_CauseBuildupWhenOtherBuildupIsCaused_C", "K2_ShouldAbilityRespondToEvent");

	Params::UBattleEffectAbility_CauseBuildupWhenOtherBuildupIsCaused_C_K2_ShouldAbilityRespondToEvent_Params Parms{};

	Parms.ActorInfo = ActorInfo;
	Parms.Payload = Payload;
	Parms.K2Node_DynamicCast_AsHex_Damage_Execution_Result = K2Node_DynamicCast_AsHex_Damage_Execution_Result;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBattleEffectAttributeParam_outValue = CallFunc_GetBattleEffectAttributeParam_outValue;
	Parms.CallFunc_GetBattleEffectAttributeParam_ReturnValue = CallFunc_GetBattleEffectAttributeParam_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattleEffectAbility_CauseBuildupWhenOtherBuildupIsCaused.BattleEffectAbility_CauseBuildupWhenOtherBuildupIsCaused_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBattleEffectAbility_CauseBuildupWhenOtherBuildupIsCaused_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattleEffectAbility_CauseBuildupWhenOtherBuildupIsCaused_C", "K2_ActivateAbilityFromEvent");

	Params::UBattleEffectAbility_CauseBuildupWhenOtherBuildupIsCaused_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEffectAbility_CauseBuildupWhenOtherBuildupIsCaused.BattleEffectAbility_CauseBuildupWhenOtherBuildupIsCaused_C.ExecuteUbergraph_BattleEffectAbility_CauseBuildupWhenOtherBuildupIsCaused
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAttribute          CallFunc_GetBattleEffectAttributeParam_outValue                  (HasGetValueTypeHash)
// bool                               CallFunc_GetBattleEffectAttributeParam_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAttribute          CallFunc_GetBattleEffectAttributeParam_outValue_1                (HasGetValueTypeHash)
// bool                               CallFunc_GetBattleEffectAttributeParam_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetBattleEffectNumericParam_outValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBattleEffectNumericParam_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// class UHexDamageExecutionResult*   K2Node_DynamicCast_AsHex_Damage_Execution_Result                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_NewBuildup_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleEffectAbility_CauseBuildupWhenOtherBuildupIsCaused_C::ExecuteUbergraph_BattleEffectAbility_CauseBuildupWhenOtherBuildupIsCaused(int32 EntryPoint, const struct FGameplayAttribute& CallFunc_GetBattleEffectAttributeParam_outValue, bool CallFunc_GetBattleEffectAttributeParam_ReturnValue, const struct FGameplayAttribute& CallFunc_GetBattleEffectAttributeParam_outValue_1, bool CallFunc_GetBattleEffectAttributeParam_ReturnValue_1, float CallFunc_GetBattleEffectNumericParam_outValue, bool CallFunc_GetBattleEffectNumericParam_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, class UHexDamageExecutionResult* K2Node_DynamicCast_AsHex_Damage_Execution_Result, bool K2Node_DynamicCast_bSuccess, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, float K2Node_VariableSet_NewBuildup_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattleEffectAbility_CauseBuildupWhenOtherBuildupIsCaused_C", "ExecuteUbergraph_BattleEffectAbility_CauseBuildupWhenOtherBuildupIsCaused");

	Params::UBattleEffectAbility_CauseBuildupWhenOtherBuildupIsCaused_C_ExecuteUbergraph_BattleEffectAbility_CauseBuildupWhenOtherBuildupIsCaused_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetBattleEffectAttributeParam_outValue = CallFunc_GetBattleEffectAttributeParam_outValue;
	Parms.CallFunc_GetBattleEffectAttributeParam_ReturnValue = CallFunc_GetBattleEffectAttributeParam_ReturnValue;
	Parms.CallFunc_GetBattleEffectAttributeParam_outValue_1 = CallFunc_GetBattleEffectAttributeParam_outValue_1;
	Parms.CallFunc_GetBattleEffectAttributeParam_ReturnValue_1 = CallFunc_GetBattleEffectAttributeParam_ReturnValue_1;
	Parms.CallFunc_GetBattleEffectNumericParam_outValue = CallFunc_GetBattleEffectNumericParam_outValue;
	Parms.CallFunc_GetBattleEffectNumericParam_ReturnValue = CallFunc_GetBattleEffectNumericParam_ReturnValue;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.K2Node_DynamicCast_AsHex_Damage_Execution_Result = K2Node_DynamicCast_AsHex_Damage_Execution_Result;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_B_ImplicitCast = CallFunc_Multiply_DoubleDouble_B_ImplicitCast;
	Parms.K2Node_VariableSet_NewBuildup_ImplicitCast = K2Node_VariableSet_NewBuildup_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


