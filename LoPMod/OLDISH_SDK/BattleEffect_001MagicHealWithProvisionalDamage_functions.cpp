#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_001MagicHealWithProvisionalDamage.BattleEffect_001MagicHealWithProvisionalDamage_C
// (None)

class UClass* UBattleEffect_001MagicHealWithProvisionalDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_001MagicHealWithProvisionalDamage_C");

	return Clss;
}


// BattleEffect_001MagicHealWithProvisionalDamage_C BattleEffect_001MagicHealWithProvisionalDamage.Default__BattleEffect_001MagicHealWithProvisionalDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_001MagicHealWithProvisionalDamage_C* UBattleEffect_001MagicHealWithProvisionalDamage_C::GetDefaultObj()
{
	static class UBattleEffect_001MagicHealWithProvisionalDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_001MagicHealWithProvisionalDamage_C*>(UBattleEffect_001MagicHealWithProvisionalDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


