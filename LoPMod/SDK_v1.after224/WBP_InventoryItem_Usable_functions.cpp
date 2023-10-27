#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_InventoryItem_Usable.WBP_InventoryItem_Usable_C
// (None)

class UClass* UWBP_InventoryItem_Usable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_InventoryItem_Usable_C");

	return Clss;
}


// WBP_InventoryItem_Usable_C WBP_InventoryItem_Usable.Default__WBP_InventoryItem_Usable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_InventoryItem_Usable_C* UWBP_InventoryItem_Usable_C::GetDefaultObj()
{
	static class UWBP_InventoryItem_Usable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_InventoryItem_Usable_C*>(UWBP_InventoryItem_Usable_C::StaticClass()->DefaultObject);

	return Default;
}

}


