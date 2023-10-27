#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_RUNE_LesserAgilityWeapon.BattleEffect_RUNE_LesserAgilityWeapon_C
// (None)

class UClass* UBattleEffect_RUNE_LesserAgilityWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_RUNE_LesserAgilityWeapon_C");

	return Clss;
}


// BattleEffect_RUNE_LesserAgilityWeapon_C BattleEffect_RUNE_LesserAgilityWeapon.Default__BattleEffect_RUNE_LesserAgilityWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_RUNE_LesserAgilityWeapon_C* UBattleEffect_RUNE_LesserAgilityWeapon_C::GetDefaultObj()
{
	static class UBattleEffect_RUNE_LesserAgilityWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_RUNE_LesserAgilityWeapon_C*>(UBattleEffect_RUNE_LesserAgilityWeapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


