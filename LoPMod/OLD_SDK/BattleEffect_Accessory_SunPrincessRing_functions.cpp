#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_Accessory_SunPrincessRing.BattleEffect_Accessory_SunPrincessRing_C
// (None)

class UClass* UBattleEffect_Accessory_SunPrincessRing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_Accessory_SunPrincessRing_C");

	return Clss;
}


// BattleEffect_Accessory_SunPrincessRing_C BattleEffect_Accessory_SunPrincessRing.Default__BattleEffect_Accessory_SunPrincessRing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_Accessory_SunPrincessRing_C* UBattleEffect_Accessory_SunPrincessRing_C::GetDefaultObj()
{
	static class UBattleEffect_Accessory_SunPrincessRing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_Accessory_SunPrincessRing_C*>(UBattleEffect_Accessory_SunPrincessRing_C::StaticClass()->DefaultObject);

	return Default;
}

}


