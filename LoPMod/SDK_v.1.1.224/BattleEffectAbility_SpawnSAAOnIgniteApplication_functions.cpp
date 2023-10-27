#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffectAbility_SpawnSAAOnIgniteApplication.BattleEffectAbility_SpawnSAAOnIgniteApplication_C
// (None)

class UClass* UBattleEffectAbility_SpawnSAAOnIgniteApplication_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffectAbility_SpawnSAAOnIgniteApplication_C");

	return Clss;
}


// BattleEffectAbility_SpawnSAAOnIgniteApplication_C BattleEffectAbility_SpawnSAAOnIgniteApplication.Default__BattleEffectAbility_SpawnSAAOnIgniteApplication_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffectAbility_SpawnSAAOnIgniteApplication_C* UBattleEffectAbility_SpawnSAAOnIgniteApplication_C::GetDefaultObj()
{
	static class UBattleEffectAbility_SpawnSAAOnIgniteApplication_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffectAbility_SpawnSAAOnIgniteApplication_C*>(UBattleEffectAbility_SpawnSAAOnIgniteApplication_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleEffectAbility_SpawnSAAOnIgniteApplication.BattleEffectAbility_SpawnSAAOnIgniteApplication_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBattleEffectAbility_SpawnSAAOnIgniteApplication_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattleEffectAbility_SpawnSAAOnIgniteApplication_C", "K2_ActivateAbilityFromEvent");

	Params::UBattleEffectAbility_SpawnSAAOnIgniteApplication_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEffectAbility_SpawnSAAOnIgniteApplication.BattleEffectAbility_SpawnSAAOnIgniteApplication_C.ExecuteUbergraph_BattleEffectAbility_SpawnSAAOnIgniteApplication
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpawnDefinition            K2Node_MakeStruct_SpawnDefinition                                (NoDestructor)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_DynamicCast_AsPawn                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_SpawnAutonomousAbilityActor_ReturnValue                 (ReferenceParm)

void UBattleEffectAbility_SpawnSAAOnIgniteApplication_C::ExecuteUbergraph_BattleEffectAbility_SpawnSAAOnIgniteApplication(int32 EntryPoint, const struct FSpawnDefinition& K2Node_MakeStruct_SpawnDefinition, const struct FGameplayEventData& K2Node_Event_EventData, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, TArray<class AActor*>& CallFunc_SpawnAutonomousAbilityActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattleEffectAbility_SpawnSAAOnIgniteApplication_C", "ExecuteUbergraph_BattleEffectAbility_SpawnSAAOnIgniteApplication");

	Params::UBattleEffectAbility_SpawnSAAOnIgniteApplication_C_ExecuteUbergraph_BattleEffectAbility_SpawnSAAOnIgniteApplication_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_SpawnDefinition = K2Node_MakeStruct_SpawnDefinition;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsPawn = K2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SpawnAutonomousAbilityActor_ReturnValue = CallFunc_SpawnAutonomousAbilityActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


