#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ItemInfoCatalystSmall.W_ItemInfoCatalystSmall_C
// (None)

class UClass* UW_ItemInfoCatalystSmall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ItemInfoCatalystSmall_C");

	return Clss;
}


// W_ItemInfoCatalystSmall_C W_ItemInfoCatalystSmall.Default__W_ItemInfoCatalystSmall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ItemInfoCatalystSmall_C* UW_ItemInfoCatalystSmall_C::GetDefaultObj()
{
	static class UW_ItemInfoCatalystSmall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ItemInfoCatalystSmall_C*>(UW_ItemInfoCatalystSmall_C::StaticClass()->DefaultObject);

	return Default;
}

}


