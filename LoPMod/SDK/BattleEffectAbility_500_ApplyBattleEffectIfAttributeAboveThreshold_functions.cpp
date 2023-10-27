#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffectAbility_500_ApplyBattleEffectIfAttributeAboveThreshold.BattleEffectAbility_500_ApplyBattleEffectIfAttributeAboveThreshold_C
// (None)

class UClass* UBattleEffectAbility_500_ApplyBattleEffectIfAttributeAboveThreshold_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffectAbility_500_ApplyBattleEffectIfAttributeAboveThreshold_C");

	return Clss;
}


// BattleEffectAbility_500_ApplyBattleEffectIfAttributeAboveThreshold_C BattleEffectAbility_500_ApplyBattleEffectIfAttributeAboveThreshold.Default__BattleEffectAbility_500_ApplyBattleEffectIfAttributeAboveThreshold_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffectAbility_500_ApplyBattleEffectIfAttributeAboveThreshold_C* UBattleEffectAbility_500_ApplyBattleEffectIfAttributeAboveThreshold_C::GetDefaultObj()
{
	static class UBattleEffectAbility_500_ApplyBattleEffectIfAttributeAboveThreshold_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffectAbility_500_ApplyBattleEffectIfAttributeAboveThreshold_C*>(UBattleEffectAbility_500_ApplyBattleEffectIfAttributeAboveThreshold_C::StaticClass()->DefaultObject);

	return Default;
}

}


