#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TotemParasite_Base_Spawner_NotPlaceable.BP_TotemParasite_Base_Spawner_NotPlaceable_C
// (Actor)

class UClass* ABP_TotemParasite_Base_Spawner_NotPlaceable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TotemParasite_Base_Spawner_NotPlaceable_C");

	return Clss;
}


// BP_TotemParasite_Base_Spawner_NotPlaceable_C BP_TotemParasite_Base_Spawner_NotPlaceable.Default__BP_TotemParasite_Base_Spawner_NotPlaceable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_TotemParasite_Base_Spawner_NotPlaceable_C* ABP_TotemParasite_Base_Spawner_NotPlaceable_C::GetDefaultObj()
{
	static class ABP_TotemParasite_Base_Spawner_NotPlaceable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_TotemParasite_Base_Spawner_NotPlaceable_C*>(ABP_TotemParasite_Base_Spawner_NotPlaceable_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_TotemParasite_Base_Spawner_NotPlaceable.BP_TotemParasite_Base_Spawner_NotPlaceable_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_TotemParasite_Base_Spawner_NotPlaceable_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TotemParasite_Base_Spawner_NotPlaceable_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TotemParasite_Base_Spawner_NotPlaceable.BP_TotemParasite_Base_Spawner_NotPlaceable_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_TotemParasite_Base_Spawner_NotPlaceable_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TotemParasite_Base_Spawner_NotPlaceable_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TotemParasite_Base_Spawner_NotPlaceable.BP_TotemParasite_Base_Spawner_NotPlaceable_C.OnCharacterSpawnedDelegate_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASimpleCharacterSpawner*     Spawner                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ALOTF2Character*             Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_TotemParasite_Base_Spawner_NotPlaceable_C::OnCharacterSpawnedDelegate_Event(class ASimpleCharacterSpawner* Spawner, class ALOTF2Character* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TotemParasite_Base_Spawner_NotPlaceable_C", "OnCharacterSpawnedDelegate_Event");

	Params::ABP_TotemParasite_Base_Spawner_NotPlaceable_C_OnCharacterSpawnedDelegate_Event_Params Parms{};

	Parms.Spawner = Spawner;
	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TotemParasite_Base_Spawner_NotPlaceable.BP_TotemParasite_Base_Spawner_NotPlaceable_C.ExecuteUbergraph_BP_TotemParasite_Base_Spawner_NotPlaceable
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ASimpleCharacterSpawner*     K2Node_CustomEvent_spawner                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ALOTF2Character*             K2Node_CustomEvent_Character                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_FOE_UmbralTotemParasite_C*K2Node_DynamicCast_AsBP_FOE_Umbral_Totem_Parasite                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TotemParasite_Base_Spawner_NotPlaceable_C::ExecuteUbergraph_BP_TotemParasite_Base_Spawner_NotPlaceable(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ASimpleCharacterSpawner* K2Node_CustomEvent_spawner, class ALOTF2Character* K2Node_CustomEvent_Character, class ABP_FOE_UmbralTotemParasite_C* K2Node_DynamicCast_AsBP_FOE_Umbral_Totem_Parasite, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TotemParasite_Base_Spawner_NotPlaceable_C", "ExecuteUbergraph_BP_TotemParasite_Base_Spawner_NotPlaceable");

	Params::ABP_TotemParasite_Base_Spawner_NotPlaceable_C_ExecuteUbergraph_BP_TotemParasite_Base_Spawner_NotPlaceable_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_spawner = K2Node_CustomEvent_spawner;
	Parms.K2Node_CustomEvent_Character = K2Node_CustomEvent_Character;
	Parms.K2Node_DynamicCast_AsBP_FOE_Umbral_Totem_Parasite = K2Node_DynamicCast_AsBP_FOE_Umbral_Totem_Parasite;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


