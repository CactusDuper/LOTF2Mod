#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_CombatModifierImmuneToHealthDamageAfterResurrecting.BattleEffect_CombatModifierImmuneToHealthDamageAfterResurrecting_C
// (None)

class UClass* UBattleEffect_CombatModifierImmuneToHealthDamageAfterResurrecting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_CombatModifierImmuneToHealthDamageAfterResurrecting_C");

	return Clss;
}


// BattleEffect_CombatModifierImmuneToHealthDamageAfterResurrecting_C BattleEffect_CombatModifierImmuneToHealthDamageAfterResurrecting.Default__BattleEffect_CombatModifierImmuneToHealthDamageAfterResurrecting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_CombatModifierImmuneToHealthDamageAfterResurrecting_C* UBattleEffect_CombatModifierImmuneToHealthDamageAfterResurrecting_C::GetDefaultObj()
{
	static class UBattleEffect_CombatModifierImmuneToHealthDamageAfterResurrecting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_CombatModifierImmuneToHealthDamageAfterResurrecting_C*>(UBattleEffect_CombatModifierImmuneToHealthDamageAfterResurrecting_C::StaticClass()->DefaultObject);

	return Default;
}

}


