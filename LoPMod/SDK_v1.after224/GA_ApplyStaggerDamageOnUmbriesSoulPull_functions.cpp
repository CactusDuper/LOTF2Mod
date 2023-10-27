#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_ApplyStaggerDamageOnUmbriesSoulPull.GA_ApplyStaggerDamageOnUmbriesSoulPull_C
// (None)

class UClass* UGA_ApplyStaggerDamageOnUmbriesSoulPull_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_ApplyStaggerDamageOnUmbriesSoulPull_C");

	return Clss;
}


// GA_ApplyStaggerDamageOnUmbriesSoulPull_C GA_ApplyStaggerDamageOnUmbriesSoulPull.Default__GA_ApplyStaggerDamageOnUmbriesSoulPull_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_ApplyStaggerDamageOnUmbriesSoulPull_C* UGA_ApplyStaggerDamageOnUmbriesSoulPull_C::GetDefaultObj()
{
	static class UGA_ApplyStaggerDamageOnUmbriesSoulPull_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_ApplyStaggerDamageOnUmbriesSoulPull_C*>(UGA_ApplyStaggerDamageOnUmbriesSoulPull_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_ApplyStaggerDamageOnUmbriesSoulPull.GA_ApplyStaggerDamageOnUmbriesSoulPull_C.K2_ShouldAbilityRespondToEvent
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo   ActorInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FGameplayEventData          Payload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGA_ApplyStaggerDamageOnUmbriesSoulPull_C::K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload, bool Temp_bool_Variable, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasMatchingGameplayTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ApplyStaggerDamageOnUmbriesSoulPull_C", "K2_ShouldAbilityRespondToEvent");

	Params::UGA_ApplyStaggerDamageOnUmbriesSoulPull_C_K2_ShouldAbilityRespondToEvent_Params Parms{};

	Parms.ActorInfo = ActorInfo;
	Parms.Payload = Payload;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_ApplyStaggerDamageOnUmbriesSoulPull.GA_ApplyStaggerDamageOnUmbriesSoulPull_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_ApplyStaggerDamageOnUmbriesSoulPull_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ApplyStaggerDamageOnUmbriesSoulPull_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_ApplyStaggerDamageOnUmbriesSoulPull_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ApplyStaggerDamageOnUmbriesSoulPull.GA_ApplyStaggerDamageOnUmbriesSoulPull_C.ExecuteUbergraph_GA_ApplyStaggerDamageOnUmbriesSoulPull
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// class AActor*                      K2Node_DynamicCast_AsActor                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_ApplyBattleEffectToActor_ReturnValue                    (NoDestructor, HasGetValueTypeHash)

void UGA_ApplyStaggerDamageOnUmbriesSoulPull_C::ExecuteUbergraph_GA_ApplyStaggerDamageOnUmbriesSoulPull(int32 EntryPoint, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, const struct FActiveGameplayEffectHandle& CallFunc_ApplyBattleEffectToActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ApplyStaggerDamageOnUmbriesSoulPull_C", "ExecuteUbergraph_GA_ApplyStaggerDamageOnUmbriesSoulPull");

	Params::UGA_ApplyStaggerDamageOnUmbriesSoulPull_C_ExecuteUbergraph_GA_ApplyStaggerDamageOnUmbriesSoulPull_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.K2Node_DynamicCast_AsActor = K2Node_DynamicCast_AsActor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_ApplyBattleEffectToActor_ReturnValue = CallFunc_ApplyBattleEffectToActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


