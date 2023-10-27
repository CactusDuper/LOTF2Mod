#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_RING_GrenadeAmmoAndDmg.BattleEffect_RING_GrenadeAmmoAndDmg_C
// (None)

class UClass* UBattleEffect_RING_GrenadeAmmoAndDmg_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_RING_GrenadeAmmoAndDmg_C");

	return Clss;
}


// BattleEffect_RING_GrenadeAmmoAndDmg_C BattleEffect_RING_GrenadeAmmoAndDmg.Default__BattleEffect_RING_GrenadeAmmoAndDmg_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_RING_GrenadeAmmoAndDmg_C* UBattleEffect_RING_GrenadeAmmoAndDmg_C::GetDefaultObj()
{
	static class UBattleEffect_RING_GrenadeAmmoAndDmg_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_RING_GrenadeAmmoAndDmg_C*>(UBattleEffect_RING_GrenadeAmmoAndDmg_C::StaticClass()->DefaultObject);

	return Default;
}

}


