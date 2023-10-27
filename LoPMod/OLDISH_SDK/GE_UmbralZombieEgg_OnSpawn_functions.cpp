#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_UmbralZombieEgg_OnSpawn.GE_UmbralZombieEgg_OnSpawn_C
// (None)

class UClass* UGE_UmbralZombieEgg_OnSpawn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_UmbralZombieEgg_OnSpawn_C");

	return Clss;
}


// GE_UmbralZombieEgg_OnSpawn_C GE_UmbralZombieEgg_OnSpawn.Default__GE_UmbralZombieEgg_OnSpawn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_UmbralZombieEgg_OnSpawn_C* UGE_UmbralZombieEgg_OnSpawn_C::GetDefaultObj()
{
	static class UGE_UmbralZombieEgg_OnSpawn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_UmbralZombieEgg_OnSpawn_C*>(UGE_UmbralZombieEgg_OnSpawn_C::StaticClass()->DefaultObject);

	return Default;
}

}


