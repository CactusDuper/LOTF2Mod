#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffectAbility_500_ApplyBattleEffectIfAttributeBelowThreshold.BattleEffectAbility_500_ApplyBattleEffectIfAttributeBelowThreshold_C
// (None)

class UClass* UBattleEffectAbility_500_ApplyBattleEffectIfAttributeBelowThreshold_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffectAbility_500_ApplyBattleEffectIfAttributeBelowThreshold_C");

	return Clss;
}


// BattleEffectAbility_500_ApplyBattleEffectIfAttributeBelowThreshold_C BattleEffectAbility_500_ApplyBattleEffectIfAttributeBelowThreshold.Default__BattleEffectAbility_500_ApplyBattleEffectIfAttributeBelowThreshold_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffectAbility_500_ApplyBattleEffectIfAttributeBelowThreshold_C* UBattleEffectAbility_500_ApplyBattleEffectIfAttributeBelowThreshold_C::GetDefaultObj()
{
	static class UBattleEffectAbility_500_ApplyBattleEffectIfAttributeBelowThreshold_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffectAbility_500_ApplyBattleEffectIfAttributeBelowThreshold_C*>(UBattleEffectAbility_500_ApplyBattleEffectIfAttributeBelowThreshold_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleEffectAbility_500_ApplyBattleEffectIfAttributeBelowThreshold.BattleEffectAbility_500_ApplyBattleEffectIfAttributeBelowThreshold_C.OnChange_7D102F514F8A81B47BBD53AEF1FE439D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bMatchesComparison                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CurrentRatio                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleEffectAbility_500_ApplyBattleEffectIfAttributeBelowThreshold_C::OnChange_7D102F514F8A81B47BBD53AEF1FE439D(bool bMatchesComparison, float CurrentRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattleEffectAbility_500_ApplyBattleEffectIfAttributeBelowThreshold_C", "OnChange_7D102F514F8A81B47BBD53AEF1FE439D");

	Params::UBattleEffectAbility_500_ApplyBattleEffectIfAttributeBelowThreshold_C_OnChange_7D102F514F8A81B47BBD53AEF1FE439D_Params Parms{};

	Parms.bMatchesComparison = bMatchesComparison;
	Parms.CurrentRatio = CurrentRatio;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEffectAbility_500_ApplyBattleEffectIfAttributeBelowThreshold.BattleEffectAbility_500_ApplyBattleEffectIfAttributeBelowThreshold_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattleEffectAbility_500_ApplyBattleEffectIfAttributeBelowThreshold_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattleEffectAbility_500_ApplyBattleEffectIfAttributeBelowThreshold_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEffectAbility_500_ApplyBattleEffectIfAttributeBelowThreshold.BattleEffectAbility_500_ApplyBattleEffectIfAttributeBelowThreshold_C.ApplyEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleEffectAbility_500_ApplyBattleEffectIfAttributeBelowThreshold_C::ApplyEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattleEffectAbility_500_ApplyBattleEffectIfAttributeBelowThreshold_C", "ApplyEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEffectAbility_500_ApplyBattleEffectIfAttributeBelowThreshold.BattleEffectAbility_500_ApplyBattleEffectIfAttributeBelowThreshold_C.RemoveEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattleEffectAbility_500_ApplyBattleEffectIfAttributeBelowThreshold_C::RemoveEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattleEffectAbility_500_ApplyBattleEffectIfAttributeBelowThreshold_C", "RemoveEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEffectAbility_500_ApplyBattleEffectIfAttributeBelowThreshold.BattleEffectAbility_500_ApplyBattleEffectIfAttributeBelowThreshold_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleEffectAbility_500_ApplyBattleEffectIfAttributeBelowThreshold_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattleEffectAbility_500_ApplyBattleEffectIfAttributeBelowThreshold_C", "K2_OnEndAbility");

	Params::UBattleEffectAbility_500_ApplyBattleEffectIfAttributeBelowThreshold_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEffectAbility_500_ApplyBattleEffectIfAttributeBelowThreshold.BattleEffectAbility_500_ApplyBattleEffectIfAttributeBelowThreshold_C.ExecuteUbergraph_BattleEffectAbility_500_ApplyBattleEffectIfAttributeBelowThreshold
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bMatchesComparison                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_CurrentRatio                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetBattleEffectNumericParam_outValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBattleEffectNumericParam_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAttribute          CallFunc_GetBattleEffectAttributeParam_outValue                  (HasGetValueTypeHash)
// bool                               CallFunc_GetBattleEffectAttributeParam_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAttribute          CallFunc_GetBattleEffectAttributeParam_outValue_1                (HasGetValueTypeHash)
// bool                               CallFunc_GetBattleEffectAttributeParam_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAttribute          CallFunc_GetBattleEffectAttributeParam_outValue_2                (HasGetValueTypeHash)
// bool                               CallFunc_GetBattleEffectAttributeParam_ReturnValue_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAttribute          CallFunc_GetBattleEffectAttributeParam_outValue_3                (HasGetValueTypeHash)
// bool                               CallFunc_GetBattleEffectAttributeParam_ReturnValue_3             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetBattleEffectStringParam_outValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBattleEffectStringParam_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_ApplyBattleEffectWithCurrentAbilityParamsToSelf_ReturnValue(NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue_1    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveActiveGameplayEffect_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_WaitAttributeChangeRatioThreshold*CallFunc_WaitForAttributeChangeRatioThreshold_ReturnValue        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_B_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleEffectAbility_500_ApplyBattleEffectIfAttributeBelowThreshold_C::ExecuteUbergraph_BattleEffectAbility_500_ApplyBattleEffectIfAttributeBelowThreshold(int32 EntryPoint, bool K2Node_CustomEvent_bMatchesComparison, float K2Node_CustomEvent_CurrentRatio, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float Temp_real_Variable, bool Temp_bool_Variable, float CallFunc_GetBattleEffectNumericParam_outValue, bool CallFunc_GetBattleEffectNumericParam_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FGameplayAttribute& CallFunc_GetBattleEffectAttributeParam_outValue, bool CallFunc_GetBattleEffectAttributeParam_ReturnValue, const struct FGameplayAttribute& CallFunc_GetBattleEffectAttributeParam_outValue_1, bool CallFunc_GetBattleEffectAttributeParam_ReturnValue_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue, const struct FGameplayAttribute& CallFunc_GetBattleEffectAttributeParam_outValue_2, bool CallFunc_GetBattleEffectAttributeParam_ReturnValue_2, const struct FGameplayAttribute& CallFunc_GetBattleEffectAttributeParam_outValue_3, bool CallFunc_GetBattleEffectAttributeParam_ReturnValue_3, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_1, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue, class FName CallFunc_GetBattleEffectStringParam_outValue, bool CallFunc_GetBattleEffectStringParam_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_ApplyBattleEffectWithCurrentAbilityParamsToSelf_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue_1, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue, bool K2Node_Event_bWasCancelled, class UAbilityTask_WaitAttributeChangeRatioThreshold* CallFunc_WaitForAttributeChangeRatioThreshold_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_Less_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattleEffectAbility_500_ApplyBattleEffectIfAttributeBelowThreshold_C", "ExecuteUbergraph_BattleEffectAbility_500_ApplyBattleEffectIfAttributeBelowThreshold");

	Params::UBattleEffectAbility_500_ApplyBattleEffectIfAttributeBelowThreshold_C_ExecuteUbergraph_BattleEffectAbility_500_ApplyBattleEffectIfAttributeBelowThreshold_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_bMatchesComparison = K2Node_CustomEvent_bMatchesComparison;
	Parms.K2Node_CustomEvent_CurrentRatio = K2Node_CustomEvent_CurrentRatio;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetBattleEffectNumericParam_outValue = CallFunc_GetBattleEffectNumericParam_outValue;
	Parms.CallFunc_GetBattleEffectNumericParam_ReturnValue = CallFunc_GetBattleEffectNumericParam_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetBattleEffectAttributeParam_outValue = CallFunc_GetBattleEffectAttributeParam_outValue;
	Parms.CallFunc_GetBattleEffectAttributeParam_ReturnValue = CallFunc_GetBattleEffectAttributeParam_ReturnValue;
	Parms.CallFunc_GetBattleEffectAttributeParam_outValue_1 = CallFunc_GetBattleEffectAttributeParam_outValue_1;
	Parms.CallFunc_GetBattleEffectAttributeParam_ReturnValue_1 = CallFunc_GetBattleEffectAttributeParam_ReturnValue_1;
	Parms.CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue = CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue;
	Parms.CallFunc_GetBattleEffectAttributeParam_outValue_2 = CallFunc_GetBattleEffectAttributeParam_outValue_2;
	Parms.CallFunc_GetBattleEffectAttributeParam_ReturnValue_2 = CallFunc_GetBattleEffectAttributeParam_ReturnValue_2;
	Parms.CallFunc_GetBattleEffectAttributeParam_outValue_3 = CallFunc_GetBattleEffectAttributeParam_outValue_3;
	Parms.CallFunc_GetBattleEffectAttributeParam_ReturnValue_3 = CallFunc_GetBattleEffectAttributeParam_ReturnValue_3;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute = CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue = CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_1 = CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_1;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_1 = CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_1;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetBattleEffectStringParam_outValue = CallFunc_GetBattleEffectStringParam_outValue;
	Parms.CallFunc_GetBattleEffectStringParam_ReturnValue = CallFunc_GetBattleEffectStringParam_ReturnValue;
	Parms.CallFunc_ApplyBattleEffectWithCurrentAbilityParamsToSelf_ReturnValue = CallFunc_ApplyBattleEffectWithCurrentAbilityParamsToSelf_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue_1 = CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue_1;
	Parms.CallFunc_RemoveActiveGameplayEffect_ReturnValue = CallFunc_RemoveActiveGameplayEffect_ReturnValue;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_WaitForAttributeChangeRatioThreshold_ReturnValue = CallFunc_WaitForAttributeChangeRatioThreshold_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast = CallFunc_Less_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Less_DoubleDouble_B_ImplicitCast = CallFunc_Less_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


