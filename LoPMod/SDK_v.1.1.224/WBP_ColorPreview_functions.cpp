#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ColorPreview.WBP_ColorPreview_C
// (None)

class UClass* UWBP_ColorPreview_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ColorPreview_C");

	return Clss;
}


// WBP_ColorPreview_C WBP_ColorPreview.Default__WBP_ColorPreview_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ColorPreview_C* UWBP_ColorPreview_C::GetDefaultObj()
{
	static class UWBP_ColorPreview_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ColorPreview_C*>(UWBP_ColorPreview_C::StaticClass()->DefaultObject);

	return Default;
}

}


