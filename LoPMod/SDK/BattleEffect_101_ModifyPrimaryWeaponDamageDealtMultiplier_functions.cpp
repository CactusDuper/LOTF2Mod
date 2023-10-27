#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_101_ModifyPrimaryWeaponDamageDealtMultiplier.BattleEffect_101_ModifyPrimaryWeaponDamageDealtMultiplier_C
// (None)

class UClass* UBattleEffect_101_ModifyPrimaryWeaponDamageDealtMultiplier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_101_ModifyPrimaryWeaponDamageDealtMultiplier_C");

	return Clss;
}


// BattleEffect_101_ModifyPrimaryWeaponDamageDealtMultiplier_C BattleEffect_101_ModifyPrimaryWeaponDamageDealtMultiplier.Default__BattleEffect_101_ModifyPrimaryWeaponDamageDealtMultiplier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_101_ModifyPrimaryWeaponDamageDealtMultiplier_C* UBattleEffect_101_ModifyPrimaryWeaponDamageDealtMultiplier_C::GetDefaultObj()
{
	static class UBattleEffect_101_ModifyPrimaryWeaponDamageDealtMultiplier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_101_ModifyPrimaryWeaponDamageDealtMultiplier_C*>(UBattleEffect_101_ModifyPrimaryWeaponDamageDealtMultiplier_C::StaticClass()->DefaultObject);

	return Default;
}

}


