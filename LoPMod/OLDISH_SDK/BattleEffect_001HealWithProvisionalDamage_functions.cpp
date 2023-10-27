#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_001HealWithProvisionalDamage.BattleEffect_001HealWithProvisionalDamage_C
// (None)

class UClass* UBattleEffect_001HealWithProvisionalDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_001HealWithProvisionalDamage_C");

	return Clss;
}


// BattleEffect_001HealWithProvisionalDamage_C BattleEffect_001HealWithProvisionalDamage.Default__BattleEffect_001HealWithProvisionalDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_001HealWithProvisionalDamage_C* UBattleEffect_001HealWithProvisionalDamage_C::GetDefaultObj()
{
	static class UBattleEffect_001HealWithProvisionalDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_001HealWithProvisionalDamage_C*>(UBattleEffect_001HealWithProvisionalDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


