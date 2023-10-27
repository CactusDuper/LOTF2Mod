#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CameraWidget.WBP_CameraWidget_C
// (None)

class UClass* UWBP_CameraWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CameraWidget_C");

	return Clss;
}


// WBP_CameraWidget_C WBP_CameraWidget.Default__WBP_CameraWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CameraWidget_C* UWBP_CameraWidget_C::GetDefaultObj()
{
	static class UWBP_CameraWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CameraWidget_C*>(UWBP_CameraWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


