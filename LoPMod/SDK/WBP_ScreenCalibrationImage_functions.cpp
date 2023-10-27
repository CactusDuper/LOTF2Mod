#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ScreenCalibrationImage.WBP_ScreenCalibrationImage_C
// (None)

class UClass* UWBP_ScreenCalibrationImage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ScreenCalibrationImage_C");

	return Clss;
}


// WBP_ScreenCalibrationImage_C WBP_ScreenCalibrationImage.Default__WBP_ScreenCalibrationImage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ScreenCalibrationImage_C* UWBP_ScreenCalibrationImage_C::GetDefaultObj()
{
	static class UWBP_ScreenCalibrationImage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ScreenCalibrationImage_C*>(UWBP_ScreenCalibrationImage_C::StaticClass()->DefaultObject);

	return Default;
}

}


