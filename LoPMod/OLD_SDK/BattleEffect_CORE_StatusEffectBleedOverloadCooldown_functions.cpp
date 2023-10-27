#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_CORE_StatusEffectBleedOverloadCooldown.BattleEffect_CORE_StatusEffectBleedOverloadCooldown_C
// (None)

class UClass* UBattleEffect_CORE_StatusEffectBleedOverloadCooldown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_CORE_StatusEffectBleedOverloadCooldown_C");

	return Clss;
}


// BattleEffect_CORE_StatusEffectBleedOverloadCooldown_C BattleEffect_CORE_StatusEffectBleedOverloadCooldown.Default__BattleEffect_CORE_StatusEffectBleedOverloadCooldown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_CORE_StatusEffectBleedOverloadCooldown_C* UBattleEffect_CORE_StatusEffectBleedOverloadCooldown_C::GetDefaultObj()
{
	static class UBattleEffect_CORE_StatusEffectBleedOverloadCooldown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_CORE_StatusEffectBleedOverloadCooldown_C*>(UBattleEffect_CORE_StatusEffectBleedOverloadCooldown_C::StaticClass()->DefaultObject);

	return Default;
}

}


