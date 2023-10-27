#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_SpawnGravityWellOnSoulFlay.BattleEffect_SpawnGravityWellOnSoulFlay_C
// (None)

class UClass* UBattleEffect_SpawnGravityWellOnSoulFlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_SpawnGravityWellOnSoulFlay_C");

	return Clss;
}


// BattleEffect_SpawnGravityWellOnSoulFlay_C BattleEffect_SpawnGravityWellOnSoulFlay.Default__BattleEffect_SpawnGravityWellOnSoulFlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_SpawnGravityWellOnSoulFlay_C* UBattleEffect_SpawnGravityWellOnSoulFlay_C::GetDefaultObj()
{
	static class UBattleEffect_SpawnGravityWellOnSoulFlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_SpawnGravityWellOnSoulFlay_C*>(UBattleEffect_SpawnGravityWellOnSoulFlay_C::StaticClass()->DefaultObject);

	return Default;
}

}


