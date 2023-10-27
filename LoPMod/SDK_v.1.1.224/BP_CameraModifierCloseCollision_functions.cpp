#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CameraModifierCloseCollision.BP_CameraModifierCloseCollision_C
// (None)

class UClass* UBP_CameraModifierCloseCollision_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CameraModifierCloseCollision_C");

	return Clss;
}


// BP_CameraModifierCloseCollision_C BP_CameraModifierCloseCollision.Default__BP_CameraModifierCloseCollision_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CameraModifierCloseCollision_C* UBP_CameraModifierCloseCollision_C::GetDefaultObj()
{
	static class UBP_CameraModifierCloseCollision_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CameraModifierCloseCollision_C*>(UBP_CameraModifierCloseCollision_C::StaticClass()->DefaultObject);

	return Default;
}

}


