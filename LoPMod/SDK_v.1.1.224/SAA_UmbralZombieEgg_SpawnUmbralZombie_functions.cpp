#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SAA_UmbralZombieEgg_SpawnUmbralZombie.SAA_UmbralZombieEgg_SpawnUmbralZombie_C
// (None)

class UClass* USAA_UmbralZombieEgg_SpawnUmbralZombie_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SAA_UmbralZombieEgg_SpawnUmbralZombie_C");

	return Clss;
}


// SAA_UmbralZombieEgg_SpawnUmbralZombie_C SAA_UmbralZombieEgg_SpawnUmbralZombie.Default__SAA_UmbralZombieEgg_SpawnUmbralZombie_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USAA_UmbralZombieEgg_SpawnUmbralZombie_C* USAA_UmbralZombieEgg_SpawnUmbralZombie_C::GetDefaultObj()
{
	static class USAA_UmbralZombieEgg_SpawnUmbralZombie_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USAA_UmbralZombieEgg_SpawnUmbralZombie_C*>(USAA_UmbralZombieEgg_SpawnUmbralZombie_C::StaticClass()->DefaultObject);

	return Default;
}

}


