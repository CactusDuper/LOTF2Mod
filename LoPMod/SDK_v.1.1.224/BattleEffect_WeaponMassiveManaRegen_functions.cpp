#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_WeaponMassiveManaRegen.BattleEffect_WeaponMassiveManaRegen_C
// (None)

class UClass* UBattleEffect_WeaponMassiveManaRegen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_WeaponMassiveManaRegen_C");

	return Clss;
}


// BattleEffect_WeaponMassiveManaRegen_C BattleEffect_WeaponMassiveManaRegen.Default__BattleEffect_WeaponMassiveManaRegen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_WeaponMassiveManaRegen_C* UBattleEffect_WeaponMassiveManaRegen_C::GetDefaultObj()
{
	static class UBattleEffect_WeaponMassiveManaRegen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_WeaponMassiveManaRegen_C*>(UBattleEffect_WeaponMassiveManaRegen_C::StaticClass()->DefaultObject);

	return Default;
}

}


