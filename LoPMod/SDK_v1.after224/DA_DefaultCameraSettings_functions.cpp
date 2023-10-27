#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DA_DefaultCameraSettings.DA_DefaultCameraSettings_C
// (None)

class UClass* UDA_DefaultCameraSettings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DA_DefaultCameraSettings_C");

	return Clss;
}


// DA_DefaultCameraSettings_C DA_DefaultCameraSettings.Default__DA_DefaultCameraSettings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDA_DefaultCameraSettings_C* UDA_DefaultCameraSettings_C::GetDefaultObj()
{
	static class UDA_DefaultCameraSettings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDA_DefaultCameraSettings_C*>(UDA_DefaultCameraSettings_C::StaticClass()->DefaultObject);

	return Default;
}

}


