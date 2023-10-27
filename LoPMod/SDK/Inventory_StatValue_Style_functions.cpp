#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Inventory_StatValue_Style.Inventory_StatValue_Style_C
// (None)

class UClass* UInventory_StatValue_Style_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Inventory_StatValue_Style_C");

	return Clss;
}


// Inventory_StatValue_Style_C Inventory_StatValue_Style.Default__Inventory_StatValue_Style_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInventory_StatValue_Style_C* UInventory_StatValue_Style_C::GetDefaultObj()
{
	static class UInventory_StatValue_Style_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInventory_StatValue_Style_C*>(UInventory_StatValue_Style_C::StaticClass()->DefaultObject);

	return Default;
}

}


