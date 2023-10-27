#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ControllerDiscconect.WBP_ControllerDiscconect_C
// (None)

class UClass* UWBP_ControllerDiscconect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ControllerDiscconect_C");

	return Clss;
}


// WBP_ControllerDiscconect_C WBP_ControllerDiscconect.Default__WBP_ControllerDiscconect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ControllerDiscconect_C* UWBP_ControllerDiscconect_C::GetDefaultObj()
{
	static class UWBP_ControllerDiscconect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ControllerDiscconect_C*>(UWBP_ControllerDiscconect_C::StaticClass()->DefaultObject);

	return Default;
}

}


