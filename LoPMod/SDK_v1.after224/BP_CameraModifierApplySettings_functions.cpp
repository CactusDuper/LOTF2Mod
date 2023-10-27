#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CameraModifierApplySettings.BP_CameraModifierApplySettings_C
// (None)

class UClass* UBP_CameraModifierApplySettings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CameraModifierApplySettings_C");

	return Clss;
}


// BP_CameraModifierApplySettings_C BP_CameraModifierApplySettings.Default__BP_CameraModifierApplySettings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CameraModifierApplySettings_C* UBP_CameraModifierApplySettings_C::GetDefaultObj()
{
	static class UBP_CameraModifierApplySettings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CameraModifierApplySettings_C*>(UBP_CameraModifierApplySettings_C::StaticClass()->DefaultObject);

	return Default;
}

}


