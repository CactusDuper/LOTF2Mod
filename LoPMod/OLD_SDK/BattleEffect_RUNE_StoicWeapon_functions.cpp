#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_RUNE_StoicWeapon.BattleEffect_RUNE_StoicWeapon_C
// (None)

class UClass* UBattleEffect_RUNE_StoicWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_RUNE_StoicWeapon_C");

	return Clss;
}


// BattleEffect_RUNE_StoicWeapon_C BattleEffect_RUNE_StoicWeapon.Default__BattleEffect_RUNE_StoicWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_RUNE_StoicWeapon_C* UBattleEffect_RUNE_StoicWeapon_C::GetDefaultObj()
{
	static class UBattleEffect_RUNE_StoicWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_RUNE_StoicWeapon_C*>(UBattleEffect_RUNE_StoicWeapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


