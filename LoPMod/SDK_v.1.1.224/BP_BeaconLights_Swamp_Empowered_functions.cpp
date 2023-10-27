#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BeaconLights_Swamp_Empowered.BP_BeaconLights_Swamp_Empowered_C
// (Actor)

class UClass* ABP_BeaconLights_Swamp_Empowered_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BeaconLights_Swamp_Empowered_C");

	return Clss;
}


// BP_BeaconLights_Swamp_Empowered_C BP_BeaconLights_Swamp_Empowered.Default__BP_BeaconLights_Swamp_Empowered_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BeaconLights_Swamp_Empowered_C* ABP_BeaconLights_Swamp_Empowered_C::GetDefaultObj()
{
	static class ABP_BeaconLights_Swamp_Empowered_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BeaconLights_Swamp_Empowered_C*>(ABP_BeaconLights_Swamp_Empowered_C::StaticClass()->DefaultObject);

	return Default;
}

}


