#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTTask_NPC_GetWeaponBP.BTTask_NPC_GetWeaponBP_C
// (None)

class UClass* UBTTask_NPC_GetWeaponBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_NPC_GetWeaponBP_C");

	return Clss;
}


// BTTask_NPC_GetWeaponBP_C BTTask_NPC_GetWeaponBP.Default__BTTask_NPC_GetWeaponBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTTask_NPC_GetWeaponBP_C* UBTTask_NPC_GetWeaponBP_C::GetDefaultObj()
{
	static class UBTTask_NPC_GetWeaponBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_NPC_GetWeaponBP_C*>(UBTTask_NPC_GetWeaponBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTTask_NPC_GetWeaponBP.BTTask_NPC_GetWeaponBP_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTTask_NPC_GetWeaponBP_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_NPC_GetWeaponBP_C", "ReceiveExecuteAI");

	Params::UBTTask_NPC_GetWeaponBP_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTTask_NPC_GetWeaponBP.BTTask_NPC_GetWeaponBP_C.ExecuteUbergraph_BTTask_NPC_GetWeaponBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ALOTF2Character*             K2Node_DynamicCast_AsLOTF2Character                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEquipableInventoryWeapon*   CallFunc_GetPrimaryWeaponEquipment_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetSpawnedActorInstance_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_NPC_GetWeaponBP_C::ExecuteUbergraph_BTTask_NPC_GetWeaponBP(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UEquipableInventoryWeapon* CallFunc_GetPrimaryWeaponEquipment_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_GetSpawnedActorInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_NPC_GetWeaponBP_C", "ExecuteUbergraph_BTTask_NPC_GetWeaponBP");

	Params::UBTTask_NPC_GetWeaponBP_C_ExecuteUbergraph_BTTask_NPC_GetWeaponBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_DynamicCast_AsLOTF2Character = K2Node_DynamicCast_AsLOTF2Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPrimaryWeaponEquipment_ReturnValue = CallFunc_GetPrimaryWeaponEquipment_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetSpawnedActorInstance_ReturnValue = CallFunc_GetSpawnedActorInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


