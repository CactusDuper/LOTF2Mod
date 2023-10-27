#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ItemInfoArmorSmall.W_ItemInfoArmorSmall_C
// (None)

class UClass* UW_ItemInfoArmorSmall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ItemInfoArmorSmall_C");

	return Clss;
}


// W_ItemInfoArmorSmall_C W_ItemInfoArmorSmall.Default__W_ItemInfoArmorSmall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ItemInfoArmorSmall_C* UW_ItemInfoArmorSmall_C::GetDefaultObj()
{
	static class UW_ItemInfoArmorSmall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ItemInfoArmorSmall_C*>(UW_ItemInfoArmorSmall_C::StaticClass()->DefaultObject);

	return Default;
}

}


