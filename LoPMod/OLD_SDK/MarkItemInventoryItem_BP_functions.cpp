#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MarkItemInventoryItem_BP.MarkItemInventoryItem_BP_C
// (None)

class UClass* UMarkItemInventoryItem_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MarkItemInventoryItem_BP_C");

	return Clss;
}


// MarkItemInventoryItem_BP_C MarkItemInventoryItem_BP.Default__MarkItemInventoryItem_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMarkItemInventoryItem_BP_C* UMarkItemInventoryItem_BP_C::GetDefaultObj()
{
	static class UMarkItemInventoryItem_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMarkItemInventoryItem_BP_C*>(UMarkItemInventoryItem_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


