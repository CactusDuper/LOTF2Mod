#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_WeaponMajorManaRegen.BattleEffect_WeaponMajorManaRegen_C
// (None)

class UClass* UBattleEffect_WeaponMajorManaRegen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_WeaponMajorManaRegen_C");

	return Clss;
}


// BattleEffect_WeaponMajorManaRegen_C BattleEffect_WeaponMajorManaRegen.Default__BattleEffect_WeaponMajorManaRegen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_WeaponMajorManaRegen_C* UBattleEffect_WeaponMajorManaRegen_C::GetDefaultObj()
{
	static class UBattleEffect_WeaponMajorManaRegen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_WeaponMajorManaRegen_C*>(UBattleEffect_WeaponMajorManaRegen_C::StaticClass()->DefaultObject);

	return Default;
}

}


