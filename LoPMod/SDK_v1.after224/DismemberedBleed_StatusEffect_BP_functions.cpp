#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DismemberedBleed_StatusEffect_BP.DismemberedBleed_StatusEffect_BP_C
// (Actor)

class UClass* ADismemberedBleed_StatusEffect_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DismemberedBleed_StatusEffect_BP_C");

	return Clss;
}


// DismemberedBleed_StatusEffect_BP_C DismemberedBleed_StatusEffect_BP.Default__DismemberedBleed_StatusEffect_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADismemberedBleed_StatusEffect_BP_C* ADismemberedBleed_StatusEffect_BP_C::GetDefaultObj()
{
	static class ADismemberedBleed_StatusEffect_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADismemberedBleed_StatusEffect_BP_C*>(ADismemberedBleed_StatusEffect_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DismemberedBleed_StatusEffect_BP.DismemberedBleed_StatusEffect_BP_C.StartEffect
// (Event, Public, BlueprintEvent)
// Parameters:
// class UStatusEffectComponent*      StatusEffectComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ADismemberedBleed_StatusEffect_BP_C::StartEffect(class UStatusEffectComponent* StatusEffectComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DismemberedBleed_StatusEffect_BP_C", "StartEffect");

	Params::ADismemberedBleed_StatusEffect_BP_C_StartEffect_Params Parms{};

	Parms.StatusEffectComponent = StatusEffectComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DismemberedBleed_StatusEffect_BP.DismemberedBleed_StatusEffect_BP_C.EndEffect
// (Event, Public, BlueprintEvent)
// Parameters:

void ADismemberedBleed_StatusEffect_BP_C::EndEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DismemberedBleed_StatusEffect_BP_C", "EndEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DismemberedBleed_StatusEffect_BP.DismemberedBleed_StatusEffect_BP_C.ExecuteUbergraph_DismemberedBleed_StatusEffect_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStatusEffectComponent*      K2Node_Event_StatusEffectComponent                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyDamage_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyDamage_BaseDamage_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADismemberedBleed_StatusEffect_BP_C::ExecuteUbergraph_DismemberedBleed_StatusEffect_BP(int32 EntryPoint, class UStatusEffectComponent* K2Node_Event_StatusEffectComponent, float CallFunc_ApplyDamage_ReturnValue, float CallFunc_ApplyDamage_BaseDamage_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DismemberedBleed_StatusEffect_BP_C", "ExecuteUbergraph_DismemberedBleed_StatusEffect_BP");

	Params::ADismemberedBleed_StatusEffect_BP_C_ExecuteUbergraph_DismemberedBleed_StatusEffect_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_StatusEffectComponent = K2Node_Event_StatusEffectComponent;
	Parms.CallFunc_ApplyDamage_ReturnValue = CallFunc_ApplyDamage_ReturnValue;
	Parms.CallFunc_ApplyDamage_BaseDamage_ImplicitCast = CallFunc_ApplyDamage_BaseDamage_ImplicitCast;
	Parms.CallFunc_Delay_Duration_ImplicitCast = CallFunc_Delay_Duration_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


