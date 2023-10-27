#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_SceneStateActivatableWidget.WBP_SceneStateActivatableWidget_C
// (None)

class UClass* UWBP_SceneStateActivatableWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_SceneStateActivatableWidget_C");

	return Clss;
}


// WBP_SceneStateActivatableWidget_C WBP_SceneStateActivatableWidget.Default__WBP_SceneStateActivatableWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_SceneStateActivatableWidget_C* UWBP_SceneStateActivatableWidget_C::GetDefaultObj()
{
	static class UWBP_SceneStateActivatableWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_SceneStateActivatableWidget_C*>(UWBP_SceneStateActivatableWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


