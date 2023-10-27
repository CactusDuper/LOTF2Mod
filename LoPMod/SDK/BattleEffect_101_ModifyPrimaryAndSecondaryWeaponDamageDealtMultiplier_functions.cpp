#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_101_ModifyPrimaryAndSecondaryWeaponDamageDealtMultiplier.BattleEffect_101_ModifyPrimaryAndSecondaryWeaponDamageDealtMultiplier_C
// (None)

class UClass* UBattleEffect_101_ModifyPrimaryAndSecondaryWeaponDamageDealtMultiplier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_101_ModifyPrimaryAndSecondaryWeaponDamageDealtMultiplier_C");

	return Clss;
}


// BattleEffect_101_ModifyPrimaryAndSecondaryWeaponDamageDealtMultiplier_C BattleEffect_101_ModifyPrimaryAndSecondaryWeaponDamageDealtMultiplier.Default__BattleEffect_101_ModifyPrimaryAndSecondaryWeaponDamageDealtMultiplier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_101_ModifyPrimaryAndSecondaryWeaponDamageDealtMultiplier_C* UBattleEffect_101_ModifyPrimaryAndSecondaryWeaponDamageDealtMultiplier_C::GetDefaultObj()
{
	static class UBattleEffect_101_ModifyPrimaryAndSecondaryWeaponDamageDealtMultiplier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_101_ModifyPrimaryAndSecondaryWeaponDamageDealtMultiplier_C*>(UBattleEffect_101_ModifyPrimaryAndSecondaryWeaponDamageDealtMultiplier_C::StaticClass()->DefaultObject);

	return Default;
}

}


