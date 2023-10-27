#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_StatusEffectBleed_DamageOnAction.GA_StatusEffectBleed_DamageOnAction_C
// (None)

class UClass* UGA_StatusEffectBleed_DamageOnAction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_StatusEffectBleed_DamageOnAction_C");

	return Clss;
}


// GA_StatusEffectBleed_DamageOnAction_C GA_StatusEffectBleed_DamageOnAction.Default__GA_StatusEffectBleed_DamageOnAction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_StatusEffectBleed_DamageOnAction_C* UGA_StatusEffectBleed_DamageOnAction_C::GetDefaultObj()
{
	static class UGA_StatusEffectBleed_DamageOnAction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_StatusEffectBleed_DamageOnAction_C*>(UGA_StatusEffectBleed_DamageOnAction_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_StatusEffectBleed_DamageOnAction.GA_StatusEffectBleed_DamageOnAction_C.OnActivate_977DAD844CA27BF664F12EBA1D385537
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameplayAbility*            ActivatedAbility                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_StatusEffectBleed_DamageOnAction_C::OnActivate_977DAD844CA27BF664F12EBA1D385537(class UGameplayAbility* ActivatedAbility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_StatusEffectBleed_DamageOnAction_C", "OnActivate_977DAD844CA27BF664F12EBA1D385537");

	Params::UGA_StatusEffectBleed_DamageOnAction_C_OnActivate_977DAD844CA27BF664F12EBA1D385537_Params Parms{};

	Parms.ActivatedAbility = ActivatedAbility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_StatusEffectBleed_DamageOnAction.GA_StatusEffectBleed_DamageOnAction_C.EventReceived_6D4F0B504BF425B278E3B7936BF3A815
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          Payload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_StatusEffectBleed_DamageOnAction_C::EventReceived_6D4F0B504BF425B278E3B7936BF3A815(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_StatusEffectBleed_DamageOnAction_C", "EventReceived_6D4F0B504BF425B278E3B7936BF3A815");

	Params::UGA_StatusEffectBleed_DamageOnAction_C_EventReceived_6D4F0B504BF425B278E3B7936BF3A815_Params Parms{};

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_StatusEffectBleed_DamageOnAction.GA_StatusEffectBleed_DamageOnAction_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_StatusEffectBleed_DamageOnAction_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_StatusEffectBleed_DamageOnAction_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_StatusEffectBleed_DamageOnAction.GA_StatusEffectBleed_DamageOnAction_C.ApplyActionDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_StatusEffectBleed_DamageOnAction_C::ApplyActionDamage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_StatusEffectBleed_DamageOnAction_C", "ApplyActionDamage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_StatusEffectBleed_DamageOnAction.GA_StatusEffectBleed_DamageOnAction_C.ExecuteUbergraph_GA_StatusEffectBleed_DamageOnAction
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetBattleEffectStringParam_outValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBattleEffectStringParam_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameplayAbility*            K2Node_CustomEvent_ActivatedAbility                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_ApplyBattleEffectWithCurrentAbilityParamsToSelf_ReturnValue(NoDestructor, HasGetValueTypeHash)
// class UGameplayAbility*            Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_WaitAbilityActivate*CallFunc_WaitForAbilityActivate_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_CustomEvent_Payload                                       (None)
// struct FGameplayEventData          Temp_struct_Variable                                             (None)
// class UAbilityTask_WaitGameplayEvent*CallFunc_WaitGameplayEvent_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageWindow*               K2Node_DynamicCast_AsDamage_Window                               (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_StatusEffectBleed_DamageOnAction_C::ExecuteUbergraph_GA_StatusEffectBleed_DamageOnAction(int32 EntryPoint, class FName CallFunc_GetBattleEffectStringParam_outValue, bool CallFunc_GetBattleEffectStringParam_ReturnValue, class UGameplayAbility* K2Node_CustomEvent_ActivatedAbility, const struct FActiveGameplayEffectHandle& CallFunc_ApplyBattleEffectWithCurrentAbilityParamsToSelf_ReturnValue, class UGameplayAbility* Temp_object_Variable, class UAbilityTask_WaitAbilityActivate* CallFunc_WaitForAbilityActivate_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayEventData& K2Node_CustomEvent_Payload, const struct FGameplayEventData& Temp_struct_Variable, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UDamageWindow* K2Node_DynamicCast_AsDamage_Window, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_StatusEffectBleed_DamageOnAction_C", "ExecuteUbergraph_GA_StatusEffectBleed_DamageOnAction");

	Params::UGA_StatusEffectBleed_DamageOnAction_C_ExecuteUbergraph_GA_StatusEffectBleed_DamageOnAction_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetBattleEffectStringParam_outValue = CallFunc_GetBattleEffectStringParam_outValue;
	Parms.CallFunc_GetBattleEffectStringParam_ReturnValue = CallFunc_GetBattleEffectStringParam_ReturnValue;
	Parms.K2Node_CustomEvent_ActivatedAbility = K2Node_CustomEvent_ActivatedAbility;
	Parms.CallFunc_ApplyBattleEffectWithCurrentAbilityParamsToSelf_ReturnValue = CallFunc_ApplyBattleEffectWithCurrentAbilityParamsToSelf_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_WaitForAbilityActivate_ReturnValue = CallFunc_WaitForAbilityActivate_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Payload = K2Node_CustomEvent_Payload;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_WaitGameplayEvent_ReturnValue = CallFunc_WaitGameplayEvent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsDamage_Window = K2Node_DynamicCast_AsDamage_Window;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


