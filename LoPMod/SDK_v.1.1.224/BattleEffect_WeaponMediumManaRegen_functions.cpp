#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_WeaponMediumManaRegen.BattleEffect_WeaponMediumManaRegen_C
// (None)

class UClass* UBattleEffect_WeaponMediumManaRegen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_WeaponMediumManaRegen_C");

	return Clss;
}


// BattleEffect_WeaponMediumManaRegen_C BattleEffect_WeaponMediumManaRegen.Default__BattleEffect_WeaponMediumManaRegen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_WeaponMediumManaRegen_C* UBattleEffect_WeaponMediumManaRegen_C::GetDefaultObj()
{
	static class UBattleEffect_WeaponMediumManaRegen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_WeaponMediumManaRegen_C*>(UBattleEffect_WeaponMediumManaRegen_C::StaticClass()->DefaultObject);

	return Default;
}

}


