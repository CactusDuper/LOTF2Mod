#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SAA_UmbralZombieEgg_Explode_Visual.SAA_UmbralZombieEgg_Explode_Visual_C
// (None)

class UClass* USAA_UmbralZombieEgg_Explode_Visual_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SAA_UmbralZombieEgg_Explode_Visual_C");

	return Clss;
}


// SAA_UmbralZombieEgg_Explode_Visual_C SAA_UmbralZombieEgg_Explode_Visual.Default__SAA_UmbralZombieEgg_Explode_Visual_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USAA_UmbralZombieEgg_Explode_Visual_C* USAA_UmbralZombieEgg_Explode_Visual_C::GetDefaultObj()
{
	static class USAA_UmbralZombieEgg_Explode_Visual_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USAA_UmbralZombieEgg_Explode_Visual_C*>(USAA_UmbralZombieEgg_Explode_Visual_C::StaticClass()->DefaultObject);

	return Default;
}

}

