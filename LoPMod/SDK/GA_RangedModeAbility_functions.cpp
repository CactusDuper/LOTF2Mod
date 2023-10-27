#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_RangedModeAbility.GA_RangedModeAbility_C
// (None)

class UClass* UGA_RangedModeAbility_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_RangedModeAbility_C");

	return Clss;
}


// GA_RangedModeAbility_C GA_RangedModeAbility.Default__GA_RangedModeAbility_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_RangedModeAbility_C* UGA_RangedModeAbility_C::GetDefaultObj()
{
	static class UGA_RangedModeAbility_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_RangedModeAbility_C*>(UGA_RangedModeAbility_C::StaticClass()->DefaultObject);

	return Default;
}

}


