#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_HeavenlyElixirMana.BattleEffect_HeavenlyElixirMana_C
// (None)

class UClass* UBattleEffect_HeavenlyElixirMana_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_HeavenlyElixirMana_C");

	return Clss;
}


// BattleEffect_HeavenlyElixirMana_C BattleEffect_HeavenlyElixirMana.Default__BattleEffect_HeavenlyElixirMana_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_HeavenlyElixirMana_C* UBattleEffect_HeavenlyElixirMana_C::GetDefaultObj()
{
	static class UBattleEffect_HeavenlyElixirMana_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_HeavenlyElixirMana_C*>(UBattleEffect_HeavenlyElixirMana_C::StaticClass()->DefaultObject);

	return Default;
}

}


