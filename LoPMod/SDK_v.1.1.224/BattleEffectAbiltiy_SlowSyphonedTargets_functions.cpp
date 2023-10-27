#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffectAbiltiy_SlowSyphonedTargets.BattleEffectAbiltiy_SlowSyphonedTargets_C
// (None)

class UClass* UBattleEffectAbiltiy_SlowSyphonedTargets_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffectAbiltiy_SlowSyphonedTargets_C");

	return Clss;
}


// BattleEffectAbiltiy_SlowSyphonedTargets_C BattleEffectAbiltiy_SlowSyphonedTargets.Default__BattleEffectAbiltiy_SlowSyphonedTargets_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffectAbiltiy_SlowSyphonedTargets_C* UBattleEffectAbiltiy_SlowSyphonedTargets_C::GetDefaultObj()
{
	static class UBattleEffectAbiltiy_SlowSyphonedTargets_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffectAbiltiy_SlowSyphonedTargets_C*>(UBattleEffectAbiltiy_SlowSyphonedTargets_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleEffectAbiltiy_SlowSyphonedTargets.BattleEffectAbiltiy_SlowSyphonedTargets_C.EventReceived_05AFCE8949EAB638A6EF079B16742D56
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          Payload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UBattleEffectAbiltiy_SlowSyphonedTargets_C::EventReceived_05AFCE8949EAB638A6EF079B16742D56(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattleEffectAbiltiy_SlowSyphonedTargets_C", "EventReceived_05AFCE8949EAB638A6EF079B16742D56");

	Params::UBattleEffectAbiltiy_SlowSyphonedTargets_C_EventReceived_05AFCE8949EAB638A6EF079B16742D56_Params Parms{};

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEffectAbiltiy_SlowSyphonedTargets.BattleEffectAbiltiy_SlowSyphonedTargets_C.EventReceived_5506521C438CD50C229B08B1368FF34E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          Payload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UBattleEffectAbiltiy_SlowSyphonedTargets_C::EventReceived_5506521C438CD50C229B08B1368FF34E(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattleEffectAbiltiy_SlowSyphonedTargets_C", "EventReceived_5506521C438CD50C229B08B1368FF34E");

	Params::UBattleEffectAbiltiy_SlowSyphonedTargets_C_EventReceived_5506521C438CD50C229B08B1368FF34E_Params Parms{};

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEffectAbiltiy_SlowSyphonedTargets.BattleEffectAbiltiy_SlowSyphonedTargets_C.EventReceived_F375F67A42B0425BBA3B84A5A1AC933B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          Payload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UBattleEffectAbiltiy_SlowSyphonedTargets_C::EventReceived_F375F67A42B0425BBA3B84A5A1AC933B(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattleEffectAbiltiy_SlowSyphonedTargets_C", "EventReceived_F375F67A42B0425BBA3B84A5A1AC933B");

	Params::UBattleEffectAbiltiy_SlowSyphonedTargets_C_EventReceived_F375F67A42B0425BBA3B84A5A1AC933B_Params Parms{};

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEffectAbiltiy_SlowSyphonedTargets.BattleEffectAbiltiy_SlowSyphonedTargets_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattleEffectAbiltiy_SlowSyphonedTargets_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattleEffectAbiltiy_SlowSyphonedTargets_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEffectAbiltiy_SlowSyphonedTargets.BattleEffectAbiltiy_SlowSyphonedTargets_C.OnSyphonedTargetAdded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     SyphonedTarget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBattleEffectAbiltiy_SlowSyphonedTargets_C::OnSyphonedTargetAdded(class UObject* SyphonedTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattleEffectAbiltiy_SlowSyphonedTargets_C", "OnSyphonedTargetAdded");

	Params::UBattleEffectAbiltiy_SlowSyphonedTargets_C_OnSyphonedTargetAdded_Params Parms{};

	Parms.SyphonedTarget = SyphonedTarget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEffectAbiltiy_SlowSyphonedTargets.BattleEffectAbiltiy_SlowSyphonedTargets_C.OnSyphonedTargetRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     SyphonedTarget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBattleEffectAbiltiy_SlowSyphonedTargets_C::OnSyphonedTargetRemoved(class UObject* SyphonedTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattleEffectAbiltiy_SlowSyphonedTargets_C", "OnSyphonedTargetRemoved");

	Params::UBattleEffectAbiltiy_SlowSyphonedTargets_C_OnSyphonedTargetRemoved_Params Parms{};

	Parms.SyphonedTarget = SyphonedTarget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEffectAbiltiy_SlowSyphonedTargets.BattleEffectAbiltiy_SlowSyphonedTargets_C.ExecuteUbergraph_BattleEffectAbiltiy_SlowSyphonedTargets
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          Temp_struct_Variable                                             (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_WaitGameplayEvent*CallFunc_WaitGameplayEvent_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_CustomEvent_Payload_1                                     (None)
// struct FGameplayEventData          Temp_struct_Variable_1                                           (None)
// class UAbilityTask_WaitGameplayEvent*CallFunc_WaitGameplayEvent_ReturnValue_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_CustomEvent_Payload                                       (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          Temp_struct_Variable_2                                           (None)
// class UAbilityTask_WaitGameplayEvent*CallFunc_WaitGameplayEvent_ReturnValue_2                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_SyphonedTarget_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_SyphonedTarget                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ALOTF2Character*             K2Node_DynamicCast_AsLOTF2Character                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALOTF2Character*             K2Node_DynamicCast_AsLOTF2Character_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue_1                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue                (NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_Map_Find_Value                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveActiveGameplayEffect_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_CustomEvent_Payload_2                                     (None)

void UBattleEffectAbiltiy_SlowSyphonedTargets_C::ExecuteUbergraph_BattleEffectAbiltiy_SlowSyphonedTargets(int32 EntryPoint, const struct FGameplayEventData& Temp_struct_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayEventData& K2Node_CustomEvent_Payload_1, const struct FGameplayEventData& Temp_struct_Variable_1, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const struct FGameplayEventData& K2Node_CustomEvent_Payload, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FGameplayEventData& Temp_struct_Variable_2, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, class UObject* K2Node_CustomEvent_SyphonedTarget_1, class UObject* K2Node_CustomEvent_SyphonedTarget, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character_1, bool K2Node_DynamicCast_bSuccess_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue, const struct FGameplayEventData& K2Node_CustomEvent_Payload_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattleEffectAbiltiy_SlowSyphonedTargets_C", "ExecuteUbergraph_BattleEffectAbiltiy_SlowSyphonedTargets");

	Params::UBattleEffectAbiltiy_SlowSyphonedTargets_C_ExecuteUbergraph_BattleEffectAbiltiy_SlowSyphonedTargets_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_WaitGameplayEvent_ReturnValue = CallFunc_WaitGameplayEvent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_Payload_1 = K2Node_CustomEvent_Payload_1;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_WaitGameplayEvent_ReturnValue_1 = CallFunc_WaitGameplayEvent_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_Payload = K2Node_CustomEvent_Payload;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.CallFunc_WaitGameplayEvent_ReturnValue_2 = CallFunc_WaitGameplayEvent_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CustomEvent_SyphonedTarget_1 = K2Node_CustomEvent_SyphonedTarget_1;
	Parms.K2Node_CustomEvent_SyphonedTarget = K2Node_CustomEvent_SyphonedTarget;
	Parms.K2Node_DynamicCast_AsLOTF2Character = K2Node_DynamicCast_AsLOTF2Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsLOTF2Character_1 = K2Node_DynamicCast_AsLOTF2Character_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue_1 = CallFunc_GetAbilitySystemComponent_ReturnValue_1;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.CallFunc_RemoveActiveGameplayEffect_ReturnValue = CallFunc_RemoveActiveGameplayEffect_ReturnValue;
	Parms.K2Node_CustomEvent_Payload_2 = K2Node_CustomEvent_Payload_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


