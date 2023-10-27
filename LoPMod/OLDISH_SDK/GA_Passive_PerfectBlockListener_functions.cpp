#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Passive_PerfectBlockListener.GA_Passive_PerfectBlockListener_C
// (None)

class UClass* UGA_Passive_PerfectBlockListener_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Passive_PerfectBlockListener_C");

	return Clss;
}


// GA_Passive_PerfectBlockListener_C GA_Passive_PerfectBlockListener.Default__GA_Passive_PerfectBlockListener_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Passive_PerfectBlockListener_C* UGA_Passive_PerfectBlockListener_C::GetDefaultObj()
{
	static class UGA_Passive_PerfectBlockListener_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Passive_PerfectBlockListener_C*>(UGA_Passive_PerfectBlockListener_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Passive_PerfectBlockListener.GA_Passive_PerfectBlockListener_C.OnFinish_28AFBF55400574DE264DDF9F0E8C315B
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Passive_PerfectBlockListener_C::OnFinish_28AFBF55400574DE264DDF9F0E8C315B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Passive_PerfectBlockListener_C", "OnFinish_28AFBF55400574DE264DDF9F0E8C315B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Passive_PerfectBlockListener.GA_Passive_PerfectBlockListener_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Passive_PerfectBlockListener_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Passive_PerfectBlockListener_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_Passive_PerfectBlockListener_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Passive_PerfectBlockListener.GA_Passive_PerfectBlockListener_C.ExecuteUbergraph_GA_Passive_PerfectBlockListener
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue                (NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_WaitDelay*      CallFunc_WaitDelay_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDeveloperMenuSubsystem*     CallFunc_GetEngineSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDeveloperMenuRuntimeSettingsValueByName_ReturnValue  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)

void UGA_Passive_PerfectBlockListener_C::ExecuteUbergraph_GA_Passive_PerfectBlockListener(int32 EntryPoint, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue, class UDeveloperMenuSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, bool CallFunc_GetDeveloperMenuRuntimeSettingsValueByName_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Passive_PerfectBlockListener_C", "ExecuteUbergraph_GA_Passive_PerfectBlockListener");

	Params::UGA_Passive_PerfectBlockListener_C_ExecuteUbergraph_GA_Passive_PerfectBlockListener_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;
	Parms.CallFunc_WaitDelay_ReturnValue = CallFunc_WaitDelay_ReturnValue;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.CallFunc_GetDeveloperMenuRuntimeSettingsValueByName_ReturnValue = CallFunc_GetDeveloperMenuRuntimeSettingsValueByName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;

	UObject::ProcessEvent(Func, &Parms);

}

}


