#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ItemInfoPanels.W_ItemInfoPanels_C
// (None)

class UClass* UW_ItemInfoPanels_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ItemInfoPanels_C");

	return Clss;
}


// W_ItemInfoPanels_C W_ItemInfoPanels.Default__W_ItemInfoPanels_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ItemInfoPanels_C* UW_ItemInfoPanels_C::GetDefaultObj()
{
	static class UW_ItemInfoPanels_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ItemInfoPanels_C*>(UW_ItemInfoPanels_C::StaticClass()->DefaultObject);

	return Default;
}

}


