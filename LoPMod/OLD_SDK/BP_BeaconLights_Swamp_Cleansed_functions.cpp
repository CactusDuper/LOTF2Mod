#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BeaconLights_Swamp_Cleansed.BP_BeaconLights_Swamp_Cleansed_C
// (Actor)

class UClass* ABP_BeaconLights_Swamp_Cleansed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BeaconLights_Swamp_Cleansed_C");

	return Clss;
}


// BP_BeaconLights_Swamp_Cleansed_C BP_BeaconLights_Swamp_Cleansed.Default__BP_BeaconLights_Swamp_Cleansed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BeaconLights_Swamp_Cleansed_C* ABP_BeaconLights_Swamp_Cleansed_C::GetDefaultObj()
{
	static class ABP_BeaconLights_Swamp_Cleansed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BeaconLights_Swamp_Cleansed_C*>(ABP_BeaconLights_Swamp_Cleansed_C::StaticClass()->DefaultObject);

	return Default;
}

}


