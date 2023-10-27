#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_CombatModifierLightAttackDealsProvisionalDamage.BattleEffect_CombatModifierLightAttackDealsProvisionalDamage_C
// (None)

class UClass* UBattleEffect_CombatModifierLightAttackDealsProvisionalDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_CombatModifierLightAttackDealsProvisionalDamage_C");

	return Clss;
}


// BattleEffect_CombatModifierLightAttackDealsProvisionalDamage_C BattleEffect_CombatModifierLightAttackDealsProvisionalDamage.Default__BattleEffect_CombatModifierLightAttackDealsProvisionalDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_CombatModifierLightAttackDealsProvisionalDamage_C* UBattleEffect_CombatModifierLightAttackDealsProvisionalDamage_C::GetDefaultObj()
{
	static class UBattleEffect_CombatModifierLightAttackDealsProvisionalDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_CombatModifierLightAttackDealsProvisionalDamage_C*>(UBattleEffect_CombatModifierLightAttackDealsProvisionalDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


