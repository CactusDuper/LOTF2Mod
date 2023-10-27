#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CommonLoadingSettings.CommonLoadingScreenSettings
// (None)

class UClass* UCommonLoadingScreenSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonLoadingScreenSettings");

	return Clss;
}


// CommonLoadingScreenSettings CommonLoadingSettings.Default__CommonLoadingScreenSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonLoadingScreenSettings* UCommonLoadingScreenSettings::GetDefaultObj()
{
	static class UCommonLoadingScreenSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonLoadingScreenSettings*>(UCommonLoadingScreenSettings::StaticClass()->DefaultObject);

	return Default;
}

}


