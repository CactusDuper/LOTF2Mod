#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DAT_PlayerWeaponBase_Moveset.DAT_PlayerWeaponBase_Moveset_C
// (None)

class UClass* UDAT_PlayerWeaponBase_Moveset_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DAT_PlayerWeaponBase_Moveset_C");

	return Clss;
}


// DAT_PlayerWeaponBase_Moveset_C DAT_PlayerWeaponBase_Moveset.Default__DAT_PlayerWeaponBase_Moveset_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDAT_PlayerWeaponBase_Moveset_C* UDAT_PlayerWeaponBase_Moveset_C::GetDefaultObj()
{
	static class UDAT_PlayerWeaponBase_Moveset_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDAT_PlayerWeaponBase_Moveset_C*>(UDAT_PlayerWeaponBase_Moveset_C::StaticClass()->DefaultObject);

	return Default;
}

}


