#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SmallDarkPanelBorder_Style.SmallDarkPanelBorder_Style_C
// (None)

class UClass* USmallDarkPanelBorder_Style_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmallDarkPanelBorder_Style_C");

	return Clss;
}


// SmallDarkPanelBorder_Style_C SmallDarkPanelBorder_Style.Default__SmallDarkPanelBorder_Style_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USmallDarkPanelBorder_Style_C* USmallDarkPanelBorder_Style_C::GetDefaultObj()
{
	static class USmallDarkPanelBorder_Style_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USmallDarkPanelBorder_Style_C*>(USmallDarkPanelBorder_Style_C::StaticClass()->DefaultObject);

	return Default;
}

}


