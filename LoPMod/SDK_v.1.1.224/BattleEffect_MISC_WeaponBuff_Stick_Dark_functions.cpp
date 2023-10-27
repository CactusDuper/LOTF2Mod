#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_MISC_WeaponBuff_Stick_Dark.BattleEffect_MISC_WeaponBuff_Stick_Dark_C
// (None)

class UClass* UBattleEffect_MISC_WeaponBuff_Stick_Dark_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_MISC_WeaponBuff_Stick_Dark_C");

	return Clss;
}


// BattleEffect_MISC_WeaponBuff_Stick_Dark_C BattleEffect_MISC_WeaponBuff_Stick_Dark.Default__BattleEffect_MISC_WeaponBuff_Stick_Dark_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_MISC_WeaponBuff_Stick_Dark_C* UBattleEffect_MISC_WeaponBuff_Stick_Dark_C::GetDefaultObj()
{
	static class UBattleEffect_MISC_WeaponBuff_Stick_Dark_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_MISC_WeaponBuff_Stick_Dark_C*>(UBattleEffect_MISC_WeaponBuff_Stick_Dark_C::StaticClass()->DefaultObject);

	return Default;
}

}


