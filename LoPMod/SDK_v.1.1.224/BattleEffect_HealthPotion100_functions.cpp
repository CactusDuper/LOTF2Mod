#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_HealthPotion100.BattleEffect_HealthPotion100_C
// (None)

class UClass* UBattleEffect_HealthPotion100_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_HealthPotion100_C");

	return Clss;
}


// BattleEffect_HealthPotion100_C BattleEffect_HealthPotion100.Default__BattleEffect_HealthPotion100_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_HealthPotion100_C* UBattleEffect_HealthPotion100_C::GetDefaultObj()
{
	static class UBattleEffect_HealthPotion100_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_HealthPotion100_C*>(UBattleEffect_HealthPotion100_C::StaticClass()->DefaultObject);

	return Default;
}

}


