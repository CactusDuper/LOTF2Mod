#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_HealthPotionTest.BattleEffect_HealthPotionTest_C
// (None)

class UClass* UBattleEffect_HealthPotionTest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_HealthPotionTest_C");

	return Clss;
}


// BattleEffect_HealthPotionTest_C BattleEffect_HealthPotionTest.Default__BattleEffect_HealthPotionTest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_HealthPotionTest_C* UBattleEffect_HealthPotionTest_C::GetDefaultObj()
{
	static class UBattleEffect_HealthPotionTest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_HealthPotionTest_C*>(UBattleEffect_HealthPotionTest_C::StaticClass()->DefaultObject);

	return Default;
}

}


