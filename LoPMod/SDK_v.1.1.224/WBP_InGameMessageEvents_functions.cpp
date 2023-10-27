#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_InGameMessageEvents.WBP_InGameMessageEvents_C
// (None)

class UClass* UWBP_InGameMessageEvents_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_InGameMessageEvents_C");

	return Clss;
}


// WBP_InGameMessageEvents_C WBP_InGameMessageEvents.Default__WBP_InGameMessageEvents_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_InGameMessageEvents_C* UWBP_InGameMessageEvents_C::GetDefaultObj()
{
	static class UWBP_InGameMessageEvents_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_InGameMessageEvents_C*>(UWBP_InGameMessageEvents_C::StaticClass()->DefaultObject);

	return Default;
}

}


