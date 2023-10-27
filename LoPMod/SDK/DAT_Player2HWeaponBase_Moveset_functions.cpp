#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DAT_Player2HWeaponBase_Moveset.DAT_Player2HWeaponBase_Moveset_C
// (None)

class UClass* UDAT_Player2HWeaponBase_Moveset_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DAT_Player2HWeaponBase_Moveset_C");

	return Clss;
}


// DAT_Player2HWeaponBase_Moveset_C DAT_Player2HWeaponBase_Moveset.Default__DAT_Player2HWeaponBase_Moveset_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDAT_Player2HWeaponBase_Moveset_C* UDAT_Player2HWeaponBase_Moveset_C::GetDefaultObj()
{
	static class UDAT_Player2HWeaponBase_Moveset_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDAT_Player2HWeaponBase_Moveset_C*>(UDAT_Player2HWeaponBase_Moveset_C::StaticClass()->DefaultObject);

	return Default;
}

}


