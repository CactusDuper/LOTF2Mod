#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_500_ApplyBattleEffectIfAttributeBelowThreshold.BattleEffect_500_ApplyBattleEffectIfAttributeBelowThreshold_C
// (None)

class UClass* UBattleEffect_500_ApplyBattleEffectIfAttributeBelowThreshold_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_500_ApplyBattleEffectIfAttributeBelowThreshold_C");

	return Clss;
}


// BattleEffect_500_ApplyBattleEffectIfAttributeBelowThreshold_C BattleEffect_500_ApplyBattleEffectIfAttributeBelowThreshold.Default__BattleEffect_500_ApplyBattleEffectIfAttributeBelowThreshold_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_500_ApplyBattleEffectIfAttributeBelowThreshold_C* UBattleEffect_500_ApplyBattleEffectIfAttributeBelowThreshold_C::GetDefaultObj()
{
	static class UBattleEffect_500_ApplyBattleEffectIfAttributeBelowThreshold_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_500_ApplyBattleEffectIfAttributeBelowThreshold_C*>(UBattleEffect_500_ApplyBattleEffectIfAttributeBelowThreshold_C::StaticClass()->DefaultObject);

	return Default;
}

}


