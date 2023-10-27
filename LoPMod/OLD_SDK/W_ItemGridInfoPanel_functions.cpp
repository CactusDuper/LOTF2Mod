#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ItemGridInfoPanel.W_ItemGridInfoPanel_C
// (None)

class UClass* UW_ItemGridInfoPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ItemGridInfoPanel_C");

	return Clss;
}


// W_ItemGridInfoPanel_C W_ItemGridInfoPanel.Default__W_ItemGridInfoPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ItemGridInfoPanel_C* UW_ItemGridInfoPanel_C::GetDefaultObj()
{
	static class UW_ItemGridInfoPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ItemGridInfoPanel_C*>(UW_ItemGridInfoPanel_C::StaticClass()->DefaultObject);

	return Default;
}

}


