#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ITM_CON_WeaponBuff_Fire_01.ITM_CON_WeaponBuff_Fire_01_C
// (None)

class UClass* UITM_CON_WeaponBuff_Fire_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ITM_CON_WeaponBuff_Fire_01_C");

	return Clss;
}


// ITM_CON_WeaponBuff_Fire_01_C ITM_CON_WeaponBuff_Fire_01.Default__ITM_CON_WeaponBuff_Fire_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UITM_CON_WeaponBuff_Fire_01_C* UITM_CON_WeaponBuff_Fire_01_C::GetDefaultObj()
{
	static class UITM_CON_WeaponBuff_Fire_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UITM_CON_WeaponBuff_Fire_01_C*>(UITM_CON_WeaponBuff_Fire_01_C::StaticClass()->DefaultObject);

	return Default;
}

}


