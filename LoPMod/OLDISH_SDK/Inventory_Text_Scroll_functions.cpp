#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Inventory_Text_Scroll.Inventory_Text_Scroll_C
// (None)

class UClass* UInventory_Text_Scroll_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Inventory_Text_Scroll_C");

	return Clss;
}


// Inventory_Text_Scroll_C Inventory_Text_Scroll.Default__Inventory_Text_Scroll_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInventory_Text_Scroll_C* UInventory_Text_Scroll_C::GetDefaultObj()
{
	static class UInventory_Text_Scroll_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInventory_Text_Scroll_C*>(UInventory_Text_Scroll_C::StaticClass()->DefaultObject);

	return Default;
}

}


