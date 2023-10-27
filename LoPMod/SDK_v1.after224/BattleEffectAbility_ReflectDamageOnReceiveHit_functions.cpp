#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffectAbility_ReflectDamageOnReceiveHit.BattleEffectAbility_ReflectDamageOnReceiveHit_C
// (None)

class UClass* UBattleEffectAbility_ReflectDamageOnReceiveHit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffectAbility_ReflectDamageOnReceiveHit_C");

	return Clss;
}


// BattleEffectAbility_ReflectDamageOnReceiveHit_C BattleEffectAbility_ReflectDamageOnReceiveHit.Default__BattleEffectAbility_ReflectDamageOnReceiveHit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffectAbility_ReflectDamageOnReceiveHit_C* UBattleEffectAbility_ReflectDamageOnReceiveHit_C::GetDefaultObj()
{
	static class UBattleEffectAbility_ReflectDamageOnReceiveHit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffectAbility_ReflectDamageOnReceiveHit_C*>(UBattleEffectAbility_ReflectDamageOnReceiveHit_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleEffectAbility_ReflectDamageOnReceiveHit.BattleEffectAbility_ReflectDamageOnReceiveHit_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBattleEffectAbility_ReflectDamageOnReceiveHit_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattleEffectAbility_ReflectDamageOnReceiveHit_C", "K2_ActivateAbilityFromEvent");

	Params::UBattleEffectAbility_ReflectDamageOnReceiveHit_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEffectAbility_ReflectDamageOnReceiveHit.BattleEffectAbility_ReflectDamageOnReceiveHit_C.ExecuteUbergraph_BattleEffectAbility_ReflectDamageOnReceiveHit
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetBattleEffectStringParam_outValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBattleEffectStringParam_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetBattleEffectStringParam_outValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBattleEffectStringParam_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetBattleEffectStringParam_outValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBattleEffectStringParam_ReturnValue_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleEffectAbility_ReflectDamageOnReceiveHit_C::ExecuteUbergraph_BattleEffectAbility_ReflectDamageOnReceiveHit(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, const struct FGameplayEventData& K2Node_Event_EventData, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class FName CallFunc_GetBattleEffectStringParam_outValue, bool CallFunc_GetBattleEffectStringParam_ReturnValue, bool CallFunc_HasTag_ReturnValue, bool CallFunc_HasTag_ReturnValue_1, bool CallFunc_HasTag_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class FName CallFunc_GetBattleEffectStringParam_outValue_1, bool CallFunc_GetBattleEffectStringParam_ReturnValue_1, class FName CallFunc_GetBattleEffectStringParam_outValue_2, bool CallFunc_GetBattleEffectStringParam_ReturnValue_2, class FName K2Node_Select_Default, class FName K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattleEffectAbility_ReflectDamageOnReceiveHit_C", "ExecuteUbergraph_BattleEffectAbility_ReflectDamageOnReceiveHit");

	Params::UBattleEffectAbility_ReflectDamageOnReceiveHit_C_ExecuteUbergraph_BattleEffectAbility_ReflectDamageOnReceiveHit_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue = CallFunc_GetOwningActorFromActorInfo_ReturnValue;
	Parms.CallFunc_GetBattleEffectStringParam_outValue = CallFunc_GetBattleEffectStringParam_outValue;
	Parms.CallFunc_GetBattleEffectStringParam_ReturnValue = CallFunc_GetBattleEffectStringParam_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue_1 = CallFunc_HasTag_ReturnValue_1;
	Parms.CallFunc_HasTag_ReturnValue_2 = CallFunc_HasTag_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetBattleEffectStringParam_outValue_1 = CallFunc_GetBattleEffectStringParam_outValue_1;
	Parms.CallFunc_GetBattleEffectStringParam_ReturnValue_1 = CallFunc_GetBattleEffectStringParam_ReturnValue_1;
	Parms.CallFunc_GetBattleEffectStringParam_outValue_2 = CallFunc_GetBattleEffectStringParam_outValue_2;
	Parms.CallFunc_GetBattleEffectStringParam_ReturnValue_2 = CallFunc_GetBattleEffectStringParam_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


