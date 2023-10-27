#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_SaveInfoPanel.W_SaveInfoPanel_C
// (None)

class UClass* UW_SaveInfoPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_SaveInfoPanel_C");

	return Clss;
}


// W_SaveInfoPanel_C W_SaveInfoPanel.Default__W_SaveInfoPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_SaveInfoPanel_C* UW_SaveInfoPanel_C::GetDefaultObj()
{
	static class UW_SaveInfoPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_SaveInfoPanel_C*>(UW_SaveInfoPanel_C::StaticClass()->DefaultObject);

	return Default;
}

}


