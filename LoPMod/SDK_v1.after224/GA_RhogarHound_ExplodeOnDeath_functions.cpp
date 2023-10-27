#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_RhogarHound_ExplodeOnDeath.GA_RhogarHound_ExplodeOnDeath_C
// (None)

class UClass* UGA_RhogarHound_ExplodeOnDeath_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_RhogarHound_ExplodeOnDeath_C");

	return Clss;
}


// GA_RhogarHound_ExplodeOnDeath_C GA_RhogarHound_ExplodeOnDeath.Default__GA_RhogarHound_ExplodeOnDeath_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_RhogarHound_ExplodeOnDeath_C* UGA_RhogarHound_ExplodeOnDeath_C::GetDefaultObj()
{
	static class UGA_RhogarHound_ExplodeOnDeath_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_RhogarHound_ExplodeOnDeath_C*>(UGA_RhogarHound_ExplodeOnDeath_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_RhogarHound_ExplodeOnDeath.GA_RhogarHound_ExplodeOnDeath_C.OnFinish_BF5149C24D429FA0DD65C09CEAA97467
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_RhogarHound_ExplodeOnDeath_C::OnFinish_BF5149C24D429FA0DD65C09CEAA97467()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_RhogarHound_ExplodeOnDeath_C", "OnFinish_BF5149C24D429FA0DD65C09CEAA97467");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_RhogarHound_ExplodeOnDeath.GA_RhogarHound_ExplodeOnDeath_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_RhogarHound_ExplodeOnDeath_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_RhogarHound_ExplodeOnDeath_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_RhogarHound_ExplodeOnDeath_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_RhogarHound_ExplodeOnDeath.GA_RhogarHound_ExplodeOnDeath_C.ExecuteUbergraph_GA_RhogarHound_ExplodeOnDeath
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpawnDefinition            K2Node_MakeStruct_SpawnDefinition                                (NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_WaitDelay*      CallFunc_WaitDelay_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_CastToCharacter_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_SpawnAutonomousAbilityActor_ReturnValue                 (ReferenceParm)

void UGA_RhogarHound_ExplodeOnDeath_C::ExecuteUbergraph_GA_RhogarHound_ExplodeOnDeath(int32 EntryPoint, const struct FSpawnDefinition& K2Node_MakeStruct_SpawnDefinition, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class ACharacter* CallFunc_CastToCharacter_ReturnValue, TArray<class AActor*>& CallFunc_SpawnAutonomousAbilityActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_RhogarHound_ExplodeOnDeath_C", "ExecuteUbergraph_GA_RhogarHound_ExplodeOnDeath");

	Params::UGA_RhogarHound_ExplodeOnDeath_C_ExecuteUbergraph_GA_RhogarHound_ExplodeOnDeath_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_SpawnDefinition = K2Node_MakeStruct_SpawnDefinition;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_WaitDelay_ReturnValue = CallFunc_WaitDelay_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.CallFunc_CastToCharacter_ReturnValue = CallFunc_CastToCharacter_ReturnValue;
	Parms.CallFunc_SpawnAutonomousAbilityActor_ReturnValue = CallFunc_SpawnAutonomousAbilityActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


