#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Enemy_RhogarHound.BP_Enemy_RhogarHound_C
// (Actor, Pawn)

class UClass* ABP_Enemy_RhogarHound_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Enemy_RhogarHound_C");

	return Clss;
}


// BP_Enemy_RhogarHound_C BP_Enemy_RhogarHound.Default__BP_Enemy_RhogarHound_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Enemy_RhogarHound_C* ABP_Enemy_RhogarHound_C::GetDefaultObj()
{
	static class ABP_Enemy_RhogarHound_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Enemy_RhogarHound_C*>(ABP_Enemy_RhogarHound_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Enemy_RhogarHound.BP_Enemy_RhogarHound_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAkAnathemaEvent            RhogarHound_INI_Audio                                            (Edit, BlueprintVisible)
// class UAkAnathemaComponent*        CallFunc_GetAkComponentHead_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostAkAnathemaEvent_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Enemy_RhogarHound_C::UserConstructionScript(const struct FAkAnathemaEvent& RhogarHound_INI_Audio, class UAkAnathemaComponent* CallFunc_GetAkComponentHead_ReturnValue, int32 CallFunc_PostAkAnathemaEvent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Enemy_RhogarHound_C", "UserConstructionScript");

	Params::ABP_Enemy_RhogarHound_C_UserConstructionScript_Params Parms{};

	Parms.RhogarHound_INI_Audio = RhogarHound_INI_Audio;
	Parms.CallFunc_GetAkComponentHead_ReturnValue = CallFunc_GetAkComponentHead_ReturnValue;
	Parms.CallFunc_PostAkAnathemaEvent_ReturnValue = CallFunc_PostAkAnathemaEvent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Enemy_RhogarHound.BP_Enemy_RhogarHound_C.OnDeath
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      InstigatorActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       InstigatorTags                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               bDeathWasObserved                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Enemy_RhogarHound_C::OnDeath(class AActor* InstigatorActor, struct FGameplayTagContainer& InstigatorTags, bool bDeathWasObserved)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Enemy_RhogarHound_C", "OnDeath");

	Params::ABP_Enemy_RhogarHound_C_OnDeath_Params Parms{};

	Parms.InstigatorActor = InstigatorActor;
	Parms.InstigatorTags = InstigatorTags;
	Parms.bDeathWasObserved = bDeathWasObserved;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Enemy_RhogarHound.BP_Enemy_RhogarHound_C.ExecuteUbergraph_BP_Enemy_RhogarHound
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_instigatorActor                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_instigatorTags                                      (ConstParm)
// bool                               K2Node_Event_bDeathWasObserved                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Enemy_RhogarHound_C::ExecuteUbergraph_BP_Enemy_RhogarHound(int32 EntryPoint, class AActor* K2Node_Event_instigatorActor, const struct FGameplayTagContainer& K2Node_Event_instigatorTags, bool K2Node_Event_bDeathWasObserved)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Enemy_RhogarHound_C", "ExecuteUbergraph_BP_Enemy_RhogarHound");

	Params::ABP_Enemy_RhogarHound_C_ExecuteUbergraph_BP_Enemy_RhogarHound_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_instigatorActor = K2Node_Event_instigatorActor;
	Parms.K2Node_Event_instigatorTags = K2Node_Event_instigatorTags;
	Parms.K2Node_Event_bDeathWasObserved = K2Node_Event_bDeathWasObserved;

	UObject::ProcessEvent(Func, &Parms);

}

}


