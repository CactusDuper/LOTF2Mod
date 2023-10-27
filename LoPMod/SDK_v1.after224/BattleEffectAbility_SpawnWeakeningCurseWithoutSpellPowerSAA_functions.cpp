#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffectAbility_SpawnWeakeningCurseWithoutSpellPowerSAA.BattleEffectAbility_SpawnWeakeningCurseWithoutSpellPowerSAA_C
// (None)

class UClass* UBattleEffectAbility_SpawnWeakeningCurseWithoutSpellPowerSAA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffectAbility_SpawnWeakeningCurseWithoutSpellPowerSAA_C");

	return Clss;
}


// BattleEffectAbility_SpawnWeakeningCurseWithoutSpellPowerSAA_C BattleEffectAbility_SpawnWeakeningCurseWithoutSpellPowerSAA.Default__BattleEffectAbility_SpawnWeakeningCurseWithoutSpellPowerSAA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffectAbility_SpawnWeakeningCurseWithoutSpellPowerSAA_C* UBattleEffectAbility_SpawnWeakeningCurseWithoutSpellPowerSAA_C::GetDefaultObj()
{
	static class UBattleEffectAbility_SpawnWeakeningCurseWithoutSpellPowerSAA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffectAbility_SpawnWeakeningCurseWithoutSpellPowerSAA_C*>(UBattleEffectAbility_SpawnWeakeningCurseWithoutSpellPowerSAA_C::StaticClass()->DefaultObject);

	return Default;
}

}


