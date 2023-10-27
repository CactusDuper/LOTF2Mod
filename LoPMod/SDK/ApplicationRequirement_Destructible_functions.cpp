#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ApplicationRequirement_Destructible.ApplicationRequirement_Destructible_C
// (None)

class UClass* UApplicationRequirement_Destructible_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ApplicationRequirement_Destructible_C");

	return Clss;
}


// ApplicationRequirement_Destructible_C ApplicationRequirement_Destructible.Default__ApplicationRequirement_Destructible_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UApplicationRequirement_Destructible_C* UApplicationRequirement_Destructible_C::GetDefaultObj()
{
	static class UApplicationRequirement_Destructible_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UApplicationRequirement_Destructible_C*>(UApplicationRequirement_Destructible_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ApplicationRequirement_Destructible.ApplicationRequirement_Destructible_C.CanApplyGameplayEffect
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UGameplayEffect*             GameplayEffect                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpec         Spec                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UAbilitySystemComponent*     ASC                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ADestructible*               K2Node_DynamicCast_AsDestructible                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UApplicationRequirement_Destructible_C::CanApplyGameplayEffect(class UGameplayEffect* GameplayEffect, struct FGameplayEffectSpec& Spec, class UAbilitySystemComponent* ASC, class AActor* CallFunc_GetOwner_ReturnValue, class ADestructible* K2Node_DynamicCast_AsDestructible, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ApplicationRequirement_Destructible_C", "CanApplyGameplayEffect");

	Params::UApplicationRequirement_Destructible_C_CanApplyGameplayEffect_Params Parms{};

	Parms.GameplayEffect = GameplayEffect;
	Parms.Spec = Spec;
	Parms.ASC = ASC;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsDestructible = K2Node_DynamicCast_AsDestructible;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


