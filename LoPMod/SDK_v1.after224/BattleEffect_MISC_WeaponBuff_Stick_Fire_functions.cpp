#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_MISC_WeaponBuff_Stick_Fire.BattleEffect_MISC_WeaponBuff_Stick_Fire_C
// (None)

class UClass* UBattleEffect_MISC_WeaponBuff_Stick_Fire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_MISC_WeaponBuff_Stick_Fire_C");

	return Clss;
}


// BattleEffect_MISC_WeaponBuff_Stick_Fire_C BattleEffect_MISC_WeaponBuff_Stick_Fire.Default__BattleEffect_MISC_WeaponBuff_Stick_Fire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_MISC_WeaponBuff_Stick_Fire_C* UBattleEffect_MISC_WeaponBuff_Stick_Fire_C::GetDefaultObj()
{
	static class UBattleEffect_MISC_WeaponBuff_Stick_Fire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_MISC_WeaponBuff_Stick_Fire_C*>(UBattleEffect_MISC_WeaponBuff_Stick_Fire_C::StaticClass()->DefaultObject);

	return Default;
}

}


