#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MothVolume_Idle_GuidanceMandatory.BP_MothVolume_Idle_GuidanceMandatory_C
// (Actor)

class UClass* ABP_MothVolume_Idle_GuidanceMandatory_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MothVolume_Idle_GuidanceMandatory_C");

	return Clss;
}


// BP_MothVolume_Idle_GuidanceMandatory_C BP_MothVolume_Idle_GuidanceMandatory.Default__BP_MothVolume_Idle_GuidanceMandatory_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MothVolume_Idle_GuidanceMandatory_C* ABP_MothVolume_Idle_GuidanceMandatory_C::GetDefaultObj()
{
	static class ABP_MothVolume_Idle_GuidanceMandatory_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MothVolume_Idle_GuidanceMandatory_C*>(ABP_MothVolume_Idle_GuidanceMandatory_C::StaticClass()->DefaultObject);

	return Default;
}

}


