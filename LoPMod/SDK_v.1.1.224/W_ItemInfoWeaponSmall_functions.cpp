#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ItemInfoWeaponSmall.W_ItemInfoWeaponSmall_C
// (None)

class UClass* UW_ItemInfoWeaponSmall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ItemInfoWeaponSmall_C");

	return Clss;
}


// W_ItemInfoWeaponSmall_C W_ItemInfoWeaponSmall.Default__W_ItemInfoWeaponSmall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ItemInfoWeaponSmall_C* UW_ItemInfoWeaponSmall_C::GetDefaultObj()
{
	static class UW_ItemInfoWeaponSmall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ItemInfoWeaponSmall_C*>(UW_ItemInfoWeaponSmall_C::StaticClass()->DefaultObject);

	return Default;
}

}


