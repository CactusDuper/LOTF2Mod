#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_RangedWeaponIsAiming.GE_RangedWeaponIsAiming_C
// (None)

class UClass* UGE_RangedWeaponIsAiming_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_RangedWeaponIsAiming_C");

	return Clss;
}


// GE_RangedWeaponIsAiming_C GE_RangedWeaponIsAiming.Default__GE_RangedWeaponIsAiming_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_RangedWeaponIsAiming_C* UGE_RangedWeaponIsAiming_C::GetDefaultObj()
{
	static class UGE_RangedWeaponIsAiming_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_RangedWeaponIsAiming_C*>(UGE_RangedWeaponIsAiming_C::StaticClass()->DefaultObject);

	return Default;
}

}


