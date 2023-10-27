#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTTask_UmbralZombieEgg_DestroySelf.BTTask_UmbralZombieEgg_DestroySelf_C
// (None)

class UClass* UBTTask_UmbralZombieEgg_DestroySelf_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_UmbralZombieEgg_DestroySelf_C");

	return Clss;
}


// BTTask_UmbralZombieEgg_DestroySelf_C BTTask_UmbralZombieEgg_DestroySelf.Default__BTTask_UmbralZombieEgg_DestroySelf_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTTask_UmbralZombieEgg_DestroySelf_C* UBTTask_UmbralZombieEgg_DestroySelf_C::GetDefaultObj()
{
	static class UBTTask_UmbralZombieEgg_DestroySelf_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_UmbralZombieEgg_DestroySelf_C*>(UBTTask_UmbralZombieEgg_DestroySelf_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTTask_UmbralZombieEgg_DestroySelf.BTTask_UmbralZombieEgg_DestroySelf_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTTask_UmbralZombieEgg_DestroySelf_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_UmbralZombieEgg_DestroySelf_C", "ReceiveExecuteAI");

	Params::UBTTask_UmbralZombieEgg_DestroySelf_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTTask_UmbralZombieEgg_DestroySelf.BTTask_UmbralZombieEgg_DestroySelf_C.ExecuteUbergraph_BTTask_UmbralZombieEgg_DestroySelf
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_FOE_UmbralZombieEgg_C*   K2Node_DynamicCast_AsBP_FOE_Umbral_Zombie_Egg                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_UmbralZombieEgg_DestroySelf_C::ExecuteUbergraph_BTTask_UmbralZombieEgg_DestroySelf(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class ABP_FOE_UmbralZombieEgg_C* K2Node_DynamicCast_AsBP_FOE_Umbral_Zombie_Egg, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_UmbralZombieEgg_DestroySelf_C", "ExecuteUbergraph_BTTask_UmbralZombieEgg_DestroySelf");

	Params::UBTTask_UmbralZombieEgg_DestroySelf_C_ExecuteUbergraph_BTTask_UmbralZombieEgg_DestroySelf_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_DynamicCast_AsBP_FOE_Umbral_Zombie_Egg = K2Node_DynamicCast_AsBP_FOE_Umbral_Zombie_Egg;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


