#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_RUNE_EagleWeapon.BattleEffect_RUNE_EagleWeapon_C
// (None)

class UClass* UBattleEffect_RUNE_EagleWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_RUNE_EagleWeapon_C");

	return Clss;
}


// BattleEffect_RUNE_EagleWeapon_C BattleEffect_RUNE_EagleWeapon.Default__BattleEffect_RUNE_EagleWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_RUNE_EagleWeapon_C* UBattleEffect_RUNE_EagleWeapon_C::GetDefaultObj()
{
	static class UBattleEffect_RUNE_EagleWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_RUNE_EagleWeapon_C*>(UBattleEffect_RUNE_EagleWeapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


