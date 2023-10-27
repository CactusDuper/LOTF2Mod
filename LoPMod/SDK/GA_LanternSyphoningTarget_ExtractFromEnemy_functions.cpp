#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_LanternSyphoningTarget_ExtractFromEnemy.GA_LanternSyphoningTarget_ExtractFromEnemy_C
// (None)

class UClass* UGA_LanternSyphoningTarget_ExtractFromEnemy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_LanternSyphoningTarget_ExtractFromEnemy_C");

	return Clss;
}


// GA_LanternSyphoningTarget_ExtractFromEnemy_C GA_LanternSyphoningTarget_ExtractFromEnemy.Default__GA_LanternSyphoningTarget_ExtractFromEnemy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_LanternSyphoningTarget_ExtractFromEnemy_C* UGA_LanternSyphoningTarget_ExtractFromEnemy_C::GetDefaultObj()
{
	static class UGA_LanternSyphoningTarget_ExtractFromEnemy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_LanternSyphoningTarget_ExtractFromEnemy_C*>(UGA_LanternSyphoningTarget_ExtractFromEnemy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_LanternSyphoningTarget_ExtractFromEnemy.GA_LanternSyphoningTarget_ExtractFromEnemy_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_LanternSyphoningTarget_ExtractFromEnemy_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LanternSyphoningTarget_ExtractFromEnemy_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_LanternSyphoningTarget_ExtractFromEnemy_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LanternSyphoningTarget_ExtractFromEnemy.GA_LanternSyphoningTarget_ExtractFromEnemy_C.ExecuteUbergraph_GA_LanternSyphoningTarget_ExtractFromEnemy
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ALOTF2Character*             K2Node_DynamicCast_AsLOTF2Character                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameRealm              CallFunc_GetDualRealm_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_LanternSyphoningTarget_ExtractFromEnemy_C::ExecuteUbergraph_GA_LanternSyphoningTarget_ExtractFromEnemy(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, enum class EGameRealm CallFunc_GetDualRealm_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LanternSyphoningTarget_ExtractFromEnemy_C", "ExecuteUbergraph_GA_LanternSyphoningTarget_ExtractFromEnemy");

	Params::UGA_LanternSyphoningTarget_ExtractFromEnemy_C_ExecuteUbergraph_GA_LanternSyphoningTarget_ExtractFromEnemy_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue = CallFunc_GetOwningActorFromActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsLOTF2Character = K2Node_DynamicCast_AsLOTF2Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDualRealm_ReturnValue = CallFunc_GetDualRealm_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


