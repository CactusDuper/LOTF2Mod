#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_RUNE_HunterWeapon.BattleEffect_RUNE_HunterWeapon_C
// (None)

class UClass* UBattleEffect_RUNE_HunterWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_RUNE_HunterWeapon_C");

	return Clss;
}


// BattleEffect_RUNE_HunterWeapon_C BattleEffect_RUNE_HunterWeapon.Default__BattleEffect_RUNE_HunterWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_RUNE_HunterWeapon_C* UBattleEffect_RUNE_HunterWeapon_C::GetDefaultObj()
{
	static class UBattleEffect_RUNE_HunterWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_RUNE_HunterWeapon_C*>(UBattleEffect_RUNE_HunterWeapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


