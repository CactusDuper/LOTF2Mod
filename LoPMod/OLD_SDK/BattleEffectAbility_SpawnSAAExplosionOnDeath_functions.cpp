#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffectAbility_SpawnSAAExplosionOnDeath.BattleEffectAbility_SpawnSAAExplosionOnDeath_C
// (None)

class UClass* UBattleEffectAbility_SpawnSAAExplosionOnDeath_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffectAbility_SpawnSAAExplosionOnDeath_C");

	return Clss;
}


// BattleEffectAbility_SpawnSAAExplosionOnDeath_C BattleEffectAbility_SpawnSAAExplosionOnDeath.Default__BattleEffectAbility_SpawnSAAExplosionOnDeath_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffectAbility_SpawnSAAExplosionOnDeath_C* UBattleEffectAbility_SpawnSAAExplosionOnDeath_C::GetDefaultObj()
{
	static class UBattleEffectAbility_SpawnSAAExplosionOnDeath_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffectAbility_SpawnSAAExplosionOnDeath_C*>(UBattleEffectAbility_SpawnSAAExplosionOnDeath_C::StaticClass()->DefaultObject);

	return Default;
}

}


