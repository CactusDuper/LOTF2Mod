#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_EnemyHallowedBroAreaHealing.BattleEffect_EnemyHallowedBroAreaHealing_C
// (None)

class UClass* UBattleEffect_EnemyHallowedBroAreaHealing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_EnemyHallowedBroAreaHealing_C");

	return Clss;
}


// BattleEffect_EnemyHallowedBroAreaHealing_C BattleEffect_EnemyHallowedBroAreaHealing.Default__BattleEffect_EnemyHallowedBroAreaHealing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_EnemyHallowedBroAreaHealing_C* UBattleEffect_EnemyHallowedBroAreaHealing_C::GetDefaultObj()
{
	static class UBattleEffect_EnemyHallowedBroAreaHealing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_EnemyHallowedBroAreaHealing_C*>(UBattleEffect_EnemyHallowedBroAreaHealing_C::StaticClass()->DefaultObject);

	return Default;
}

}


