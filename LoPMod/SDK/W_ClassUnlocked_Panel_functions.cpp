#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ClassUnlocked_Panel.W_ClassUnlocked_Panel_C
// (None)

class UClass* UW_ClassUnlocked_Panel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ClassUnlocked_Panel_C");

	return Clss;
}


// W_ClassUnlocked_Panel_C W_ClassUnlocked_Panel.Default__W_ClassUnlocked_Panel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ClassUnlocked_Panel_C* UW_ClassUnlocked_Panel_C::GetDefaultObj()
{
	static class UW_ClassUnlocked_Panel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ClassUnlocked_Panel_C*>(UW_ClassUnlocked_Panel_C::StaticClass()->DefaultObject);

	return Default;
}

}


