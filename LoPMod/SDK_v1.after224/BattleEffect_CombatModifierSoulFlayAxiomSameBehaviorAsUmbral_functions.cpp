#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_CombatModifierSoulFlayAxiomSameBehaviorAsUmbral.BattleEffect_CombatModifierSoulFlayAxiomSameBehaviorAsUmbral_C
// (None)

class UClass* UBattleEffect_CombatModifierSoulFlayAxiomSameBehaviorAsUmbral_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_CombatModifierSoulFlayAxiomSameBehaviorAsUmbral_C");

	return Clss;
}


// BattleEffect_CombatModifierSoulFlayAxiomSameBehaviorAsUmbral_C BattleEffect_CombatModifierSoulFlayAxiomSameBehaviorAsUmbral.Default__BattleEffect_CombatModifierSoulFlayAxiomSameBehaviorAsUmbral_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_CombatModifierSoulFlayAxiomSameBehaviorAsUmbral_C* UBattleEffect_CombatModifierSoulFlayAxiomSameBehaviorAsUmbral_C::GetDefaultObj()
{
	static class UBattleEffect_CombatModifierSoulFlayAxiomSameBehaviorAsUmbral_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_CombatModifierSoulFlayAxiomSameBehaviorAsUmbral_C*>(UBattleEffect_CombatModifierSoulFlayAxiomSameBehaviorAsUmbral_C::StaticClass()->DefaultObject);

	return Default;
}

}


