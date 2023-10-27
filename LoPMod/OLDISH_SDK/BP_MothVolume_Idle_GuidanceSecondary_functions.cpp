#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MothVolume_Idle_GuidanceSecondary.BP_MothVolume_Idle_GuidanceSecondary_C
// (Actor)

class UClass* ABP_MothVolume_Idle_GuidanceSecondary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MothVolume_Idle_GuidanceSecondary_C");

	return Clss;
}


// BP_MothVolume_Idle_GuidanceSecondary_C BP_MothVolume_Idle_GuidanceSecondary.Default__BP_MothVolume_Idle_GuidanceSecondary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MothVolume_Idle_GuidanceSecondary_C* ABP_MothVolume_Idle_GuidanceSecondary_C::GetDefaultObj()
{
	static class ABP_MothVolume_Idle_GuidanceSecondary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MothVolume_Idle_GuidanceSecondary_C*>(ABP_MothVolume_Idle_GuidanceSecondary_C::StaticClass()->DefaultObject);

	return Default;
}

}


