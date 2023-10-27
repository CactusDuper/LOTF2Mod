#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_HDRCalibrationImage.WBP_HDRCalibrationImage_C
// (None)

class UClass* UWBP_HDRCalibrationImage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_HDRCalibrationImage_C");

	return Clss;
}


// WBP_HDRCalibrationImage_C WBP_HDRCalibrationImage.Default__WBP_HDRCalibrationImage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_HDRCalibrationImage_C* UWBP_HDRCalibrationImage_C::GetDefaultObj()
{
	static class UWBP_HDRCalibrationImage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_HDRCalibrationImage_C*>(UWBP_HDRCalibrationImage_C::StaticClass()->DefaultObject);

	return Default;
}

}


