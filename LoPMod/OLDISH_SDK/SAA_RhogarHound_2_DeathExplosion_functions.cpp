#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SAA_RhogarHound_2_DeathExplosion.SAA_RhogarHound_2_DeathExplosion_C
// (None)

class UClass* USAA_RhogarHound_2_DeathExplosion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SAA_RhogarHound_2_DeathExplosion_C");

	return Clss;
}


// SAA_RhogarHound_2_DeathExplosion_C SAA_RhogarHound_2_DeathExplosion.Default__SAA_RhogarHound_2_DeathExplosion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USAA_RhogarHound_2_DeathExplosion_C* USAA_RhogarHound_2_DeathExplosion_C::GetDefaultObj()
{
	static class USAA_RhogarHound_2_DeathExplosion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USAA_RhogarHound_2_DeathExplosion_C*>(USAA_RhogarHound_2_DeathExplosion_C::StaticClass()->DefaultObject);

	return Default;
}

}


