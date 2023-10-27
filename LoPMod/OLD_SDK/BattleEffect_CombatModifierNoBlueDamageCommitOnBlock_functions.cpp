#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_CombatModifierNoBlueDamageCommitOnBlock.BattleEffect_CombatModifierNoBlueDamageCommitOnBlock_C
// (None)

class UClass* UBattleEffect_CombatModifierNoBlueDamageCommitOnBlock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_CombatModifierNoBlueDamageCommitOnBlock_C");

	return Clss;
}


// BattleEffect_CombatModifierNoBlueDamageCommitOnBlock_C BattleEffect_CombatModifierNoBlueDamageCommitOnBlock.Default__BattleEffect_CombatModifierNoBlueDamageCommitOnBlock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_CombatModifierNoBlueDamageCommitOnBlock_C* UBattleEffect_CombatModifierNoBlueDamageCommitOnBlock_C::GetDefaultObj()
{
	static class UBattleEffect_CombatModifierNoBlueDamageCommitOnBlock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_CombatModifierNoBlueDamageCommitOnBlock_C*>(UBattleEffect_CombatModifierNoBlueDamageCommitOnBlock_C::StaticClass()->DefaultObject);

	return Default;
}

}


