#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass InventoryItemFactory_BP.InventoryItemFactory_BP_C
// (None)

class UClass* UInventoryItemFactory_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InventoryItemFactory_BP_C");

	return Clss;
}


// InventoryItemFactory_BP_C InventoryItemFactory_BP.Default__InventoryItemFactory_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInventoryItemFactory_BP_C* UInventoryItemFactory_BP_C::GetDefaultObj()
{
	static class UInventoryItemFactory_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInventoryItemFactory_BP_C*>(UInventoryItemFactory_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


