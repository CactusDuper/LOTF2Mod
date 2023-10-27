#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_RUNE_GreaterChaosArmor.BattleEffect_RUNE_GreaterChaosArmor_C
// (None)

class UClass* UBattleEffect_RUNE_GreaterChaosArmor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_RUNE_GreaterChaosArmor_C");

	return Clss;
}


// BattleEffect_RUNE_GreaterChaosArmor_C BattleEffect_RUNE_GreaterChaosArmor.Default__BattleEffect_RUNE_GreaterChaosArmor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_RUNE_GreaterChaosArmor_C* UBattleEffect_RUNE_GreaterChaosArmor_C::GetDefaultObj()
{
	static class UBattleEffect_RUNE_GreaterChaosArmor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_RUNE_GreaterChaosArmor_C*>(UBattleEffect_RUNE_GreaterChaosArmor_C::StaticClass()->DefaultObject);

	return Default;
}

}


