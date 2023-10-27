#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_500_ApplyBattleEffectIfAttributeAboveThreshold.BattleEffect_500_ApplyBattleEffectIfAttributeAboveThreshold_C
// (None)

class UClass* UBattleEffect_500_ApplyBattleEffectIfAttributeAboveThreshold_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_500_ApplyBattleEffectIfAttributeAboveThreshold_C");

	return Clss;
}


// BattleEffect_500_ApplyBattleEffectIfAttributeAboveThreshold_C BattleEffect_500_ApplyBattleEffectIfAttributeAboveThreshold.Default__BattleEffect_500_ApplyBattleEffectIfAttributeAboveThreshold_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_500_ApplyBattleEffectIfAttributeAboveThreshold_C* UBattleEffect_500_ApplyBattleEffectIfAttributeAboveThreshold_C::GetDefaultObj()
{
	static class UBattleEffect_500_ApplyBattleEffectIfAttributeAboveThreshold_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_500_ApplyBattleEffectIfAttributeAboveThreshold_C*>(UBattleEffect_500_ApplyBattleEffectIfAttributeAboveThreshold_C::StaticClass()->DefaultObject);

	return Default;
}

}


