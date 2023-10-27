#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_WeaponBuff_Dark_Player.BattleEffect_WeaponBuff_Dark_Player_C
// (None)

class UClass* UBattleEffect_WeaponBuff_Dark_Player_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_WeaponBuff_Dark_Player_C");

	return Clss;
}


// BattleEffect_WeaponBuff_Dark_Player_C BattleEffect_WeaponBuff_Dark_Player.Default__BattleEffect_WeaponBuff_Dark_Player_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_WeaponBuff_Dark_Player_C* UBattleEffect_WeaponBuff_Dark_Player_C::GetDefaultObj()
{
	static class UBattleEffect_WeaponBuff_Dark_Player_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_WeaponBuff_Dark_Player_C*>(UBattleEffect_WeaponBuff_Dark_Player_C::StaticClass()->DefaultObject);

	return Default;
}

}


