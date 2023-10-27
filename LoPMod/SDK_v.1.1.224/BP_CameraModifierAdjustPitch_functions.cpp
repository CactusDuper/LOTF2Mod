#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CameraModifierAdjustPitch.BP_CameraModifierAdjustPitch_C
// (None)

class UClass* UBP_CameraModifierAdjustPitch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CameraModifierAdjustPitch_C");

	return Clss;
}


// BP_CameraModifierAdjustPitch_C BP_CameraModifierAdjustPitch.Default__BP_CameraModifierAdjustPitch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CameraModifierAdjustPitch_C* UBP_CameraModifierAdjustPitch_C::GetDefaultObj()
{
	static class UBP_CameraModifierAdjustPitch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CameraModifierAdjustPitch_C*>(UBP_CameraModifierAdjustPitch_C::StaticClass()->DefaultObject);

	return Default;
}

}


