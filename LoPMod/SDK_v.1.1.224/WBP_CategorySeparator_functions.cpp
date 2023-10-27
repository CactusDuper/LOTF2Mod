#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CategorySeparator.WBP_CategorySeparator_C
// (None)

class UClass* UWBP_CategorySeparator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CategorySeparator_C");

	return Clss;
}


// WBP_CategorySeparator_C WBP_CategorySeparator.Default__WBP_CategorySeparator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CategorySeparator_C* UWBP_CategorySeparator_C::GetDefaultObj()
{
	static class UWBP_CategorySeparator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CategorySeparator_C*>(UWBP_CategorySeparator_C::StaticClass()->DefaultObject);

	return Default;
}

}


