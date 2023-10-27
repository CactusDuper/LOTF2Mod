#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_ItemPickupInteract.GA_ItemPickupInteract_C
// (None)

class UClass* UGA_ItemPickupInteract_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_ItemPickupInteract_C");

	return Clss;
}


// GA_ItemPickupInteract_C GA_ItemPickupInteract.Default__GA_ItemPickupInteract_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_ItemPickupInteract_C* UGA_ItemPickupInteract_C::GetDefaultObj()
{
	static class UGA_ItemPickupInteract_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_ItemPickupInteract_C*>(UGA_ItemPickupInteract_C::StaticClass()->DefaultObject);

	return Default;
}

}


