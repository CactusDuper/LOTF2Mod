#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_InventoryItem_Lore.W_InventoryItem_Lore_C
// (None)

class UClass* UW_InventoryItem_Lore_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_InventoryItem_Lore_C");

	return Clss;
}


// W_InventoryItem_Lore_C W_InventoryItem_Lore.Default__W_InventoryItem_Lore_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_InventoryItem_Lore_C* UW_InventoryItem_Lore_C::GetDefaultObj()
{
	static class UW_InventoryItem_Lore_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_InventoryItem_Lore_C*>(UW_InventoryItem_Lore_C::StaticClass()->DefaultObject);

	return Default;
}

}


