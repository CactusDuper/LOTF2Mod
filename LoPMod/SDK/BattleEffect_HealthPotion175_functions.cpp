#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_HealthPotion175.BattleEffect_HealthPotion175_C
// (None)

class UClass* UBattleEffect_HealthPotion175_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_HealthPotion175_C");

	return Clss;
}


// BattleEffect_HealthPotion175_C BattleEffect_HealthPotion175.Default__BattleEffect_HealthPotion175_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_HealthPotion175_C* UBattleEffect_HealthPotion175_C::GetDefaultObj()
{
	static class UBattleEffect_HealthPotion175_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_HealthPotion175_C*>(UBattleEffect_HealthPotion175_C::StaticClass()->DefaultObject);

	return Default;
}

}


