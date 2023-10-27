#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CameraModifierFocusTarget.BP_CameraModifierFocusTarget_C
// (None)

class UClass* UBP_CameraModifierFocusTarget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CameraModifierFocusTarget_C");

	return Clss;
}


// BP_CameraModifierFocusTarget_C BP_CameraModifierFocusTarget.Default__BP_CameraModifierFocusTarget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CameraModifierFocusTarget_C* UBP_CameraModifierFocusTarget_C::GetDefaultObj()
{
	static class UBP_CameraModifierFocusTarget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CameraModifierFocusTarget_C*>(UBP_CameraModifierFocusTarget_C::StaticClass()->DefaultObject);

	return Default;
}

}


