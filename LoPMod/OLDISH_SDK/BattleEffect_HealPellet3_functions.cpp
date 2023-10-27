#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_HealPellet3.BattleEffect_HealPellet3_C
// (None)

class UClass* UBattleEffect_HealPellet3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_HealPellet3_C");

	return Clss;
}


// BattleEffect_HealPellet3_C BattleEffect_HealPellet3.Default__BattleEffect_HealPellet3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_HealPellet3_C* UBattleEffect_HealPellet3_C::GetDefaultObj()
{
	static class UBattleEffect_HealPellet3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_HealPellet3_C*>(UBattleEffect_HealPellet3_C::StaticClass()->DefaultObject);

	return Default;
}

}


