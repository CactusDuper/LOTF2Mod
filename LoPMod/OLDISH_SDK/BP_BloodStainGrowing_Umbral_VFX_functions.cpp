#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BloodStainGrowing_Umbral_VFX.BP_BloodStainGrowing_Umbral_VFX_C
// (Actor)

class UClass* ABP_BloodStainGrowing_Umbral_VFX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BloodStainGrowing_Umbral_VFX_C");

	return Clss;
}


// BP_BloodStainGrowing_Umbral_VFX_C BP_BloodStainGrowing_Umbral_VFX.Default__BP_BloodStainGrowing_Umbral_VFX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BloodStainGrowing_Umbral_VFX_C* ABP_BloodStainGrowing_Umbral_VFX_C::GetDefaultObj()
{
	static class ABP_BloodStainGrowing_Umbral_VFX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BloodStainGrowing_Umbral_VFX_C*>(ABP_BloodStainGrowing_Umbral_VFX_C::StaticClass()->DefaultObject);

	return Default;
}

}


