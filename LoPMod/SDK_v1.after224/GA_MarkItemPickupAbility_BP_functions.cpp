#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_MarkItemPickupAbility_BP.GA_MarkItemPickupAbility_BP_C
// (None)

class UClass* UGA_MarkItemPickupAbility_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_MarkItemPickupAbility_BP_C");

	return Clss;
}


// GA_MarkItemPickupAbility_BP_C GA_MarkItemPickupAbility_BP.Default__GA_MarkItemPickupAbility_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_MarkItemPickupAbility_BP_C* UGA_MarkItemPickupAbility_BP_C::GetDefaultObj()
{
	static class UGA_MarkItemPickupAbility_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_MarkItemPickupAbility_BP_C*>(UGA_MarkItemPickupAbility_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


