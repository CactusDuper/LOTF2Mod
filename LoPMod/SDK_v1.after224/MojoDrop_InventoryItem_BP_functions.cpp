#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MojoDrop_InventoryItem_BP.MojoDrop_InventoryItem_BP_C
// (None)

class UClass* UMojoDrop_InventoryItem_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MojoDrop_InventoryItem_BP_C");

	return Clss;
}


// MojoDrop_InventoryItem_BP_C MojoDrop_InventoryItem_BP.Default__MojoDrop_InventoryItem_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMojoDrop_InventoryItem_BP_C* UMojoDrop_InventoryItem_BP_C::GetDefaultObj()
{
	static class UMojoDrop_InventoryItem_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMojoDrop_InventoryItem_BP_C*>(UMojoDrop_InventoryItem_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


