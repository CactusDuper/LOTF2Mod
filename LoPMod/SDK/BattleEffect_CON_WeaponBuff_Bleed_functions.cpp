#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_CON_WeaponBuff_Bleed.BattleEffect_CON_WeaponBuff_Bleed_C
// (None)

class UClass* UBattleEffect_CON_WeaponBuff_Bleed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_CON_WeaponBuff_Bleed_C");

	return Clss;
}


// BattleEffect_CON_WeaponBuff_Bleed_C BattleEffect_CON_WeaponBuff_Bleed.Default__BattleEffect_CON_WeaponBuff_Bleed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_CON_WeaponBuff_Bleed_C* UBattleEffect_CON_WeaponBuff_Bleed_C::GetDefaultObj()
{
	static class UBattleEffect_CON_WeaponBuff_Bleed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_CON_WeaponBuff_Bleed_C*>(UBattleEffect_CON_WeaponBuff_Bleed_C::StaticClass()->DefaultObject);

	return Default;
}

}


