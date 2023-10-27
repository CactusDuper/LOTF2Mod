#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_LanternLightDropOnAddedToTheInventory.GE_LanternLightDropOnAddedToTheInventory_C
// (None)

class UClass* UGE_LanternLightDropOnAddedToTheInventory_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_LanternLightDropOnAddedToTheInventory_C");

	return Clss;
}


// GE_LanternLightDropOnAddedToTheInventory_C GE_LanternLightDropOnAddedToTheInventory.Default__GE_LanternLightDropOnAddedToTheInventory_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_LanternLightDropOnAddedToTheInventory_C* UGE_LanternLightDropOnAddedToTheInventory_C::GetDefaultObj()
{
	static class UGE_LanternLightDropOnAddedToTheInventory_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_LanternLightDropOnAddedToTheInventory_C*>(UGE_LanternLightDropOnAddedToTheInventory_C::StaticClass()->DefaultObject);

	return Default;
}

}


