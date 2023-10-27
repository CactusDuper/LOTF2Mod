#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_RangedWeaponsCostProvisionalDamage.BattleEffect_RangedWeaponsCostProvisionalDamage_C
// (None)

class UClass* UBattleEffect_RangedWeaponsCostProvisionalDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_RangedWeaponsCostProvisionalDamage_C");

	return Clss;
}


// BattleEffect_RangedWeaponsCostProvisionalDamage_C BattleEffect_RangedWeaponsCostProvisionalDamage.Default__BattleEffect_RangedWeaponsCostProvisionalDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_RangedWeaponsCostProvisionalDamage_C* UBattleEffect_RangedWeaponsCostProvisionalDamage_C::GetDefaultObj()
{
	static class UBattleEffect_RangedWeaponsCostProvisionalDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_RangedWeaponsCostProvisionalDamage_C*>(UBattleEffect_RangedWeaponsCostProvisionalDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


