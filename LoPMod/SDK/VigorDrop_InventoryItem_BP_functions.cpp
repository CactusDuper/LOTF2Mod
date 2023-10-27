#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VigorDrop_InventoryItem_BP.VigorDrop_InventoryItem_BP_C
// (None)

class UClass* UVigorDrop_InventoryItem_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VigorDrop_InventoryItem_BP_C");

	return Clss;
}


// VigorDrop_InventoryItem_BP_C VigorDrop_InventoryItem_BP.Default__VigorDrop_InventoryItem_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVigorDrop_InventoryItem_BP_C* UVigorDrop_InventoryItem_BP_C::GetDefaultObj()
{
	static class UVigorDrop_InventoryItem_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVigorDrop_InventoryItem_BP_C*>(UVigorDrop_InventoryItem_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


