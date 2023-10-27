#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffectAbility_SpawnWeakeningCurseOnDeathSAA.BattleEffectAbility_SpawnWeakeningCurseOnDeathSAA_C
// (None)

class UClass* UBattleEffectAbility_SpawnWeakeningCurseOnDeathSAA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffectAbility_SpawnWeakeningCurseOnDeathSAA_C");

	return Clss;
}


// BattleEffectAbility_SpawnWeakeningCurseOnDeathSAA_C BattleEffectAbility_SpawnWeakeningCurseOnDeathSAA.Default__BattleEffectAbility_SpawnWeakeningCurseOnDeathSAA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffectAbility_SpawnWeakeningCurseOnDeathSAA_C* UBattleEffectAbility_SpawnWeakeningCurseOnDeathSAA_C::GetDefaultObj()
{
	static class UBattleEffectAbility_SpawnWeakeningCurseOnDeathSAA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffectAbility_SpawnWeakeningCurseOnDeathSAA_C*>(UBattleEffectAbility_SpawnWeakeningCurseOnDeathSAA_C::StaticClass()->DefaultObject);

	return Default;
}

}


