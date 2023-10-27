#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ITM_PLA_HealingPotion.BP_ITM_PLA_HealingPotion_C
// (Actor)

class UClass* ABP_ITM_PLA_HealingPotion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ITM_PLA_HealingPotion_C");

	return Clss;
}


// BP_ITM_PLA_HealingPotion_C BP_ITM_PLA_HealingPotion.Default__BP_ITM_PLA_HealingPotion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ITM_PLA_HealingPotion_C* ABP_ITM_PLA_HealingPotion_C::GetDefaultObj()
{
	static class ABP_ITM_PLA_HealingPotion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ITM_PLA_HealingPotion_C*>(ABP_ITM_PLA_HealingPotion_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ITM_PLA_HealingPotion.BP_ITM_PLA_HealingPotion_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ITM_PLA_HealingPotion_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ITM_PLA_HealingPotion_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ITM_PLA_HealingPotion.BP_ITM_PLA_HealingPotion_C.ExecuteUbergraph_BP_ITM_PLA_HealingPotion
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ITM_PLA_HealingPotion_C::ExecuteUbergraph_BP_ITM_PLA_HealingPotion(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ITM_PLA_HealingPotion_C", "ExecuteUbergraph_BP_ITM_PLA_HealingPotion");

	Params::ABP_ITM_PLA_HealingPotion_C_ExecuteUbergraph_BP_ITM_PLA_HealingPotion_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


