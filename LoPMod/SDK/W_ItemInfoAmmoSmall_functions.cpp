#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ItemInfoAmmoSmall.W_ItemInfoAmmoSmall_C
// (None)

class UClass* UW_ItemInfoAmmoSmall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ItemInfoAmmoSmall_C");

	return Clss;
}


// W_ItemInfoAmmoSmall_C W_ItemInfoAmmoSmall.Default__W_ItemInfoAmmoSmall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ItemInfoAmmoSmall_C* UW_ItemInfoAmmoSmall_C::GetDefaultObj()
{
	static class UW_ItemInfoAmmoSmall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ItemInfoAmmoSmall_C*>(UW_ItemInfoAmmoSmall_C::StaticClass()->DefaultObject);

	return Default;
}

}


