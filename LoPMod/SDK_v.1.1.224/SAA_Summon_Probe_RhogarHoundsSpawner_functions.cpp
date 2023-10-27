#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SAA_Summon_Probe_RhogarHoundsSpawner.SAA_Summon_Probe_RhogarHoundsSpawner_C
// (None)

class UClass* USAA_Summon_Probe_RhogarHoundsSpawner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SAA_Summon_Probe_RhogarHoundsSpawner_C");

	return Clss;
}


// SAA_Summon_Probe_RhogarHoundsSpawner_C SAA_Summon_Probe_RhogarHoundsSpawner.Default__SAA_Summon_Probe_RhogarHoundsSpawner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USAA_Summon_Probe_RhogarHoundsSpawner_C* USAA_Summon_Probe_RhogarHoundsSpawner_C::GetDefaultObj()
{
	static class USAA_Summon_Probe_RhogarHoundsSpawner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USAA_Summon_Probe_RhogarHoundsSpawner_C*>(USAA_Summon_Probe_RhogarHoundsSpawner_C::StaticClass()->DefaultObject);

	return Default;
}

}


