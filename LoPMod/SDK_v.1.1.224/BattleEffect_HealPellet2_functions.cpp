#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_HealPellet2.BattleEffect_HealPellet2_C
// (None)

class UClass* UBattleEffect_HealPellet2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_HealPellet2_C");

	return Clss;
}


// BattleEffect_HealPellet2_C BattleEffect_HealPellet2.Default__BattleEffect_HealPellet2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_HealPellet2_C* UBattleEffect_HealPellet2_C::GetDefaultObj()
{
	static class UBattleEffect_HealPellet2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_HealPellet2_C*>(UBattleEffect_HealPellet2_C::StaticClass()->DefaultObject);

	return Default;
}

}


