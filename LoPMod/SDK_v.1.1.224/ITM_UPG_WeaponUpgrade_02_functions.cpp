#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ITM_UPG_WeaponUpgrade_02.ITM_UPG_WeaponUpgrade_02_C
// (None)

class UClass* UITM_UPG_WeaponUpgrade_02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ITM_UPG_WeaponUpgrade_02_C");

	return Clss;
}


// ITM_UPG_WeaponUpgrade_02_C ITM_UPG_WeaponUpgrade_02.Default__ITM_UPG_WeaponUpgrade_02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UITM_UPG_WeaponUpgrade_02_C* UITM_UPG_WeaponUpgrade_02_C::GetDefaultObj()
{
	static class UITM_UPG_WeaponUpgrade_02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UITM_UPG_WeaponUpgrade_02_C*>(UITM_UPG_WeaponUpgrade_02_C::StaticClass()->DefaultObject);

	return Default;
}

}


