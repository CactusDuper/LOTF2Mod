#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_MAX_HealthPotion100.BattleEffect_MAX_HealthPotion100_C
// (None)

class UClass* UBattleEffect_MAX_HealthPotion100_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_MAX_HealthPotion100_C");

	return Clss;
}


// BattleEffect_MAX_HealthPotion100_C BattleEffect_MAX_HealthPotion100.Default__BattleEffect_MAX_HealthPotion100_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_MAX_HealthPotion100_C* UBattleEffect_MAX_HealthPotion100_C::GetDefaultObj()
{
	static class UBattleEffect_MAX_HealthPotion100_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_MAX_HealthPotion100_C*>(UBattleEffect_MAX_HealthPotion100_C::StaticClass()->DefaultObject);

	return Default;
}

}


