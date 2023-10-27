#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_WeaponMinorManaRegen.BattleEffect_WeaponMinorManaRegen_C
// (None)

class UClass* UBattleEffect_WeaponMinorManaRegen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_WeaponMinorManaRegen_C");

	return Clss;
}


// BattleEffect_WeaponMinorManaRegen_C BattleEffect_WeaponMinorManaRegen.Default__BattleEffect_WeaponMinorManaRegen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_WeaponMinorManaRegen_C* UBattleEffect_WeaponMinorManaRegen_C::GetDefaultObj()
{
	static class UBattleEffect_WeaponMinorManaRegen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_WeaponMinorManaRegen_C*>(UBattleEffect_WeaponMinorManaRegen_C::StaticClass()->DefaultObject);

	return Default;
}

}


