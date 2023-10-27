#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_CORE_StatusEffectBurnOverloadExtraCooldown.BattleEffect_CORE_StatusEffectBurnOverloadExtraCooldown_C
// (None)

class UClass* UBattleEffect_CORE_StatusEffectBurnOverloadExtraCooldown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_CORE_StatusEffectBurnOverloadExtraCooldown_C");

	return Clss;
}


// BattleEffect_CORE_StatusEffectBurnOverloadExtraCooldown_C BattleEffect_CORE_StatusEffectBurnOverloadExtraCooldown.Default__BattleEffect_CORE_StatusEffectBurnOverloadExtraCooldown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_CORE_StatusEffectBurnOverloadExtraCooldown_C* UBattleEffect_CORE_StatusEffectBurnOverloadExtraCooldown_C::GetDefaultObj()
{
	static class UBattleEffect_CORE_StatusEffectBurnOverloadExtraCooldown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_CORE_StatusEffectBurnOverloadExtraCooldown_C*>(UBattleEffect_CORE_StatusEffectBurnOverloadExtraCooldown_C::StaticClass()->DefaultObject);

	return Default;
}

}


