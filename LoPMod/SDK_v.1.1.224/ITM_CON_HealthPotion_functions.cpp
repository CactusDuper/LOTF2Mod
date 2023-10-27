#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ITM_CON_HealthPotion.ITM_CON_HealthPotion_C
// (None)

class UClass* UITM_CON_HealthPotion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ITM_CON_HealthPotion_C");

	return Clss;
}


// ITM_CON_HealthPotion_C ITM_CON_HealthPotion.Default__ITM_CON_HealthPotion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UITM_CON_HealthPotion_C* UITM_CON_HealthPotion_C::GetDefaultObj()
{
	static class UITM_CON_HealthPotion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UITM_CON_HealthPotion_C*>(UITM_CON_HealthPotion_C::StaticClass()->DefaultObject);

	return Default;
}

}


