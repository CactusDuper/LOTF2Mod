#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_CORE_StatusEffectBleedCooldownPause.BattleEffect_CORE_StatusEffectBleedCooldownPause_C
// (None)

class UClass* UBattleEffect_CORE_StatusEffectBleedCooldownPause_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_CORE_StatusEffectBleedCooldownPause_C");

	return Clss;
}


// BattleEffect_CORE_StatusEffectBleedCooldownPause_C BattleEffect_CORE_StatusEffectBleedCooldownPause.Default__BattleEffect_CORE_StatusEffectBleedCooldownPause_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_CORE_StatusEffectBleedCooldownPause_C* UBattleEffect_CORE_StatusEffectBleedCooldownPause_C::GetDefaultObj()
{
	static class UBattleEffect_CORE_StatusEffectBleedCooldownPause_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_CORE_StatusEffectBleedCooldownPause_C*>(UBattleEffect_CORE_StatusEffectBleedCooldownPause_C::StaticClass()->DefaultObject);

	return Default;
}

}


