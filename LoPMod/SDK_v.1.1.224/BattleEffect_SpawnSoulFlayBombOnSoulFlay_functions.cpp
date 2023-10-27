#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_SpawnSoulFlayBombOnSoulFlay.BattleEffect_SpawnSoulFlayBombOnSoulFlay_C
// (None)

class UClass* UBattleEffect_SpawnSoulFlayBombOnSoulFlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_SpawnSoulFlayBombOnSoulFlay_C");

	return Clss;
}


// BattleEffect_SpawnSoulFlayBombOnSoulFlay_C BattleEffect_SpawnSoulFlayBombOnSoulFlay.Default__BattleEffect_SpawnSoulFlayBombOnSoulFlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_SpawnSoulFlayBombOnSoulFlay_C* UBattleEffect_SpawnSoulFlayBombOnSoulFlay_C::GetDefaultObj()
{
	static class UBattleEffect_SpawnSoulFlayBombOnSoulFlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_SpawnSoulFlayBombOnSoulFlay_C*>(UBattleEffect_SpawnSoulFlayBombOnSoulFlay_C::StaticClass()->DefaultObject);

	return Default;
}

}


