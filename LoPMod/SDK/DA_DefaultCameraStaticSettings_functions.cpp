#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DA_DefaultCameraStaticSettings.DA_DefaultCameraStaticSettings_C
// (None)

class UClass* UDA_DefaultCameraStaticSettings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DA_DefaultCameraStaticSettings_C");

	return Clss;
}


// DA_DefaultCameraStaticSettings_C DA_DefaultCameraStaticSettings.Default__DA_DefaultCameraStaticSettings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDA_DefaultCameraStaticSettings_C* UDA_DefaultCameraStaticSettings_C::GetDefaultObj()
{
	static class UDA_DefaultCameraStaticSettings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDA_DefaultCameraStaticSettings_C*>(UDA_DefaultCameraStaticSettings_C::StaticClass()->DefaultObject);

	return Default;
}

}


