#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_CON_WeaponBuff_Dark_01.BattleEffect_CON_WeaponBuff_Dark_01_C
// (None)

class UClass* UBattleEffect_CON_WeaponBuff_Dark_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_CON_WeaponBuff_Dark_01_C");

	return Clss;
}


// BattleEffect_CON_WeaponBuff_Dark_01_C BattleEffect_CON_WeaponBuff_Dark_01.Default__BattleEffect_CON_WeaponBuff_Dark_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_CON_WeaponBuff_Dark_01_C* UBattleEffect_CON_WeaponBuff_Dark_01_C::GetDefaultObj()
{
	static class UBattleEffect_CON_WeaponBuff_Dark_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_CON_WeaponBuff_Dark_01_C*>(UBattleEffect_CON_WeaponBuff_Dark_01_C::StaticClass()->DefaultObject);

	return Default;
}

}

