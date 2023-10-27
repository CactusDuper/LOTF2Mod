#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_WeaponBuff_Fire_Weapon_WithSpellPower.BattleEffect_WeaponBuff_Fire_Weapon_WithSpellPower_C
// (None)

class UClass* UBattleEffect_WeaponBuff_Fire_Weapon_WithSpellPower_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_WeaponBuff_Fire_Weapon_WithSpellPower_C");

	return Clss;
}


// BattleEffect_WeaponBuff_Fire_Weapon_WithSpellPower_C BattleEffect_WeaponBuff_Fire_Weapon_WithSpellPower.Default__BattleEffect_WeaponBuff_Fire_Weapon_WithSpellPower_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_WeaponBuff_Fire_Weapon_WithSpellPower_C* UBattleEffect_WeaponBuff_Fire_Weapon_WithSpellPower_C::GetDefaultObj()
{
	static class UBattleEffect_WeaponBuff_Fire_Weapon_WithSpellPower_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_WeaponBuff_Fire_Weapon_WithSpellPower_C*>(UBattleEffect_WeaponBuff_Fire_Weapon_WithSpellPower_C::StaticClass()->DefaultObject);

	return Default;
}

}


