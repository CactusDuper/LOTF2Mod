#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_ApplyBattleEffectOnVisceral.BattleEffect_ApplyBattleEffectOnVisceral_C
// (None)

class UClass* UBattleEffect_ApplyBattleEffectOnVisceral_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_ApplyBattleEffectOnVisceral_C");

	return Clss;
}


// BattleEffect_ApplyBattleEffectOnVisceral_C BattleEffect_ApplyBattleEffectOnVisceral.Default__BattleEffect_ApplyBattleEffectOnVisceral_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_ApplyBattleEffectOnVisceral_C* UBattleEffect_ApplyBattleEffectOnVisceral_C::GetDefaultObj()
{
	static class UBattleEffect_ApplyBattleEffectOnVisceral_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_ApplyBattleEffectOnVisceral_C*>(UBattleEffect_ApplyBattleEffectOnVisceral_C::StaticClass()->DefaultObject);

	return Default;
}

}


