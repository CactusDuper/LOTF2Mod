#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffectAbility_HealOnDeathSAA.BattleEffectAbility_HealOnDeathSAA_C
// (None)

class UClass* UBattleEffectAbility_HealOnDeathSAA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffectAbility_HealOnDeathSAA_C");

	return Clss;
}


// BattleEffectAbility_HealOnDeathSAA_C BattleEffectAbility_HealOnDeathSAA.Default__BattleEffectAbility_HealOnDeathSAA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffectAbility_HealOnDeathSAA_C* UBattleEffectAbility_HealOnDeathSAA_C::GetDefaultObj()
{
	static class UBattleEffectAbility_HealOnDeathSAA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffectAbility_HealOnDeathSAA_C*>(UBattleEffectAbility_HealOnDeathSAA_C::StaticClass()->DefaultObject);

	return Default;
}

}


