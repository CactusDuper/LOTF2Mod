#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_Accessory_DarkStoneplateRing_lv0.BattleEffect_Accessory_DarkStoneplateRing_lv0_C
// (None)

class UClass* UBattleEffect_Accessory_DarkStoneplateRing_lv0_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_Accessory_DarkStoneplateRing_lv0_C");

	return Clss;
}


// BattleEffect_Accessory_DarkStoneplateRing_lv0_C BattleEffect_Accessory_DarkStoneplateRing_lv0.Default__BattleEffect_Accessory_DarkStoneplateRing_lv0_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_Accessory_DarkStoneplateRing_lv0_C* UBattleEffect_Accessory_DarkStoneplateRing_lv0_C::GetDefaultObj()
{
	static class UBattleEffect_Accessory_DarkStoneplateRing_lv0_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_Accessory_DarkStoneplateRing_lv0_C*>(UBattleEffect_Accessory_DarkStoneplateRing_lv0_C::StaticClass()->DefaultObject);

	return Default;
}

}


