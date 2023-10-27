#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CameraModifierWater.BP_CameraModifierWater_C
// (None)

class UClass* UBP_CameraModifierWater_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CameraModifierWater_C");

	return Clss;
}


// BP_CameraModifierWater_C BP_CameraModifierWater.Default__BP_CameraModifierWater_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CameraModifierWater_C* UBP_CameraModifierWater_C::GetDefaultObj()
{
	static class UBP_CameraModifierWater_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CameraModifierWater_C*>(UBP_CameraModifierWater_C::StaticClass()->DefaultObject);

	return Default;
}

}


