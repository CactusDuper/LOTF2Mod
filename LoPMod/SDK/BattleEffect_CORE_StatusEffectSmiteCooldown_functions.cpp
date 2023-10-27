#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_CORE_StatusEffectSmiteCooldown.BattleEffect_CORE_StatusEffectSmiteCooldown_C
// (None)

class UClass* UBattleEffect_CORE_StatusEffectSmiteCooldown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_CORE_StatusEffectSmiteCooldown_C");

	return Clss;
}


// BattleEffect_CORE_StatusEffectSmiteCooldown_C BattleEffect_CORE_StatusEffectSmiteCooldown.Default__BattleEffect_CORE_StatusEffectSmiteCooldown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_CORE_StatusEffectSmiteCooldown_C* UBattleEffect_CORE_StatusEffectSmiteCooldown_C::GetDefaultObj()
{
	static class UBattleEffect_CORE_StatusEffectSmiteCooldown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_CORE_StatusEffectSmiteCooldown_C*>(UBattleEffect_CORE_StatusEffectSmiteCooldown_C::StaticClass()->DefaultObject);

	return Default;
}

}


