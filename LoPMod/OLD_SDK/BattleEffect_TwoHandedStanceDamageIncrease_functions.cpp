#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_TwoHandedStanceDamageIncrease.BattleEffect_TwoHandedStanceDamageIncrease_C
// (None)

class UClass* UBattleEffect_TwoHandedStanceDamageIncrease_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_TwoHandedStanceDamageIncrease_C");

	return Clss;
}


// BattleEffect_TwoHandedStanceDamageIncrease_C BattleEffect_TwoHandedStanceDamageIncrease.Default__BattleEffect_TwoHandedStanceDamageIncrease_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_TwoHandedStanceDamageIncrease_C* UBattleEffect_TwoHandedStanceDamageIncrease_C::GetDefaultObj()
{
	static class UBattleEffect_TwoHandedStanceDamageIncrease_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_TwoHandedStanceDamageIncrease_C*>(UBattleEffect_TwoHandedStanceDamageIncrease_C::StaticClass()->DefaultObject);

	return Default;
}

}


