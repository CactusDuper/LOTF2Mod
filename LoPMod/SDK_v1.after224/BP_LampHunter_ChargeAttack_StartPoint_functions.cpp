#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LampHunter_ChargeAttack_StartPoint.BP_LampHunter_ChargeAttack_StartPoint_C
// (Actor)

class UClass* ABP_LampHunter_ChargeAttack_StartPoint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LampHunter_ChargeAttack_StartPoint_C");

	return Clss;
}


// BP_LampHunter_ChargeAttack_StartPoint_C BP_LampHunter_ChargeAttack_StartPoint.Default__BP_LampHunter_ChargeAttack_StartPoint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LampHunter_ChargeAttack_StartPoint_C* ABP_LampHunter_ChargeAttack_StartPoint_C::GetDefaultObj()
{
	static class ABP_LampHunter_ChargeAttack_StartPoint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LampHunter_ChargeAttack_StartPoint_C*>(ABP_LampHunter_ChargeAttack_StartPoint_C::StaticClass()->DefaultObject);

	return Default;
}

}


