#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_DraggedToUmbralTransitionBP.GA_DraggedToUmbralTransitionBP_C
// (None)

class UClass* UGA_DraggedToUmbralTransitionBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_DraggedToUmbralTransitionBP_C");

	return Clss;
}


// GA_DraggedToUmbralTransitionBP_C GA_DraggedToUmbralTransitionBP.Default__GA_DraggedToUmbralTransitionBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_DraggedToUmbralTransitionBP_C* UGA_DraggedToUmbralTransitionBP_C::GetDefaultObj()
{
	static class UGA_DraggedToUmbralTransitionBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_DraggedToUmbralTransitionBP_C*>(UGA_DraggedToUmbralTransitionBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_DraggedToUmbralTransitionBP.GA_DraggedToUmbralTransitionBP_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_DraggedToUmbralTransitionBP_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DraggedToUmbralTransitionBP_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_DraggedToUmbralTransitionBP_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DraggedToUmbralTransitionBP.GA_DraggedToUmbralTransitionBP_C.ExecuteUbergraph_GA_DraggedToUmbralTransitionBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue               (NoDestructor, HasGetValueTypeHash)
// class ABaseAICharacter*            K2Node_DynamicCast_AsBase_AICharacter                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1             (NoDestructor, HasGetValueTypeHash)
// enum class EGameRealm              CallFunc_GetDualRealm_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_DraggedToUmbralTransitionBP_C::ExecuteUbergraph_GA_DraggedToUmbralTransitionBP(int32 EntryPoint, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, class ABaseAICharacter* K2Node_DynamicCast_AsBase_AICharacter, bool K2Node_DynamicCast_bSuccess, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1, enum class EGameRealm CallFunc_GetDualRealm_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DraggedToUmbralTransitionBP_C", "ExecuteUbergraph_GA_DraggedToUmbralTransitionBP");

	Params::UGA_DraggedToUmbralTransitionBP_C_ExecuteUbergraph_GA_DraggedToUmbralTransitionBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_AICharacter = K2Node_DynamicCast_AsBase_AICharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1 = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1;
	Parms.CallFunc_GetDualRealm_ReturnValue = CallFunc_GetDualRealm_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


