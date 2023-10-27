#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_000DEV_SoulFlay.BattleEffect_000DEV_SoulFlay_C
// (None)

class UClass* UBattleEffect_000DEV_SoulFlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_000DEV_SoulFlay_C");

	return Clss;
}


// BattleEffect_000DEV_SoulFlay_C BattleEffect_000DEV_SoulFlay.Default__BattleEffect_000DEV_SoulFlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_000DEV_SoulFlay_C* UBattleEffect_000DEV_SoulFlay_C::GetDefaultObj()
{
	static class UBattleEffect_000DEV_SoulFlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_000DEV_SoulFlay_C*>(UBattleEffect_000DEV_SoulFlay_C::StaticClass()->DefaultObject);

	return Default;
}

}


