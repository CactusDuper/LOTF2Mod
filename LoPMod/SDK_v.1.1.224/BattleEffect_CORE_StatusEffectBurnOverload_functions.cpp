#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_CORE_StatusEffectBurnOverload.BattleEffect_CORE_StatusEffectBurnOverload_C
// (None)

class UClass* UBattleEffect_CORE_StatusEffectBurnOverload_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_CORE_StatusEffectBurnOverload_C");

	return Clss;
}


// BattleEffect_CORE_StatusEffectBurnOverload_C BattleEffect_CORE_StatusEffectBurnOverload.Default__BattleEffect_CORE_StatusEffectBurnOverload_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_CORE_StatusEffectBurnOverload_C* UBattleEffect_CORE_StatusEffectBurnOverload_C::GetDefaultObj()
{
	static class UBattleEffect_CORE_StatusEffectBurnOverload_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_CORE_StatusEffectBurnOverload_C*>(UBattleEffect_CORE_StatusEffectBurnOverload_C::StaticClass()->DefaultObject);

	return Default;
}

}


