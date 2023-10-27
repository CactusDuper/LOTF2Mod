#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_101_ModifySEcondaryWeaponDamageDealtMultiplier.BattleEffect_101_ModifySecondaryWeaponDamageDealtMultiplier_C
// (None)

class UClass* UBattleEffect_101_ModifySecondaryWeaponDamageDealtMultiplier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_101_ModifySecondaryWeaponDamageDealtMultiplier_C");

	return Clss;
}


// BattleEffect_101_ModifySecondaryWeaponDamageDealtMultiplier_C BattleEffect_101_ModifySEcondaryWeaponDamageDealtMultiplier.Default__BattleEffect_101_ModifySecondaryWeaponDamageDealtMultiplier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_101_ModifySecondaryWeaponDamageDealtMultiplier_C* UBattleEffect_101_ModifySecondaryWeaponDamageDealtMultiplier_C::GetDefaultObj()
{
	static class UBattleEffect_101_ModifySecondaryWeaponDamageDealtMultiplier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_101_ModifySecondaryWeaponDamageDealtMultiplier_C*>(UBattleEffect_101_ModifySecondaryWeaponDamageDealtMultiplier_C::StaticClass()->DefaultObject);

	return Default;
}

}


