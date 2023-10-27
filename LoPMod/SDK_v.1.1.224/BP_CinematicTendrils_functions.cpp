#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CinematicTendrils.BP_CinematicTendrils_C
// (Actor)

class UClass* ABP_CinematicTendrils_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CinematicTendrils_C");

	return Clss;
}


// BP_CinematicTendrils_C BP_CinematicTendrils.Default__BP_CinematicTendrils_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CinematicTendrils_C* ABP_CinematicTendrils_C::GetDefaultObj()
{
	static class ABP_CinematicTendrils_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CinematicTendrils_C*>(ABP_CinematicTendrils_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CinematicTendrils.BP_CinematicTendrils_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_CinematicTendrils_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicTendrils_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CinematicTendrils.BP_CinematicTendrils_C.ExecuteUbergraph_BP_CinematicTendrils
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetLocalPlayer_LocalPlayerCharacter                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEquipmentManagerComponent*  CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UEquipableInventorySoulsLantern*CallFunc_GetSoulsLanternEquipment_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASoulsLanternActor*          CallFunc_GetSpawnedSoulsLanternActor_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CinematicTendrils_C::ExecuteUbergraph_BP_CinematicTendrils(int32 EntryPoint, class ACharacter* CallFunc_GetLocalPlayer_LocalPlayerCharacter, class UEquipmentManagerComponent* CallFunc_GetComponentByClass_ReturnValue, class UEquipableInventorySoulsLantern* CallFunc_GetSoulsLanternEquipment_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ASoulsLanternActor* CallFunc_GetSpawnedSoulsLanternActor_ReturnValue, class USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicTendrils_C", "ExecuteUbergraph_BP_CinematicTendrils");

	Params::ABP_CinematicTendrils_C_ExecuteUbergraph_BP_CinematicTendrils_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetLocalPlayer_LocalPlayerCharacter = CallFunc_GetLocalPlayer_LocalPlayerCharacter;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetSoulsLanternEquipment_ReturnValue = CallFunc_GetSoulsLanternEquipment_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetSpawnedSoulsLanternActor_ReturnValue = CallFunc_GetSpawnedSoulsLanternActor_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


