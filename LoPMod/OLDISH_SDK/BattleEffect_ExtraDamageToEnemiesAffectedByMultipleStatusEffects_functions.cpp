#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_ExtraDamageToEnemiesAffectedByMultipleStatusEffects.BattleEffect_ExtraDamageToEnemiesAffectedByMultipleStatusEffects_C
// (None)

class UClass* UBattleEffect_ExtraDamageToEnemiesAffectedByMultipleStatusEffects_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_ExtraDamageToEnemiesAffectedByMultipleStatusEffects_C");

	return Clss;
}


// BattleEffect_ExtraDamageToEnemiesAffectedByMultipleStatusEffects_C BattleEffect_ExtraDamageToEnemiesAffectedByMultipleStatusEffects.Default__BattleEffect_ExtraDamageToEnemiesAffectedByMultipleStatusEffects_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_ExtraDamageToEnemiesAffectedByMultipleStatusEffects_C* UBattleEffect_ExtraDamageToEnemiesAffectedByMultipleStatusEffects_C::GetDefaultObj()
{
	static class UBattleEffect_ExtraDamageToEnemiesAffectedByMultipleStatusEffects_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_ExtraDamageToEnemiesAffectedByMultipleStatusEffects_C*>(UBattleEffect_ExtraDamageToEnemiesAffectedByMultipleStatusEffects_C::StaticClass()->DefaultObject);

	return Default;
}

}


