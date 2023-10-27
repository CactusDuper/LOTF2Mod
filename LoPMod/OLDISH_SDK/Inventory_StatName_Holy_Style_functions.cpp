#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Inventory_StatName_Holy_Style.Inventory_StatName_Holy_Style_C
// (None)

class UClass* UInventory_StatName_Holy_Style_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Inventory_StatName_Holy_Style_C");

	return Clss;
}


// Inventory_StatName_Holy_Style_C Inventory_StatName_Holy_Style.Default__Inventory_StatName_Holy_Style_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInventory_StatName_Holy_Style_C* UInventory_StatName_Holy_Style_C::GetDefaultObj()
{
	static class UInventory_StatName_Holy_Style_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInventory_StatName_Holy_Style_C*>(UInventory_StatName_Holy_Style_C::StaticClass()->DefaultObject);

	return Default;
}

}


