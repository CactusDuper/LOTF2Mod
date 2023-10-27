#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LanternLightDropInventoryItem_BP.LanternLightDropInventoryItem_BP_C
// (None)

class UClass* ULanternLightDropInventoryItem_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LanternLightDropInventoryItem_BP_C");

	return Clss;
}


// LanternLightDropInventoryItem_BP_C LanternLightDropInventoryItem_BP.Default__LanternLightDropInventoryItem_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULanternLightDropInventoryItem_BP_C* ULanternLightDropInventoryItem_BP_C::GetDefaultObj()
{
	static class ULanternLightDropInventoryItem_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULanternLightDropInventoryItem_BP_C*>(ULanternLightDropInventoryItem_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


