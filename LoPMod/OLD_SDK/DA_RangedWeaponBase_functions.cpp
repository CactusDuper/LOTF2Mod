#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DA_RangedWeaponBase.DA_RangedWeaponBase_C
// (None)

class UClass* UDA_RangedWeaponBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DA_RangedWeaponBase_C");

	return Clss;
}


// DA_RangedWeaponBase_C DA_RangedWeaponBase.Default__DA_RangedWeaponBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDA_RangedWeaponBase_C* UDA_RangedWeaponBase_C::GetDefaultObj()
{
	static class UDA_RangedWeaponBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDA_RangedWeaponBase_C*>(UDA_RangedWeaponBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


