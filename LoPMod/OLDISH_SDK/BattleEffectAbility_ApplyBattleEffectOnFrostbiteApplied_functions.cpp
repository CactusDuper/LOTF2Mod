#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffectAbility_ApplyBattleEffectOnFrostbiteApplied.BattleEffectAbility_ApplyBattleEffectOnFrostbiteApplied_C
// (None)

class UClass* UBattleEffectAbility_ApplyBattleEffectOnFrostbiteApplied_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffectAbility_ApplyBattleEffectOnFrostbiteApplied_C");

	return Clss;
}


// BattleEffectAbility_ApplyBattleEffectOnFrostbiteApplied_C BattleEffectAbility_ApplyBattleEffectOnFrostbiteApplied.Default__BattleEffectAbility_ApplyBattleEffectOnFrostbiteApplied_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffectAbility_ApplyBattleEffectOnFrostbiteApplied_C* UBattleEffectAbility_ApplyBattleEffectOnFrostbiteApplied_C::GetDefaultObj()
{
	static class UBattleEffectAbility_ApplyBattleEffectOnFrostbiteApplied_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffectAbility_ApplyBattleEffectOnFrostbiteApplied_C*>(UBattleEffectAbility_ApplyBattleEffectOnFrostbiteApplied_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleEffectAbility_ApplyBattleEffectOnFrostbiteApplied.BattleEffectAbility_ApplyBattleEffectOnFrostbiteApplied_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBattleEffectAbility_ApplyBattleEffectOnFrostbiteApplied_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattleEffectAbility_ApplyBattleEffectOnFrostbiteApplied_C", "K2_ActivateAbilityFromEvent");

	Params::UBattleEffectAbility_ApplyBattleEffectOnFrostbiteApplied_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEffectAbility_ApplyBattleEffectOnFrostbiteApplied.BattleEffectAbility_ApplyBattleEffectOnFrostbiteApplied_C.ExecuteUbergraph_BattleEffectAbility_ApplyBattleEffectOnFrostbiteApplied
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetBattleEffectStringParam_outValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBattleEffectStringParam_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// struct FHexBattleEffectIdentifier  K2Node_MakeStruct_HexBattleEffectIdentifier                      (NoDestructor)
// struct FActiveGameplayEffectHandle CallFunc_ApplyBattleEffectToActor_ReturnValue                    (NoDestructor, HasGetValueTypeHash)

void UBattleEffectAbility_ApplyBattleEffectOnFrostbiteApplied_C::ExecuteUbergraph_BattleEffectAbility_ApplyBattleEffectOnFrostbiteApplied(int32 EntryPoint, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class FName CallFunc_GetBattleEffectStringParam_outValue, bool CallFunc_GetBattleEffectStringParam_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, const struct FHexBattleEffectIdentifier& K2Node_MakeStruct_HexBattleEffectIdentifier, const struct FActiveGameplayEffectHandle& CallFunc_ApplyBattleEffectToActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattleEffectAbility_ApplyBattleEffectOnFrostbiteApplied_C", "ExecuteUbergraph_BattleEffectAbility_ApplyBattleEffectOnFrostbiteApplied");

	Params::UBattleEffectAbility_ApplyBattleEffectOnFrostbiteApplied_C_ExecuteUbergraph_BattleEffectAbility_ApplyBattleEffectOnFrostbiteApplied_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.CallFunc_GetBattleEffectStringParam_outValue = CallFunc_GetBattleEffectStringParam_outValue;
	Parms.CallFunc_GetBattleEffectStringParam_ReturnValue = CallFunc_GetBattleEffectStringParam_ReturnValue;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.K2Node_MakeStruct_HexBattleEffectIdentifier = K2Node_MakeStruct_HexBattleEffectIdentifier;
	Parms.CallFunc_ApplyBattleEffectToActor_ReturnValue = CallFunc_ApplyBattleEffectToActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


