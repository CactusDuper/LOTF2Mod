#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_EnvInteraction_InfluencerTrigger_Water.BP_EnvInteraction_InfluencerTrigger_Water_C
// (Actor)

class UClass* ABP_EnvInteraction_InfluencerTrigger_Water_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_EnvInteraction_InfluencerTrigger_Water_C");

	return Clss;
}


// BP_EnvInteraction_InfluencerTrigger_Water_C BP_EnvInteraction_InfluencerTrigger_Water.Default__BP_EnvInteraction_InfluencerTrigger_Water_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_EnvInteraction_InfluencerTrigger_Water_C* ABP_EnvInteraction_InfluencerTrigger_Water_C::GetDefaultObj()
{
	static class ABP_EnvInteraction_InfluencerTrigger_Water_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_EnvInteraction_InfluencerTrigger_Water_C*>(ABP_EnvInteraction_InfluencerTrigger_Water_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_EnvInteraction_InfluencerTrigger_Water.BP_EnvInteraction_InfluencerTrigger_Water_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorScale3D_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EnvInteraction_InfluencerTrigger_Water_C::UserConstructionScript(const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FVector& CallFunc_GetActorScale3D_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EnvInteraction_InfluencerTrigger_Water_C", "UserConstructionScript");

	Params::ABP_EnvInteraction_InfluencerTrigger_Water_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_GetActorScale3D_ReturnValue = CallFunc_GetActorScale3D_ReturnValue;
	Parms.CallFunc_K2_SetRelativeTransform_SweepHitResult = CallFunc_K2_SetRelativeTransform_SweepHitResult;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


