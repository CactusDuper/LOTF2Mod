#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_ForcedTranscendRealm_BP.GA_ForcedTranscendRealm_BP_C
// (None)

class UClass* UGA_ForcedTranscendRealm_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_ForcedTranscendRealm_BP_C");

	return Clss;
}


// GA_ForcedTranscendRealm_BP_C GA_ForcedTranscendRealm_BP.Default__GA_ForcedTranscendRealm_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_ForcedTranscendRealm_BP_C* UGA_ForcedTranscendRealm_BP_C::GetDefaultObj()
{
	static class UGA_ForcedTranscendRealm_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_ForcedTranscendRealm_BP_C*>(UGA_ForcedTranscendRealm_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_ForcedTranscendRealm_BP.GA_ForcedTranscendRealm_BP_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_ForcedTranscendRealm_BP_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ForcedTranscendRealm_BP_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_ForcedTranscendRealm_BP.GA_ForcedTranscendRealm_BP_C.ExecuteUbergraph_GA_ForcedTranscendRealm_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue               (NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1             (NoDestructor, HasGetValueTypeHash)

void UGA_ForcedTranscendRealm_BP_C::ExecuteUbergraph_GA_ForcedTranscendRealm_BP(int32 EntryPoint, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ForcedTranscendRealm_BP_C", "ExecuteUbergraph_GA_ForcedTranscendRealm_BP");

	Params::UGA_ForcedTranscendRealm_BP_C_ExecuteUbergraph_GA_ForcedTranscendRealm_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1 = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


