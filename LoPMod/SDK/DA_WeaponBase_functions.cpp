#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DA_WeaponBase.DA_WeaponBase_C
// (None)

class UClass* UDA_WeaponBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DA_WeaponBase_C");

	return Clss;
}


// DA_WeaponBase_C DA_WeaponBase.Default__DA_WeaponBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDA_WeaponBase_C* UDA_WeaponBase_C::GetDefaultObj()
{
	static class UDA_WeaponBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDA_WeaponBase_C*>(UDA_WeaponBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


