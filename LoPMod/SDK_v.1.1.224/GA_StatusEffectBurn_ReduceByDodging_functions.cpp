#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_StatusEffectBurn_ReduceByDodging.GA_StatusEffectBurn_ReduceByDodging_C
// (None)

class UClass* UGA_StatusEffectBurn_ReduceByDodging_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_StatusEffectBurn_ReduceByDodging_C");

	return Clss;
}


// GA_StatusEffectBurn_ReduceByDodging_C GA_StatusEffectBurn_ReduceByDodging.Default__GA_StatusEffectBurn_ReduceByDodging_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_StatusEffectBurn_ReduceByDodging_C* UGA_StatusEffectBurn_ReduceByDodging_C::GetDefaultObj()
{
	static class UGA_StatusEffectBurn_ReduceByDodging_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_StatusEffectBurn_ReduceByDodging_C*>(UGA_StatusEffectBurn_ReduceByDodging_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_StatusEffectBurn_ReduceByDodging.GA_StatusEffectBurn_ReduceByDodging_C.OnActivate_B1D0AA504024C9993B53D9AF51647065
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameplayAbility*            ActivatedAbility                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_StatusEffectBurn_ReduceByDodging_C::OnActivate_B1D0AA504024C9993B53D9AF51647065(class UGameplayAbility* ActivatedAbility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_StatusEffectBurn_ReduceByDodging_C", "OnActivate_B1D0AA504024C9993B53D9AF51647065");

	Params::UGA_StatusEffectBurn_ReduceByDodging_C_OnActivate_B1D0AA504024C9993B53D9AF51647065_Params Parms{};

	Parms.ActivatedAbility = ActivatedAbility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_StatusEffectBurn_ReduceByDodging.GA_StatusEffectBurn_ReduceByDodging_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_StatusEffectBurn_ReduceByDodging_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_StatusEffectBurn_ReduceByDodging_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_StatusEffectBurn_ReduceByDodging.GA_StatusEffectBurn_ReduceByDodging_C.ExecuteUbergraph_GA_StatusEffectBurn_ReduceByDodging
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleCallFunc_MakeEffectContext_ReturnValue                           (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue                (NoDestructor, HasGetValueTypeHash)
// class UGameplayAbility*            K2Node_CustomEvent_ActivatedAbility                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameplayAbility*            Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_WaitAbilityActivate*CallFunc_WaitForAbilityActivate_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_StatusEffectBurn_ReduceByDodging_C::ExecuteUbergraph_GA_StatusEffectBurn_ReduceByDodging(int32 EntryPoint, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue, const struct FGameplayEffectContextHandle& CallFunc_MakeEffectContext_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, class UGameplayAbility* K2Node_CustomEvent_ActivatedAbility, class UGameplayAbility* Temp_object_Variable, class UAbilityTask_WaitAbilityActivate* CallFunc_WaitForAbilityActivate_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_StatusEffectBurn_ReduceByDodging_C", "ExecuteUbergraph_GA_StatusEffectBurn_ReduceByDodging");

	Params::UGA_StatusEffectBurn_ReduceByDodging_C_ExecuteUbergraph_GA_StatusEffectBurn_ReduceByDodging_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue = CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue;
	Parms.CallFunc_MakeEffectContext_ReturnValue = CallFunc_MakeEffectContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;
	Parms.K2Node_CustomEvent_ActivatedAbility = K2Node_CustomEvent_ActivatedAbility;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_WaitForAbilityActivate_ReturnValue = CallFunc_WaitForAbilityActivate_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


