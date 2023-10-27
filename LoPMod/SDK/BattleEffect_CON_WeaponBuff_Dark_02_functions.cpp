#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_CON_WeaponBuff_Dark_02.BattleEffect_CON_WeaponBuff_Dark_02_C
// (None)

class UClass* UBattleEffect_CON_WeaponBuff_Dark_02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_CON_WeaponBuff_Dark_02_C");

	return Clss;
}


// BattleEffect_CON_WeaponBuff_Dark_02_C BattleEffect_CON_WeaponBuff_Dark_02.Default__BattleEffect_CON_WeaponBuff_Dark_02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_CON_WeaponBuff_Dark_02_C* UBattleEffect_CON_WeaponBuff_Dark_02_C::GetDefaultObj()
{
	static class UBattleEffect_CON_WeaponBuff_Dark_02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_CON_WeaponBuff_Dark_02_C*>(UBattleEffect_CON_WeaponBuff_Dark_02_C::StaticClass()->DefaultObject);

	return Default;
}

}


