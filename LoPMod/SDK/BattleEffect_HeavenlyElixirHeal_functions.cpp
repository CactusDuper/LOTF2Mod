#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_HeavenlyElixirHeal.BattleEffect_HeavenlyElixirHeal_C
// (None)

class UClass* UBattleEffect_HeavenlyElixirHeal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_HeavenlyElixirHeal_C");

	return Clss;
}


// BattleEffect_HeavenlyElixirHeal_C BattleEffect_HeavenlyElixirHeal.Default__BattleEffect_HeavenlyElixirHeal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_HeavenlyElixirHeal_C* UBattleEffect_HeavenlyElixirHeal_C::GetDefaultObj()
{
	static class UBattleEffect_HeavenlyElixirHeal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_HeavenlyElixirHeal_C*>(UBattleEffect_HeavenlyElixirHeal_C::StaticClass()->DefaultObject);

	return Default;
}

}


