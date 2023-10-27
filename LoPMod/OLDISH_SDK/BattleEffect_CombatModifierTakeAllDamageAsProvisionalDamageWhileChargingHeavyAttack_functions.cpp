#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_CombatModifierTakeAllDamageAsProvisionalDamageWhileChargingHeavyAttack.BattleEffect_CombatModifierTakeAllDamageAsProvisionalDamageWhileChargingHeavyAttack_C
// (None)

class UClass* UBattleEffect_CombatModifierTakeAllDamageAsProvisionalDamageWhileChargingHeavyAttack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_CombatModifierTakeAllDamageAsProvisionalDamageWhileChargingHeavyAttack_C");

	return Clss;
}


// BattleEffect_CombatModifierTakeAllDamageAsProvisionalDamageWhileChargingHeavyAttack_C BattleEffect_CombatModifierTakeAllDamageAsProvisionalDamageWhileChargingHeavyAttack.Default__BattleEffect_CombatModifierTakeAllDamageAsProvisionalDamageWhileChargingHeavyAttack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_CombatModifierTakeAllDamageAsProvisionalDamageWhileChargingHeavyAttack_C* UBattleEffect_CombatModifierTakeAllDamageAsProvisionalDamageWhileChargingHeavyAttack_C::GetDefaultObj()
{
	static class UBattleEffect_CombatModifierTakeAllDamageAsProvisionalDamageWhileChargingHeavyAttack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_CombatModifierTakeAllDamageAsProvisionalDamageWhileChargingHeavyAttack_C*>(UBattleEffect_CombatModifierTakeAllDamageAsProvisionalDamageWhileChargingHeavyAttack_C::StaticClass()->DefaultObject);

	return Default;
}

}


