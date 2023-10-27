#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_FocusableButton.WBP_FocusableButton_C
// (None)

class UClass* UWBP_FocusableButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_FocusableButton_C");

	return Clss;
}


// WBP_FocusableButton_C WBP_FocusableButton.Default__WBP_FocusableButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_FocusableButton_C* UWBP_FocusableButton_C::GetDefaultObj()
{
	static class UWBP_FocusableButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_FocusableButton_C*>(UWBP_FocusableButton_C::StaticClass()->DefaultObject);

	return Default;
}

}


