#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Enemy_UmbralZombieEgg_OnTakeDamage_AddDelayToExplode.GA_Enemy_UmbralZombieEgg_OnTakeDamage_AddDelayToExplode_C
// (None)

class UClass* UGA_Enemy_UmbralZombieEgg_OnTakeDamage_AddDelayToExplode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Enemy_UmbralZombieEgg_OnTakeDamage_AddDelayToExplode_C");

	return Clss;
}


// GA_Enemy_UmbralZombieEgg_OnTakeDamage_AddDelayToExplode_C GA_Enemy_UmbralZombieEgg_OnTakeDamage_AddDelayToExplode.Default__GA_Enemy_UmbralZombieEgg_OnTakeDamage_AddDelayToExplode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Enemy_UmbralZombieEgg_OnTakeDamage_AddDelayToExplode_C* UGA_Enemy_UmbralZombieEgg_OnTakeDamage_AddDelayToExplode_C::GetDefaultObj()
{
	static class UGA_Enemy_UmbralZombieEgg_OnTakeDamage_AddDelayToExplode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Enemy_UmbralZombieEgg_OnTakeDamage_AddDelayToExplode_C*>(UGA_Enemy_UmbralZombieEgg_OnTakeDamage_AddDelayToExplode_C::StaticClass()->DefaultObject);

	return Default;
}

}


