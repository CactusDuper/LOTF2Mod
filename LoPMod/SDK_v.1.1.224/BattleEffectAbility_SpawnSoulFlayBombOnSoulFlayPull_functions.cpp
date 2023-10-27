#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffectAbility_SpawnSoulFlayBombOnSoulFlayPull.BattleEffectAbility_SpawnSoulFlayBombOnSoulFlayPull_C
// (None)

class UClass* UBattleEffectAbility_SpawnSoulFlayBombOnSoulFlayPull_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffectAbility_SpawnSoulFlayBombOnSoulFlayPull_C");

	return Clss;
}


// BattleEffectAbility_SpawnSoulFlayBombOnSoulFlayPull_C BattleEffectAbility_SpawnSoulFlayBombOnSoulFlayPull.Default__BattleEffectAbility_SpawnSoulFlayBombOnSoulFlayPull_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffectAbility_SpawnSoulFlayBombOnSoulFlayPull_C* UBattleEffectAbility_SpawnSoulFlayBombOnSoulFlayPull_C::GetDefaultObj()
{
	static class UBattleEffectAbility_SpawnSoulFlayBombOnSoulFlayPull_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffectAbility_SpawnSoulFlayBombOnSoulFlayPull_C*>(UBattleEffectAbility_SpawnSoulFlayBombOnSoulFlayPull_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleEffectAbility_SpawnSoulFlayBombOnSoulFlayPull.BattleEffectAbility_SpawnSoulFlayBombOnSoulFlayPull_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBattleEffectAbility_SpawnSoulFlayBombOnSoulFlayPull_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattleEffectAbility_SpawnSoulFlayBombOnSoulFlayPull_C", "K2_ActivateAbilityFromEvent");

	Params::UBattleEffectAbility_SpawnSoulFlayBombOnSoulFlayPull_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEffectAbility_SpawnSoulFlayBombOnSoulFlayPull.BattleEffectAbility_SpawnSoulFlayBombOnSoulFlayPull_C.ExecuteUbergraph_BattleEffectAbility_SpawnSoulFlayBombOnSoulFlayPull
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_DynamicCast_AsActor                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_DynamicCast_AsPawn                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_SpawnAutonomousAbilityActor_ReturnValue                 (ReferenceParm)

void UBattleEffectAbility_SpawnSoulFlayBombOnSoulFlayPull_C::ExecuteUbergraph_BattleEffectAbility_SpawnSoulFlayBombOnSoulFlayPull(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess_1, TArray<class AActor*>& CallFunc_SpawnAutonomousAbilityActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattleEffectAbility_SpawnSoulFlayBombOnSoulFlayPull_C", "ExecuteUbergraph_BattleEffectAbility_SpawnSoulFlayBombOnSoulFlayPull");

	Params::UBattleEffectAbility_SpawnSoulFlayBombOnSoulFlayPull_C_ExecuteUbergraph_BattleEffectAbility_SpawnSoulFlayBombOnSoulFlayPull_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsActor = K2Node_DynamicCast_AsActor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsPawn = K2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_SpawnAutonomousAbilityActor_ReturnValue = CallFunc_SpawnAutonomousAbilityActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


