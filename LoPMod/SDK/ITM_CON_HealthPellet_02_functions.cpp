#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ITM_CON_HealthPellet_02.ITM_CON_HealthPellet_02_C
// (None)

class UClass* UITM_CON_HealthPellet_02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ITM_CON_HealthPellet_02_C");

	return Clss;
}


// ITM_CON_HealthPellet_02_C ITM_CON_HealthPellet_02.Default__ITM_CON_HealthPellet_02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UITM_CON_HealthPellet_02_C* UITM_CON_HealthPellet_02_C::GetDefaultObj()
{
	static class UITM_CON_HealthPellet_02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UITM_CON_HealthPellet_02_C*>(UITM_CON_HealthPellet_02_C::StaticClass()->DefaultObject);

	return Default;
}

}


