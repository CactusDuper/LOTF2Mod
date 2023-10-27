#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_LifeRing_lv3.BattleEffect_LifeRing_lv3_C
// (None)

class UClass* UBattleEffect_LifeRing_lv3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_LifeRing_lv3_C");

	return Clss;
}


// BattleEffect_LifeRing_lv3_C BattleEffect_LifeRing_lv3.Default__BattleEffect_LifeRing_lv3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_LifeRing_lv3_C* UBattleEffect_LifeRing_lv3_C::GetDefaultObj()
{
	static class UBattleEffect_LifeRing_lv3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_LifeRing_lv3_C*>(UBattleEffect_LifeRing_lv3_C::StaticClass()->DefaultObject);

	return Default;
}

}


