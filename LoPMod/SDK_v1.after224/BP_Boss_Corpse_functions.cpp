#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Boss_Corpse.BP_Boss_Corpse_C
// (Actor)

class UClass* ABP_Boss_Corpse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Boss_Corpse_C");

	return Clss;
}


// BP_Boss_Corpse_C BP_Boss_Corpse.Default__BP_Boss_Corpse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Boss_Corpse_C* ABP_Boss_Corpse_C::GetDefaultObj()
{
	static class ABP_Boss_Corpse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Boss_Corpse_C*>(ABP_Boss_Corpse_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Boss_Corpse.BP_Boss_Corpse_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Boss_Corpse_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Boss_Corpse_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Boss_Corpse.BP_Boss_Corpse_C.OnLamphunterDead
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       Tags                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_Boss_Corpse_C::OnLamphunterDead(struct FGameplayTagContainer& Tags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Boss_Corpse_C", "OnLamphunterDead");

	Params::ABP_Boss_Corpse_C_OnLamphunterDead_Params Parms{};

	Parms.Tags = Tags;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Boss_Corpse.BP_Boss_Corpse_C.OnDissolveEnd_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Boss_Corpse_C::OnDissolveEnd_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Boss_Corpse_C", "OnDissolveEnd_Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Boss_Corpse.BP_Boss_Corpse_C.ExecuteUbergraph_BP_Boss_Corpse
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQuestDirector*              CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_CustomEvent_tags                                          (ConstParm)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQuestDirector*              CallFunc_GetWorldSubsystem_ReturnValue_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasGeneralTag_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasGeneralTag_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Boss_Corpse_C::ExecuteUbergraph_BP_Boss_Corpse(int32 EntryPoint, class UQuestDirector* CallFunc_GetWorldSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTagContainer& K2Node_CustomEvent_tags, bool CallFunc_HasTag_ReturnValue, class UQuestDirector* CallFunc_GetWorldSubsystem_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_HasGeneralTag_ReturnValue, bool CallFunc_HasGeneralTag_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Boss_Corpse_C", "ExecuteUbergraph_BP_Boss_Corpse");

	Params::ABP_Boss_Corpse_C_ExecuteUbergraph_BP_Boss_Corpse_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_tags = K2Node_CustomEvent_tags;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_1 = CallFunc_GetWorldSubsystem_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_HasGeneralTag_ReturnValue = CallFunc_HasGeneralTag_ReturnValue;
	Parms.CallFunc_HasGeneralTag_ReturnValue_1 = CallFunc_HasGeneralTag_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


